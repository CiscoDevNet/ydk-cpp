
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_0.hpp"
#include "Cisco_IOS_XR_fib_common_oper_1.hpp"
#include "Cisco_IOS_XR_fib_common_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

Fib::Fib()
    :
    nodes(std::make_shared<Fib::Nodes>())
{
    nodes->parent = this;

    yang_name = "fib"; yang_parent_name = "Cisco-IOS-XR-fib-common-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Fib::~Fib()
{
}

bool Fib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Fib::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Fib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:fib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Fib::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Fib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Fib::clone_ptr() const
{
    return std::make_shared<Fib>();
}

std::string Fib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Fib::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "fib"; is_top_level_class = false; has_list_ancestor = false;
}

Fib::Nodes::~Nodes()
{
}

bool Fib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:fib/" << get_segment_path();
    return path_buffer.str();
}

std::string Fib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fib::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Fib::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    global(std::make_shared<Fib::Nodes::Node::Global>())
	,protocols(std::make_shared<Fib::Nodes::Node::Protocols>())
{
    global->parent = this;
    protocols->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Fib::Nodes::Node::~Node()
{
}

bool Fib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (global !=  nullptr && global->has_data())
	|| (protocols !=  nullptr && protocols->has_data());
}

bool Fib::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Fib::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:fib/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Fib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Fib::Nodes::Node::Global>();
        }
        return global;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<Fib::Nodes::Node::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void Fib::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "protocols" || name == "node-name")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Global()
    :
    object_history(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory>())
	,summary(std::make_shared<Fib::Nodes::Node::Global::Summary>())
{
    object_history->parent = this;
    summary->parent = this;

    yang_name = "global"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::~Global()
{
}

bool Fib::Nodes::Node::Global::has_data() const
{
    return (object_history !=  nullptr && object_history->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Fib::Nodes::Node::Global::has_operation() const
{
    return is_set(yfilter)
	|| (object_history !=  nullptr && object_history->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Fib::Nodes::Node::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-history")
    {
        if(object_history == nullptr)
        {
            object_history = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory>();
        }
        return object_history;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Fib::Nodes::Node::Global::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(object_history != nullptr)
    {
        children["object-history"] = object_history;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Fib::Nodes::Node::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-history" || name == "summary")
        return true;
    return false;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjectHistory()
    :
    obj_history_protos(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos>())
{
    obj_history_protos->parent = this;

    yang_name = "object-history"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::ObjectHistory::~ObjectHistory()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::has_data() const
{
    return (obj_history_protos !=  nullptr && obj_history_protos->has_data());
}

bool Fib::Nodes::Node::Global::ObjectHistory::has_operation() const
{
    return is_set(yfilter)
	|| (obj_history_protos !=  nullptr && obj_history_protos->has_operation());
}

std::string Fib::Nodes::Node::Global::ObjectHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::ObjectHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-history-protos")
    {
        if(obj_history_protos == nullptr)
        {
            obj_history_protos = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos>();
        }
        return obj_history_protos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::ObjectHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(obj_history_protos != nullptr)
    {
        children["obj-history-protos"] = obj_history_protos;
    }

    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::ObjectHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-history-protos")
        return true;
    return false;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProtos()
{

    yang_name = "obj-history-protos"; yang_parent_name = "object-history"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::~ObjHistoryProtos()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::has_data() const
{
    for (std::size_t index=0; index<obj_history_proto.size(); index++)
    {
        if(obj_history_proto[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::has_operation() const
{
    for (std::size_t index=0; index<obj_history_proto.size(); index++)
    {
        if(obj_history_proto[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-history-protos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-history-proto")
    {
        for(auto const & c : obj_history_proto)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto>();
        c->parent = this;
        obj_history_proto.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : obj_history_proto)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-history-proto")
        return true;
    return false;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjHistoryProto()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    base_object(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject>())
	,object_history(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_>())
{
    base_object->parent = this;
    object_history->parent = this;

    yang_name = "obj-history-proto"; yang_parent_name = "obj-history-protos"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::~ObjHistoryProto()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::has_data() const
{
    return protocol_name.is_set
	|| (base_object !=  nullptr && base_object->has_data())
	|| (object_history !=  nullptr && object_history->has_data());
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (base_object !=  nullptr && base_object->has_operation())
	|| (object_history !=  nullptr && object_history->has_operation());
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-history-proto" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-object")
    {
        if(base_object == nullptr)
        {
            base_object = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject>();
        }
        return base_object;
    }

    if(child_yang_name == "object-history")
    {
        if(object_history == nullptr)
        {
            object_history = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_>();
        }
        return object_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_object != nullptr)
    {
        children["base-object"] = base_object;
    }

    if(object_history != nullptr)
    {
        children["object-history"] = object_history;
    }

    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-object" || name == "object-history" || name == "protocol-name")
        return true;
    return false;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::BaseObject()
    :
    protocol{YType::uint32, "protocol"}
{

    yang_name = "base-object"; yang_parent_name = "obj-history-proto"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::~BaseObject()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::has_data() const
{
    return protocol.is_set;
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::ObjectHistory_()
    :
    count{YType::uint32, "count"}
{

    yang_name = "object-history"; yang_parent_name = "obj-history-proto"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::~ObjectHistory_()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::has_data() const
{
    return count.is_set;
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Summary()
    :
    protos(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos>())
	,total(std::make_shared<Fib::Nodes::Node::Global::Summary::Total>())
{
    protos->parent = this;
    total->parent = this;

    yang_name = "summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::~Summary()
{
}

bool Fib::Nodes::Node::Global::Summary::has_data() const
{
    return (protos !=  nullptr && protos->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Fib::Nodes::Node::Global::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (protos !=  nullptr && protos->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protos")
    {
        if(protos == nullptr)
        {
            protos = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos>();
        }
        return protos;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Fib::Nodes::Node::Global::Summary::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protos != nullptr)
    {
        children["protos"] = protos;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protos" || name == "total")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Protos()
{

    yang_name = "protos"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::~Protos()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::has_data() const
{
    for (std::size_t index=0; index<proto.size(); index++)
    {
        if(proto[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Global::Summary::Protos::has_operation() const
{
    for (std::size_t index=0; index<proto.size(); index++)
    {
        if(proto[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proto")
    {
        for(auto const & c : proto)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto>();
        c->parent = this;
        proto.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : proto)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::Summary::Protos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Proto()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    common_info(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo>())
	,summary(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_>())
{
    common_info->parent = this;
    summary->parent = this;

    yang_name = "proto"; yang_parent_name = "protos"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::~Proto()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::has_data() const
{
    return protocol_name.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-info")
    {
        if(common_info == nullptr)
        {
            common_info = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo>();
        }
        return common_info;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_info != nullptr)
    {
        children["common-info"] = common_info;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-info" || name == "summary" || name == "protocol-name")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::CommonInfo()
    :
    count{YType::uint32, "count"}
{

    yang_name = "common-info"; yang_parent_name = "proto"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::~CommonInfo()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::has_data() const
{
    return count.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Summary_()
    :
    base_object(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject>())
	,health(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health>())
	,summary_counts(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts>())
{
    base_object->parent = this;
    health->parent = this;
    summary_counts->parent = this;

    yang_name = "summary"; yang_parent_name = "proto"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::~Summary_()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::has_data() const
{
    return (base_object !=  nullptr && base_object->has_data())
	|| (health !=  nullptr && health->has_data())
	|| (summary_counts !=  nullptr && summary_counts->has_data());
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::has_operation() const
{
    return is_set(yfilter)
	|| (base_object !=  nullptr && base_object->has_operation())
	|| (health !=  nullptr && health->has_operation())
	|| (summary_counts !=  nullptr && summary_counts->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-object")
    {
        if(base_object == nullptr)
        {
            base_object = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject>();
        }
        return base_object;
    }

    if(child_yang_name == "health")
    {
        if(health == nullptr)
        {
            health = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health>();
        }
        return health;
    }

    if(child_yang_name == "summary-counts")
    {
        if(summary_counts == nullptr)
        {
            summary_counts = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts>();
        }
        return summary_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_object != nullptr)
    {
        children["base-object"] = base_object;
    }

    if(health != nullptr)
    {
        children["health"] = health;
    }

    if(summary_counts != nullptr)
    {
        children["summary-counts"] = summary_counts;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-object" || name == "health" || name == "summary-counts")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::BaseObject()
    :
    protocol{YType::uint32, "protocol"}
{

    yang_name = "base-object"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::~BaseObject()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::has_data() const
{
    return protocol.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::Health()
    :
    is_retry_db_empty{YType::boolean, "is-retry-db-empty"}
{

    yang_name = "health"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::~Health()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::has_data() const
{
    return is_retry_db_empty.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_retry_db_empty.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "health";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_retry_db_empty.is_set || is_set(is_retry_db_empty.yfilter)) leaf_name_data.push_back(is_retry_db_empty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-retry-db-empty")
    {
        is_retry_db_empty = value;
        is_retry_db_empty.value_namespace = name_space;
        is_retry_db_empty.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-retry-db-empty")
    {
        is_retry_db_empty.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-retry-db-empty")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::SummaryCounts()
    :
    num_retry_ojbects{YType::uint32, "num-retry-ojbects"},
    num_retry_timeouts{YType::uint64, "num-retry-timeouts"}
{

    yang_name = "summary-counts"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::~SummaryCounts()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::has_data() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_data())
            return true;
    }
    return num_retry_ojbects.is_set
	|| num_retry_timeouts.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::has_operation() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_retry_ojbects.yfilter)
	|| ydk::is_set(num_retry_timeouts.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retry_ojbects.is_set || is_set(num_retry_ojbects.yfilter)) leaf_name_data.push_back(num_retry_ojbects.get_name_leafdata());
    if (num_retry_timeouts.is_set || is_set(num_retry_timeouts.yfilter)) leaf_name_data.push_back(num_retry_timeouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "array-number-of-object")
    {
        for(auto const & c : array_number_of_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject>();
        c->parent = this;
        array_number_of_object.push_back(c);
        return c;
    }

    if(child_yang_name == "array-number-of-retry")
    {
        for(auto const & c : array_number_of_retry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry>();
        c->parent = this;
        array_number_of_retry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : array_number_of_object)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : array_number_of_retry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-retry-ojbects")
    {
        num_retry_ojbects = value;
        num_retry_ojbects.value_namespace = name_space;
        num_retry_ojbects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-retry-timeouts")
    {
        num_retry_timeouts = value;
        num_retry_timeouts.value_namespace = name_space;
        num_retry_timeouts.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-retry-ojbects")
    {
        num_retry_ojbects.yfilter = yfilter;
    }
    if(value_path == "num-retry-timeouts")
    {
        num_retry_timeouts.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "array-number-of-object" || name == "array-number-of-retry" || name == "num-retry-ojbects" || name == "num-retry-timeouts")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::ArrayNumberOfObject()
    :
    num_objects{YType::uint32, "num-objects"},
    object_type{YType::str, "object-type"}
{

    yang_name = "array-number-of-object"; yang_parent_name = "summary-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::~ArrayNumberOfObject()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::has_data() const
{
    return num_objects.is_set
	|| object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_objects.yfilter)
	|| ydk::is_set(object_type.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_objects.is_set || is_set(num_objects.yfilter)) leaf_name_data.push_back(num_objects.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-objects")
    {
        num_objects = value;
        num_objects.value_namespace = name_space;
        num_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-objects")
    {
        num_objects.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-objects" || name == "object-type")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::ArrayNumberOfRetry()
    :
    num_retries{YType::uint64, "num-retries"},
    retry_object_type{YType::str, "retry-object-type"}
{

    yang_name = "array-number-of-retry"; yang_parent_name = "summary-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::~ArrayNumberOfRetry()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::has_data() const
{
    return num_retries.is_set
	|| retry_object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_retries.yfilter)
	|| ydk::is_set(retry_object_type.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retries.is_set || is_set(num_retries.yfilter)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (retry_object_type.is_set || is_set(retry_object_type.yfilter)) leaf_name_data.push_back(retry_object_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-retries")
    {
        num_retries = value;
        num_retries.value_namespace = name_space;
        num_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-object-type")
    {
        retry_object_type = value;
        retry_object_type.value_namespace = name_space;
        retry_object_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-retries")
    {
        num_retries.yfilter = yfilter;
    }
    if(value_path == "retry-object-type")
    {
        retry_object_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-retries" || name == "retry-object-type")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Total::Total()
    :
    common_info(std::make_shared<Fib::Nodes::Node::Global::Summary::Total::CommonInfo>())
	,total_counters(std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters>())
{
    common_info->parent = this;
    total_counters->parent = this;

    yang_name = "total"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Total::~Total()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::has_data() const
{
    return (common_info !=  nullptr && common_info->has_data())
	|| (total_counters !=  nullptr && total_counters->has_data());
}

bool Fib::Nodes::Node::Global::Summary::Total::has_operation() const
{
    return is_set(yfilter)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (total_counters !=  nullptr && total_counters->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-info")
    {
        if(common_info == nullptr)
        {
            common_info = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::CommonInfo>();
        }
        return common_info;
    }

    if(child_yang_name == "total-counters")
    {
        if(total_counters == nullptr)
        {
            total_counters = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters>();
        }
        return total_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_info != nullptr)
    {
        children["common-info"] = common_info;
    }

    if(total_counters != nullptr)
    {
        children["total-counters"] = total_counters;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Global::Summary::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Global::Summary::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-info" || name == "total-counters")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Total::CommonInfo::CommonInfo()
    :
    count{YType::uint32, "count"}
{

    yang_name = "common-info"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Total::CommonInfo::~CommonInfo()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::CommonInfo::has_data() const
{
    return count.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::CommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::CommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Total::CommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Total::CommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::TotalCounters()
    :
    num_retry_ojbects{YType::uint32, "num-retry-ojbects"},
    num_retry_timeouts{YType::uint64, "num-retry-timeouts"}
{

    yang_name = "total-counters"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::~TotalCounters()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::has_data() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_data())
            return true;
    }
    return num_retry_ojbects.is_set
	|| num_retry_timeouts.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::has_operation() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_retry_ojbects.yfilter)
	|| ydk::is_set(num_retry_timeouts.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retry_ojbects.is_set || is_set(num_retry_ojbects.yfilter)) leaf_name_data.push_back(num_retry_ojbects.get_name_leafdata());
    if (num_retry_timeouts.is_set || is_set(num_retry_timeouts.yfilter)) leaf_name_data.push_back(num_retry_timeouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "array-number-of-object")
    {
        for(auto const & c : array_number_of_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject>();
        c->parent = this;
        array_number_of_object.push_back(c);
        return c;
    }

    if(child_yang_name == "array-number-of-retry")
    {
        for(auto const & c : array_number_of_retry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry>();
        c->parent = this;
        array_number_of_retry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : array_number_of_object)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : array_number_of_retry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-retry-ojbects")
    {
        num_retry_ojbects = value;
        num_retry_ojbects.value_namespace = name_space;
        num_retry_ojbects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-retry-timeouts")
    {
        num_retry_timeouts = value;
        num_retry_timeouts.value_namespace = name_space;
        num_retry_timeouts.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-retry-ojbects")
    {
        num_retry_ojbects.yfilter = yfilter;
    }
    if(value_path == "num-retry-timeouts")
    {
        num_retry_timeouts.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "array-number-of-object" || name == "array-number-of-retry" || name == "num-retry-ojbects" || name == "num-retry-timeouts")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::ArrayNumberOfObject()
    :
    num_objects{YType::uint32, "num-objects"},
    object_type{YType::str, "object-type"}
{

    yang_name = "array-number-of-object"; yang_parent_name = "total-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::~ArrayNumberOfObject()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::has_data() const
{
    return num_objects.is_set
	|| object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_objects.yfilter)
	|| ydk::is_set(object_type.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_objects.is_set || is_set(num_objects.yfilter)) leaf_name_data.push_back(num_objects.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-objects")
    {
        num_objects = value;
        num_objects.value_namespace = name_space;
        num_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-objects")
    {
        num_objects.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-objects" || name == "object-type")
        return true;
    return false;
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::ArrayNumberOfRetry()
    :
    num_retries{YType::uint64, "num-retries"},
    retry_object_type{YType::str, "retry-object-type"}
{

    yang_name = "array-number-of-retry"; yang_parent_name = "total-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::~ArrayNumberOfRetry()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::has_data() const
{
    return num_retries.is_set
	|| retry_object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_retries.yfilter)
	|| ydk::is_set(retry_object_type.yfilter);
}

std::string Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retries.is_set || is_set(num_retries.yfilter)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (retry_object_type.is_set || is_set(retry_object_type.yfilter)) leaf_name_data.push_back(retry_object_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-retries")
    {
        num_retries = value;
        num_retries.value_namespace = name_space;
        num_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-object-type")
    {
        retry_object_type = value;
        retry_object_type.value_namespace = name_space;
        retry_object_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-retries")
    {
        num_retries.yfilter = yfilter;
    }
    if(value_path == "retry-object-type")
    {
        retry_object_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-retries" || name == "retry-object-type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocols()
{

    yang_name = "protocols"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::~Protocols()
{
}

bool Fib::Nodes::Node::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    exact_routes(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes>())
	,external_client_summaries(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries>())
	,external_summary_all(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll>())
	,fib_summaries(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries>())
	,frr_log(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog>())
	,issu_state(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::IssuState>())
	,local_label(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel>())
	,misc(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc>())
	,nh_ids(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::NhIds>())
	,resource(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource>())
	,vrfs(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs>())
{
    exact_routes->parent = this;
    external_client_summaries->parent = this;
    external_summary_all->parent = this;
    fib_summaries->parent = this;
    frr_log->parent = this;
    issu_state->parent = this;
    local_label->parent = this;
    misc->parent = this;
    nh_ids->parent = this;
    resource->parent = this;
    vrfs->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::~Protocol()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| (exact_routes !=  nullptr && exact_routes->has_data())
	|| (external_client_summaries !=  nullptr && external_client_summaries->has_data())
	|| (external_summary_all !=  nullptr && external_summary_all->has_data())
	|| (fib_summaries !=  nullptr && fib_summaries->has_data())
	|| (frr_log !=  nullptr && frr_log->has_data())
	|| (issu_state !=  nullptr && issu_state->has_data())
	|| (local_label !=  nullptr && local_label->has_data())
	|| (misc !=  nullptr && misc->has_data())
	|| (nh_ids !=  nullptr && nh_ids->has_data())
	|| (resource !=  nullptr && resource->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (exact_routes !=  nullptr && exact_routes->has_operation())
	|| (external_client_summaries !=  nullptr && external_client_summaries->has_operation())
	|| (external_summary_all !=  nullptr && external_summary_all->has_operation())
	|| (fib_summaries !=  nullptr && fib_summaries->has_operation())
	|| (frr_log !=  nullptr && frr_log->has_operation())
	|| (issu_state !=  nullptr && issu_state->has_operation())
	|| (local_label !=  nullptr && local_label->has_operation())
	|| (misc !=  nullptr && misc->has_operation())
	|| (nh_ids !=  nullptr && nh_ids->has_operation())
	|| (resource !=  nullptr && resource->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-routes")
    {
        if(exact_routes == nullptr)
        {
            exact_routes = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes>();
        }
        return exact_routes;
    }

    if(child_yang_name == "external-client-summaries")
    {
        if(external_client_summaries == nullptr)
        {
            external_client_summaries = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries>();
        }
        return external_client_summaries;
    }

    if(child_yang_name == "external-summary-all")
    {
        if(external_summary_all == nullptr)
        {
            external_summary_all = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll>();
        }
        return external_summary_all;
    }

    if(child_yang_name == "fib-summaries")
    {
        if(fib_summaries == nullptr)
        {
            fib_summaries = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries>();
        }
        return fib_summaries;
    }

    if(child_yang_name == "frr-log")
    {
        if(frr_log == nullptr)
        {
            frr_log = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog>();
        }
        return frr_log;
    }

    if(child_yang_name == "issu-state")
    {
        if(issu_state == nullptr)
        {
            issu_state = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::IssuState>();
        }
        return issu_state;
    }

    if(child_yang_name == "local-label")
    {
        if(local_label == nullptr)
        {
            local_label = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel>();
        }
        return local_label;
    }

    if(child_yang_name == "misc")
    {
        if(misc == nullptr)
        {
            misc = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc>();
        }
        return misc;
    }

    if(child_yang_name == "nh-ids")
    {
        if(nh_ids == nullptr)
        {
            nh_ids = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::NhIds>();
        }
        return nh_ids;
    }

    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource>();
        }
        return resource;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exact_routes != nullptr)
    {
        children["exact-routes"] = exact_routes;
    }

    if(external_client_summaries != nullptr)
    {
        children["external-client-summaries"] = external_client_summaries;
    }

    if(external_summary_all != nullptr)
    {
        children["external-summary-all"] = external_summary_all;
    }

    if(fib_summaries != nullptr)
    {
        children["fib-summaries"] = fib_summaries;
    }

    if(frr_log != nullptr)
    {
        children["frr-log"] = frr_log;
    }

    if(issu_state != nullptr)
    {
        children["issu-state"] = issu_state;
    }

    if(local_label != nullptr)
    {
        children["local-label"] = local_label;
    }

    if(misc != nullptr)
    {
        children["misc"] = misc;
    }

    if(nh_ids != nullptr)
    {
        children["nh-ids"] = nh_ids;
    }

    if(resource != nullptr)
    {
        children["resource"] = resource;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-routes" || name == "external-client-summaries" || name == "external-summary-all" || name == "fib-summaries" || name == "frr-log" || name == "issu-state" || name == "local-label" || name == "misc" || name == "nh-ids" || name == "resource" || name == "vrfs" || name == "protocol-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoutes()
{

    yang_name = "exact-routes"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::~ExactRoutes()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::has_data() const
{
    for (std::size_t index=0; index<exact_route.size(); index++)
    {
        if(exact_route[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::has_operation() const
{
    for (std::size_t index=0; index<exact_route.size(); index++)
    {
        if(exact_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-route")
    {
        for(auto const & c : exact_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute>();
        c->parent = this;
        exact_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exact_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-route")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExactRoute()
    :
    broadcast_forward_flag{YType::boolean, "broadcast-forward-flag"},
    broadcast_recive_flag{YType::boolean, "broadcast-recive-flag"},
    destination{YType::str, "destination"},
    dummy_real_zero_route{YType::boolean, "dummy-real-zero-route"},
    exact_path_gre_interface_handle{YType::uint32, "exact-path-gre-interface-handle"},
    exact_path_interface_handle{YType::uint32, "exact-path-interface-handle"},
    exact_route_gre_phys_ifh_avail{YType::boolean, "exact-route-gre-phys-ifh-avail"},
    exact_route_result{YType::boolean, "exact-route-result"},
    external_switch_triggered{YType::boolean, "external-switch-triggered"},
    fib_route_download_priority{YType::uint32, "fib-route-download-priority"},
    flags_external_ldi{YType::uint32, "flags-external-ldi"},
    l2_subscriber_ip_protocol{YType::uint32, "l2-subscriber-ip-protocol"},
    l2_subscriber_route{YType::boolean, "l2-subscriber-route"},
    l2_subscriber_xconnect_id{YType::uint32, "l2-subscriber-xconnect-id"},
    l2tpv3_cookie_length_bits{YType::uint32, "l2tpv3-cookie-length-bits"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_lw_flag{YType::uint32, "ldi-lw-flag"},
    lspa_flags{YType::uint32, "lspa-flags"},
    number_of_referances_to_ldi{YType::uint32, "number-of-referances-to-ldi"},
    number_of_referances_to_path_list{YType::uint32, "number-of-referances-to-path-list"},
    packet_should_recieve{YType::boolean, "packet-should-recieve"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_source{YType::uint32, "path-list-source"},
    platform_hardware{YType::str, "platform-hardware"},
    pointer_external_ldi{YType::uint32, "pointer-external-ldi"},
    prefix_connected{YType::boolean, "prefix-connected"},
    prefix_for_adjancency{YType::boolean, "prefix-for-adjancency"},
    prefix_for_pic_next_hop{YType::boolean, "prefix-for-pic-next-hop"},
    prefix_is_static_or_connected{YType::boolean, "prefix-is-static-or-connected"},
    protocol_name{YType::enumeration, "protocol-name"},
    protocol_type_fib_entry{YType::uint32, "protocol-type-fib-entry"},
    purgable_after_purge_interval{YType::boolean, "purgable-after-purge-interval"},
    ref_counter_of_ldi_lw_ldi{YType::uint32, "ref-counter-of-ldi-lw-ldi"},
    route_attribute_flag{YType::boolean, "route-attribute-flag"},
    route_for_external_reach_linecard_flag{YType::boolean, "route-for-external-reach-linecard-flag"},
    route_is_sr_flag{YType::boolean, "route-is-sr-flag"},
    source{YType::str, "source"},
    time_of_last_update_in_msec{YType::uint64, "time-of-last-update-in-msec"},
    type_of_ldi_lw_ldi{YType::uint32, "type-of-ldi-lw-ldi"},
    version_of_route{YType::uint64, "version-of-route"},
    vrf_name{YType::str, "vrf-name"},
    zero_by_zero_route_as_default{YType::boolean, "zero-by-zero-route-as-default"}
    	,
    detail_fib_entry_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation>())
	,fib_entry_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath>())
	,srv6_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information>())
{
    detail_fib_entry_information->parent = this;
    fib_entry_path->parent = this;
    srv6_information->parent = this;

    yang_name = "exact-route"; yang_parent_name = "exact-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::~ExactRoute()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::has_data() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_data())
            return true;
    }
    return broadcast_forward_flag.is_set
	|| broadcast_recive_flag.is_set
	|| destination.is_set
	|| dummy_real_zero_route.is_set
	|| exact_path_gre_interface_handle.is_set
	|| exact_path_interface_handle.is_set
	|| exact_route_gre_phys_ifh_avail.is_set
	|| exact_route_result.is_set
	|| external_switch_triggered.is_set
	|| fib_route_download_priority.is_set
	|| flags_external_ldi.is_set
	|| l2_subscriber_ip_protocol.is_set
	|| l2_subscriber_route.is_set
	|| l2_subscriber_xconnect_id.is_set
	|| l2tpv3_cookie_length_bits.is_set
	|| ldi_flags.is_set
	|| ldi_lw_flag.is_set
	|| lspa_flags.is_set
	|| number_of_referances_to_ldi.is_set
	|| number_of_referances_to_path_list.is_set
	|| packet_should_recieve.is_set
	|| path_list_flags.is_set
	|| path_list_source.is_set
	|| platform_hardware.is_set
	|| pointer_external_ldi.is_set
	|| prefix_connected.is_set
	|| prefix_for_adjancency.is_set
	|| prefix_for_pic_next_hop.is_set
	|| prefix_is_static_or_connected.is_set
	|| protocol_name.is_set
	|| protocol_type_fib_entry.is_set
	|| purgable_after_purge_interval.is_set
	|| ref_counter_of_ldi_lw_ldi.is_set
	|| route_attribute_flag.is_set
	|| route_for_external_reach_linecard_flag.is_set
	|| route_is_sr_flag.is_set
	|| source.is_set
	|| time_of_last_update_in_msec.is_set
	|| type_of_ldi_lw_ldi.is_set
	|| version_of_route.is_set
	|| vrf_name.is_set
	|| zero_by_zero_route_as_default.is_set
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_data())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_data())
	|| (srv6_information !=  nullptr && srv6_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::has_operation() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(broadcast_forward_flag.yfilter)
	|| ydk::is_set(broadcast_recive_flag.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(dummy_real_zero_route.yfilter)
	|| ydk::is_set(exact_path_gre_interface_handle.yfilter)
	|| ydk::is_set(exact_path_interface_handle.yfilter)
	|| ydk::is_set(exact_route_gre_phys_ifh_avail.yfilter)
	|| ydk::is_set(exact_route_result.yfilter)
	|| ydk::is_set(external_switch_triggered.yfilter)
	|| ydk::is_set(fib_route_download_priority.yfilter)
	|| ydk::is_set(flags_external_ldi.yfilter)
	|| ydk::is_set(l2_subscriber_ip_protocol.yfilter)
	|| ydk::is_set(l2_subscriber_route.yfilter)
	|| ydk::is_set(l2_subscriber_xconnect_id.yfilter)
	|| ydk::is_set(l2tpv3_cookie_length_bits.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_lw_flag.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(number_of_referances_to_ldi.yfilter)
	|| ydk::is_set(number_of_referances_to_path_list.yfilter)
	|| ydk::is_set(packet_should_recieve.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_source.yfilter)
	|| ydk::is_set(platform_hardware.yfilter)
	|| ydk::is_set(pointer_external_ldi.yfilter)
	|| ydk::is_set(prefix_connected.yfilter)
	|| ydk::is_set(prefix_for_adjancency.yfilter)
	|| ydk::is_set(prefix_for_pic_next_hop.yfilter)
	|| ydk::is_set(prefix_is_static_or_connected.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(protocol_type_fib_entry.yfilter)
	|| ydk::is_set(purgable_after_purge_interval.yfilter)
	|| ydk::is_set(ref_counter_of_ldi_lw_ldi.yfilter)
	|| ydk::is_set(route_attribute_flag.yfilter)
	|| ydk::is_set(route_for_external_reach_linecard_flag.yfilter)
	|| ydk::is_set(route_is_sr_flag.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(type_of_ldi_lw_ldi.yfilter)
	|| ydk::is_set(version_of_route.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(zero_by_zero_route_as_default.yfilter)
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_operation())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_operation())
	|| (srv6_information !=  nullptr && srv6_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_forward_flag.is_set || is_set(broadcast_forward_flag.yfilter)) leaf_name_data.push_back(broadcast_forward_flag.get_name_leafdata());
    if (broadcast_recive_flag.is_set || is_set(broadcast_recive_flag.yfilter)) leaf_name_data.push_back(broadcast_recive_flag.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (dummy_real_zero_route.is_set || is_set(dummy_real_zero_route.yfilter)) leaf_name_data.push_back(dummy_real_zero_route.get_name_leafdata());
    if (exact_path_gre_interface_handle.is_set || is_set(exact_path_gre_interface_handle.yfilter)) leaf_name_data.push_back(exact_path_gre_interface_handle.get_name_leafdata());
    if (exact_path_interface_handle.is_set || is_set(exact_path_interface_handle.yfilter)) leaf_name_data.push_back(exact_path_interface_handle.get_name_leafdata());
    if (exact_route_gre_phys_ifh_avail.is_set || is_set(exact_route_gre_phys_ifh_avail.yfilter)) leaf_name_data.push_back(exact_route_gre_phys_ifh_avail.get_name_leafdata());
    if (exact_route_result.is_set || is_set(exact_route_result.yfilter)) leaf_name_data.push_back(exact_route_result.get_name_leafdata());
    if (external_switch_triggered.is_set || is_set(external_switch_triggered.yfilter)) leaf_name_data.push_back(external_switch_triggered.get_name_leafdata());
    if (fib_route_download_priority.is_set || is_set(fib_route_download_priority.yfilter)) leaf_name_data.push_back(fib_route_download_priority.get_name_leafdata());
    if (flags_external_ldi.is_set || is_set(flags_external_ldi.yfilter)) leaf_name_data.push_back(flags_external_ldi.get_name_leafdata());
    if (l2_subscriber_ip_protocol.is_set || is_set(l2_subscriber_ip_protocol.yfilter)) leaf_name_data.push_back(l2_subscriber_ip_protocol.get_name_leafdata());
    if (l2_subscriber_route.is_set || is_set(l2_subscriber_route.yfilter)) leaf_name_data.push_back(l2_subscriber_route.get_name_leafdata());
    if (l2_subscriber_xconnect_id.is_set || is_set(l2_subscriber_xconnect_id.yfilter)) leaf_name_data.push_back(l2_subscriber_xconnect_id.get_name_leafdata());
    if (l2tpv3_cookie_length_bits.is_set || is_set(l2tpv3_cookie_length_bits.yfilter)) leaf_name_data.push_back(l2tpv3_cookie_length_bits.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_lw_flag.is_set || is_set(ldi_lw_flag.yfilter)) leaf_name_data.push_back(ldi_lw_flag.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (number_of_referances_to_ldi.is_set || is_set(number_of_referances_to_ldi.yfilter)) leaf_name_data.push_back(number_of_referances_to_ldi.get_name_leafdata());
    if (number_of_referances_to_path_list.is_set || is_set(number_of_referances_to_path_list.yfilter)) leaf_name_data.push_back(number_of_referances_to_path_list.get_name_leafdata());
    if (packet_should_recieve.is_set || is_set(packet_should_recieve.yfilter)) leaf_name_data.push_back(packet_should_recieve.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_source.is_set || is_set(path_list_source.yfilter)) leaf_name_data.push_back(path_list_source.get_name_leafdata());
    if (platform_hardware.is_set || is_set(platform_hardware.yfilter)) leaf_name_data.push_back(platform_hardware.get_name_leafdata());
    if (pointer_external_ldi.is_set || is_set(pointer_external_ldi.yfilter)) leaf_name_data.push_back(pointer_external_ldi.get_name_leafdata());
    if (prefix_connected.is_set || is_set(prefix_connected.yfilter)) leaf_name_data.push_back(prefix_connected.get_name_leafdata());
    if (prefix_for_adjancency.is_set || is_set(prefix_for_adjancency.yfilter)) leaf_name_data.push_back(prefix_for_adjancency.get_name_leafdata());
    if (prefix_for_pic_next_hop.is_set || is_set(prefix_for_pic_next_hop.yfilter)) leaf_name_data.push_back(prefix_for_pic_next_hop.get_name_leafdata());
    if (prefix_is_static_or_connected.is_set || is_set(prefix_is_static_or_connected.yfilter)) leaf_name_data.push_back(prefix_is_static_or_connected.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (protocol_type_fib_entry.is_set || is_set(protocol_type_fib_entry.yfilter)) leaf_name_data.push_back(protocol_type_fib_entry.get_name_leafdata());
    if (purgable_after_purge_interval.is_set || is_set(purgable_after_purge_interval.yfilter)) leaf_name_data.push_back(purgable_after_purge_interval.get_name_leafdata());
    if (ref_counter_of_ldi_lw_ldi.is_set || is_set(ref_counter_of_ldi_lw_ldi.yfilter)) leaf_name_data.push_back(ref_counter_of_ldi_lw_ldi.get_name_leafdata());
    if (route_attribute_flag.is_set || is_set(route_attribute_flag.yfilter)) leaf_name_data.push_back(route_attribute_flag.get_name_leafdata());
    if (route_for_external_reach_linecard_flag.is_set || is_set(route_for_external_reach_linecard_flag.yfilter)) leaf_name_data.push_back(route_for_external_reach_linecard_flag.get_name_leafdata());
    if (route_is_sr_flag.is_set || is_set(route_is_sr_flag.yfilter)) leaf_name_data.push_back(route_is_sr_flag.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (time_of_last_update_in_msec.is_set || is_set(time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(time_of_last_update_in_msec.get_name_leafdata());
    if (type_of_ldi_lw_ldi.is_set || is_set(type_of_ldi_lw_ldi.yfilter)) leaf_name_data.push_back(type_of_ldi_lw_ldi.get_name_leafdata());
    if (version_of_route.is_set || is_set(version_of_route.yfilter)) leaf_name_data.push_back(version_of_route.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (zero_by_zero_route_as_default.is_set || is_set(zero_by_zero_route_as_default.yfilter)) leaf_name_data.push_back(zero_by_zero_route_as_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-fib-entry-information")
    {
        if(detail_fib_entry_information == nullptr)
        {
            detail_fib_entry_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation>();
        }
        return detail_fib_entry_information;
    }

    if(child_yang_name == "extension-object")
    {
        for(auto const & c : extension_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject>();
        c->parent = this;
        extension_object.push_back(c);
        return c;
    }

    if(child_yang_name == "fib-entry-path")
    {
        if(fib_entry_path == nullptr)
        {
            fib_entry_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath>();
        }
        return fib_entry_path;
    }

    if(child_yang_name == "srv6-information")
    {
        if(srv6_information == nullptr)
        {
            srv6_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information>();
        }
        return srv6_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_fib_entry_information != nullptr)
    {
        children["detail-fib-entry-information"] = detail_fib_entry_information;
    }

    for (auto const & c : extension_object)
    {
        children[c->get_segment_path()] = c;
    }

    if(fib_entry_path != nullptr)
    {
        children["fib-entry-path"] = fib_entry_path;
    }

    if(srv6_information != nullptr)
    {
        children["srv6-information"] = srv6_information;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-forward-flag")
    {
        broadcast_forward_flag = value;
        broadcast_forward_flag.value_namespace = name_space;
        broadcast_forward_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-recive-flag")
    {
        broadcast_recive_flag = value;
        broadcast_recive_flag.value_namespace = name_space;
        broadcast_recive_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy-real-zero-route")
    {
        dummy_real_zero_route = value;
        dummy_real_zero_route.value_namespace = name_space;
        dummy_real_zero_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-path-gre-interface-handle")
    {
        exact_path_gre_interface_handle = value;
        exact_path_gre_interface_handle.value_namespace = name_space;
        exact_path_gre_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-path-interface-handle")
    {
        exact_path_interface_handle = value;
        exact_path_interface_handle.value_namespace = name_space;
        exact_path_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-route-gre-phys-ifh-avail")
    {
        exact_route_gre_phys_ifh_avail = value;
        exact_route_gre_phys_ifh_avail.value_namespace = name_space;
        exact_route_gre_phys_ifh_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-route-result")
    {
        exact_route_result = value;
        exact_route_result.value_namespace = name_space;
        exact_route_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-switch-triggered")
    {
        external_switch_triggered = value;
        external_switch_triggered.value_namespace = name_space;
        external_switch_triggered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-route-download-priority")
    {
        fib_route_download_priority = value;
        fib_route_download_priority.value_namespace = name_space;
        fib_route_download_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags-external-ldi")
    {
        flags_external_ldi = value;
        flags_external_ldi.value_namespace = name_space;
        flags_external_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-subscriber-ip-protocol")
    {
        l2_subscriber_ip_protocol = value;
        l2_subscriber_ip_protocol.value_namespace = name_space;
        l2_subscriber_ip_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-subscriber-route")
    {
        l2_subscriber_route = value;
        l2_subscriber_route.value_namespace = name_space;
        l2_subscriber_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-subscriber-xconnect-id")
    {
        l2_subscriber_xconnect_id = value;
        l2_subscriber_xconnect_id.value_namespace = name_space;
        l2_subscriber_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-cookie-length-bits")
    {
        l2tpv3_cookie_length_bits = value;
        l2tpv3_cookie_length_bits.value_namespace = name_space;
        l2tpv3_cookie_length_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-lw-flag")
    {
        ldi_lw_flag = value;
        ldi_lw_flag.value_namespace = name_space;
        ldi_lw_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-referances-to-ldi")
    {
        number_of_referances_to_ldi = value;
        number_of_referances_to_ldi.value_namespace = name_space;
        number_of_referances_to_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-referances-to-path-list")
    {
        number_of_referances_to_path_list = value;
        number_of_referances_to_path_list.value_namespace = name_space;
        number_of_referances_to_path_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-should-recieve")
    {
        packet_should_recieve = value;
        packet_should_recieve.value_namespace = name_space;
        packet_should_recieve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-source")
    {
        path_list_source = value;
        path_list_source.value_namespace = name_space;
        path_list_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-hardware")
    {
        platform_hardware = value;
        platform_hardware.value_namespace = name_space;
        platform_hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pointer-external-ldi")
    {
        pointer_external_ldi = value;
        pointer_external_ldi.value_namespace = name_space;
        pointer_external_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-connected")
    {
        prefix_connected = value;
        prefix_connected.value_namespace = name_space;
        prefix_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-for-adjancency")
    {
        prefix_for_adjancency = value;
        prefix_for_adjancency.value_namespace = name_space;
        prefix_for_adjancency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-for-pic-next-hop")
    {
        prefix_for_pic_next_hop = value;
        prefix_for_pic_next_hop.value_namespace = name_space;
        prefix_for_pic_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-is-static-or-connected")
    {
        prefix_is_static_or_connected = value;
        prefix_is_static_or_connected.value_namespace = name_space;
        prefix_is_static_or_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-type-fib-entry")
    {
        protocol_type_fib_entry = value;
        protocol_type_fib_entry.value_namespace = name_space;
        protocol_type_fib_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgable-after-purge-interval")
    {
        purgable_after_purge_interval = value;
        purgable_after_purge_interval.value_namespace = name_space;
        purgable_after_purge_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-counter-of-ldi-lw-ldi")
    {
        ref_counter_of_ldi_lw_ldi = value;
        ref_counter_of_ldi_lw_ldi.value_namespace = name_space;
        ref_counter_of_ldi_lw_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-attribute-flag")
    {
        route_attribute_flag = value;
        route_attribute_flag.value_namespace = name_space;
        route_attribute_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-for-external-reach-linecard-flag")
    {
        route_for_external_reach_linecard_flag = value;
        route_for_external_reach_linecard_flag.value_namespace = name_space;
        route_for_external_reach_linecard_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-is-sr-flag")
    {
        route_is_sr_flag = value;
        route_is_sr_flag.value_namespace = name_space;
        route_is_sr_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec = value;
        time_of_last_update_in_msec.value_namespace = name_space;
        time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-of-ldi-lw-ldi")
    {
        type_of_ldi_lw_ldi = value;
        type_of_ldi_lw_ldi.value_namespace = name_space;
        type_of_ldi_lw_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-of-route")
    {
        version_of_route = value;
        version_of_route.value_namespace = name_space;
        version_of_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-by-zero-route-as-default")
    {
        zero_by_zero_route_as_default = value;
        zero_by_zero_route_as_default.value_namespace = name_space;
        zero_by_zero_route_as_default.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-forward-flag")
    {
        broadcast_forward_flag.yfilter = yfilter;
    }
    if(value_path == "broadcast-recive-flag")
    {
        broadcast_recive_flag.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "dummy-real-zero-route")
    {
        dummy_real_zero_route.yfilter = yfilter;
    }
    if(value_path == "exact-path-gre-interface-handle")
    {
        exact_path_gre_interface_handle.yfilter = yfilter;
    }
    if(value_path == "exact-path-interface-handle")
    {
        exact_path_interface_handle.yfilter = yfilter;
    }
    if(value_path == "exact-route-gre-phys-ifh-avail")
    {
        exact_route_gre_phys_ifh_avail.yfilter = yfilter;
    }
    if(value_path == "exact-route-result")
    {
        exact_route_result.yfilter = yfilter;
    }
    if(value_path == "external-switch-triggered")
    {
        external_switch_triggered.yfilter = yfilter;
    }
    if(value_path == "fib-route-download-priority")
    {
        fib_route_download_priority.yfilter = yfilter;
    }
    if(value_path == "flags-external-ldi")
    {
        flags_external_ldi.yfilter = yfilter;
    }
    if(value_path == "l2-subscriber-ip-protocol")
    {
        l2_subscriber_ip_protocol.yfilter = yfilter;
    }
    if(value_path == "l2-subscriber-route")
    {
        l2_subscriber_route.yfilter = yfilter;
    }
    if(value_path == "l2-subscriber-xconnect-id")
    {
        l2_subscriber_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-cookie-length-bits")
    {
        l2tpv3_cookie_length_bits.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-lw-flag")
    {
        ldi_lw_flag.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "number-of-referances-to-ldi")
    {
        number_of_referances_to_ldi.yfilter = yfilter;
    }
    if(value_path == "number-of-referances-to-path-list")
    {
        number_of_referances_to_path_list.yfilter = yfilter;
    }
    if(value_path == "packet-should-recieve")
    {
        packet_should_recieve.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-source")
    {
        path_list_source.yfilter = yfilter;
    }
    if(value_path == "platform-hardware")
    {
        platform_hardware.yfilter = yfilter;
    }
    if(value_path == "pointer-external-ldi")
    {
        pointer_external_ldi.yfilter = yfilter;
    }
    if(value_path == "prefix-connected")
    {
        prefix_connected.yfilter = yfilter;
    }
    if(value_path == "prefix-for-adjancency")
    {
        prefix_for_adjancency.yfilter = yfilter;
    }
    if(value_path == "prefix-for-pic-next-hop")
    {
        prefix_for_pic_next_hop.yfilter = yfilter;
    }
    if(value_path == "prefix-is-static-or-connected")
    {
        prefix_is_static_or_connected.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "protocol-type-fib-entry")
    {
        protocol_type_fib_entry.yfilter = yfilter;
    }
    if(value_path == "purgable-after-purge-interval")
    {
        purgable_after_purge_interval.yfilter = yfilter;
    }
    if(value_path == "ref-counter-of-ldi-lw-ldi")
    {
        ref_counter_of_ldi_lw_ldi.yfilter = yfilter;
    }
    if(value_path == "route-attribute-flag")
    {
        route_attribute_flag.yfilter = yfilter;
    }
    if(value_path == "route-for-external-reach-linecard-flag")
    {
        route_for_external_reach_linecard_flag.yfilter = yfilter;
    }
    if(value_path == "route-is-sr-flag")
    {
        route_is_sr_flag.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "type-of-ldi-lw-ldi")
    {
        type_of_ldi_lw_ldi.yfilter = yfilter;
    }
    if(value_path == "version-of-route")
    {
        version_of_route.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "zero-by-zero-route-as-default")
    {
        zero_by_zero_route_as_default.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-fib-entry-information" || name == "extension-object" || name == "fib-entry-path" || name == "srv6-information" || name == "broadcast-forward-flag" || name == "broadcast-recive-flag" || name == "destination" || name == "dummy-real-zero-route" || name == "exact-path-gre-interface-handle" || name == "exact-path-interface-handle" || name == "exact-route-gre-phys-ifh-avail" || name == "exact-route-result" || name == "external-switch-triggered" || name == "fib-route-download-priority" || name == "flags-external-ldi" || name == "l2-subscriber-ip-protocol" || name == "l2-subscriber-route" || name == "l2-subscriber-xconnect-id" || name == "l2tpv3-cookie-length-bits" || name == "ldi-flags" || name == "ldi-lw-flag" || name == "lspa-flags" || name == "number-of-referances-to-ldi" || name == "number-of-referances-to-path-list" || name == "packet-should-recieve" || name == "path-list-flags" || name == "path-list-source" || name == "platform-hardware" || name == "pointer-external-ldi" || name == "prefix-connected" || name == "prefix-for-adjancency" || name == "prefix-for-pic-next-hop" || name == "prefix-is-static-or-connected" || name == "protocol-name" || name == "protocol-type-fib-entry" || name == "purgable-after-purge-interval" || name == "ref-counter-of-ldi-lw-ldi" || name == "route-attribute-flag" || name == "route-for-external-reach-linecard-flag" || name == "route-is-sr-flag" || name == "source" || name == "time-of-last-update-in-msec" || name == "type-of-ldi-lw-ldi" || name == "version-of-route" || name == "vrf-name" || name == "zero-by-zero-route-as-default")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::DetailFibEntryInformation()
    :
    adjacency_address_length{YType::uint32, "adjacency-address-length"},
    adjacency_interface{YType::uint32, "adjacency-interface"},
    afi_fib_protocol_type{YType::uint32, "afi-fib-protocol-type"},
    aib_l3_address{YType::str, "aib-l3-address"},
    bgp_attribute_id{YType::uint32, "bgp-attribute-id"},
    bgp_attribute_next_hop_as{YType::uint32, "bgp-attribute-next-hop-as"},
    bgp_attribute_origin_as{YType::uint32, "bgp-attribute-origin-as"},
    bgp_local_attribute_id{YType::uint32, "bgp-local-attribute-id"},
    bytes_through_fib_entry{YType::uint64, "bytes-through-fib-entry"},
    com_string{YType::str, "com-string"},
    detailed_prefix_length{YType::uint32, "detailed-prefix-length"},
    extcom_string{YType::str, "extcom-string"},
    extended_community{YType::uint32, "extended-community"},
    fast_adjacency_flag{YType::boolean, "fast-adjacency-flag"},
    fib_entry_adjacency_address{YType::str, "fib-entry-adjacency-address"},
    fib_entry_adjacency_interface{YType::uint32, "fib-entry-adjacency-interface"},
    fib_entry_adjacency_type{YType::enumeration, "fib-entry-adjacency-type"},
    fib_entry_version{YType::uint32, "fib-entry-version"},
    fib_protocol_type{YType::uint32, "fib-protocol-type"},
    fib_special_nh_information_type{YType::uint32, "fib-special-nh-information-type"},
    flow_tag{YType::uint8, "flow-tag"},
    forward_class{YType::uint8, "forward-class"},
    illegal_fast_adjacency_flag{YType::boolean, "illegal-fast-adjacency-flag"},
    ldi_time_of_last_update_in_msec{YType::uint64, "ldi-time-of-last-update-in-msec"},
    load_sharing_type{YType::enumeration, "load-sharing-type"},
    lwldi_time_of_last_update_in_msec{YType::uint64, "lwldi-time-of-last-update-in-msec"},
    mpls_fec{YType::uint32, "mpls-fec"},
    packets_through_fib_entry{YType::uint64, "packets-through-fib-entry"},
    path_string{YType::str, "path-string"},
    per_prefix_accounting{YType::uint8, "per-prefix-accounting"},
    pl_time_of_last_update_in_msec{YType::uint64, "pl-time-of-last-update-in-msec"},
    pl_time_stamp_type{YType::uint32, "pl-time-stamp-type"},
    precedence_forpackets{YType::uint8, "precedence-forpackets"},
    prefix_protocol{YType::uint32, "prefix-protocol"},
    qos_group{YType::uint32, "qos-group"},
    qppb_qos_group_and_ip_precedence{YType::uint32, "qppb-qos-group-and-ip-precedence"},
    remote_adjacency_flag{YType::boolean, "remote-adjacency-flag"},
    switch_compontent_id{YType::uint32, "switch-compontent-id"},
    traffic_index_for_packets{YType::uint8, "traffic-index-for-packets"}
    	,
    loadshare_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation>())
{
    loadshare_information->parent = this;

    yang_name = "detail-fib-entry-information"; yang_parent_name = "exact-route"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::~DetailFibEntryInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::has_data() const
{
    return adjacency_address_length.is_set
	|| adjacency_interface.is_set
	|| afi_fib_protocol_type.is_set
	|| aib_l3_address.is_set
	|| bgp_attribute_id.is_set
	|| bgp_attribute_next_hop_as.is_set
	|| bgp_attribute_origin_as.is_set
	|| bgp_local_attribute_id.is_set
	|| bytes_through_fib_entry.is_set
	|| com_string.is_set
	|| detailed_prefix_length.is_set
	|| extcom_string.is_set
	|| extended_community.is_set
	|| fast_adjacency_flag.is_set
	|| fib_entry_adjacency_address.is_set
	|| fib_entry_adjacency_interface.is_set
	|| fib_entry_adjacency_type.is_set
	|| fib_entry_version.is_set
	|| fib_protocol_type.is_set
	|| fib_special_nh_information_type.is_set
	|| flow_tag.is_set
	|| forward_class.is_set
	|| illegal_fast_adjacency_flag.is_set
	|| ldi_time_of_last_update_in_msec.is_set
	|| load_sharing_type.is_set
	|| lwldi_time_of_last_update_in_msec.is_set
	|| mpls_fec.is_set
	|| packets_through_fib_entry.is_set
	|| path_string.is_set
	|| per_prefix_accounting.is_set
	|| pl_time_of_last_update_in_msec.is_set
	|| pl_time_stamp_type.is_set
	|| precedence_forpackets.is_set
	|| prefix_protocol.is_set
	|| qos_group.is_set
	|| qppb_qos_group_and_ip_precedence.is_set
	|| remote_adjacency_flag.is_set
	|| switch_compontent_id.is_set
	|| traffic_index_for_packets.is_set
	|| (loadshare_information !=  nullptr && loadshare_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_address_length.yfilter)
	|| ydk::is_set(adjacency_interface.yfilter)
	|| ydk::is_set(afi_fib_protocol_type.yfilter)
	|| ydk::is_set(aib_l3_address.yfilter)
	|| ydk::is_set(bgp_attribute_id.yfilter)
	|| ydk::is_set(bgp_attribute_next_hop_as.yfilter)
	|| ydk::is_set(bgp_attribute_origin_as.yfilter)
	|| ydk::is_set(bgp_local_attribute_id.yfilter)
	|| ydk::is_set(bytes_through_fib_entry.yfilter)
	|| ydk::is_set(com_string.yfilter)
	|| ydk::is_set(detailed_prefix_length.yfilter)
	|| ydk::is_set(extcom_string.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(fast_adjacency_flag.yfilter)
	|| ydk::is_set(fib_entry_adjacency_address.yfilter)
	|| ydk::is_set(fib_entry_adjacency_interface.yfilter)
	|| ydk::is_set(fib_entry_adjacency_type.yfilter)
	|| ydk::is_set(fib_entry_version.yfilter)
	|| ydk::is_set(fib_protocol_type.yfilter)
	|| ydk::is_set(fib_special_nh_information_type.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(illegal_fast_adjacency_flag.yfilter)
	|| ydk::is_set(ldi_time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(load_sharing_type.yfilter)
	|| ydk::is_set(lwldi_time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(mpls_fec.yfilter)
	|| ydk::is_set(packets_through_fib_entry.yfilter)
	|| ydk::is_set(path_string.yfilter)
	|| ydk::is_set(per_prefix_accounting.yfilter)
	|| ydk::is_set(pl_time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(pl_time_stamp_type.yfilter)
	|| ydk::is_set(precedence_forpackets.yfilter)
	|| ydk::is_set(prefix_protocol.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(qppb_qos_group_and_ip_precedence.yfilter)
	|| ydk::is_set(remote_adjacency_flag.yfilter)
	|| ydk::is_set(switch_compontent_id.yfilter)
	|| ydk::is_set(traffic_index_for_packets.yfilter)
	|| (loadshare_information !=  nullptr && loadshare_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-fib-entry-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_address_length.is_set || is_set(adjacency_address_length.yfilter)) leaf_name_data.push_back(adjacency_address_length.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.yfilter)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (afi_fib_protocol_type.is_set || is_set(afi_fib_protocol_type.yfilter)) leaf_name_data.push_back(afi_fib_protocol_type.get_name_leafdata());
    if (aib_l3_address.is_set || is_set(aib_l3_address.yfilter)) leaf_name_data.push_back(aib_l3_address.get_name_leafdata());
    if (bgp_attribute_id.is_set || is_set(bgp_attribute_id.yfilter)) leaf_name_data.push_back(bgp_attribute_id.get_name_leafdata());
    if (bgp_attribute_next_hop_as.is_set || is_set(bgp_attribute_next_hop_as.yfilter)) leaf_name_data.push_back(bgp_attribute_next_hop_as.get_name_leafdata());
    if (bgp_attribute_origin_as.is_set || is_set(bgp_attribute_origin_as.yfilter)) leaf_name_data.push_back(bgp_attribute_origin_as.get_name_leafdata());
    if (bgp_local_attribute_id.is_set || is_set(bgp_local_attribute_id.yfilter)) leaf_name_data.push_back(bgp_local_attribute_id.get_name_leafdata());
    if (bytes_through_fib_entry.is_set || is_set(bytes_through_fib_entry.yfilter)) leaf_name_data.push_back(bytes_through_fib_entry.get_name_leafdata());
    if (com_string.is_set || is_set(com_string.yfilter)) leaf_name_data.push_back(com_string.get_name_leafdata());
    if (detailed_prefix_length.is_set || is_set(detailed_prefix_length.yfilter)) leaf_name_data.push_back(detailed_prefix_length.get_name_leafdata());
    if (extcom_string.is_set || is_set(extcom_string.yfilter)) leaf_name_data.push_back(extcom_string.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (fast_adjacency_flag.is_set || is_set(fast_adjacency_flag.yfilter)) leaf_name_data.push_back(fast_adjacency_flag.get_name_leafdata());
    if (fib_entry_adjacency_address.is_set || is_set(fib_entry_adjacency_address.yfilter)) leaf_name_data.push_back(fib_entry_adjacency_address.get_name_leafdata());
    if (fib_entry_adjacency_interface.is_set || is_set(fib_entry_adjacency_interface.yfilter)) leaf_name_data.push_back(fib_entry_adjacency_interface.get_name_leafdata());
    if (fib_entry_adjacency_type.is_set || is_set(fib_entry_adjacency_type.yfilter)) leaf_name_data.push_back(fib_entry_adjacency_type.get_name_leafdata());
    if (fib_entry_version.is_set || is_set(fib_entry_version.yfilter)) leaf_name_data.push_back(fib_entry_version.get_name_leafdata());
    if (fib_protocol_type.is_set || is_set(fib_protocol_type.yfilter)) leaf_name_data.push_back(fib_protocol_type.get_name_leafdata());
    if (fib_special_nh_information_type.is_set || is_set(fib_special_nh_information_type.yfilter)) leaf_name_data.push_back(fib_special_nh_information_type.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (illegal_fast_adjacency_flag.is_set || is_set(illegal_fast_adjacency_flag.yfilter)) leaf_name_data.push_back(illegal_fast_adjacency_flag.get_name_leafdata());
    if (ldi_time_of_last_update_in_msec.is_set || is_set(ldi_time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(ldi_time_of_last_update_in_msec.get_name_leafdata());
    if (load_sharing_type.is_set || is_set(load_sharing_type.yfilter)) leaf_name_data.push_back(load_sharing_type.get_name_leafdata());
    if (lwldi_time_of_last_update_in_msec.is_set || is_set(lwldi_time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(lwldi_time_of_last_update_in_msec.get_name_leafdata());
    if (mpls_fec.is_set || is_set(mpls_fec.yfilter)) leaf_name_data.push_back(mpls_fec.get_name_leafdata());
    if (packets_through_fib_entry.is_set || is_set(packets_through_fib_entry.yfilter)) leaf_name_data.push_back(packets_through_fib_entry.get_name_leafdata());
    if (path_string.is_set || is_set(path_string.yfilter)) leaf_name_data.push_back(path_string.get_name_leafdata());
    if (per_prefix_accounting.is_set || is_set(per_prefix_accounting.yfilter)) leaf_name_data.push_back(per_prefix_accounting.get_name_leafdata());
    if (pl_time_of_last_update_in_msec.is_set || is_set(pl_time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(pl_time_of_last_update_in_msec.get_name_leafdata());
    if (pl_time_stamp_type.is_set || is_set(pl_time_stamp_type.yfilter)) leaf_name_data.push_back(pl_time_stamp_type.get_name_leafdata());
    if (precedence_forpackets.is_set || is_set(precedence_forpackets.yfilter)) leaf_name_data.push_back(precedence_forpackets.get_name_leafdata());
    if (prefix_protocol.is_set || is_set(prefix_protocol.yfilter)) leaf_name_data.push_back(prefix_protocol.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (qppb_qos_group_and_ip_precedence.is_set || is_set(qppb_qos_group_and_ip_precedence.yfilter)) leaf_name_data.push_back(qppb_qos_group_and_ip_precedence.get_name_leafdata());
    if (remote_adjacency_flag.is_set || is_set(remote_adjacency_flag.yfilter)) leaf_name_data.push_back(remote_adjacency_flag.get_name_leafdata());
    if (switch_compontent_id.is_set || is_set(switch_compontent_id.yfilter)) leaf_name_data.push_back(switch_compontent_id.get_name_leafdata());
    if (traffic_index_for_packets.is_set || is_set(traffic_index_for_packets.yfilter)) leaf_name_data.push_back(traffic_index_for_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loadshare-information")
    {
        if(loadshare_information == nullptr)
        {
            loadshare_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation>();
        }
        return loadshare_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loadshare_information != nullptr)
    {
        children["loadshare-information"] = loadshare_information;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-address-length")
    {
        adjacency_address_length = value;
        adjacency_address_length.value_namespace = name_space;
        adjacency_address_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
        adjacency_interface.value_namespace = name_space;
        adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-fib-protocol-type")
    {
        afi_fib_protocol_type = value;
        afi_fib_protocol_type.value_namespace = name_space;
        afi_fib_protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aib-l3-address")
    {
        aib_l3_address = value;
        aib_l3_address.value_namespace = name_space;
        aib_l3_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attribute-id")
    {
        bgp_attribute_id = value;
        bgp_attribute_id.value_namespace = name_space;
        bgp_attribute_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attribute-next-hop-as")
    {
        bgp_attribute_next_hop_as = value;
        bgp_attribute_next_hop_as.value_namespace = name_space;
        bgp_attribute_next_hop_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attribute-origin-as")
    {
        bgp_attribute_origin_as = value;
        bgp_attribute_origin_as.value_namespace = name_space;
        bgp_attribute_origin_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-local-attribute-id")
    {
        bgp_local_attribute_id = value;
        bgp_local_attribute_id.value_namespace = name_space;
        bgp_local_attribute_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-through-fib-entry")
    {
        bytes_through_fib_entry = value;
        bytes_through_fib_entry.value_namespace = name_space;
        bytes_through_fib_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-string")
    {
        com_string = value;
        com_string.value_namespace = name_space;
        com_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detailed-prefix-length")
    {
        detailed_prefix_length = value;
        detailed_prefix_length.value_namespace = name_space;
        detailed_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extcom-string")
    {
        extcom_string = value;
        extcom_string.value_namespace = name_space;
        extcom_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-adjacency-flag")
    {
        fast_adjacency_flag = value;
        fast_adjacency_flag.value_namespace = name_space;
        fast_adjacency_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-adjacency-address")
    {
        fib_entry_adjacency_address = value;
        fib_entry_adjacency_address.value_namespace = name_space;
        fib_entry_adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-adjacency-interface")
    {
        fib_entry_adjacency_interface = value;
        fib_entry_adjacency_interface.value_namespace = name_space;
        fib_entry_adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-adjacency-type")
    {
        fib_entry_adjacency_type = value;
        fib_entry_adjacency_type.value_namespace = name_space;
        fib_entry_adjacency_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-version")
    {
        fib_entry_version = value;
        fib_entry_version.value_namespace = name_space;
        fib_entry_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-protocol-type")
    {
        fib_protocol_type = value;
        fib_protocol_type.value_namespace = name_space;
        fib_protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-special-nh-information-type")
    {
        fib_special_nh_information_type = value;
        fib_special_nh_information_type.value_namespace = name_space;
        fib_special_nh_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-fast-adjacency-flag")
    {
        illegal_fast_adjacency_flag = value;
        illegal_fast_adjacency_flag.value_namespace = name_space;
        illegal_fast_adjacency_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-time-of-last-update-in-msec")
    {
        ldi_time_of_last_update_in_msec = value;
        ldi_time_of_last_update_in_msec.value_namespace = name_space;
        ldi_time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing-type")
    {
        load_sharing_type = value;
        load_sharing_type.value_namespace = name_space;
        load_sharing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lwldi-time-of-last-update-in-msec")
    {
        lwldi_time_of_last_update_in_msec = value;
        lwldi_time_of_last_update_in_msec.value_namespace = name_space;
        lwldi_time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-fec")
    {
        mpls_fec = value;
        mpls_fec.value_namespace = name_space;
        mpls_fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-through-fib-entry")
    {
        packets_through_fib_entry = value;
        packets_through_fib_entry.value_namespace = name_space;
        packets_through_fib_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-string")
    {
        path_string = value;
        path_string.value_namespace = name_space;
        path_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix-accounting")
    {
        per_prefix_accounting = value;
        per_prefix_accounting.value_namespace = name_space;
        per_prefix_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pl-time-of-last-update-in-msec")
    {
        pl_time_of_last_update_in_msec = value;
        pl_time_of_last_update_in_msec.value_namespace = name_space;
        pl_time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pl-time-stamp-type")
    {
        pl_time_stamp_type = value;
        pl_time_stamp_type.value_namespace = name_space;
        pl_time_stamp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-forpackets")
    {
        precedence_forpackets = value;
        precedence_forpackets.value_namespace = name_space;
        precedence_forpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-protocol")
    {
        prefix_protocol = value;
        prefix_protocol.value_namespace = name_space;
        prefix_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qppb-qos-group-and-ip-precedence")
    {
        qppb_qos_group_and_ip_precedence = value;
        qppb_qos_group_and_ip_precedence.value_namespace = name_space;
        qppb_qos_group_and_ip_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-adjacency-flag")
    {
        remote_adjacency_flag = value;
        remote_adjacency_flag.value_namespace = name_space;
        remote_adjacency_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-compontent-id")
    {
        switch_compontent_id = value;
        switch_compontent_id.value_namespace = name_space;
        switch_compontent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index-for-packets")
    {
        traffic_index_for_packets = value;
        traffic_index_for_packets.value_namespace = name_space;
        traffic_index_for_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-address-length")
    {
        adjacency_address_length.yfilter = yfilter;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "afi-fib-protocol-type")
    {
        afi_fib_protocol_type.yfilter = yfilter;
    }
    if(value_path == "aib-l3-address")
    {
        aib_l3_address.yfilter = yfilter;
    }
    if(value_path == "bgp-attribute-id")
    {
        bgp_attribute_id.yfilter = yfilter;
    }
    if(value_path == "bgp-attribute-next-hop-as")
    {
        bgp_attribute_next_hop_as.yfilter = yfilter;
    }
    if(value_path == "bgp-attribute-origin-as")
    {
        bgp_attribute_origin_as.yfilter = yfilter;
    }
    if(value_path == "bgp-local-attribute-id")
    {
        bgp_local_attribute_id.yfilter = yfilter;
    }
    if(value_path == "bytes-through-fib-entry")
    {
        bytes_through_fib_entry.yfilter = yfilter;
    }
    if(value_path == "com-string")
    {
        com_string.yfilter = yfilter;
    }
    if(value_path == "detailed-prefix-length")
    {
        detailed_prefix_length.yfilter = yfilter;
    }
    if(value_path == "extcom-string")
    {
        extcom_string.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "fast-adjacency-flag")
    {
        fast_adjacency_flag.yfilter = yfilter;
    }
    if(value_path == "fib-entry-adjacency-address")
    {
        fib_entry_adjacency_address.yfilter = yfilter;
    }
    if(value_path == "fib-entry-adjacency-interface")
    {
        fib_entry_adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "fib-entry-adjacency-type")
    {
        fib_entry_adjacency_type.yfilter = yfilter;
    }
    if(value_path == "fib-entry-version")
    {
        fib_entry_version.yfilter = yfilter;
    }
    if(value_path == "fib-protocol-type")
    {
        fib_protocol_type.yfilter = yfilter;
    }
    if(value_path == "fib-special-nh-information-type")
    {
        fib_special_nh_information_type.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "illegal-fast-adjacency-flag")
    {
        illegal_fast_adjacency_flag.yfilter = yfilter;
    }
    if(value_path == "ldi-time-of-last-update-in-msec")
    {
        ldi_time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "load-sharing-type")
    {
        load_sharing_type.yfilter = yfilter;
    }
    if(value_path == "lwldi-time-of-last-update-in-msec")
    {
        lwldi_time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "mpls-fec")
    {
        mpls_fec.yfilter = yfilter;
    }
    if(value_path == "packets-through-fib-entry")
    {
        packets_through_fib_entry.yfilter = yfilter;
    }
    if(value_path == "path-string")
    {
        path_string.yfilter = yfilter;
    }
    if(value_path == "per-prefix-accounting")
    {
        per_prefix_accounting.yfilter = yfilter;
    }
    if(value_path == "pl-time-of-last-update-in-msec")
    {
        pl_time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "pl-time-stamp-type")
    {
        pl_time_stamp_type.yfilter = yfilter;
    }
    if(value_path == "precedence-forpackets")
    {
        precedence_forpackets.yfilter = yfilter;
    }
    if(value_path == "prefix-protocol")
    {
        prefix_protocol.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "qppb-qos-group-and-ip-precedence")
    {
        qppb_qos_group_and_ip_precedence.yfilter = yfilter;
    }
    if(value_path == "remote-adjacency-flag")
    {
        remote_adjacency_flag.yfilter = yfilter;
    }
    if(value_path == "switch-compontent-id")
    {
        switch_compontent_id.yfilter = yfilter;
    }
    if(value_path == "traffic-index-for-packets")
    {
        traffic_index_for_packets.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadshare-information" || name == "adjacency-address-length" || name == "adjacency-interface" || name == "afi-fib-protocol-type" || name == "aib-l3-address" || name == "bgp-attribute-id" || name == "bgp-attribute-next-hop-as" || name == "bgp-attribute-origin-as" || name == "bgp-local-attribute-id" || name == "bytes-through-fib-entry" || name == "com-string" || name == "detailed-prefix-length" || name == "extcom-string" || name == "extended-community" || name == "fast-adjacency-flag" || name == "fib-entry-adjacency-address" || name == "fib-entry-adjacency-interface" || name == "fib-entry-adjacency-type" || name == "fib-entry-version" || name == "fib-protocol-type" || name == "fib-special-nh-information-type" || name == "flow-tag" || name == "forward-class" || name == "illegal-fast-adjacency-flag" || name == "ldi-time-of-last-update-in-msec" || name == "load-sharing-type" || name == "lwldi-time-of-last-update-in-msec" || name == "mpls-fec" || name == "packets-through-fib-entry" || name == "path-string" || name == "per-prefix-accounting" || name == "pl-time-of-last-update-in-msec" || name == "pl-time-stamp-type" || name == "precedence-forpackets" || name == "prefix-protocol" || name == "qos-group" || name == "qppb-qos-group-and-ip-precedence" || name == "remote-adjacency-flag" || name == "switch-compontent-id" || name == "traffic-index-for-packets")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadshareInformation()
    :
    bytes_through_load_information{YType::uint64, "bytes-through-load-information"},
    is_owner{YType::boolean, "is-owner"},
    load_information_owner_deleted_flag{YType::boolean, "load-information-owner-deleted-flag"},
    load_information_reference_count{YType::uint16, "load-information-reference-count"},
    loadinfo_sanity_flag{YType::boolean, "loadinfo-sanity-flag"},
    mask_length_of_owner{YType::uint32, "mask-length-of-owner"},
    packets_through_load_information{YType::uint64, "packets-through-load-information"},
    per_dest_load_sharing_flag{YType::boolean, "per-dest-load-sharing-flag"},
    prefix_of_owner{YType::uint32, "prefix-of-owner"},
    total_bytes_through_load_information{YType::uint64, "total-bytes-through-load-information"},
    total_packets_through_load_information{YType::uint64, "total-packets-through-load-information"}
    	,
    load_informtion_internal_data(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>())
{
    load_informtion_internal_data->parent = this;

    yang_name = "loadshare-information"; yang_parent_name = "detail-fib-entry-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::~LoadshareInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::has_data() const
{
    return bytes_through_load_information.is_set
	|| is_owner.is_set
	|| load_information_owner_deleted_flag.is_set
	|| load_information_reference_count.is_set
	|| loadinfo_sanity_flag.is_set
	|| mask_length_of_owner.is_set
	|| packets_through_load_information.is_set
	|| per_dest_load_sharing_flag.is_set
	|| prefix_of_owner.is_set
	|| total_bytes_through_load_information.is_set
	|| total_packets_through_load_information.is_set
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes_through_load_information.yfilter)
	|| ydk::is_set(is_owner.yfilter)
	|| ydk::is_set(load_information_owner_deleted_flag.yfilter)
	|| ydk::is_set(load_information_reference_count.yfilter)
	|| ydk::is_set(loadinfo_sanity_flag.yfilter)
	|| ydk::is_set(mask_length_of_owner.yfilter)
	|| ydk::is_set(packets_through_load_information.yfilter)
	|| ydk::is_set(per_dest_load_sharing_flag.yfilter)
	|| ydk::is_set(prefix_of_owner.yfilter)
	|| ydk::is_set(total_bytes_through_load_information.yfilter)
	|| ydk::is_set(total_packets_through_load_information.yfilter)
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadshare-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_through_load_information.is_set || is_set(bytes_through_load_information.yfilter)) leaf_name_data.push_back(bytes_through_load_information.get_name_leafdata());
    if (is_owner.is_set || is_set(is_owner.yfilter)) leaf_name_data.push_back(is_owner.get_name_leafdata());
    if (load_information_owner_deleted_flag.is_set || is_set(load_information_owner_deleted_flag.yfilter)) leaf_name_data.push_back(load_information_owner_deleted_flag.get_name_leafdata());
    if (load_information_reference_count.is_set || is_set(load_information_reference_count.yfilter)) leaf_name_data.push_back(load_information_reference_count.get_name_leafdata());
    if (loadinfo_sanity_flag.is_set || is_set(loadinfo_sanity_flag.yfilter)) leaf_name_data.push_back(loadinfo_sanity_flag.get_name_leafdata());
    if (mask_length_of_owner.is_set || is_set(mask_length_of_owner.yfilter)) leaf_name_data.push_back(mask_length_of_owner.get_name_leafdata());
    if (packets_through_load_information.is_set || is_set(packets_through_load_information.yfilter)) leaf_name_data.push_back(packets_through_load_information.get_name_leafdata());
    if (per_dest_load_sharing_flag.is_set || is_set(per_dest_load_sharing_flag.yfilter)) leaf_name_data.push_back(per_dest_load_sharing_flag.get_name_leafdata());
    if (prefix_of_owner.is_set || is_set(prefix_of_owner.yfilter)) leaf_name_data.push_back(prefix_of_owner.get_name_leafdata());
    if (total_bytes_through_load_information.is_set || is_set(total_bytes_through_load_information.yfilter)) leaf_name_data.push_back(total_bytes_through_load_information.get_name_leafdata());
    if (total_packets_through_load_information.is_set || is_set(total_packets_through_load_information.yfilter)) leaf_name_data.push_back(total_packets_through_load_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-informtion-internal-data")
    {
        if(load_informtion_internal_data == nullptr)
        {
            load_informtion_internal_data = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>();
        }
        return load_informtion_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_informtion_internal_data != nullptr)
    {
        children["load-informtion-internal-data"] = load_informtion_internal_data;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes-through-load-information")
    {
        bytes_through_load_information = value;
        bytes_through_load_information.value_namespace = name_space;
        bytes_through_load_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-owner")
    {
        is_owner = value;
        is_owner.value_namespace = name_space;
        is_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-information-owner-deleted-flag")
    {
        load_information_owner_deleted_flag = value;
        load_information_owner_deleted_flag.value_namespace = name_space;
        load_information_owner_deleted_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-information-reference-count")
    {
        load_information_reference_count = value;
        load_information_reference_count.value_namespace = name_space;
        load_information_reference_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadinfo-sanity-flag")
    {
        loadinfo_sanity_flag = value;
        loadinfo_sanity_flag.value_namespace = name_space;
        loadinfo_sanity_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length-of-owner")
    {
        mask_length_of_owner = value;
        mask_length_of_owner.value_namespace = name_space;
        mask_length_of_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-through-load-information")
    {
        packets_through_load_information = value;
        packets_through_load_information.value_namespace = name_space;
        packets_through_load_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-dest-load-sharing-flag")
    {
        per_dest_load_sharing_flag = value;
        per_dest_load_sharing_flag.value_namespace = name_space;
        per_dest_load_sharing_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-of-owner")
    {
        prefix_of_owner = value;
        prefix_of_owner.value_namespace = name_space;
        prefix_of_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bytes-through-load-information")
    {
        total_bytes_through_load_information = value;
        total_bytes_through_load_information.value_namespace = name_space;
        total_bytes_through_load_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-through-load-information")
    {
        total_packets_through_load_information = value;
        total_packets_through_load_information.value_namespace = name_space;
        total_packets_through_load_information.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes-through-load-information")
    {
        bytes_through_load_information.yfilter = yfilter;
    }
    if(value_path == "is-owner")
    {
        is_owner.yfilter = yfilter;
    }
    if(value_path == "load-information-owner-deleted-flag")
    {
        load_information_owner_deleted_flag.yfilter = yfilter;
    }
    if(value_path == "load-information-reference-count")
    {
        load_information_reference_count.yfilter = yfilter;
    }
    if(value_path == "loadinfo-sanity-flag")
    {
        loadinfo_sanity_flag.yfilter = yfilter;
    }
    if(value_path == "mask-length-of-owner")
    {
        mask_length_of_owner.yfilter = yfilter;
    }
    if(value_path == "packets-through-load-information")
    {
        packets_through_load_information.yfilter = yfilter;
    }
    if(value_path == "per-dest-load-sharing-flag")
    {
        per_dest_load_sharing_flag.yfilter = yfilter;
    }
    if(value_path == "prefix-of-owner")
    {
        prefix_of_owner.yfilter = yfilter;
    }
    if(value_path == "total-bytes-through-load-information")
    {
        total_bytes_through_load_information.yfilter = yfilter;
    }
    if(value_path == "total-packets-through-load-information")
    {
        total_packets_through_load_information.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-informtion-internal-data" || name == "bytes-through-load-information" || name == "is-owner" || name == "load-information-owner-deleted-flag" || name == "load-information-reference-count" || name == "loadinfo-sanity-flag" || name == "mask-length-of-owner" || name == "packets-through-load-information" || name == "per-dest-load-sharing-flag" || name == "prefix-of-owner" || name == "total-bytes-through-load-information" || name == "total-packets-through-load-information")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::LoadInformtionInternalData()
    :
    is_pbts_info_valid{YType::boolean, "is-pbts-info-valid"},
    ldi_next_hop_buckets{YType::uint8, "ldi-next-hop-buckets"},
    level_ofldis{YType::uint8, "level-ofldis"},
    maximum_index_arrays{YType::uint32, "maximum-index-arrays"},
    maximum_slots{YType::uint32, "maximum-slots"},
    normalized_weights{YType::str, "normalized-weights"},
    number_of_ldis{YType::uint8, "number-of-ldis"},
    path_indices{YType::str, "path-indices"},
    path_ldi_numbers{YType::str, "path-ldi-numbers"},
    pbts_class_num_paths{YType::str, "pbts-class-num-paths"},
    pbts_class_offset{YType::str, "pbts-class-offset"},
    pbts_fallback_mapped_class{YType::str, "pbts-fallback-mapped-class"},
    platform_hardware_information{YType::str, "platform-hardware-information"},
    round_robin_disable{YType::boolean, "round-robin-disable"},
    tunnel_class_value{YType::str, "tunnel-class-value"}
{

    yang_name = "load-informtion-internal-data"; yang_parent_name = "loadshare-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::~LoadInformtionInternalData()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_data() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_handle.size(); index++)
    {
        if(interface_handle[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sanity_flag.size(); index++)
    {
        if(sanity_flag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weights_of_path.size(); index++)
    {
        if(weights_of_path[index]->has_data())
            return true;
    }
    return is_pbts_info_valid.is_set
	|| ldi_next_hop_buckets.is_set
	|| level_ofldis.is_set
	|| maximum_index_arrays.is_set
	|| maximum_slots.is_set
	|| normalized_weights.is_set
	|| number_of_ldis.is_set
	|| path_indices.is_set
	|| path_ldi_numbers.is_set
	|| pbts_class_num_paths.is_set
	|| pbts_class_offset.is_set
	|| pbts_fallback_mapped_class.is_set
	|| platform_hardware_information.is_set
	|| round_robin_disable.is_set
	|| tunnel_class_value.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_operation() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_handle.size(); index++)
    {
        if(interface_handle[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sanity_flag.size(); index++)
    {
        if(sanity_flag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weights_of_path.size(); index++)
    {
        if(weights_of_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_pbts_info_valid.yfilter)
	|| ydk::is_set(ldi_next_hop_buckets.yfilter)
	|| ydk::is_set(level_ofldis.yfilter)
	|| ydk::is_set(maximum_index_arrays.yfilter)
	|| ydk::is_set(maximum_slots.yfilter)
	|| ydk::is_set(normalized_weights.yfilter)
	|| ydk::is_set(number_of_ldis.yfilter)
	|| ydk::is_set(path_indices.yfilter)
	|| ydk::is_set(path_ldi_numbers.yfilter)
	|| ydk::is_set(pbts_class_num_paths.yfilter)
	|| ydk::is_set(pbts_class_offset.yfilter)
	|| ydk::is_set(pbts_fallback_mapped_class.yfilter)
	|| ydk::is_set(platform_hardware_information.yfilter)
	|| ydk::is_set(round_robin_disable.yfilter)
	|| ydk::is_set(tunnel_class_value.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-informtion-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pbts_info_valid.is_set || is_set(is_pbts_info_valid.yfilter)) leaf_name_data.push_back(is_pbts_info_valid.get_name_leafdata());
    if (ldi_next_hop_buckets.is_set || is_set(ldi_next_hop_buckets.yfilter)) leaf_name_data.push_back(ldi_next_hop_buckets.get_name_leafdata());
    if (level_ofldis.is_set || is_set(level_ofldis.yfilter)) leaf_name_data.push_back(level_ofldis.get_name_leafdata());
    if (maximum_index_arrays.is_set || is_set(maximum_index_arrays.yfilter)) leaf_name_data.push_back(maximum_index_arrays.get_name_leafdata());
    if (maximum_slots.is_set || is_set(maximum_slots.yfilter)) leaf_name_data.push_back(maximum_slots.get_name_leafdata());
    if (normalized_weights.is_set || is_set(normalized_weights.yfilter)) leaf_name_data.push_back(normalized_weights.get_name_leafdata());
    if (number_of_ldis.is_set || is_set(number_of_ldis.yfilter)) leaf_name_data.push_back(number_of_ldis.get_name_leafdata());
    if (path_indices.is_set || is_set(path_indices.yfilter)) leaf_name_data.push_back(path_indices.get_name_leafdata());
    if (path_ldi_numbers.is_set || is_set(path_ldi_numbers.yfilter)) leaf_name_data.push_back(path_ldi_numbers.get_name_leafdata());
    if (pbts_class_num_paths.is_set || is_set(pbts_class_num_paths.yfilter)) leaf_name_data.push_back(pbts_class_num_paths.get_name_leafdata());
    if (pbts_class_offset.is_set || is_set(pbts_class_offset.yfilter)) leaf_name_data.push_back(pbts_class_offset.get_name_leafdata());
    if (pbts_fallback_mapped_class.is_set || is_set(pbts_fallback_mapped_class.yfilter)) leaf_name_data.push_back(pbts_fallback_mapped_class.get_name_leafdata());
    if (platform_hardware_information.is_set || is_set(platform_hardware_information.yfilter)) leaf_name_data.push_back(platform_hardware_information.get_name_leafdata());
    if (round_robin_disable.is_set || is_set(round_robin_disable.yfilter)) leaf_name_data.push_back(round_robin_disable.get_name_leafdata());
    if (tunnel_class_value.is_set || is_set(tunnel_class_value.yfilter)) leaf_name_data.push_back(tunnel_class_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-address")
    {
        for(auto const & c : adjacency_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress>();
        c->parent = this;
        adjacency_address.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-handle")
    {
        for(auto const & c : interface_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle>();
        c->parent = this;
        interface_handle.push_back(c);
        return c;
    }

    if(child_yang_name == "pbts-class-is-fallback-mapped")
    {
        for(auto const & c : pbts_class_is_fallback_mapped)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped>();
        c->parent = this;
        pbts_class_is_fallback_mapped.push_back(c);
        return c;
    }

    if(child_yang_name == "pbts-fallback-to-drop")
    {
        for(auto const & c : pbts_fallback_to_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop>();
        c->parent = this;
        pbts_fallback_to_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "sanity-flag")
    {
        for(auto const & c : sanity_flag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag>();
        c->parent = this;
        sanity_flag.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-is-forward-class")
    {
        for(auto const & c : tunnel_is_forward_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass>();
        c->parent = this;
        tunnel_is_forward_class.push_back(c);
        return c;
    }

    if(child_yang_name == "weights-of-path")
    {
        for(auto const & c : weights_of_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath>();
        c->parent = this;
        weights_of_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_handle)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pbts_class_is_fallback_mapped)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pbts_fallback_to_drop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sanity_flag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_is_forward_class)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : weights_of_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-pbts-info-valid")
    {
        is_pbts_info_valid = value;
        is_pbts_info_valid.value_namespace = name_space;
        is_pbts_info_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-next-hop-buckets")
    {
        ldi_next_hop_buckets = value;
        ldi_next_hop_buckets.value_namespace = name_space;
        ldi_next_hop_buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-ofldis")
    {
        level_ofldis = value;
        level_ofldis.value_namespace = name_space;
        level_ofldis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-index-arrays")
    {
        maximum_index_arrays = value;
        maximum_index_arrays.value_namespace = name_space;
        maximum_index_arrays.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-slots")
    {
        maximum_slots = value;
        maximum_slots.value_namespace = name_space;
        maximum_slots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normalized-weights")
    {
        normalized_weights = value;
        normalized_weights.value_namespace = name_space;
        normalized_weights.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldis")
    {
        number_of_ldis = value;
        number_of_ldis.value_namespace = name_space;
        number_of_ldis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-indices")
    {
        path_indices = value;
        path_indices.value_namespace = name_space;
        path_indices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-ldi-numbers")
    {
        path_ldi_numbers = value;
        path_ldi_numbers.value_namespace = name_space;
        path_ldi_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbts-class-num-paths")
    {
        pbts_class_num_paths = value;
        pbts_class_num_paths.value_namespace = name_space;
        pbts_class_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbts-class-offset")
    {
        pbts_class_offset = value;
        pbts_class_offset.value_namespace = name_space;
        pbts_class_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbts-fallback-mapped-class")
    {
        pbts_fallback_mapped_class = value;
        pbts_fallback_mapped_class.value_namespace = name_space;
        pbts_fallback_mapped_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-hardware-information")
    {
        platform_hardware_information = value;
        platform_hardware_information.value_namespace = name_space;
        platform_hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "round-robin-disable")
    {
        round_robin_disable = value;
        round_robin_disable.value_namespace = name_space;
        round_robin_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-class-value")
    {
        tunnel_class_value = value;
        tunnel_class_value.value_namespace = name_space;
        tunnel_class_value.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-pbts-info-valid")
    {
        is_pbts_info_valid.yfilter = yfilter;
    }
    if(value_path == "ldi-next-hop-buckets")
    {
        ldi_next_hop_buckets.yfilter = yfilter;
    }
    if(value_path == "level-ofldis")
    {
        level_ofldis.yfilter = yfilter;
    }
    if(value_path == "maximum-index-arrays")
    {
        maximum_index_arrays.yfilter = yfilter;
    }
    if(value_path == "maximum-slots")
    {
        maximum_slots.yfilter = yfilter;
    }
    if(value_path == "normalized-weights")
    {
        normalized_weights.yfilter = yfilter;
    }
    if(value_path == "number-of-ldis")
    {
        number_of_ldis.yfilter = yfilter;
    }
    if(value_path == "path-indices")
    {
        path_indices.yfilter = yfilter;
    }
    if(value_path == "path-ldi-numbers")
    {
        path_ldi_numbers.yfilter = yfilter;
    }
    if(value_path == "pbts-class-num-paths")
    {
        pbts_class_num_paths.yfilter = yfilter;
    }
    if(value_path == "pbts-class-offset")
    {
        pbts_class_offset.yfilter = yfilter;
    }
    if(value_path == "pbts-fallback-mapped-class")
    {
        pbts_fallback_mapped_class.yfilter = yfilter;
    }
    if(value_path == "platform-hardware-information")
    {
        platform_hardware_information.yfilter = yfilter;
    }
    if(value_path == "round-robin-disable")
    {
        round_robin_disable.yfilter = yfilter;
    }
    if(value_path == "tunnel-class-value")
    {
        tunnel_class_value.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-address" || name == "interface-handle" || name == "pbts-class-is-fallback-mapped" || name == "pbts-fallback-to-drop" || name == "sanity-flag" || name == "tunnel-is-forward-class" || name == "weights-of-path" || name == "is-pbts-info-valid" || name == "ldi-next-hop-buckets" || name == "level-ofldis" || name == "maximum-index-arrays" || name == "maximum-slots" || name == "normalized-weights" || name == "number-of-ldis" || name == "path-indices" || name == "path-ldi-numbers" || name == "pbts-class-num-paths" || name == "pbts-class-offset" || name == "pbts-fallback-mapped-class" || name == "platform-hardware-information" || name == "round-robin-disable" || name == "tunnel-class-value")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::AdjacencyAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "adjacency-address"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::~AdjacencyAddress()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_data() const
{
    return address.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::InterfaceHandle()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-handle"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::~InterfaceHandle()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-handle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::PbtsClassIsFallbackMapped()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "pbts-class-is-fallback-mapped"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::~PbtsClassIsFallbackMapped()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-class-is-fallback-mapped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::PbtsFallbackToDrop()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "pbts-fallback-to-drop"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::~PbtsFallbackToDrop()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-fallback-to-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::SanityFlag()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "sanity-flag"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::~SanityFlag()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sanity-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::TunnelIsForwardClass()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "tunnel-is-forward-class"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::~TunnelIsForwardClass()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-is-forward-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::WeightsOfPath()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "weights-of-path"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::~WeightsOfPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights-of-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::ExtensionObject()
    :
    type{YType::enumeration, "type"}
    	,
    sfecd_le(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe>())
{
    sfecd_le->parent = this;

    yang_name = "extension-object"; yang_parent_name = "exact-route"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::~ExtensionObject()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::has_data() const
{
    return type.is_set
	|| (sfecd_le !=  nullptr && sfecd_le->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfecd_le !=  nullptr && sfecd_le->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfecd-le")
    {
        if(sfecd_le == nullptr)
        {
            sfecd_le = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe>();
        }
        return sfecd_le;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sfecd_le != nullptr)
    {
        children["sfecd-le"] = sfecd_le;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfecd-le" || name == "type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::SfecdLe()
    :
    context_label{YType::uint32, "context-label"},
    context_label_flag{YType::boolean, "context-label-flag"}
{

    yang_name = "sfecd-le"; yang_parent_name = "extension-object"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::~SfecdLe()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::has_data() const
{
    return context_label.is_set
	|| context_label_flag.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_label.yfilter)
	|| ydk::is_set(context_label_flag.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfecd-le";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_label.is_set || is_set(context_label.yfilter)) leaf_name_data.push_back(context_label.get_name_leafdata());
    if (context_label_flag.is_set || is_set(context_label_flag.yfilter)) leaf_name_data.push_back(context_label_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-label")
    {
        context_label = value;
        context_label.value_namespace = name_space;
        context_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-label-flag")
    {
        context_label_flag = value;
        context_label_flag.value_namespace = name_space;
        context_label_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-label")
    {
        context_label.yfilter = yfilter;
    }
    if(value_path == "context-label-flag")
    {
        context_label_flag.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-label" || name == "context-label-flag")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibEntryPath()
{

    yang_name = "fib-entry-path"; yang_parent_name = "exact-route"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::~FibEntryPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::has_data() const
{
    for (std::size_t index=0; index<fib_sh_tbl_path.size(); index++)
    {
        if(fib_sh_tbl_path[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::has_operation() const
{
    for (std::size_t index=0; index<fib_sh_tbl_path.size(); index++)
    {
        if(fib_sh_tbl_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-entry-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-sh-tbl-path")
    {
        for(auto const & c : fib_sh_tbl_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath>();
        c->parent = this;
        fib_sh_tbl_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fib_sh_tbl_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-sh-tbl-path")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::FibShTblPath()
    :
    attached_path{YType::boolean, "attached-path"},
    backup_index{YType::uint8, "backup-index"},
    backup_path{YType::boolean, "backup-path"},
    best_external_path{YType::boolean, "best-external-path"},
    brief_interface_handle{YType::str, "brief-interface-handle"},
    brief_lfa_protection_type{YType::enumeration, "brief-lfa-protection-type"},
    brief_next_hop_prefix{YType::str, "brief-next-hop-prefix"},
    brief_pnode_address{YType::str, "brief-pnode-address"},
    brief_qnode_address{YType::str, "brief-qnode-address"},
    hardware_information{YType::str, "hardware-information"},
    next_hop_index{YType::uint32, "next-hop-index"},
    packets_received_path{YType::boolean, "packets-received-path"},
    parent_interface_handle{YType::str, "parent-interface-handle"},
    path_dlb{YType::boolean, "path-dlb"},
    path_flags{YType::uint32, "path-flags"},
    path_index{YType::uint8, "path-index"},
    path_info_flags{YType::uint16, "path-info-flags"},
    protect_ignore{YType::boolean, "protect-ignore"},
    recursionvia_len{YType::uint8, "recursionvia-len"},
    recursive_path{YType::boolean, "recursive-path"},
    resolved_path{YType::boolean, "resolved-path"},
    via_label_to_recurse{YType::uint32, "via-label-to-recurse"}
    	,
    more_detail_about_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath>())
	,mpls_information_for_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath>())
{
    more_detail_about_path->parent = this;
    mpls_information_for_path->parent = this;

    yang_name = "fib-sh-tbl-path"; yang_parent_name = "fib-entry-path"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::~FibShTblPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::has_data() const
{
    return attached_path.is_set
	|| backup_index.is_set
	|| backup_path.is_set
	|| best_external_path.is_set
	|| brief_interface_handle.is_set
	|| brief_lfa_protection_type.is_set
	|| brief_next_hop_prefix.is_set
	|| brief_pnode_address.is_set
	|| brief_qnode_address.is_set
	|| hardware_information.is_set
	|| next_hop_index.is_set
	|| packets_received_path.is_set
	|| parent_interface_handle.is_set
	|| path_dlb.is_set
	|| path_flags.is_set
	|| path_index.is_set
	|| path_info_flags.is_set
	|| protect_ignore.is_set
	|| recursionvia_len.is_set
	|| recursive_path.is_set
	|| resolved_path.is_set
	|| via_label_to_recurse.is_set
	|| (more_detail_about_path !=  nullptr && more_detail_about_path->has_data())
	|| (mpls_information_for_path !=  nullptr && mpls_information_for_path->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attached_path.yfilter)
	|| ydk::is_set(backup_index.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(best_external_path.yfilter)
	|| ydk::is_set(brief_interface_handle.yfilter)
	|| ydk::is_set(brief_lfa_protection_type.yfilter)
	|| ydk::is_set(brief_next_hop_prefix.yfilter)
	|| ydk::is_set(brief_pnode_address.yfilter)
	|| ydk::is_set(brief_qnode_address.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(next_hop_index.yfilter)
	|| ydk::is_set(packets_received_path.yfilter)
	|| ydk::is_set(parent_interface_handle.yfilter)
	|| ydk::is_set(path_dlb.yfilter)
	|| ydk::is_set(path_flags.yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(path_info_flags.yfilter)
	|| ydk::is_set(protect_ignore.yfilter)
	|| ydk::is_set(recursionvia_len.yfilter)
	|| ydk::is_set(recursive_path.yfilter)
	|| ydk::is_set(resolved_path.yfilter)
	|| ydk::is_set(via_label_to_recurse.yfilter)
	|| (more_detail_about_path !=  nullptr && more_detail_about_path->has_operation())
	|| (mpls_information_for_path !=  nullptr && mpls_information_for_path->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-sh-tbl-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attached_path.is_set || is_set(attached_path.yfilter)) leaf_name_data.push_back(attached_path.get_name_leafdata());
    if (backup_index.is_set || is_set(backup_index.yfilter)) leaf_name_data.push_back(backup_index.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.yfilter)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (best_external_path.is_set || is_set(best_external_path.yfilter)) leaf_name_data.push_back(best_external_path.get_name_leafdata());
    if (brief_interface_handle.is_set || is_set(brief_interface_handle.yfilter)) leaf_name_data.push_back(brief_interface_handle.get_name_leafdata());
    if (brief_lfa_protection_type.is_set || is_set(brief_lfa_protection_type.yfilter)) leaf_name_data.push_back(brief_lfa_protection_type.get_name_leafdata());
    if (brief_next_hop_prefix.is_set || is_set(brief_next_hop_prefix.yfilter)) leaf_name_data.push_back(brief_next_hop_prefix.get_name_leafdata());
    if (brief_pnode_address.is_set || is_set(brief_pnode_address.yfilter)) leaf_name_data.push_back(brief_pnode_address.get_name_leafdata());
    if (brief_qnode_address.is_set || is_set(brief_qnode_address.yfilter)) leaf_name_data.push_back(brief_qnode_address.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (next_hop_index.is_set || is_set(next_hop_index.yfilter)) leaf_name_data.push_back(next_hop_index.get_name_leafdata());
    if (packets_received_path.is_set || is_set(packets_received_path.yfilter)) leaf_name_data.push_back(packets_received_path.get_name_leafdata());
    if (parent_interface_handle.is_set || is_set(parent_interface_handle.yfilter)) leaf_name_data.push_back(parent_interface_handle.get_name_leafdata());
    if (path_dlb.is_set || is_set(path_dlb.yfilter)) leaf_name_data.push_back(path_dlb.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.yfilter)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (path_info_flags.is_set || is_set(path_info_flags.yfilter)) leaf_name_data.push_back(path_info_flags.get_name_leafdata());
    if (protect_ignore.is_set || is_set(protect_ignore.yfilter)) leaf_name_data.push_back(protect_ignore.get_name_leafdata());
    if (recursionvia_len.is_set || is_set(recursionvia_len.yfilter)) leaf_name_data.push_back(recursionvia_len.get_name_leafdata());
    if (recursive_path.is_set || is_set(recursive_path.yfilter)) leaf_name_data.push_back(recursive_path.get_name_leafdata());
    if (resolved_path.is_set || is_set(resolved_path.yfilter)) leaf_name_data.push_back(resolved_path.get_name_leafdata());
    if (via_label_to_recurse.is_set || is_set(via_label_to_recurse.yfilter)) leaf_name_data.push_back(via_label_to_recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "more-detail-about-path")
    {
        if(more_detail_about_path == nullptr)
        {
            more_detail_about_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath>();
        }
        return more_detail_about_path;
    }

    if(child_yang_name == "mpls-information-for-path")
    {
        if(mpls_information_for_path == nullptr)
        {
            mpls_information_for_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath>();
        }
        return mpls_information_for_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(more_detail_about_path != nullptr)
    {
        children["more-detail-about-path"] = more_detail_about_path;
    }

    if(mpls_information_for_path != nullptr)
    {
        children["mpls-information-for-path"] = mpls_information_for_path;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attached-path")
    {
        attached_path = value;
        attached_path.value_namespace = name_space;
        attached_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-index")
    {
        backup_index = value;
        backup_index.value_namespace = name_space;
        backup_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
        backup_path.value_namespace = name_space;
        backup_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external-path")
    {
        best_external_path = value;
        best_external_path.value_namespace = name_space;
        best_external_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brief-interface-handle")
    {
        brief_interface_handle = value;
        brief_interface_handle.value_namespace = name_space;
        brief_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brief-lfa-protection-type")
    {
        brief_lfa_protection_type = value;
        brief_lfa_protection_type.value_namespace = name_space;
        brief_lfa_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brief-next-hop-prefix")
    {
        brief_next_hop_prefix = value;
        brief_next_hop_prefix.value_namespace = name_space;
        brief_next_hop_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brief-pnode-address")
    {
        brief_pnode_address = value;
        brief_pnode_address.value_namespace = name_space;
        brief_pnode_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brief-qnode-address")
    {
        brief_qnode_address = value;
        brief_qnode_address.value_namespace = name_space;
        brief_qnode_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-index")
    {
        next_hop_index = value;
        next_hop_index.value_namespace = name_space;
        next_hop_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received-path")
    {
        packets_received_path = value;
        packets_received_path.value_namespace = name_space;
        packets_received_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle = value;
        parent_interface_handle.value_namespace = name_space;
        parent_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-dlb")
    {
        path_dlb = value;
        path_dlb.value_namespace = name_space;
        path_dlb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
        path_flags.value_namespace = name_space;
        path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-info-flags")
    {
        path_info_flags = value;
        path_info_flags.value_namespace = name_space;
        path_info_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-ignore")
    {
        protect_ignore = value;
        protect_ignore.value_namespace = name_space;
        protect_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursionvia-len")
    {
        recursionvia_len = value;
        recursionvia_len.value_namespace = name_space;
        recursionvia_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-path")
    {
        recursive_path = value;
        recursive_path.value_namespace = name_space;
        recursive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved-path")
    {
        resolved_path = value;
        resolved_path.value_namespace = name_space;
        resolved_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "via-label-to-recurse")
    {
        via_label_to_recurse = value;
        via_label_to_recurse.value_namespace = name_space;
        via_label_to_recurse.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attached-path")
    {
        attached_path.yfilter = yfilter;
    }
    if(value_path == "backup-index")
    {
        backup_index.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "best-external-path")
    {
        best_external_path.yfilter = yfilter;
    }
    if(value_path == "brief-interface-handle")
    {
        brief_interface_handle.yfilter = yfilter;
    }
    if(value_path == "brief-lfa-protection-type")
    {
        brief_lfa_protection_type.yfilter = yfilter;
    }
    if(value_path == "brief-next-hop-prefix")
    {
        brief_next_hop_prefix.yfilter = yfilter;
    }
    if(value_path == "brief-pnode-address")
    {
        brief_pnode_address.yfilter = yfilter;
    }
    if(value_path == "brief-qnode-address")
    {
        brief_qnode_address.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "next-hop-index")
    {
        next_hop_index.yfilter = yfilter;
    }
    if(value_path == "packets-received-path")
    {
        packets_received_path.yfilter = yfilter;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle.yfilter = yfilter;
    }
    if(value_path == "path-dlb")
    {
        path_dlb.yfilter = yfilter;
    }
    if(value_path == "path-flags")
    {
        path_flags.yfilter = yfilter;
    }
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "path-info-flags")
    {
        path_info_flags.yfilter = yfilter;
    }
    if(value_path == "protect-ignore")
    {
        protect_ignore.yfilter = yfilter;
    }
    if(value_path == "recursionvia-len")
    {
        recursionvia_len.yfilter = yfilter;
    }
    if(value_path == "recursive-path")
    {
        recursive_path.yfilter = yfilter;
    }
    if(value_path == "resolved-path")
    {
        resolved_path.yfilter = yfilter;
    }
    if(value_path == "via-label-to-recurse")
    {
        via_label_to_recurse.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "more-detail-about-path" || name == "mpls-information-for-path" || name == "attached-path" || name == "backup-index" || name == "backup-path" || name == "best-external-path" || name == "brief-interface-handle" || name == "brief-lfa-protection-type" || name == "brief-next-hop-prefix" || name == "brief-pnode-address" || name == "brief-qnode-address" || name == "hardware-information" || name == "next-hop-index" || name == "packets-received-path" || name == "parent-interface-handle" || name == "path-dlb" || name == "path-flags" || name == "path-index" || name == "path-info-flags" || name == "protect-ignore" || name == "recursionvia-len" || name == "recursive-path" || name == "resolved-path" || name == "via-label-to-recurse")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::MoreDetailAboutPath()
    :
    current_path_flag{YType::boolean, "current-path-flag"},
    detail_fib_adjacency_type{YType::enumeration, "detail-fib-adjacency-type"},
    detail_next_hop_prefix{YType::str, "detail-next-hop-prefix"},
    external_adjacency{YType::boolean, "external-adjacency"},
    fib_path_nh_information_type{YType::enumeration, "fib-path-nh-information-type"},
    fib_path_nh_information_type_special{YType::enumeration, "fib-path-nh-information-type-special"},
    interface_associated_path{YType::str, "interface-associated-path"},
    ip_address_to_recurse{YType::str, "ip-address-to-recurse"},
    label_to_recurse{YType::uint32, "label-to-recurse"},
    lisprlocid{YType::uint32, "lisprlocid"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_mask_length{YType::uint8, "next-hop-mask-length"},
    next_hop_vrf{YType::str, "next-hop-vrf"},
    next_prefix_length{YType::uint8, "next-prefix-length"},
    next_prefix_length2{YType::uint8, "next-prefix-length2"},
    next_prefix_recursion{YType::str, "next-prefix-recursion"},
    next_prefix_recursion2{YType::str, "next-prefix-recursion2"},
    number_of_dependencies_this_path{YType::uint32, "number-of-dependencies-this-path"},
    recurse_prefix_object{YType::boolean, "recurse-prefix-object"},
    recurse_prefix_object2{YType::boolean, "recurse-prefix-object2"},
    recursive_path_information{YType::boolean, "recursive-path-information"},
    robin_reset_value{YType::uint8, "robin-reset-value"},
    tunnel_class{YType::uint8, "tunnel-class"},
    tunnel_is_forward_class{YType::boolean, "tunnel-is-forward-class"},
    tunnle_endpoint_id{YType::uint32, "tunnle-endpoint-id"},
    weight_of_path{YType::uint32, "weight-of-path"}
{

    yang_name = "more-detail-about-path"; yang_parent_name = "fib-sh-tbl-path"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::~MoreDetailAboutPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_data() const
{
    for (std::size_t index=0; index<spd_ipencap.size(); index++)
    {
        if(spd_ipencap[index]->has_data())
            return true;
    }
    return current_path_flag.is_set
	|| detail_fib_adjacency_type.is_set
	|| detail_next_hop_prefix.is_set
	|| external_adjacency.is_set
	|| fib_path_nh_information_type.is_set
	|| fib_path_nh_information_type_special.is_set
	|| interface_associated_path.is_set
	|| ip_address_to_recurse.is_set
	|| label_to_recurse.is_set
	|| lisprlocid.is_set
	|| next_hop_interface.is_set
	|| next_hop_mask_length.is_set
	|| next_hop_vrf.is_set
	|| next_prefix_length.is_set
	|| next_prefix_length2.is_set
	|| next_prefix_recursion.is_set
	|| next_prefix_recursion2.is_set
	|| number_of_dependencies_this_path.is_set
	|| recurse_prefix_object.is_set
	|| recurse_prefix_object2.is_set
	|| recursive_path_information.is_set
	|| robin_reset_value.is_set
	|| tunnel_class.is_set
	|| tunnel_is_forward_class.is_set
	|| tunnle_endpoint_id.is_set
	|| weight_of_path.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_operation() const
{
    for (std::size_t index=0; index<spd_ipencap.size(); index++)
    {
        if(spd_ipencap[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(current_path_flag.yfilter)
	|| ydk::is_set(detail_fib_adjacency_type.yfilter)
	|| ydk::is_set(detail_next_hop_prefix.yfilter)
	|| ydk::is_set(external_adjacency.yfilter)
	|| ydk::is_set(fib_path_nh_information_type.yfilter)
	|| ydk::is_set(fib_path_nh_information_type_special.yfilter)
	|| ydk::is_set(interface_associated_path.yfilter)
	|| ydk::is_set(ip_address_to_recurse.yfilter)
	|| ydk::is_set(label_to_recurse.yfilter)
	|| ydk::is_set(lisprlocid.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_mask_length.yfilter)
	|| ydk::is_set(next_hop_vrf.yfilter)
	|| ydk::is_set(next_prefix_length.yfilter)
	|| ydk::is_set(next_prefix_length2.yfilter)
	|| ydk::is_set(next_prefix_recursion.yfilter)
	|| ydk::is_set(next_prefix_recursion2.yfilter)
	|| ydk::is_set(number_of_dependencies_this_path.yfilter)
	|| ydk::is_set(recurse_prefix_object.yfilter)
	|| ydk::is_set(recurse_prefix_object2.yfilter)
	|| ydk::is_set(recursive_path_information.yfilter)
	|| ydk::is_set(robin_reset_value.yfilter)
	|| ydk::is_set(tunnel_class.yfilter)
	|| ydk::is_set(tunnel_is_forward_class.yfilter)
	|| ydk::is_set(tunnle_endpoint_id.yfilter)
	|| ydk::is_set(weight_of_path.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "more-detail-about-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_path_flag.is_set || is_set(current_path_flag.yfilter)) leaf_name_data.push_back(current_path_flag.get_name_leafdata());
    if (detail_fib_adjacency_type.is_set || is_set(detail_fib_adjacency_type.yfilter)) leaf_name_data.push_back(detail_fib_adjacency_type.get_name_leafdata());
    if (detail_next_hop_prefix.is_set || is_set(detail_next_hop_prefix.yfilter)) leaf_name_data.push_back(detail_next_hop_prefix.get_name_leafdata());
    if (external_adjacency.is_set || is_set(external_adjacency.yfilter)) leaf_name_data.push_back(external_adjacency.get_name_leafdata());
    if (fib_path_nh_information_type.is_set || is_set(fib_path_nh_information_type.yfilter)) leaf_name_data.push_back(fib_path_nh_information_type.get_name_leafdata());
    if (fib_path_nh_information_type_special.is_set || is_set(fib_path_nh_information_type_special.yfilter)) leaf_name_data.push_back(fib_path_nh_information_type_special.get_name_leafdata());
    if (interface_associated_path.is_set || is_set(interface_associated_path.yfilter)) leaf_name_data.push_back(interface_associated_path.get_name_leafdata());
    if (ip_address_to_recurse.is_set || is_set(ip_address_to_recurse.yfilter)) leaf_name_data.push_back(ip_address_to_recurse.get_name_leafdata());
    if (label_to_recurse.is_set || is_set(label_to_recurse.yfilter)) leaf_name_data.push_back(label_to_recurse.get_name_leafdata());
    if (lisprlocid.is_set || is_set(lisprlocid.yfilter)) leaf_name_data.push_back(lisprlocid.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_mask_length.is_set || is_set(next_hop_mask_length.yfilter)) leaf_name_data.push_back(next_hop_mask_length.get_name_leafdata());
    if (next_hop_vrf.is_set || is_set(next_hop_vrf.yfilter)) leaf_name_data.push_back(next_hop_vrf.get_name_leafdata());
    if (next_prefix_length.is_set || is_set(next_prefix_length.yfilter)) leaf_name_data.push_back(next_prefix_length.get_name_leafdata());
    if (next_prefix_length2.is_set || is_set(next_prefix_length2.yfilter)) leaf_name_data.push_back(next_prefix_length2.get_name_leafdata());
    if (next_prefix_recursion.is_set || is_set(next_prefix_recursion.yfilter)) leaf_name_data.push_back(next_prefix_recursion.get_name_leafdata());
    if (next_prefix_recursion2.is_set || is_set(next_prefix_recursion2.yfilter)) leaf_name_data.push_back(next_prefix_recursion2.get_name_leafdata());
    if (number_of_dependencies_this_path.is_set || is_set(number_of_dependencies_this_path.yfilter)) leaf_name_data.push_back(number_of_dependencies_this_path.get_name_leafdata());
    if (recurse_prefix_object.is_set || is_set(recurse_prefix_object.yfilter)) leaf_name_data.push_back(recurse_prefix_object.get_name_leafdata());
    if (recurse_prefix_object2.is_set || is_set(recurse_prefix_object2.yfilter)) leaf_name_data.push_back(recurse_prefix_object2.get_name_leafdata());
    if (recursive_path_information.is_set || is_set(recursive_path_information.yfilter)) leaf_name_data.push_back(recursive_path_information.get_name_leafdata());
    if (robin_reset_value.is_set || is_set(robin_reset_value.yfilter)) leaf_name_data.push_back(robin_reset_value.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.yfilter)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());
    if (tunnel_is_forward_class.is_set || is_set(tunnel_is_forward_class.yfilter)) leaf_name_data.push_back(tunnel_is_forward_class.get_name_leafdata());
    if (tunnle_endpoint_id.is_set || is_set(tunnle_endpoint_id.yfilter)) leaf_name_data.push_back(tunnle_endpoint_id.get_name_leafdata());
    if (weight_of_path.is_set || is_set(weight_of_path.yfilter)) leaf_name_data.push_back(weight_of_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spd-ipencap")
    {
        for(auto const & c : spd_ipencap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap>();
        c->parent = this;
        spd_ipencap.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : spd_ipencap)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-path-flag")
    {
        current_path_flag = value;
        current_path_flag.value_namespace = name_space;
        current_path_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail-fib-adjacency-type")
    {
        detail_fib_adjacency_type = value;
        detail_fib_adjacency_type.value_namespace = name_space;
        detail_fib_adjacency_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail-next-hop-prefix")
    {
        detail_next_hop_prefix = value;
        detail_next_hop_prefix.value_namespace = name_space;
        detail_next_hop_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-adjacency")
    {
        external_adjacency = value;
        external_adjacency.value_namespace = name_space;
        external_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-path-nh-information-type")
    {
        fib_path_nh_information_type = value;
        fib_path_nh_information_type.value_namespace = name_space;
        fib_path_nh_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-path-nh-information-type-special")
    {
        fib_path_nh_information_type_special = value;
        fib_path_nh_information_type_special.value_namespace = name_space;
        fib_path_nh_information_type_special.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-associated-path")
    {
        interface_associated_path = value;
        interface_associated_path.value_namespace = name_space;
        interface_associated_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-to-recurse")
    {
        ip_address_to_recurse = value;
        ip_address_to_recurse.value_namespace = name_space;
        ip_address_to_recurse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-to-recurse")
    {
        label_to_recurse = value;
        label_to_recurse.value_namespace = name_space;
        label_to_recurse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisprlocid")
    {
        lisprlocid = value;
        lisprlocid.value_namespace = name_space;
        lisprlocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-mask-length")
    {
        next_hop_mask_length = value;
        next_hop_mask_length.value_namespace = name_space;
        next_hop_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-vrf")
    {
        next_hop_vrf = value;
        next_hop_vrf.value_namespace = name_space;
        next_hop_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-prefix-length")
    {
        next_prefix_length = value;
        next_prefix_length.value_namespace = name_space;
        next_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-prefix-length2")
    {
        next_prefix_length2 = value;
        next_prefix_length2.value_namespace = name_space;
        next_prefix_length2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-prefix-recursion")
    {
        next_prefix_recursion = value;
        next_prefix_recursion.value_namespace = name_space;
        next_prefix_recursion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-prefix-recursion2")
    {
        next_prefix_recursion2 = value;
        next_prefix_recursion2.value_namespace = name_space;
        next_prefix_recursion2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-dependencies-this-path")
    {
        number_of_dependencies_this_path = value;
        number_of_dependencies_this_path.value_namespace = name_space;
        number_of_dependencies_this_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse-prefix-object")
    {
        recurse_prefix_object = value;
        recurse_prefix_object.value_namespace = name_space;
        recurse_prefix_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse-prefix-object2")
    {
        recurse_prefix_object2 = value;
        recurse_prefix_object2.value_namespace = name_space;
        recurse_prefix_object2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-path-information")
    {
        recursive_path_information = value;
        recursive_path_information.value_namespace = name_space;
        recursive_path_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robin-reset-value")
    {
        robin_reset_value = value;
        robin_reset_value.value_namespace = name_space;
        robin_reset_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
        tunnel_class.value_namespace = name_space;
        tunnel_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-forward-class")
    {
        tunnel_is_forward_class = value;
        tunnel_is_forward_class.value_namespace = name_space;
        tunnel_is_forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnle-endpoint-id")
    {
        tunnle_endpoint_id = value;
        tunnle_endpoint_id.value_namespace = name_space;
        tunnle_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight-of-path")
    {
        weight_of_path = value;
        weight_of_path.value_namespace = name_space;
        weight_of_path.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-path-flag")
    {
        current_path_flag.yfilter = yfilter;
    }
    if(value_path == "detail-fib-adjacency-type")
    {
        detail_fib_adjacency_type.yfilter = yfilter;
    }
    if(value_path == "detail-next-hop-prefix")
    {
        detail_next_hop_prefix.yfilter = yfilter;
    }
    if(value_path == "external-adjacency")
    {
        external_adjacency.yfilter = yfilter;
    }
    if(value_path == "fib-path-nh-information-type")
    {
        fib_path_nh_information_type.yfilter = yfilter;
    }
    if(value_path == "fib-path-nh-information-type-special")
    {
        fib_path_nh_information_type_special.yfilter = yfilter;
    }
    if(value_path == "interface-associated-path")
    {
        interface_associated_path.yfilter = yfilter;
    }
    if(value_path == "ip-address-to-recurse")
    {
        ip_address_to_recurse.yfilter = yfilter;
    }
    if(value_path == "label-to-recurse")
    {
        label_to_recurse.yfilter = yfilter;
    }
    if(value_path == "lisprlocid")
    {
        lisprlocid.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-mask-length")
    {
        next_hop_mask_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-vrf")
    {
        next_hop_vrf.yfilter = yfilter;
    }
    if(value_path == "next-prefix-length")
    {
        next_prefix_length.yfilter = yfilter;
    }
    if(value_path == "next-prefix-length2")
    {
        next_prefix_length2.yfilter = yfilter;
    }
    if(value_path == "next-prefix-recursion")
    {
        next_prefix_recursion.yfilter = yfilter;
    }
    if(value_path == "next-prefix-recursion2")
    {
        next_prefix_recursion2.yfilter = yfilter;
    }
    if(value_path == "number-of-dependencies-this-path")
    {
        number_of_dependencies_this_path.yfilter = yfilter;
    }
    if(value_path == "recurse-prefix-object")
    {
        recurse_prefix_object.yfilter = yfilter;
    }
    if(value_path == "recurse-prefix-object2")
    {
        recurse_prefix_object2.yfilter = yfilter;
    }
    if(value_path == "recursive-path-information")
    {
        recursive_path_information.yfilter = yfilter;
    }
    if(value_path == "robin-reset-value")
    {
        robin_reset_value.yfilter = yfilter;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-forward-class")
    {
        tunnel_is_forward_class.yfilter = yfilter;
    }
    if(value_path == "tunnle-endpoint-id")
    {
        tunnle_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "weight-of-path")
    {
        weight_of_path.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spd-ipencap" || name == "current-path-flag" || name == "detail-fib-adjacency-type" || name == "detail-next-hop-prefix" || name == "external-adjacency" || name == "fib-path-nh-information-type" || name == "fib-path-nh-information-type-special" || name == "interface-associated-path" || name == "ip-address-to-recurse" || name == "label-to-recurse" || name == "lisprlocid" || name == "next-hop-interface" || name == "next-hop-mask-length" || name == "next-hop-vrf" || name == "next-prefix-length" || name == "next-prefix-length2" || name == "next-prefix-recursion" || name == "next-prefix-recursion2" || name == "number-of-dependencies-this-path" || name == "recurse-prefix-object" || name == "recurse-prefix-object2" || name == "recursive-path-information" || name == "robin-reset-value" || name == "tunnel-class" || name == "tunnel-is-forward-class" || name == "tunnle-endpoint-id" || name == "weight-of-path")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::SpdIpencap()
    :
    ip_encap_hdr_count{YType::uint8, "ip-encap-hdr-count"},
    ip_encap_locks{YType::uint32, "ip-encap-locks"},
    ip_encap_parent{YType::uint32, "ip-encap-parent"},
    ip_encap_parent_type{YType::uint32, "ip-encap-parent-type"},
    ip_encap_payload_af{YType::uint32, "ip-encap-payload-af"},
    ip_encap_payload_mtu{YType::uint16, "ip-encap-payload-mtu"},
    ip_encap_transport_af{YType::uint32, "ip-encap-transport-af"},
    ip_encap_transport_tbl{YType::uint32, "ip-encap-transport-tbl"},
    ipe_transport_vrf_name{YType::str, "ipe-transport-vrf-name"}
{

    yang_name = "spd-ipencap"; yang_parent_name = "more-detail-about-path"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::~SpdIpencap()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_data() const
{
    for (std::size_t index=0; index<ip_encap_hdr.size(); index++)
    {
        if(ip_encap_hdr[index]->has_data())
            return true;
    }
    return ip_encap_hdr_count.is_set
	|| ip_encap_locks.is_set
	|| ip_encap_parent.is_set
	|| ip_encap_parent_type.is_set
	|| ip_encap_payload_af.is_set
	|| ip_encap_payload_mtu.is_set
	|| ip_encap_transport_af.is_set
	|| ip_encap_transport_tbl.is_set
	|| ipe_transport_vrf_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_operation() const
{
    for (std::size_t index=0; index<ip_encap_hdr.size(); index++)
    {
        if(ip_encap_hdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip_encap_hdr_count.yfilter)
	|| ydk::is_set(ip_encap_locks.yfilter)
	|| ydk::is_set(ip_encap_parent.yfilter)
	|| ydk::is_set(ip_encap_parent_type.yfilter)
	|| ydk::is_set(ip_encap_payload_af.yfilter)
	|| ydk::is_set(ip_encap_payload_mtu.yfilter)
	|| ydk::is_set(ip_encap_transport_af.yfilter)
	|| ydk::is_set(ip_encap_transport_tbl.yfilter)
	|| ydk::is_set(ipe_transport_vrf_name.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd-ipencap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_encap_hdr_count.is_set || is_set(ip_encap_hdr_count.yfilter)) leaf_name_data.push_back(ip_encap_hdr_count.get_name_leafdata());
    if (ip_encap_locks.is_set || is_set(ip_encap_locks.yfilter)) leaf_name_data.push_back(ip_encap_locks.get_name_leafdata());
    if (ip_encap_parent.is_set || is_set(ip_encap_parent.yfilter)) leaf_name_data.push_back(ip_encap_parent.get_name_leafdata());
    if (ip_encap_parent_type.is_set || is_set(ip_encap_parent_type.yfilter)) leaf_name_data.push_back(ip_encap_parent_type.get_name_leafdata());
    if (ip_encap_payload_af.is_set || is_set(ip_encap_payload_af.yfilter)) leaf_name_data.push_back(ip_encap_payload_af.get_name_leafdata());
    if (ip_encap_payload_mtu.is_set || is_set(ip_encap_payload_mtu.yfilter)) leaf_name_data.push_back(ip_encap_payload_mtu.get_name_leafdata());
    if (ip_encap_transport_af.is_set || is_set(ip_encap_transport_af.yfilter)) leaf_name_data.push_back(ip_encap_transport_af.get_name_leafdata());
    if (ip_encap_transport_tbl.is_set || is_set(ip_encap_transport_tbl.yfilter)) leaf_name_data.push_back(ip_encap_transport_tbl.get_name_leafdata());
    if (ipe_transport_vrf_name.is_set || is_set(ipe_transport_vrf_name.yfilter)) leaf_name_data.push_back(ipe_transport_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-encap-hdr")
    {
        for(auto const & c : ip_encap_hdr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr>();
        c->parent = this;
        ip_encap_hdr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_encap_hdr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-encap-hdr-count")
    {
        ip_encap_hdr_count = value;
        ip_encap_hdr_count.value_namespace = name_space;
        ip_encap_hdr_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-locks")
    {
        ip_encap_locks = value;
        ip_encap_locks.value_namespace = name_space;
        ip_encap_locks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-parent")
    {
        ip_encap_parent = value;
        ip_encap_parent.value_namespace = name_space;
        ip_encap_parent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-parent-type")
    {
        ip_encap_parent_type = value;
        ip_encap_parent_type.value_namespace = name_space;
        ip_encap_parent_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-payload-af")
    {
        ip_encap_payload_af = value;
        ip_encap_payload_af.value_namespace = name_space;
        ip_encap_payload_af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-payload-mtu")
    {
        ip_encap_payload_mtu = value;
        ip_encap_payload_mtu.value_namespace = name_space;
        ip_encap_payload_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-transport-af")
    {
        ip_encap_transport_af = value;
        ip_encap_transport_af.value_namespace = name_space;
        ip_encap_transport_af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-transport-tbl")
    {
        ip_encap_transport_tbl = value;
        ip_encap_transport_tbl.value_namespace = name_space;
        ip_encap_transport_tbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipe-transport-vrf-name")
    {
        ipe_transport_vrf_name = value;
        ipe_transport_vrf_name.value_namespace = name_space;
        ipe_transport_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-encap-hdr-count")
    {
        ip_encap_hdr_count.yfilter = yfilter;
    }
    if(value_path == "ip-encap-locks")
    {
        ip_encap_locks.yfilter = yfilter;
    }
    if(value_path == "ip-encap-parent")
    {
        ip_encap_parent.yfilter = yfilter;
    }
    if(value_path == "ip-encap-parent-type")
    {
        ip_encap_parent_type.yfilter = yfilter;
    }
    if(value_path == "ip-encap-payload-af")
    {
        ip_encap_payload_af.yfilter = yfilter;
    }
    if(value_path == "ip-encap-payload-mtu")
    {
        ip_encap_payload_mtu.yfilter = yfilter;
    }
    if(value_path == "ip-encap-transport-af")
    {
        ip_encap_transport_af.yfilter = yfilter;
    }
    if(value_path == "ip-encap-transport-tbl")
    {
        ip_encap_transport_tbl.yfilter = yfilter;
    }
    if(value_path == "ipe-transport-vrf-name")
    {
        ipe_transport_vrf_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-encap-hdr" || name == "ip-encap-hdr-count" || name == "ip-encap-locks" || name == "ip-encap-parent" || name == "ip-encap-parent-type" || name == "ip-encap-payload-af" || name == "ip-encap-payload-mtu" || name == "ip-encap-transport-af" || name == "ip-encap-transport-tbl" || name == "ipe-transport-vrf-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::IpEncapHdr()
    :
    ip_encap_hdr_dyn{YType::uint32, "ip-encap-hdr-dyn"},
    ip_encap_hdr_type{YType::enumeration, "ip-encap-hdr-type"},
    ip_encap_hdrp{YType::str, "ip-encap-hdrp"}
{

    yang_name = "ip-encap-hdr"; yang_parent_name = "spd-ipencap"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::~IpEncapHdr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_data() const
{
    return ip_encap_hdr_dyn.is_set
	|| ip_encap_hdr_type.is_set
	|| ip_encap_hdrp.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_encap_hdr_dyn.yfilter)
	|| ydk::is_set(ip_encap_hdr_type.yfilter)
	|| ydk::is_set(ip_encap_hdrp.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-encap-hdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_encap_hdr_dyn.is_set || is_set(ip_encap_hdr_dyn.yfilter)) leaf_name_data.push_back(ip_encap_hdr_dyn.get_name_leafdata());
    if (ip_encap_hdr_type.is_set || is_set(ip_encap_hdr_type.yfilter)) leaf_name_data.push_back(ip_encap_hdr_type.get_name_leafdata());
    if (ip_encap_hdrp.is_set || is_set(ip_encap_hdrp.yfilter)) leaf_name_data.push_back(ip_encap_hdrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-encap-hdr-dyn")
    {
        ip_encap_hdr_dyn = value;
        ip_encap_hdr_dyn.value_namespace = name_space;
        ip_encap_hdr_dyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-hdr-type")
    {
        ip_encap_hdr_type = value;
        ip_encap_hdr_type.value_namespace = name_space;
        ip_encap_hdr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-encap-hdrp")
    {
        ip_encap_hdrp = value;
        ip_encap_hdrp.value_namespace = name_space;
        ip_encap_hdrp.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-encap-hdr-dyn")
    {
        ip_encap_hdr_dyn.yfilter = yfilter;
    }
    if(value_path == "ip-encap-hdr-type")
    {
        ip_encap_hdr_type.yfilter = yfilter;
    }
    if(value_path == "ip-encap-hdrp")
    {
        ip_encap_hdrp.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-encap-hdr-dyn" || name == "ip-encap-hdr-type" || name == "ip-encap-hdrp")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::MplsInformationForPath()
    :
    local_lable{YType::uint32, "local-lable"},
    number_of_igp_paths{YType::uint32, "number-of-igp-paths"},
    recursive_fwd_chain{YType::boolean, "recursive-fwd-chain"},
    remote_backup{YType::boolean, "remote-backup"}
{

    yang_name = "mpls-information-for-path"; yang_parent_name = "fib-sh-tbl-path"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::~MplsInformationForPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::has_data() const
{
    for (std::size_t index=0; index<igp_label_stack_array.size(); index++)
    {
        if(igp_label_stack_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<recursive_lbl_stack.size(); index++)
    {
        if(recursive_lbl_stack[index]->has_data())
            return true;
    }
    return local_lable.is_set
	|| number_of_igp_paths.is_set
	|| recursive_fwd_chain.is_set
	|| remote_backup.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::has_operation() const
{
    for (std::size_t index=0; index<igp_label_stack_array.size(); index++)
    {
        if(igp_label_stack_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<recursive_lbl_stack.size(); index++)
    {
        if(recursive_lbl_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_lable.yfilter)
	|| ydk::is_set(number_of_igp_paths.yfilter)
	|| ydk::is_set(recursive_fwd_chain.yfilter)
	|| ydk::is_set(remote_backup.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-information-for-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lable.is_set || is_set(local_lable.yfilter)) leaf_name_data.push_back(local_lable.get_name_leafdata());
    if (number_of_igp_paths.is_set || is_set(number_of_igp_paths.yfilter)) leaf_name_data.push_back(number_of_igp_paths.get_name_leafdata());
    if (recursive_fwd_chain.is_set || is_set(recursive_fwd_chain.yfilter)) leaf_name_data.push_back(recursive_fwd_chain.get_name_leafdata());
    if (remote_backup.is_set || is_set(remote_backup.yfilter)) leaf_name_data.push_back(remote_backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-label-stack-array")
    {
        for(auto const & c : igp_label_stack_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray>();
        c->parent = this;
        igp_label_stack_array.push_back(c);
        return c;
    }

    if(child_yang_name == "recursive-lbl-stack")
    {
        for(auto const & c : recursive_lbl_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack>();
        c->parent = this;
        recursive_lbl_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_label_stack_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : recursive_lbl_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-lable")
    {
        local_lable = value;
        local_lable.value_namespace = name_space;
        local_lable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-igp-paths")
    {
        number_of_igp_paths = value;
        number_of_igp_paths.value_namespace = name_space;
        number_of_igp_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-fwd-chain")
    {
        recursive_fwd_chain = value;
        recursive_fwd_chain.value_namespace = name_space;
        recursive_fwd_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup")
    {
        remote_backup = value;
        remote_backup.value_namespace = name_space;
        remote_backup.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-lable")
    {
        local_lable.yfilter = yfilter;
    }
    if(value_path == "number-of-igp-paths")
    {
        number_of_igp_paths.yfilter = yfilter;
    }
    if(value_path == "recursive-fwd-chain")
    {
        recursive_fwd_chain.yfilter = yfilter;
    }
    if(value_path == "remote-backup")
    {
        remote_backup.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-label-stack-array" || name == "recursive-lbl-stack" || name == "local-lable" || name == "number-of-igp-paths" || name == "recursive-fwd-chain" || name == "remote-backup")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::IgpLabelStackArray()
    :
    nh_address{YType::str, "nh-address"},
    number_of_labels{YType::uint32, "number-of-labels"},
    out_interface{YType::str, "out-interface"}
{

    yang_name = "igp-label-stack-array"; yang_parent_name = "mpls-information-for-path"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::~IgpLabelStackArray()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_data() const
{
    for (std::size_t index=0; index<lstack.size(); index++)
    {
        if(lstack[index]->has_data())
            return true;
    }
    return nh_address.is_set
	|| number_of_labels.is_set
	|| out_interface.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_operation() const
{
    for (std::size_t index=0; index<lstack.size(); index++)
    {
        if(lstack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nh_address.yfilter)
	|| ydk::is_set(number_of_labels.yfilter)
	|| ydk::is_set(out_interface.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-label-stack-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_address.is_set || is_set(nh_address.yfilter)) leaf_name_data.push_back(nh_address.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.yfilter)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lstack")
    {
        for(auto const & c : lstack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack>();
        c->parent = this;
        lstack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lstack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-address")
    {
        nh_address = value;
        nh_address.value_namespace = name_space;
        nh_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
        number_of_labels.value_namespace = name_space;
        number_of_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-address")
    {
        nh_address.yfilter = yfilter;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lstack" || name == "nh-address" || name == "number-of-labels" || name == "out-interface")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::Lstack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "lstack"; yang_parent_name = "igp-label-stack-array"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::~Lstack()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lstack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::RecursiveLblStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "recursive-lbl-stack"; yang_parent_name = "mpls-information-for-path"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::~RecursiveLblStack()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-lbl-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Information()
    :
    route_is_sripv6_flag{YType::boolean, "route-is-sripv6-flag"},
    sripv6_stats_valid_flag{YType::boolean, "sripv6-stats-valid-flag"},
    srv6_pfx_resolved_via_policy_label{YType::boolean, "srv6-pfx-resolved-via-policy-label"}
    	,
    srv6_statistics(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics>())
{
    srv6_statistics->parent = this;

    yang_name = "srv6-information"; yang_parent_name = "exact-route"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::~Srv6Information()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::has_data() const
{
    return route_is_sripv6_flag.is_set
	|| sripv6_stats_valid_flag.is_set
	|| srv6_pfx_resolved_via_policy_label.is_set
	|| (srv6_statistics !=  nullptr && srv6_statistics->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_is_sripv6_flag.yfilter)
	|| ydk::is_set(sripv6_stats_valid_flag.yfilter)
	|| ydk::is_set(srv6_pfx_resolved_via_policy_label.yfilter)
	|| (srv6_statistics !=  nullptr && srv6_statistics->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_is_sripv6_flag.is_set || is_set(route_is_sripv6_flag.yfilter)) leaf_name_data.push_back(route_is_sripv6_flag.get_name_leafdata());
    if (sripv6_stats_valid_flag.is_set || is_set(sripv6_stats_valid_flag.yfilter)) leaf_name_data.push_back(sripv6_stats_valid_flag.get_name_leafdata());
    if (srv6_pfx_resolved_via_policy_label.is_set || is_set(srv6_pfx_resolved_via_policy_label.yfilter)) leaf_name_data.push_back(srv6_pfx_resolved_via_policy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srv6-statistics")
    {
        if(srv6_statistics == nullptr)
        {
            srv6_statistics = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics>();
        }
        return srv6_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srv6_statistics != nullptr)
    {
        children["srv6-statistics"] = srv6_statistics;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-is-sripv6-flag")
    {
        route_is_sripv6_flag = value;
        route_is_sripv6_flag.value_namespace = name_space;
        route_is_sripv6_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sripv6-stats-valid-flag")
    {
        sripv6_stats_valid_flag = value;
        sripv6_stats_valid_flag.value_namespace = name_space;
        sripv6_stats_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-pfx-resolved-via-policy-label")
    {
        srv6_pfx_resolved_via_policy_label = value;
        srv6_pfx_resolved_via_policy_label.value_namespace = name_space;
        srv6_pfx_resolved_via_policy_label.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-is-sripv6-flag")
    {
        route_is_sripv6_flag.yfilter = yfilter;
    }
    if(value_path == "sripv6-stats-valid-flag")
    {
        sripv6_stats_valid_flag.yfilter = yfilter;
    }
    if(value_path == "srv6-pfx-resolved-via-policy-label")
    {
        srv6_pfx_resolved_via_policy_label.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srv6-statistics" || name == "route-is-sripv6-flag" || name == "sripv6-stats-valid-flag" || name == "srv6-pfx-resolved-via-policy-label")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::Srv6Statistics()
    :
    srv6_packets_dropped{YType::uint64, "srv6-packets-dropped"},
    srv6_packets_forwarded{YType::uint64, "srv6-packets-forwarded"}
{

    yang_name = "srv6-statistics"; yang_parent_name = "srv6-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::~Srv6Statistics()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::has_data() const
{
    return srv6_packets_dropped.is_set
	|| srv6_packets_forwarded.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srv6_packets_dropped.yfilter)
	|| ydk::is_set(srv6_packets_forwarded.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6_packets_dropped.is_set || is_set(srv6_packets_dropped.yfilter)) leaf_name_data.push_back(srv6_packets_dropped.get_name_leafdata());
    if (srv6_packets_forwarded.is_set || is_set(srv6_packets_forwarded.yfilter)) leaf_name_data.push_back(srv6_packets_forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srv6-packets-dropped")
    {
        srv6_packets_dropped = value;
        srv6_packets_dropped.value_namespace = name_space;
        srv6_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-packets-forwarded")
    {
        srv6_packets_forwarded = value;
        srv6_packets_forwarded.value_namespace = name_space;
        srv6_packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srv6-packets-dropped")
    {
        srv6_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "srv6-packets-forwarded")
    {
        srv6_packets_forwarded.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srv6-packets-dropped" || name == "srv6-packets-forwarded")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummaries()
{

    yang_name = "external-client-summaries"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::~ExternalClientSummaries()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::has_data() const
{
    for (std::size_t index=0; index<external_client_summary.size(); index++)
    {
        if(external_client_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::has_operation() const
{
    for (std::size_t index=0; index<external_client_summary.size(); index++)
    {
        if(external_client_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-client-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-client-summary")
    {
        for(auto const & c : external_client_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary>();
        c->parent = this;
        external_client_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_client_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-client-summary")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::ExternalClientSummary()
    :
    ecd_ver{YType::int32, "ecd-ver"},
    id{YType::int32, "id"},
    ses_client_name{YType::str, "ses-client-name"},
    ses_client_pulsed_time{YType::uint64, "ses-client-pulsed-time"},
    ses_comp_id{YType::uint32, "ses-comp-id"},
    ses_ecd_version{YType::uint32, "ses-ecd-version"},
    ses_feci_fib_proto{YType::uint32, "ses-feci-fib-proto"},
    ses_num_pending{YType::uint32, "ses-num-pending"},
    ses_num_regs{YType::uint32, "ses-num-regs"}
    	,
    ses_pl_sum(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum>())
{
    ses_pl_sum->parent = this;

    yang_name = "external-client-summary"; yang_parent_name = "external-client-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::~ExternalClientSummary()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::has_data() const
{
    return ecd_ver.is_set
	|| id.is_set
	|| ses_client_name.is_set
	|| ses_client_pulsed_time.is_set
	|| ses_comp_id.is_set
	|| ses_ecd_version.is_set
	|| ses_feci_fib_proto.is_set
	|| ses_num_pending.is_set
	|| ses_num_regs.is_set
	|| (ses_pl_sum !=  nullptr && ses_pl_sum->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecd_ver.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ses_client_name.yfilter)
	|| ydk::is_set(ses_client_pulsed_time.yfilter)
	|| ydk::is_set(ses_comp_id.yfilter)
	|| ydk::is_set(ses_ecd_version.yfilter)
	|| ydk::is_set(ses_feci_fib_proto.yfilter)
	|| ydk::is_set(ses_num_pending.yfilter)
	|| ydk::is_set(ses_num_regs.yfilter)
	|| (ses_pl_sum !=  nullptr && ses_pl_sum->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-client-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecd_ver.is_set || is_set(ecd_ver.yfilter)) leaf_name_data.push_back(ecd_ver.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ses_client_name.is_set || is_set(ses_client_name.yfilter)) leaf_name_data.push_back(ses_client_name.get_name_leafdata());
    if (ses_client_pulsed_time.is_set || is_set(ses_client_pulsed_time.yfilter)) leaf_name_data.push_back(ses_client_pulsed_time.get_name_leafdata());
    if (ses_comp_id.is_set || is_set(ses_comp_id.yfilter)) leaf_name_data.push_back(ses_comp_id.get_name_leafdata());
    if (ses_ecd_version.is_set || is_set(ses_ecd_version.yfilter)) leaf_name_data.push_back(ses_ecd_version.get_name_leafdata());
    if (ses_feci_fib_proto.is_set || is_set(ses_feci_fib_proto.yfilter)) leaf_name_data.push_back(ses_feci_fib_proto.get_name_leafdata());
    if (ses_num_pending.is_set || is_set(ses_num_pending.yfilter)) leaf_name_data.push_back(ses_num_pending.get_name_leafdata());
    if (ses_num_regs.is_set || is_set(ses_num_regs.yfilter)) leaf_name_data.push_back(ses_num_regs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ses-pl-sum")
    {
        if(ses_pl_sum == nullptr)
        {
            ses_pl_sum = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum>();
        }
        return ses_pl_sum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ses_pl_sum != nullptr)
    {
        children["ses-pl-sum"] = ses_pl_sum;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecd-ver")
    {
        ecd_ver = value;
        ecd_ver.value_namespace = name_space;
        ecd_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-client-name")
    {
        ses_client_name = value;
        ses_client_name.value_namespace = name_space;
        ses_client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-client-pulsed-time")
    {
        ses_client_pulsed_time = value;
        ses_client_pulsed_time.value_namespace = name_space;
        ses_client_pulsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-comp-id")
    {
        ses_comp_id = value;
        ses_comp_id.value_namespace = name_space;
        ses_comp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-ecd-version")
    {
        ses_ecd_version = value;
        ses_ecd_version.value_namespace = name_space;
        ses_ecd_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-feci-fib-proto")
    {
        ses_feci_fib_proto = value;
        ses_feci_fib_proto.value_namespace = name_space;
        ses_feci_fib_proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-num-pending")
    {
        ses_num_pending = value;
        ses_num_pending.value_namespace = name_space;
        ses_num_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ses-num-regs")
    {
        ses_num_regs = value;
        ses_num_regs.value_namespace = name_space;
        ses_num_regs.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecd-ver")
    {
        ecd_ver.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ses-client-name")
    {
        ses_client_name.yfilter = yfilter;
    }
    if(value_path == "ses-client-pulsed-time")
    {
        ses_client_pulsed_time.yfilter = yfilter;
    }
    if(value_path == "ses-comp-id")
    {
        ses_comp_id.yfilter = yfilter;
    }
    if(value_path == "ses-ecd-version")
    {
        ses_ecd_version.yfilter = yfilter;
    }
    if(value_path == "ses-feci-fib-proto")
    {
        ses_feci_fib_proto.yfilter = yfilter;
    }
    if(value_path == "ses-num-pending")
    {
        ses_num_pending.yfilter = yfilter;
    }
    if(value_path == "ses-num-regs")
    {
        ses_num_regs.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ses-pl-sum" || name == "ecd-ver" || name == "id" || name == "ses-client-name" || name == "ses-client-pulsed-time" || name == "ses-comp-id" || name == "ses-ecd-version" || name == "ses-feci-fib-proto" || name == "ses-num-pending" || name == "ses-num-regs")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SesPlSum()
    :
    sep_num_ecd_pathlist{YType::uint32, "sep-num-ecd-pathlist"},
    sep_num_ecd_pl_unresolved{YType::uint32, "sep-num-ecd-pl-unresolved"}
{

    yang_name = "ses-pl-sum"; yang_parent_name = "external-client-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::~SesPlSum()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::has_data() const
{
    for (std::size_t index=0; index<sep_num_ecd_pl_per_interest.size(); index++)
    {
        if(sep_num_ecd_pl_per_interest[index]->has_data())
            return true;
    }
    return sep_num_ecd_pathlist.is_set
	|| sep_num_ecd_pl_unresolved.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::has_operation() const
{
    for (std::size_t index=0; index<sep_num_ecd_pl_per_interest.size(); index++)
    {
        if(sep_num_ecd_pl_per_interest[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sep_num_ecd_pathlist.yfilter)
	|| ydk::is_set(sep_num_ecd_pl_unresolved.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-pl-sum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sep_num_ecd_pathlist.is_set || is_set(sep_num_ecd_pathlist.yfilter)) leaf_name_data.push_back(sep_num_ecd_pathlist.get_name_leafdata());
    if (sep_num_ecd_pl_unresolved.is_set || is_set(sep_num_ecd_pl_unresolved.yfilter)) leaf_name_data.push_back(sep_num_ecd_pl_unresolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sep-num-ecd-pl-per-interest")
    {
        for(auto const & c : sep_num_ecd_pl_per_interest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest>();
        c->parent = this;
        sep_num_ecd_pl_per_interest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sep_num_ecd_pl_per_interest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sep-num-ecd-pathlist")
    {
        sep_num_ecd_pathlist = value;
        sep_num_ecd_pathlist.value_namespace = name_space;
        sep_num_ecd_pathlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sep-num-ecd-pl-unresolved")
    {
        sep_num_ecd_pl_unresolved = value;
        sep_num_ecd_pl_unresolved.value_namespace = name_space;
        sep_num_ecd_pl_unresolved.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sep-num-ecd-pathlist")
    {
        sep_num_ecd_pathlist.yfilter = yfilter;
    }
    if(value_path == "sep-num-ecd-pl-unresolved")
    {
        sep_num_ecd_pl_unresolved.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sep-num-ecd-pl-per-interest" || name == "sep-num-ecd-pathlist" || name == "sep-num-ecd-pl-unresolved")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::SepNumEcdPlPerInterest()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sep-num-ecd-pl-per-interest"; yang_parent_name = "ses-pl-sum"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::~SepNumEcdPlPerInterest()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sep-num-ecd-pl-per-interest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::ExternalSummaryAll()
    :
    sesa_num_client{YType::uint32, "sesa-num-client"}
    	,
    sesa_pl_sum(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum>())
{
    sesa_pl_sum->parent = this;

    yang_name = "external-summary-all"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::~ExternalSummaryAll()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::has_data() const
{
    return sesa_num_client.is_set
	|| (sesa_pl_sum !=  nullptr && sesa_pl_sum->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sesa_num_client.yfilter)
	|| (sesa_pl_sum !=  nullptr && sesa_pl_sum->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-summary-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sesa_num_client.is_set || is_set(sesa_num_client.yfilter)) leaf_name_data.push_back(sesa_num_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sesa-pl-sum")
    {
        if(sesa_pl_sum == nullptr)
        {
            sesa_pl_sum = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum>();
        }
        return sesa_pl_sum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sesa_pl_sum != nullptr)
    {
        children["sesa-pl-sum"] = sesa_pl_sum;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sesa-num-client")
    {
        sesa_num_client = value;
        sesa_num_client.value_namespace = name_space;
        sesa_num_client.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sesa-num-client")
    {
        sesa_num_client.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sesa-pl-sum" || name == "sesa-num-client")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SesaPlSum()
    :
    sep_num_ecd_pathlist{YType::uint32, "sep-num-ecd-pathlist"},
    sep_num_ecd_pl_unresolved{YType::uint32, "sep-num-ecd-pl-unresolved"}
{

    yang_name = "sesa-pl-sum"; yang_parent_name = "external-summary-all"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::~SesaPlSum()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::has_data() const
{
    for (std::size_t index=0; index<sep_num_ecd_pl_per_interest.size(); index++)
    {
        if(sep_num_ecd_pl_per_interest[index]->has_data())
            return true;
    }
    return sep_num_ecd_pathlist.is_set
	|| sep_num_ecd_pl_unresolved.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::has_operation() const
{
    for (std::size_t index=0; index<sep_num_ecd_pl_per_interest.size(); index++)
    {
        if(sep_num_ecd_pl_per_interest[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sep_num_ecd_pathlist.yfilter)
	|| ydk::is_set(sep_num_ecd_pl_unresolved.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesa-pl-sum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sep_num_ecd_pathlist.is_set || is_set(sep_num_ecd_pathlist.yfilter)) leaf_name_data.push_back(sep_num_ecd_pathlist.get_name_leafdata());
    if (sep_num_ecd_pl_unresolved.is_set || is_set(sep_num_ecd_pl_unresolved.yfilter)) leaf_name_data.push_back(sep_num_ecd_pl_unresolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sep-num-ecd-pl-per-interest")
    {
        for(auto const & c : sep_num_ecd_pl_per_interest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest>();
        c->parent = this;
        sep_num_ecd_pl_per_interest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sep_num_ecd_pl_per_interest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sep-num-ecd-pathlist")
    {
        sep_num_ecd_pathlist = value;
        sep_num_ecd_pathlist.value_namespace = name_space;
        sep_num_ecd_pathlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sep-num-ecd-pl-unresolved")
    {
        sep_num_ecd_pl_unresolved = value;
        sep_num_ecd_pl_unresolved.value_namespace = name_space;
        sep_num_ecd_pl_unresolved.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sep-num-ecd-pathlist")
    {
        sep_num_ecd_pathlist.yfilter = yfilter;
    }
    if(value_path == "sep-num-ecd-pl-unresolved")
    {
        sep_num_ecd_pl_unresolved.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sep-num-ecd-pl-per-interest" || name == "sep-num-ecd-pathlist" || name == "sep-num-ecd-pl-unresolved")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::SepNumEcdPlPerInterest()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sep-num-ecd-pl-per-interest"; yang_parent_name = "sesa-pl-sum"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::~SepNumEcdPlPerInterest()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sep-num-ecd-pl-per-interest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SepNumEcdPlPerInterest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummaries()
{

    yang_name = "fib-summaries"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::~FibSummaries()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::has_data() const
{
    for (std::size_t index=0; index<fib_summary.size(); index++)
    {
        if(fib_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::has_operation() const
{
    for (std::size_t index=0; index<fib_summary.size(); index++)
    {
        if(fib_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-summary")
    {
        for(auto const & c : fib_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary>();
        c->parent = this;
        fib_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fib_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-summary")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::FibSummary()
    :
    cef_route_drops{YType::uint32, "cef-route-drops"},
    cef_version_mismatch_route_drops{YType::uint64, "cef-version-mismatch-route-drops"},
    cefl_bl_recycled_routes{YType::uint32, "cefl-bl-recycled-routes"},
    delete_cache_num_entries{YType::uint32, "delete-cache-num-entries"},
    existing_leaves_revisions{YType::uint32, "existing-leaves-revisions"},
    extended_prefixes{YType::uint32, "extended-prefixes"},
    fib_default_prefix{YType::uint32, "fib-default-prefix"},
    fib_default_prefix_mask_length{YType::uint32, "fib-default-prefix-mask-length"},
    forwarding_elements{YType::uint32, "forwarding-elements"},
    imposition_prefixes{YType::uint32, "imposition-prefixes"},
    incomplete_next_hops{YType::uint32, "incomplete-next-hops"},
    ldi_backwalks{YType::uint32, "ldi-backwalks"},
    leaves_used_bytes{YType::uint32, "leaves-used-bytes"},
    lisp_eid_prefixes{YType::uint32, "lisp-eid-prefixes"},
    lisp_eid_valid_prefixes{YType::uint32, "lisp-eid-valid-prefixes"},
    lisp_rloc_objects{YType::uint32, "lisp-rloc-objects"},
    load_balancing{YType::enumeration, "load-balancing"},
    load_sharing_elements{YType::uint32, "load-sharing-elements"},
    load_sharing_references{YType::uint64, "load-sharing-references"},
    max_resolution_timer{YType::uint32, "max-resolution-timer"},
    new_unresolve_entries{YType::uint32, "new-unresolve-entries"},
    next_hops{YType::uint32, "next-hops"},
    old_unresolve_entries{YType::uint32, "old-unresolve-entries"},
    prefix{YType::str, "prefix"},
    prefix_in_place_modifications{YType::uint32, "prefix-in-place-modifications"},
    reresolve_entries{YType::uint32, "reresolve-entries"},
    resolution_timer{YType::uint32, "resolution-timer"},
    routes{YType::uint32, "routes"},
    slow_process_timer{YType::uint32, "slow-process-timer"},
    ss_drop_pl_count{YType::uint32, "ss-drop-pl-count"},
    ss_prot_route_count{YType::uint32, "ss-prot-route-count"},
    ss_tbl_id{YType::uint32, "ss-tbl-id"},
    ss_tbl_id_ptr{YType::uint32, "ss-tbl-id-ptr"},
    ss_vr_id{YType::uint32, "ss-vr-id"},
    ss_vrf_id{YType::uint32, "ss-vrf-id"},
    ss_vxlan_ltep_ifh{YType::str, "ss-vxlan-ltep-ifh"},
    stale_prefix_deletes{YType::uint32, "stale-prefix-deletes"},
    table_id{YType::str, "table-id"},
    total_load_share_element_bytes{YType::uint32, "total-load-share-element-bytes"},
    unresolve_entries{YType::uint32, "unresolve-entries"},
    vrf_name{YType::str, "vrf-name"}
    	,
    cross_shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement>())
	,exclusive_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement>())
	,label_shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement>())
	,prefix_masklen_distribution(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution>())
	,shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement>())
{
    cross_shared_load_sharing_element->parent = this;
    exclusive_load_sharing_element->parent = this;
    label_shared_load_sharing_element->parent = this;
    prefix_masklen_distribution->parent = this;
    shared_load_sharing_element->parent = this;

    yang_name = "fib-summary"; yang_parent_name = "fib-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::~FibSummary()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::has_data() const
{
    return cef_route_drops.is_set
	|| cef_version_mismatch_route_drops.is_set
	|| cefl_bl_recycled_routes.is_set
	|| delete_cache_num_entries.is_set
	|| existing_leaves_revisions.is_set
	|| extended_prefixes.is_set
	|| fib_default_prefix.is_set
	|| fib_default_prefix_mask_length.is_set
	|| forwarding_elements.is_set
	|| imposition_prefixes.is_set
	|| incomplete_next_hops.is_set
	|| ldi_backwalks.is_set
	|| leaves_used_bytes.is_set
	|| lisp_eid_prefixes.is_set
	|| lisp_eid_valid_prefixes.is_set
	|| lisp_rloc_objects.is_set
	|| load_balancing.is_set
	|| load_sharing_elements.is_set
	|| load_sharing_references.is_set
	|| max_resolution_timer.is_set
	|| new_unresolve_entries.is_set
	|| next_hops.is_set
	|| old_unresolve_entries.is_set
	|| prefix.is_set
	|| prefix_in_place_modifications.is_set
	|| reresolve_entries.is_set
	|| resolution_timer.is_set
	|| routes.is_set
	|| slow_process_timer.is_set
	|| ss_drop_pl_count.is_set
	|| ss_prot_route_count.is_set
	|| ss_tbl_id.is_set
	|| ss_tbl_id_ptr.is_set
	|| ss_vr_id.is_set
	|| ss_vrf_id.is_set
	|| ss_vxlan_ltep_ifh.is_set
	|| stale_prefix_deletes.is_set
	|| table_id.is_set
	|| total_load_share_element_bytes.is_set
	|| unresolve_entries.is_set
	|| vrf_name.is_set
	|| (cross_shared_load_sharing_element !=  nullptr && cross_shared_load_sharing_element->has_data())
	|| (exclusive_load_sharing_element !=  nullptr && exclusive_load_sharing_element->has_data())
	|| (label_shared_load_sharing_element !=  nullptr && label_shared_load_sharing_element->has_data())
	|| (prefix_masklen_distribution !=  nullptr && prefix_masklen_distribution->has_data())
	|| (shared_load_sharing_element !=  nullptr && shared_load_sharing_element->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef_route_drops.yfilter)
	|| ydk::is_set(cef_version_mismatch_route_drops.yfilter)
	|| ydk::is_set(cefl_bl_recycled_routes.yfilter)
	|| ydk::is_set(delete_cache_num_entries.yfilter)
	|| ydk::is_set(existing_leaves_revisions.yfilter)
	|| ydk::is_set(extended_prefixes.yfilter)
	|| ydk::is_set(fib_default_prefix.yfilter)
	|| ydk::is_set(fib_default_prefix_mask_length.yfilter)
	|| ydk::is_set(forwarding_elements.yfilter)
	|| ydk::is_set(imposition_prefixes.yfilter)
	|| ydk::is_set(incomplete_next_hops.yfilter)
	|| ydk::is_set(ldi_backwalks.yfilter)
	|| ydk::is_set(leaves_used_bytes.yfilter)
	|| ydk::is_set(lisp_eid_prefixes.yfilter)
	|| ydk::is_set(lisp_eid_valid_prefixes.yfilter)
	|| ydk::is_set(lisp_rloc_objects.yfilter)
	|| ydk::is_set(load_balancing.yfilter)
	|| ydk::is_set(load_sharing_elements.yfilter)
	|| ydk::is_set(load_sharing_references.yfilter)
	|| ydk::is_set(max_resolution_timer.yfilter)
	|| ydk::is_set(new_unresolve_entries.yfilter)
	|| ydk::is_set(next_hops.yfilter)
	|| ydk::is_set(old_unresolve_entries.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_in_place_modifications.yfilter)
	|| ydk::is_set(reresolve_entries.yfilter)
	|| ydk::is_set(resolution_timer.yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(slow_process_timer.yfilter)
	|| ydk::is_set(ss_drop_pl_count.yfilter)
	|| ydk::is_set(ss_prot_route_count.yfilter)
	|| ydk::is_set(ss_tbl_id.yfilter)
	|| ydk::is_set(ss_tbl_id_ptr.yfilter)
	|| ydk::is_set(ss_vr_id.yfilter)
	|| ydk::is_set(ss_vrf_id.yfilter)
	|| ydk::is_set(ss_vxlan_ltep_ifh.yfilter)
	|| ydk::is_set(stale_prefix_deletes.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(total_load_share_element_bytes.yfilter)
	|| ydk::is_set(unresolve_entries.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (cross_shared_load_sharing_element !=  nullptr && cross_shared_load_sharing_element->has_operation())
	|| (exclusive_load_sharing_element !=  nullptr && exclusive_load_sharing_element->has_operation())
	|| (label_shared_load_sharing_element !=  nullptr && label_shared_load_sharing_element->has_operation())
	|| (prefix_masklen_distribution !=  nullptr && prefix_masklen_distribution->has_operation())
	|| (shared_load_sharing_element !=  nullptr && shared_load_sharing_element->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef_route_drops.is_set || is_set(cef_route_drops.yfilter)) leaf_name_data.push_back(cef_route_drops.get_name_leafdata());
    if (cef_version_mismatch_route_drops.is_set || is_set(cef_version_mismatch_route_drops.yfilter)) leaf_name_data.push_back(cef_version_mismatch_route_drops.get_name_leafdata());
    if (cefl_bl_recycled_routes.is_set || is_set(cefl_bl_recycled_routes.yfilter)) leaf_name_data.push_back(cefl_bl_recycled_routes.get_name_leafdata());
    if (delete_cache_num_entries.is_set || is_set(delete_cache_num_entries.yfilter)) leaf_name_data.push_back(delete_cache_num_entries.get_name_leafdata());
    if (existing_leaves_revisions.is_set || is_set(existing_leaves_revisions.yfilter)) leaf_name_data.push_back(existing_leaves_revisions.get_name_leafdata());
    if (extended_prefixes.is_set || is_set(extended_prefixes.yfilter)) leaf_name_data.push_back(extended_prefixes.get_name_leafdata());
    if (fib_default_prefix.is_set || is_set(fib_default_prefix.yfilter)) leaf_name_data.push_back(fib_default_prefix.get_name_leafdata());
    if (fib_default_prefix_mask_length.is_set || is_set(fib_default_prefix_mask_length.yfilter)) leaf_name_data.push_back(fib_default_prefix_mask_length.get_name_leafdata());
    if (forwarding_elements.is_set || is_set(forwarding_elements.yfilter)) leaf_name_data.push_back(forwarding_elements.get_name_leafdata());
    if (imposition_prefixes.is_set || is_set(imposition_prefixes.yfilter)) leaf_name_data.push_back(imposition_prefixes.get_name_leafdata());
    if (incomplete_next_hops.is_set || is_set(incomplete_next_hops.yfilter)) leaf_name_data.push_back(incomplete_next_hops.get_name_leafdata());
    if (ldi_backwalks.is_set || is_set(ldi_backwalks.yfilter)) leaf_name_data.push_back(ldi_backwalks.get_name_leafdata());
    if (leaves_used_bytes.is_set || is_set(leaves_used_bytes.yfilter)) leaf_name_data.push_back(leaves_used_bytes.get_name_leafdata());
    if (lisp_eid_prefixes.is_set || is_set(lisp_eid_prefixes.yfilter)) leaf_name_data.push_back(lisp_eid_prefixes.get_name_leafdata());
    if (lisp_eid_valid_prefixes.is_set || is_set(lisp_eid_valid_prefixes.yfilter)) leaf_name_data.push_back(lisp_eid_valid_prefixes.get_name_leafdata());
    if (lisp_rloc_objects.is_set || is_set(lisp_rloc_objects.yfilter)) leaf_name_data.push_back(lisp_rloc_objects.get_name_leafdata());
    if (load_balancing.is_set || is_set(load_balancing.yfilter)) leaf_name_data.push_back(load_balancing.get_name_leafdata());
    if (load_sharing_elements.is_set || is_set(load_sharing_elements.yfilter)) leaf_name_data.push_back(load_sharing_elements.get_name_leafdata());
    if (load_sharing_references.is_set || is_set(load_sharing_references.yfilter)) leaf_name_data.push_back(load_sharing_references.get_name_leafdata());
    if (max_resolution_timer.is_set || is_set(max_resolution_timer.yfilter)) leaf_name_data.push_back(max_resolution_timer.get_name_leafdata());
    if (new_unresolve_entries.is_set || is_set(new_unresolve_entries.yfilter)) leaf_name_data.push_back(new_unresolve_entries.get_name_leafdata());
    if (next_hops.is_set || is_set(next_hops.yfilter)) leaf_name_data.push_back(next_hops.get_name_leafdata());
    if (old_unresolve_entries.is_set || is_set(old_unresolve_entries.yfilter)) leaf_name_data.push_back(old_unresolve_entries.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_in_place_modifications.is_set || is_set(prefix_in_place_modifications.yfilter)) leaf_name_data.push_back(prefix_in_place_modifications.get_name_leafdata());
    if (reresolve_entries.is_set || is_set(reresolve_entries.yfilter)) leaf_name_data.push_back(reresolve_entries.get_name_leafdata());
    if (resolution_timer.is_set || is_set(resolution_timer.yfilter)) leaf_name_data.push_back(resolution_timer.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (slow_process_timer.is_set || is_set(slow_process_timer.yfilter)) leaf_name_data.push_back(slow_process_timer.get_name_leafdata());
    if (ss_drop_pl_count.is_set || is_set(ss_drop_pl_count.yfilter)) leaf_name_data.push_back(ss_drop_pl_count.get_name_leafdata());
    if (ss_prot_route_count.is_set || is_set(ss_prot_route_count.yfilter)) leaf_name_data.push_back(ss_prot_route_count.get_name_leafdata());
    if (ss_tbl_id.is_set || is_set(ss_tbl_id.yfilter)) leaf_name_data.push_back(ss_tbl_id.get_name_leafdata());
    if (ss_tbl_id_ptr.is_set || is_set(ss_tbl_id_ptr.yfilter)) leaf_name_data.push_back(ss_tbl_id_ptr.get_name_leafdata());
    if (ss_vr_id.is_set || is_set(ss_vr_id.yfilter)) leaf_name_data.push_back(ss_vr_id.get_name_leafdata());
    if (ss_vrf_id.is_set || is_set(ss_vrf_id.yfilter)) leaf_name_data.push_back(ss_vrf_id.get_name_leafdata());
    if (ss_vxlan_ltep_ifh.is_set || is_set(ss_vxlan_ltep_ifh.yfilter)) leaf_name_data.push_back(ss_vxlan_ltep_ifh.get_name_leafdata());
    if (stale_prefix_deletes.is_set || is_set(stale_prefix_deletes.yfilter)) leaf_name_data.push_back(stale_prefix_deletes.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (total_load_share_element_bytes.is_set || is_set(total_load_share_element_bytes.yfilter)) leaf_name_data.push_back(total_load_share_element_bytes.get_name_leafdata());
    if (unresolve_entries.is_set || is_set(unresolve_entries.yfilter)) leaf_name_data.push_back(unresolve_entries.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cross-shared-load-sharing-element")
    {
        if(cross_shared_load_sharing_element == nullptr)
        {
            cross_shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement>();
        }
        return cross_shared_load_sharing_element;
    }

    if(child_yang_name == "exclusive-load-sharing-element")
    {
        if(exclusive_load_sharing_element == nullptr)
        {
            exclusive_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement>();
        }
        return exclusive_load_sharing_element;
    }

    if(child_yang_name == "label-shared-load-sharing-element")
    {
        if(label_shared_load_sharing_element == nullptr)
        {
            label_shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement>();
        }
        return label_shared_load_sharing_element;
    }

    if(child_yang_name == "prefix-masklen-distribution")
    {
        if(prefix_masklen_distribution == nullptr)
        {
            prefix_masklen_distribution = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution>();
        }
        return prefix_masklen_distribution;
    }

    if(child_yang_name == "shared-load-sharing-element")
    {
        if(shared_load_sharing_element == nullptr)
        {
            shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement>();
        }
        return shared_load_sharing_element;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cross_shared_load_sharing_element != nullptr)
    {
        children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
    }

    if(exclusive_load_sharing_element != nullptr)
    {
        children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
    }

    if(label_shared_load_sharing_element != nullptr)
    {
        children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
    }

    if(prefix_masklen_distribution != nullptr)
    {
        children["prefix-masklen-distribution"] = prefix_masklen_distribution;
    }

    if(shared_load_sharing_element != nullptr)
    {
        children["shared-load-sharing-element"] = shared_load_sharing_element;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef-route-drops")
    {
        cef_route_drops = value;
        cef_route_drops.value_namespace = name_space;
        cef_route_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cef-version-mismatch-route-drops")
    {
        cef_version_mismatch_route_drops = value;
        cef_version_mismatch_route_drops.value_namespace = name_space;
        cef_version_mismatch_route_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefl-bl-recycled-routes")
    {
        cefl_bl_recycled_routes = value;
        cefl_bl_recycled_routes.value_namespace = name_space;
        cefl_bl_recycled_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-cache-num-entries")
    {
        delete_cache_num_entries = value;
        delete_cache_num_entries.value_namespace = name_space;
        delete_cache_num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "existing-leaves-revisions")
    {
        existing_leaves_revisions = value;
        existing_leaves_revisions.value_namespace = name_space;
        existing_leaves_revisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-prefixes")
    {
        extended_prefixes = value;
        extended_prefixes.value_namespace = name_space;
        extended_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-default-prefix")
    {
        fib_default_prefix = value;
        fib_default_prefix.value_namespace = name_space;
        fib_default_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-default-prefix-mask-length")
    {
        fib_default_prefix_mask_length = value;
        fib_default_prefix_mask_length.value_namespace = name_space;
        fib_default_prefix_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-elements")
    {
        forwarding_elements = value;
        forwarding_elements.value_namespace = name_space;
        forwarding_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposition-prefixes")
    {
        imposition_prefixes = value;
        imposition_prefixes.value_namespace = name_space;
        imposition_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-next-hops")
    {
        incomplete_next_hops = value;
        incomplete_next_hops.value_namespace = name_space;
        incomplete_next_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-backwalks")
    {
        ldi_backwalks = value;
        ldi_backwalks.value_namespace = name_space;
        ldi_backwalks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaves-used-bytes")
    {
        leaves_used_bytes = value;
        leaves_used_bytes.value_namespace = name_space;
        leaves_used_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-eid-prefixes")
    {
        lisp_eid_prefixes = value;
        lisp_eid_prefixes.value_namespace = name_space;
        lisp_eid_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-eid-valid-prefixes")
    {
        lisp_eid_valid_prefixes = value;
        lisp_eid_valid_prefixes.value_namespace = name_space;
        lisp_eid_valid_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-rloc-objects")
    {
        lisp_rloc_objects = value;
        lisp_rloc_objects.value_namespace = name_space;
        lisp_rloc_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balancing")
    {
        load_balancing = value;
        load_balancing.value_namespace = name_space;
        load_balancing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing-elements")
    {
        load_sharing_elements = value;
        load_sharing_elements.value_namespace = name_space;
        load_sharing_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing-references")
    {
        load_sharing_references = value;
        load_sharing_references.value_namespace = name_space;
        load_sharing_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-resolution-timer")
    {
        max_resolution_timer = value;
        max_resolution_timer.value_namespace = name_space;
        max_resolution_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-unresolve-entries")
    {
        new_unresolve_entries = value;
        new_unresolve_entries.value_namespace = name_space;
        new_unresolve_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hops")
    {
        next_hops = value;
        next_hops.value_namespace = name_space;
        next_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-unresolve-entries")
    {
        old_unresolve_entries = value;
        old_unresolve_entries.value_namespace = name_space;
        old_unresolve_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-in-place-modifications")
    {
        prefix_in_place_modifications = value;
        prefix_in_place_modifications.value_namespace = name_space;
        prefix_in_place_modifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reresolve-entries")
    {
        reresolve_entries = value;
        reresolve_entries.value_namespace = name_space;
        reresolve_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolution-timer")
    {
        resolution_timer = value;
        resolution_timer.value_namespace = name_space;
        resolution_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-process-timer")
    {
        slow_process_timer = value;
        slow_process_timer.value_namespace = name_space;
        slow_process_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-drop-pl-count")
    {
        ss_drop_pl_count = value;
        ss_drop_pl_count.value_namespace = name_space;
        ss_drop_pl_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-prot-route-count")
    {
        ss_prot_route_count = value;
        ss_prot_route_count.value_namespace = name_space;
        ss_prot_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-tbl-id")
    {
        ss_tbl_id = value;
        ss_tbl_id.value_namespace = name_space;
        ss_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-tbl-id-ptr")
    {
        ss_tbl_id_ptr = value;
        ss_tbl_id_ptr.value_namespace = name_space;
        ss_tbl_id_ptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-vr-id")
    {
        ss_vr_id = value;
        ss_vr_id.value_namespace = name_space;
        ss_vr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-vrf-id")
    {
        ss_vrf_id = value;
        ss_vrf_id.value_namespace = name_space;
        ss_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ss-vxlan-ltep-ifh")
    {
        ss_vxlan_ltep_ifh = value;
        ss_vxlan_ltep_ifh.value_namespace = name_space;
        ss_vxlan_ltep_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-prefix-deletes")
    {
        stale_prefix_deletes = value;
        stale_prefix_deletes.value_namespace = name_space;
        stale_prefix_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-share-element-bytes")
    {
        total_load_share_element_bytes = value;
        total_load_share_element_bytes.value_namespace = name_space;
        total_load_share_element_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolve-entries")
    {
        unresolve_entries = value;
        unresolve_entries.value_namespace = name_space;
        unresolve_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef-route-drops")
    {
        cef_route_drops.yfilter = yfilter;
    }
    if(value_path == "cef-version-mismatch-route-drops")
    {
        cef_version_mismatch_route_drops.yfilter = yfilter;
    }
    if(value_path == "cefl-bl-recycled-routes")
    {
        cefl_bl_recycled_routes.yfilter = yfilter;
    }
    if(value_path == "delete-cache-num-entries")
    {
        delete_cache_num_entries.yfilter = yfilter;
    }
    if(value_path == "existing-leaves-revisions")
    {
        existing_leaves_revisions.yfilter = yfilter;
    }
    if(value_path == "extended-prefixes")
    {
        extended_prefixes.yfilter = yfilter;
    }
    if(value_path == "fib-default-prefix")
    {
        fib_default_prefix.yfilter = yfilter;
    }
    if(value_path == "fib-default-prefix-mask-length")
    {
        fib_default_prefix_mask_length.yfilter = yfilter;
    }
    if(value_path == "forwarding-elements")
    {
        forwarding_elements.yfilter = yfilter;
    }
    if(value_path == "imposition-prefixes")
    {
        imposition_prefixes.yfilter = yfilter;
    }
    if(value_path == "incomplete-next-hops")
    {
        incomplete_next_hops.yfilter = yfilter;
    }
    if(value_path == "ldi-backwalks")
    {
        ldi_backwalks.yfilter = yfilter;
    }
    if(value_path == "leaves-used-bytes")
    {
        leaves_used_bytes.yfilter = yfilter;
    }
    if(value_path == "lisp-eid-prefixes")
    {
        lisp_eid_prefixes.yfilter = yfilter;
    }
    if(value_path == "lisp-eid-valid-prefixes")
    {
        lisp_eid_valid_prefixes.yfilter = yfilter;
    }
    if(value_path == "lisp-rloc-objects")
    {
        lisp_rloc_objects.yfilter = yfilter;
    }
    if(value_path == "load-balancing")
    {
        load_balancing.yfilter = yfilter;
    }
    if(value_path == "load-sharing-elements")
    {
        load_sharing_elements.yfilter = yfilter;
    }
    if(value_path == "load-sharing-references")
    {
        load_sharing_references.yfilter = yfilter;
    }
    if(value_path == "max-resolution-timer")
    {
        max_resolution_timer.yfilter = yfilter;
    }
    if(value_path == "new-unresolve-entries")
    {
        new_unresolve_entries.yfilter = yfilter;
    }
    if(value_path == "next-hops")
    {
        next_hops.yfilter = yfilter;
    }
    if(value_path == "old-unresolve-entries")
    {
        old_unresolve_entries.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-in-place-modifications")
    {
        prefix_in_place_modifications.yfilter = yfilter;
    }
    if(value_path == "reresolve-entries")
    {
        reresolve_entries.yfilter = yfilter;
    }
    if(value_path == "resolution-timer")
    {
        resolution_timer.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "slow-process-timer")
    {
        slow_process_timer.yfilter = yfilter;
    }
    if(value_path == "ss-drop-pl-count")
    {
        ss_drop_pl_count.yfilter = yfilter;
    }
    if(value_path == "ss-prot-route-count")
    {
        ss_prot_route_count.yfilter = yfilter;
    }
    if(value_path == "ss-tbl-id")
    {
        ss_tbl_id.yfilter = yfilter;
    }
    if(value_path == "ss-tbl-id-ptr")
    {
        ss_tbl_id_ptr.yfilter = yfilter;
    }
    if(value_path == "ss-vr-id")
    {
        ss_vr_id.yfilter = yfilter;
    }
    if(value_path == "ss-vrf-id")
    {
        ss_vrf_id.yfilter = yfilter;
    }
    if(value_path == "ss-vxlan-ltep-ifh")
    {
        ss_vxlan_ltep_ifh.yfilter = yfilter;
    }
    if(value_path == "stale-prefix-deletes")
    {
        stale_prefix_deletes.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "total-load-share-element-bytes")
    {
        total_load_share_element_bytes.yfilter = yfilter;
    }
    if(value_path == "unresolve-entries")
    {
        unresolve_entries.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cross-shared-load-sharing-element" || name == "exclusive-load-sharing-element" || name == "label-shared-load-sharing-element" || name == "prefix-masklen-distribution" || name == "shared-load-sharing-element" || name == "cef-route-drops" || name == "cef-version-mismatch-route-drops" || name == "cefl-bl-recycled-routes" || name == "delete-cache-num-entries" || name == "existing-leaves-revisions" || name == "extended-prefixes" || name == "fib-default-prefix" || name == "fib-default-prefix-mask-length" || name == "forwarding-elements" || name == "imposition-prefixes" || name == "incomplete-next-hops" || name == "ldi-backwalks" || name == "leaves-used-bytes" || name == "lisp-eid-prefixes" || name == "lisp-eid-valid-prefixes" || name == "lisp-rloc-objects" || name == "load-balancing" || name == "load-sharing-elements" || name == "load-sharing-references" || name == "max-resolution-timer" || name == "new-unresolve-entries" || name == "next-hops" || name == "old-unresolve-entries" || name == "prefix" || name == "prefix-in-place-modifications" || name == "reresolve-entries" || name == "resolution-timer" || name == "routes" || name == "slow-process-timer" || name == "ss-drop-pl-count" || name == "ss-prot-route-count" || name == "ss-tbl-id" || name == "ss-tbl-id-ptr" || name == "ss-vr-id" || name == "ss-vrf-id" || name == "ss-vxlan-ltep-ifh" || name == "stale-prefix-deletes" || name == "table-id" || name == "total-load-share-element-bytes" || name == "unresolve-entries" || name == "vrf-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::CrossSharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"},
    xpl_load_info_elements{YType::uint32, "xpl-load-info-elements"}
{

    yang_name = "cross-shared-load-sharing-element"; yang_parent_name = "fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::~CrossSharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set
	|| xpl_load_info_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(platform_shared_load_info_elements.yfilter)
	|| ydk::is_set(platform_shared_path_list_elements.yfilter)
	|| ydk::is_set(recursive_load_info_elements.yfilter)
	|| ydk::is_set(recursive_path_list_elements.yfilter)
	|| ydk::is_set(retry_path_list_elements.yfilter)
	|| ydk::is_set(total_load_info_elements.yfilter)
	|| ydk::is_set(total_load_sharing_element_bytes.yfilter)
	|| ydk::is_set(total_load_sharing_element_references.yfilter)
	|| ydk::is_set(total_path_list_elements.yfilter)
	|| ydk::is_set(xpl_load_info_elements.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-shared-load-sharing-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.yfilter)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.yfilter)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.yfilter)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.yfilter)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.yfilter)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.yfilter)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.yfilter)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.yfilter)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.yfilter)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());
    if (xpl_load_info_elements.is_set || is_set(xpl_load_info_elements.yfilter)) leaf_name_data.push_back(xpl_load_info_elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
        platform_shared_load_info_elements.value_namespace = name_space;
        platform_shared_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
        platform_shared_path_list_elements.value_namespace = name_space;
        platform_shared_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
        recursive_load_info_elements.value_namespace = name_space;
        recursive_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
        recursive_path_list_elements.value_namespace = name_space;
        recursive_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
        retry_path_list_elements.value_namespace = name_space;
        retry_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
        total_load_info_elements.value_namespace = name_space;
        total_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
        total_load_sharing_element_bytes.value_namespace = name_space;
        total_load_sharing_element_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
        total_load_sharing_element_references.value_namespace = name_space;
        total_load_sharing_element_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
        total_path_list_elements.value_namespace = name_space;
        total_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements = value;
        xpl_load_info_elements.value_namespace = name_space;
        xpl_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references.yfilter = yfilter;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-shared-load-info-elements" || name == "platform-shared-path-list-elements" || name == "recursive-load-info-elements" || name == "recursive-path-list-elements" || name == "retry-path-list-elements" || name == "total-load-info-elements" || name == "total-load-sharing-element-bytes" || name == "total-load-sharing-element-references" || name == "total-path-list-elements" || name == "xpl-load-info-elements")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::ExclusiveLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"},
    xpl_load_info_elements{YType::uint32, "xpl-load-info-elements"}
{

    yang_name = "exclusive-load-sharing-element"; yang_parent_name = "fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::~ExclusiveLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set
	|| xpl_load_info_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(platform_shared_load_info_elements.yfilter)
	|| ydk::is_set(platform_shared_path_list_elements.yfilter)
	|| ydk::is_set(recursive_load_info_elements.yfilter)
	|| ydk::is_set(recursive_path_list_elements.yfilter)
	|| ydk::is_set(retry_path_list_elements.yfilter)
	|| ydk::is_set(total_load_info_elements.yfilter)
	|| ydk::is_set(total_load_sharing_element_bytes.yfilter)
	|| ydk::is_set(total_load_sharing_element_references.yfilter)
	|| ydk::is_set(total_path_list_elements.yfilter)
	|| ydk::is_set(xpl_load_info_elements.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclusive-load-sharing-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.yfilter)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.yfilter)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.yfilter)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.yfilter)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.yfilter)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.yfilter)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.yfilter)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.yfilter)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.yfilter)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());
    if (xpl_load_info_elements.is_set || is_set(xpl_load_info_elements.yfilter)) leaf_name_data.push_back(xpl_load_info_elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
        platform_shared_load_info_elements.value_namespace = name_space;
        platform_shared_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
        platform_shared_path_list_elements.value_namespace = name_space;
        platform_shared_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
        recursive_load_info_elements.value_namespace = name_space;
        recursive_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
        recursive_path_list_elements.value_namespace = name_space;
        recursive_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
        retry_path_list_elements.value_namespace = name_space;
        retry_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
        total_load_info_elements.value_namespace = name_space;
        total_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
        total_load_sharing_element_bytes.value_namespace = name_space;
        total_load_sharing_element_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
        total_load_sharing_element_references.value_namespace = name_space;
        total_load_sharing_element_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
        total_path_list_elements.value_namespace = name_space;
        total_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements = value;
        xpl_load_info_elements.value_namespace = name_space;
        xpl_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references.yfilter = yfilter;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-shared-load-info-elements" || name == "platform-shared-path-list-elements" || name == "recursive-load-info-elements" || name == "recursive-path-list-elements" || name == "retry-path-list-elements" || name == "total-load-info-elements" || name == "total-load-sharing-element-bytes" || name == "total-load-sharing-element-references" || name == "total-path-list-elements" || name == "xpl-load-info-elements")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::LabelSharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"},
    xpl_load_info_elements{YType::uint32, "xpl-load-info-elements"}
{

    yang_name = "label-shared-load-sharing-element"; yang_parent_name = "fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::~LabelSharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set
	|| xpl_load_info_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(platform_shared_load_info_elements.yfilter)
	|| ydk::is_set(platform_shared_path_list_elements.yfilter)
	|| ydk::is_set(recursive_load_info_elements.yfilter)
	|| ydk::is_set(recursive_path_list_elements.yfilter)
	|| ydk::is_set(retry_path_list_elements.yfilter)
	|| ydk::is_set(total_load_info_elements.yfilter)
	|| ydk::is_set(total_load_sharing_element_bytes.yfilter)
	|| ydk::is_set(total_load_sharing_element_references.yfilter)
	|| ydk::is_set(total_path_list_elements.yfilter)
	|| ydk::is_set(xpl_load_info_elements.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-shared-load-sharing-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.yfilter)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.yfilter)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.yfilter)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.yfilter)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.yfilter)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.yfilter)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.yfilter)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.yfilter)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.yfilter)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());
    if (xpl_load_info_elements.is_set || is_set(xpl_load_info_elements.yfilter)) leaf_name_data.push_back(xpl_load_info_elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
        platform_shared_load_info_elements.value_namespace = name_space;
        platform_shared_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
        platform_shared_path_list_elements.value_namespace = name_space;
        platform_shared_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
        recursive_load_info_elements.value_namespace = name_space;
        recursive_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
        recursive_path_list_elements.value_namespace = name_space;
        recursive_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
        retry_path_list_elements.value_namespace = name_space;
        retry_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
        total_load_info_elements.value_namespace = name_space;
        total_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
        total_load_sharing_element_bytes.value_namespace = name_space;
        total_load_sharing_element_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
        total_load_sharing_element_references.value_namespace = name_space;
        total_load_sharing_element_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
        total_path_list_elements.value_namespace = name_space;
        total_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements = value;
        xpl_load_info_elements.value_namespace = name_space;
        xpl_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references.yfilter = yfilter;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-shared-load-info-elements" || name == "platform-shared-path-list-elements" || name == "recursive-load-info-elements" || name == "recursive-path-list-elements" || name == "retry-path-list-elements" || name == "total-load-info-elements" || name == "total-load-sharing-element-bytes" || name == "total-load-sharing-element-references" || name == "total-path-list-elements" || name == "xpl-load-info-elements")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::PrefixMasklenDistribution()
{

    yang_name = "prefix-masklen-distribution"; yang_parent_name = "fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::~PrefixMasklenDistribution()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::has_data() const
{
    for (std::size_t index=0; index<broadcast_prefixe.size(); index++)
    {
        if(broadcast_prefixe[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_prefix.size(); index++)
    {
        if(multicast_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unicast_prefixe.size(); index++)
    {
        if(unicast_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::has_operation() const
{
    for (std::size_t index=0; index<broadcast_prefixe.size(); index++)
    {
        if(broadcast_prefixe[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_prefix.size(); index++)
    {
        if(multicast_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unicast_prefixe.size(); index++)
    {
        if(unicast_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-masklen-distribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-prefixe")
    {
        for(auto const & c : broadcast_prefixe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe>();
        c->parent = this;
        broadcast_prefixe.push_back(c);
        return c;
    }

    if(child_yang_name == "multicast-prefix")
    {
        for(auto const & c : multicast_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix>();
        c->parent = this;
        multicast_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "unicast-prefixe")
    {
        for(auto const & c : unicast_prefixe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe>();
        c->parent = this;
        unicast_prefixe.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : broadcast_prefixe)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multicast_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unicast_prefixe)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-prefixe" || name == "multicast-prefix" || name == "unicast-prefixe")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::BroadcastPrefixe()
    :
    mask_length{YType::uint8, "mask-length"},
    number_of_prefixes{YType::uint32, "number-of-prefixes"}
{

    yang_name = "broadcast-prefixe"; yang_parent_name = "prefix-masklen-distribution"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::~BroadcastPrefixe()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::has_data() const
{
    return mask_length.is_set
	|| number_of_prefixes.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(number_of_prefixes.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-prefixe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (number_of_prefixes.is_set || is_set(number_of_prefixes.yfilter)) leaf_name_data.push_back(number_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes = value;
        number_of_prefixes.value_namespace = name_space;
        number_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::BroadcastPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask-length" || name == "number-of-prefixes")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::MulticastPrefix()
    :
    mask_length{YType::uint8, "mask-length"},
    number_of_prefixes{YType::uint32, "number-of-prefixes"}
{

    yang_name = "multicast-prefix"; yang_parent_name = "prefix-masklen-distribution"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::~MulticastPrefix()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::has_data() const
{
    return mask_length.is_set
	|| number_of_prefixes.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(number_of_prefixes.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (number_of_prefixes.is_set || is_set(number_of_prefixes.yfilter)) leaf_name_data.push_back(number_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes = value;
        number_of_prefixes.value_namespace = name_space;
        number_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::MulticastPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask-length" || name == "number-of-prefixes")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::UnicastPrefixe()
    :
    mask_length{YType::uint8, "mask-length"},
    number_of_prefixes{YType::uint32, "number-of-prefixes"}
{

    yang_name = "unicast-prefixe"; yang_parent_name = "prefix-masklen-distribution"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::~UnicastPrefixe()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::has_data() const
{
    return mask_length.is_set
	|| number_of_prefixes.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(number_of_prefixes.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-prefixe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (number_of_prefixes.is_set || is_set(number_of_prefixes.yfilter)) leaf_name_data.push_back(number_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes = value;
        number_of_prefixes.value_namespace = name_space;
        number_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::PrefixMasklenDistribution::UnicastPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask-length" || name == "number-of-prefixes")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::SharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"},
    xpl_load_info_elements{YType::uint32, "xpl-load-info-elements"}
{

    yang_name = "shared-load-sharing-element"; yang_parent_name = "fib-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::~SharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set
	|| xpl_load_info_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(platform_shared_load_info_elements.yfilter)
	|| ydk::is_set(platform_shared_path_list_elements.yfilter)
	|| ydk::is_set(recursive_load_info_elements.yfilter)
	|| ydk::is_set(recursive_path_list_elements.yfilter)
	|| ydk::is_set(retry_path_list_elements.yfilter)
	|| ydk::is_set(total_load_info_elements.yfilter)
	|| ydk::is_set(total_load_sharing_element_bytes.yfilter)
	|| ydk::is_set(total_load_sharing_element_references.yfilter)
	|| ydk::is_set(total_path_list_elements.yfilter)
	|| ydk::is_set(xpl_load_info_elements.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-load-sharing-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.yfilter)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.yfilter)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.yfilter)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.yfilter)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.yfilter)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.yfilter)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.yfilter)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.yfilter)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.yfilter)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());
    if (xpl_load_info_elements.is_set || is_set(xpl_load_info_elements.yfilter)) leaf_name_data.push_back(xpl_load_info_elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
        platform_shared_load_info_elements.value_namespace = name_space;
        platform_shared_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
        platform_shared_path_list_elements.value_namespace = name_space;
        platform_shared_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
        recursive_load_info_elements.value_namespace = name_space;
        recursive_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
        recursive_path_list_elements.value_namespace = name_space;
        recursive_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
        retry_path_list_elements.value_namespace = name_space;
        retry_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
        total_load_info_elements.value_namespace = name_space;
        total_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
        total_load_sharing_element_bytes.value_namespace = name_space;
        total_load_sharing_element_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
        total_load_sharing_element_references.value_namespace = name_space;
        total_load_sharing_element_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
        total_path_list_elements.value_namespace = name_space;
        total_path_list_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements = value;
        xpl_load_info_elements.value_namespace = name_space;
        xpl_load_info_elements.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes.yfilter = yfilter;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references.yfilter = yfilter;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements.yfilter = yfilter;
    }
    if(value_path == "xpl-load-info-elements")
    {
        xpl_load_info_elements.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-shared-load-info-elements" || name == "platform-shared-path-list-elements" || name == "recursive-load-info-elements" || name == "recursive-path-list-elements" || name == "retry-path-list-elements" || name == "total-load-info-elements" || name == "total-load-sharing-element-bytes" || name == "total-load-sharing-element-references" || name == "total-path-list-elements" || name == "xpl-load-info-elements")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrLog()
    :
    frr_interfaces(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces>())
{
    frr_interfaces->parent = this;

    yang_name = "frr-log"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::~FrrLog()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::has_data() const
{
    return (frr_interfaces !=  nullptr && frr_interfaces->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::has_operation() const
{
    return is_set(yfilter)
	|| (frr_interfaces !=  nullptr && frr_interfaces->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-interfaces")
    {
        if(frr_interfaces == nullptr)
        {
            frr_interfaces = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces>();
        }
        return frr_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_interfaces != nullptr)
    {
        children["frr-interfaces"] = frr_interfaces;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-interfaces")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterfaces()
{

    yang_name = "frr-interfaces"; yang_parent_name = "frr-log"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::~FrrInterfaces()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::has_data() const
{
    for (std::size_t index=0; index<frr_interface.size(); index++)
    {
        if(frr_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_interface.size(); index++)
    {
        if(frr_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-interface")
    {
        for(auto const & c : frr_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface>();
        c->parent = this;
        frr_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-interface")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::FrrInterface()
    :
    frr_interface_name{YType::str, "frr-interface-name"}
    	,
    logs(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs>())
{
    logs->parent = this;

    yang_name = "frr-interface"; yang_parent_name = "frr-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::~FrrInterface()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::has_data() const
{
    return frr_interface_name.is_set
	|| (logs !=  nullptr && logs->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-interface" <<"[frr-interface-name='" <<frr_interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs>();
        }
        return logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logs != nullptr)
    {
        children["logs"] = logs;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "frr-interface-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Logs()
{

    yang_name = "logs"; yang_parent_name = "frr-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::~Logs()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::has_data() const
{
    for (std::size_t index=0; index<log.size(); index++)
    {
        if(log[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::has_operation() const
{
    for (std::size_t index=0; index<log.size(); index++)
    {
        if(log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        for(auto const & c : log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log>();
        c->parent = this;
        log.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::Log()
    :
    log_index{YType::int32, "log-index"},
    bundle_member_interface_name{YType::str, "bundle-member-interface-name"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_prefix{YType::str, "frr-prefix"},
    frr_protocol_type{YType::enumeration, "frr-protocol-type"},
    frr_switching_time{YType::uint32, "frr-switching-time"}
    	,
    frr_timestamp(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp>())
{
    frr_timestamp->parent = this;

    yang_name = "log"; yang_parent_name = "logs"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::~Log()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::has_data() const
{
    return log_index.is_set
	|| bundle_member_interface_name.is_set
	|| frr_interface_name.is_set
	|| frr_prefix.is_set
	|| frr_protocol_type.is_set
	|| frr_switching_time.is_set
	|| (frr_timestamp !=  nullptr && frr_timestamp->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_index.yfilter)
	|| ydk::is_set(bundle_member_interface_name.yfilter)
	|| ydk::is_set(frr_interface_name.yfilter)
	|| ydk::is_set(frr_prefix.yfilter)
	|| ydk::is_set(frr_protocol_type.yfilter)
	|| ydk::is_set(frr_switching_time.yfilter)
	|| (frr_timestamp !=  nullptr && frr_timestamp->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log" <<"[log-index='" <<log_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_index.is_set || is_set(log_index.yfilter)) leaf_name_data.push_back(log_index.get_name_leafdata());
    if (bundle_member_interface_name.is_set || is_set(bundle_member_interface_name.yfilter)) leaf_name_data.push_back(bundle_member_interface_name.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.yfilter)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_prefix.is_set || is_set(frr_prefix.yfilter)) leaf_name_data.push_back(frr_prefix.get_name_leafdata());
    if (frr_protocol_type.is_set || is_set(frr_protocol_type.yfilter)) leaf_name_data.push_back(frr_protocol_type.get_name_leafdata());
    if (frr_switching_time.is_set || is_set(frr_switching_time.yfilter)) leaf_name_data.push_back(frr_switching_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-timestamp")
    {
        if(frr_timestamp == nullptr)
        {
            frr_timestamp = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp>();
        }
        return frr_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_timestamp != nullptr)
    {
        children["frr-timestamp"] = frr_timestamp;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-index")
    {
        log_index = value;
        log_index.value_namespace = name_space;
        log_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-member-interface-name")
    {
        bundle_member_interface_name = value;
        bundle_member_interface_name.value_namespace = name_space;
        bundle_member_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
        frr_interface_name.value_namespace = name_space;
        frr_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-prefix")
    {
        frr_prefix = value;
        frr_prefix.value_namespace = name_space;
        frr_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-protocol-type")
    {
        frr_protocol_type = value;
        frr_protocol_type.value_namespace = name_space;
        frr_protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-switching-time")
    {
        frr_switching_time = value;
        frr_switching_time.value_namespace = name_space;
        frr_switching_time.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-index")
    {
        log_index.yfilter = yfilter;
    }
    if(value_path == "bundle-member-interface-name")
    {
        bundle_member_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-prefix")
    {
        frr_prefix.yfilter = yfilter;
    }
    if(value_path == "frr-protocol-type")
    {
        frr_protocol_type.yfilter = yfilter;
    }
    if(value_path == "frr-switching-time")
    {
        frr_switching_time.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-timestamp" || name == "log-index" || name == "bundle-member-interface-name" || name == "frr-interface-name" || name == "frr-prefix" || name == "frr-protocol-type" || name == "frr-switching-time")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::FrrTimestamp()
    :
    nano_seconds{YType::int32, "nano-seconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "frr-timestamp"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::~FrrTimestamp()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::IssuState()
    :
    eoc_received_imdr_time_stamp{YType::str, "eoc-received-imdr-time-stamp"},
    eoc_received_slc_time_stamp{YType::str, "eoc-received-slc-time-stamp"},
    eod_received_im_time_stamp{YType::str, "eod-received-im-time-stamp"},
    eod_sent_imdr_time_stamp{YType::str, "eod-sent-imdr-time-stamp"},
    eod_sent_slc_time_stamp{YType::str, "eod-sent-slc-time-stamp"},
    fis_issu_error_ts{YType::uint64, "fis-issu-error-ts"},
    fis_issu_restart{YType::boolean, "fis-issu-restart"},
    imdr_eoc_implicit{YType::boolean, "imdr-eoc-implicit"},
    imdr_support{YType::boolean, "imdr-support"},
    slc_eoc_implicit{YType::boolean, "slc-eoc-implicit"},
    slc_support{YType::boolean, "slc-support"}
{

    yang_name = "issu-state"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::~IssuState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::has_data() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_data())
            return true;
    }
    return eoc_received_imdr_time_stamp.is_set
	|| eoc_received_slc_time_stamp.is_set
	|| eod_received_im_time_stamp.is_set
	|| eod_sent_imdr_time_stamp.is_set
	|| eod_sent_slc_time_stamp.is_set
	|| fis_issu_error_ts.is_set
	|| fis_issu_restart.is_set
	|| imdr_eoc_implicit.is_set
	|| imdr_support.is_set
	|| slc_eoc_implicit.is_set
	|| slc_support.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::has_operation() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eoc_received_imdr_time_stamp.yfilter)
	|| ydk::is_set(eoc_received_slc_time_stamp.yfilter)
	|| ydk::is_set(eod_received_im_time_stamp.yfilter)
	|| ydk::is_set(eod_sent_imdr_time_stamp.yfilter)
	|| ydk::is_set(eod_sent_slc_time_stamp.yfilter)
	|| ydk::is_set(fis_issu_error_ts.yfilter)
	|| ydk::is_set(fis_issu_restart.yfilter)
	|| ydk::is_set(imdr_eoc_implicit.yfilter)
	|| ydk::is_set(imdr_support.yfilter)
	|| ydk::is_set(slc_eoc_implicit.yfilter)
	|| ydk::is_set(slc_support.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::IssuState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::IssuState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eoc_received_imdr_time_stamp.is_set || is_set(eoc_received_imdr_time_stamp.yfilter)) leaf_name_data.push_back(eoc_received_imdr_time_stamp.get_name_leafdata());
    if (eoc_received_slc_time_stamp.is_set || is_set(eoc_received_slc_time_stamp.yfilter)) leaf_name_data.push_back(eoc_received_slc_time_stamp.get_name_leafdata());
    if (eod_received_im_time_stamp.is_set || is_set(eod_received_im_time_stamp.yfilter)) leaf_name_data.push_back(eod_received_im_time_stamp.get_name_leafdata());
    if (eod_sent_imdr_time_stamp.is_set || is_set(eod_sent_imdr_time_stamp.yfilter)) leaf_name_data.push_back(eod_sent_imdr_time_stamp.get_name_leafdata());
    if (eod_sent_slc_time_stamp.is_set || is_set(eod_sent_slc_time_stamp.yfilter)) leaf_name_data.push_back(eod_sent_slc_time_stamp.get_name_leafdata());
    if (fis_issu_error_ts.is_set || is_set(fis_issu_error_ts.yfilter)) leaf_name_data.push_back(fis_issu_error_ts.get_name_leafdata());
    if (fis_issu_restart.is_set || is_set(fis_issu_restart.yfilter)) leaf_name_data.push_back(fis_issu_restart.get_name_leafdata());
    if (imdr_eoc_implicit.is_set || is_set(imdr_eoc_implicit.yfilter)) leaf_name_data.push_back(imdr_eoc_implicit.get_name_leafdata());
    if (imdr_support.is_set || is_set(imdr_support.yfilter)) leaf_name_data.push_back(imdr_support.get_name_leafdata());
    if (slc_eoc_implicit.is_set || is_set(slc_eoc_implicit.yfilter)) leaf_name_data.push_back(slc_eoc_implicit.get_name_leafdata());
    if (slc_support.is_set || is_set(slc_support.yfilter)) leaf_name_data.push_back(slc_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::IssuState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fis-proto-state")
    {
        for(auto const & c : fis_proto_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState>();
        c->parent = this;
        fis_proto_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::IssuState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fis_proto_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::IssuState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eoc-received-imdr-time-stamp")
    {
        eoc_received_imdr_time_stamp = value;
        eoc_received_imdr_time_stamp.value_namespace = name_space;
        eoc_received_imdr_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoc-received-slc-time-stamp")
    {
        eoc_received_slc_time_stamp = value;
        eoc_received_slc_time_stamp.value_namespace = name_space;
        eoc_received_slc_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-received-im-time-stamp")
    {
        eod_received_im_time_stamp = value;
        eod_received_im_time_stamp.value_namespace = name_space;
        eod_received_im_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-sent-imdr-time-stamp")
    {
        eod_sent_imdr_time_stamp = value;
        eod_sent_imdr_time_stamp.value_namespace = name_space;
        eod_sent_imdr_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-sent-slc-time-stamp")
    {
        eod_sent_slc_time_stamp = value;
        eod_sent_slc_time_stamp.value_namespace = name_space;
        eod_sent_slc_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fis-issu-error-ts")
    {
        fis_issu_error_ts = value;
        fis_issu_error_ts.value_namespace = name_space;
        fis_issu_error_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fis-issu-restart")
    {
        fis_issu_restart = value;
        fis_issu_restart.value_namespace = name_space;
        fis_issu_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imdr-eoc-implicit")
    {
        imdr_eoc_implicit = value;
        imdr_eoc_implicit.value_namespace = name_space;
        imdr_eoc_implicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imdr-support")
    {
        imdr_support = value;
        imdr_support.value_namespace = name_space;
        imdr_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slc-eoc-implicit")
    {
        slc_eoc_implicit = value;
        slc_eoc_implicit.value_namespace = name_space;
        slc_eoc_implicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slc-support")
    {
        slc_support = value;
        slc_support.value_namespace = name_space;
        slc_support.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::IssuState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eoc-received-imdr-time-stamp")
    {
        eoc_received_imdr_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eoc-received-slc-time-stamp")
    {
        eoc_received_slc_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eod-received-im-time-stamp")
    {
        eod_received_im_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eod-sent-imdr-time-stamp")
    {
        eod_sent_imdr_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eod-sent-slc-time-stamp")
    {
        eod_sent_slc_time_stamp.yfilter = yfilter;
    }
    if(value_path == "fis-issu-error-ts")
    {
        fis_issu_error_ts.yfilter = yfilter;
    }
    if(value_path == "fis-issu-restart")
    {
        fis_issu_restart.yfilter = yfilter;
    }
    if(value_path == "imdr-eoc-implicit")
    {
        imdr_eoc_implicit.yfilter = yfilter;
    }
    if(value_path == "imdr-support")
    {
        imdr_support.yfilter = yfilter;
    }
    if(value_path == "slc-eoc-implicit")
    {
        slc_eoc_implicit.yfilter = yfilter;
    }
    if(value_path == "slc-support")
    {
        slc_support.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fis-proto-state" || name == "eoc-received-imdr-time-stamp" || name == "eoc-received-slc-time-stamp" || name == "eod-received-im-time-stamp" || name == "eod-sent-imdr-time-stamp" || name == "eod-sent-slc-time-stamp" || name == "fis-issu-error-ts" || name == "fis-issu-restart" || name == "imdr-eoc-implicit" || name == "imdr-support" || name == "slc-eoc-implicit" || name == "slc-support")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::FisProtoState()
    :
    aib_eod_time_stamp{YType::str, "aib-eod-time-stamp"},
    bcdl_tables{YType::uint32, "bcdl-tables"},
    converged_tables{YType::uint32, "converged-tables"},
    lmrib_eod_time_stamp{YType::str, "lmrib-eod-time-stamp"},
    lmrib_eod_valid{YType::boolean, "lmrib-eod-valid"},
    lsd_eod_time_stamp{YType::str, "lsd-eod-time-stamp"},
    lsd_eod_valid{YType::boolean, "lsd-eod-valid"},
    protocol_eod_time_stamp{YType::str, "protocol-eod-time-stamp"},
    protocol_eod_valid{YType::boolean, "protocol-eod-valid"},
    protocol_name{YType::str, "protocol-name"},
    rib_info_valid{YType::boolean, "rib-info-valid"},
    rib_tables_converged_time_stamp{YType::str, "rib-tables-converged-time-stamp"},
    rsi_eod_time_stamp{YType::str, "rsi-eod-time-stamp"},
    rsi_eod_valid{YType::boolean, "rsi-eod-valid"}
{

    yang_name = "fis-proto-state"; yang_parent_name = "issu-state"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::~FisProtoState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::has_data() const
{
    return aib_eod_time_stamp.is_set
	|| bcdl_tables.is_set
	|| converged_tables.is_set
	|| lmrib_eod_time_stamp.is_set
	|| lmrib_eod_valid.is_set
	|| lsd_eod_time_stamp.is_set
	|| lsd_eod_valid.is_set
	|| protocol_eod_time_stamp.is_set
	|| protocol_eod_valid.is_set
	|| protocol_name.is_set
	|| rib_info_valid.is_set
	|| rib_tables_converged_time_stamp.is_set
	|| rsi_eod_time_stamp.is_set
	|| rsi_eod_valid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aib_eod_time_stamp.yfilter)
	|| ydk::is_set(bcdl_tables.yfilter)
	|| ydk::is_set(converged_tables.yfilter)
	|| ydk::is_set(lmrib_eod_time_stamp.yfilter)
	|| ydk::is_set(lmrib_eod_valid.yfilter)
	|| ydk::is_set(lsd_eod_time_stamp.yfilter)
	|| ydk::is_set(lsd_eod_valid.yfilter)
	|| ydk::is_set(protocol_eod_time_stamp.yfilter)
	|| ydk::is_set(protocol_eod_valid.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(rib_info_valid.yfilter)
	|| ydk::is_set(rib_tables_converged_time_stamp.yfilter)
	|| ydk::is_set(rsi_eod_time_stamp.yfilter)
	|| ydk::is_set(rsi_eod_valid.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fis-proto-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aib_eod_time_stamp.is_set || is_set(aib_eod_time_stamp.yfilter)) leaf_name_data.push_back(aib_eod_time_stamp.get_name_leafdata());
    if (bcdl_tables.is_set || is_set(bcdl_tables.yfilter)) leaf_name_data.push_back(bcdl_tables.get_name_leafdata());
    if (converged_tables.is_set || is_set(converged_tables.yfilter)) leaf_name_data.push_back(converged_tables.get_name_leafdata());
    if (lmrib_eod_time_stamp.is_set || is_set(lmrib_eod_time_stamp.yfilter)) leaf_name_data.push_back(lmrib_eod_time_stamp.get_name_leafdata());
    if (lmrib_eod_valid.is_set || is_set(lmrib_eod_valid.yfilter)) leaf_name_data.push_back(lmrib_eod_valid.get_name_leafdata());
    if (lsd_eod_time_stamp.is_set || is_set(lsd_eod_time_stamp.yfilter)) leaf_name_data.push_back(lsd_eod_time_stamp.get_name_leafdata());
    if (lsd_eod_valid.is_set || is_set(lsd_eod_valid.yfilter)) leaf_name_data.push_back(lsd_eod_valid.get_name_leafdata());
    if (protocol_eod_time_stamp.is_set || is_set(protocol_eod_time_stamp.yfilter)) leaf_name_data.push_back(protocol_eod_time_stamp.get_name_leafdata());
    if (protocol_eod_valid.is_set || is_set(protocol_eod_valid.yfilter)) leaf_name_data.push_back(protocol_eod_valid.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rib_info_valid.is_set || is_set(rib_info_valid.yfilter)) leaf_name_data.push_back(rib_info_valid.get_name_leafdata());
    if (rib_tables_converged_time_stamp.is_set || is_set(rib_tables_converged_time_stamp.yfilter)) leaf_name_data.push_back(rib_tables_converged_time_stamp.get_name_leafdata());
    if (rsi_eod_time_stamp.is_set || is_set(rsi_eod_time_stamp.yfilter)) leaf_name_data.push_back(rsi_eod_time_stamp.get_name_leafdata());
    if (rsi_eod_valid.is_set || is_set(rsi_eod_valid.yfilter)) leaf_name_data.push_back(rsi_eod_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aib-eod-time-stamp")
    {
        aib_eod_time_stamp = value;
        aib_eod_time_stamp.value_namespace = name_space;
        aib_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcdl-tables")
    {
        bcdl_tables = value;
        bcdl_tables.value_namespace = name_space;
        bcdl_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "converged-tables")
    {
        converged_tables = value;
        converged_tables.value_namespace = name_space;
        converged_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-eod-time-stamp")
    {
        lmrib_eod_time_stamp = value;
        lmrib_eod_time_stamp.value_namespace = name_space;
        lmrib_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-eod-valid")
    {
        lmrib_eod_valid = value;
        lmrib_eod_valid.value_namespace = name_space;
        lmrib_eod_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-eod-time-stamp")
    {
        lsd_eod_time_stamp = value;
        lsd_eod_time_stamp.value_namespace = name_space;
        lsd_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-eod-valid")
    {
        lsd_eod_valid = value;
        lsd_eod_valid.value_namespace = name_space;
        lsd_eod_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-eod-time-stamp")
    {
        protocol_eod_time_stamp = value;
        protocol_eod_time_stamp.value_namespace = name_space;
        protocol_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-eod-valid")
    {
        protocol_eod_valid = value;
        protocol_eod_valid.value_namespace = name_space;
        protocol_eod_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-info-valid")
    {
        rib_info_valid = value;
        rib_info_valid.value_namespace = name_space;
        rib_info_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tables-converged-time-stamp")
    {
        rib_tables_converged_time_stamp = value;
        rib_tables_converged_time_stamp.value_namespace = name_space;
        rib_tables_converged_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-eod-time-stamp")
    {
        rsi_eod_time_stamp = value;
        rsi_eod_time_stamp.value_namespace = name_space;
        rsi_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-eod-valid")
    {
        rsi_eod_valid = value;
        rsi_eod_valid.value_namespace = name_space;
        rsi_eod_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aib-eod-time-stamp")
    {
        aib_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "bcdl-tables")
    {
        bcdl_tables.yfilter = yfilter;
    }
    if(value_path == "converged-tables")
    {
        converged_tables.yfilter = yfilter;
    }
    if(value_path == "lmrib-eod-time-stamp")
    {
        lmrib_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "lmrib-eod-valid")
    {
        lmrib_eod_valid.yfilter = yfilter;
    }
    if(value_path == "lsd-eod-time-stamp")
    {
        lsd_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "lsd-eod-valid")
    {
        lsd_eod_valid.yfilter = yfilter;
    }
    if(value_path == "protocol-eod-time-stamp")
    {
        protocol_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "protocol-eod-valid")
    {
        protocol_eod_valid.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "rib-info-valid")
    {
        rib_info_valid.yfilter = yfilter;
    }
    if(value_path == "rib-tables-converged-time-stamp")
    {
        rib_tables_converged_time_stamp.yfilter = yfilter;
    }
    if(value_path == "rsi-eod-time-stamp")
    {
        rsi_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "rsi-eod-valid")
    {
        rsi_eod_valid.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aib-eod-time-stamp" || name == "bcdl-tables" || name == "converged-tables" || name == "lmrib-eod-time-stamp" || name == "lmrib-eod-valid" || name == "lsd-eod-time-stamp" || name == "lsd-eod-valid" || name == "protocol-eod-time-stamp" || name == "protocol-eod-valid" || name == "protocol-name" || name == "rib-info-valid" || name == "rib-tables-converged-time-stamp" || name == "rsi-eod-time-stamp" || name == "rsi-eod-valid")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::LocalLabel()
    :
    conflicts(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts>())
{
    conflicts->parent = this;

    yang_name = "local-label"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::~LocalLabel()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_data() const
{
    return (conflicts !=  nullptr && conflicts->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_operation() const
{
    return is_set(yfilter)
	|| (conflicts !=  nullptr && conflicts->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conflicts")
    {
        if(conflicts == nullptr)
        {
            conflicts = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts>();
        }
        return conflicts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conflicts != nullptr)
    {
        children["conflicts"] = conflicts;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflicts")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflicts()
{

    yang_name = "conflicts"; yang_parent_name = "local-label"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::~Conflicts()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_data() const
{
    for (std::size_t index=0; index<conflict.size(); index++)
    {
        if(conflict[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_operation() const
{
    for (std::size_t index=0; index<conflict.size(); index++)
    {
        if(conflict[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflicts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conflict")
    {
        for(auto const & c : conflict)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict>();
        c->parent = this;
        conflict.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : conflict)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Conflict()
    :
    label{YType::uint32, "label"},
    ll_ctype{YType::enumeration, "ll-ctype"},
    local_label{YType::uint32, "local-label"},
    num_retries{YType::uint32, "num-retries"},
    pfx_tbl_id{YType::int32, "pfx-tbl-id"},
    prefix{YType::str, "prefix"},
    prefix_len{YType::int32, "prefix-len"},
    retry_ts{YType::uint64, "retry-ts"},
    source{YType::enumeration, "source"},
    source_xr{YType::uint32, "source-xr"},
    update_ts{YType::uint64, "update-ts"}
    	,
    ext(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext>())
{
    ext->parent = this;

    yang_name = "conflict"; yang_parent_name = "conflicts"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::~Conflict()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_data() const
{
    return label.is_set
	|| ll_ctype.is_set
	|| local_label.is_set
	|| num_retries.is_set
	|| pfx_tbl_id.is_set
	|| prefix.is_set
	|| prefix_len.is_set
	|| retry_ts.is_set
	|| source.is_set
	|| source_xr.is_set
	|| update_ts.is_set
	|| (ext !=  nullptr && ext->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ll_ctype.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(num_retries.yfilter)
	|| ydk::is_set(pfx_tbl_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(retry_ts.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(source_xr.yfilter)
	|| ydk::is_set(update_ts.yfilter)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ll_ctype.is_set || is_set(ll_ctype.yfilter)) leaf_name_data.push_back(ll_ctype.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (num_retries.is_set || is_set(num_retries.yfilter)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (pfx_tbl_id.is_set || is_set(pfx_tbl_id.yfilter)) leaf_name_data.push_back(pfx_tbl_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (retry_ts.is_set || is_set(retry_ts.yfilter)) leaf_name_data.push_back(retry_ts.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_xr.is_set || is_set(source_xr.yfilter)) leaf_name_data.push_back(source_xr.get_name_leafdata());
    if (update_ts.is_set || is_set(update_ts.yfilter)) leaf_name_data.push_back(update_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext")
    {
        if(ext == nullptr)
        {
            ext = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext>();
        }
        return ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ext != nullptr)
    {
        children["ext"] = ext;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ll-ctype")
    {
        ll_ctype = value;
        ll_ctype.value_namespace = name_space;
        ll_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-retries")
    {
        num_retries = value;
        num_retries.value_namespace = name_space;
        num_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx-tbl-id")
    {
        pfx_tbl_id = value;
        pfx_tbl_id.value_namespace = name_space;
        pfx_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-ts")
    {
        retry_ts = value;
        retry_ts.value_namespace = name_space;
        retry_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-xr")
    {
        source_xr = value;
        source_xr.value_namespace = name_space;
        source_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-ts")
    {
        update_ts = value;
        update_ts.value_namespace = name_space;
        update_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ll-ctype")
    {
        ll_ctype.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "num-retries")
    {
        num_retries.yfilter = yfilter;
    }
    if(value_path == "pfx-tbl-id")
    {
        pfx_tbl_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "retry-ts")
    {
        retry_ts.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "source-xr")
    {
        source_xr.yfilter = yfilter;
    }
    if(value_path == "update-ts")
    {
        update_ts.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext" || name == "label" || name == "ll-ctype" || name == "local-label" || name == "num-retries" || name == "pfx-tbl-id" || name == "prefix" || name == "prefix-len" || name == "retry-ts" || name == "source" || name == "source-xr" || name == "update-ts")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Ext()
    :
    type{YType::enumeration, "type"}
    	,
    lsm(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm>())
	,pfx(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx>())
{
    lsm->parent = this;
    pfx->parent = this;

    yang_name = "ext"; yang_parent_name = "conflict"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::~Ext()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_data() const
{
    return type.is_set
	|| (lsm !=  nullptr && lsm->has_data())
	|| (pfx !=  nullptr && pfx->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (lsm !=  nullptr && lsm->has_operation())
	|| (pfx !=  nullptr && pfx->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsm")
    {
        if(lsm == nullptr)
        {
            lsm = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm>();
        }
        return lsm;
    }

    if(child_yang_name == "pfx")
    {
        if(pfx == nullptr)
        {
            pfx = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx>();
        }
        return pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsm != nullptr)
    {
        children["lsm"] = lsm;
    }

    if(pfx != nullptr)
    {
        children["pfx"] = pfx;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsm" || name == "pfx" || name == "type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::Lsm()
    :
    mcast_id{YType::uint32, "mcast-id"},
    nh{YType::str, "nh"}
{

    yang_name = "lsm"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::~Lsm()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_data() const
{
    return mcast_id.is_set
	|| nh.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_id.yfilter)
	|| ydk::is_set(nh.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_id.is_set || is_set(mcast_id.yfilter)) leaf_name_data.push_back(mcast_id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-id")
    {
        mcast_id = value;
        mcast_id.value_namespace = name_space;
        mcast_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-id")
    {
        mcast_id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-id" || name == "nh")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::Pfx()
    :
    pfx{YType::str, "pfx"},
    tbl_id{YType::uint32, "tbl-id"}
{

    yang_name = "pfx"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::~Pfx()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_data() const
{
    return pfx.is_set
	|| tbl_id.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(tbl_id.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (tbl_id.is_set || is_set(tbl_id.yfilter)) leaf_name_data.push_back(tbl_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-id")
    {
        tbl_id = value;
        tbl_id.value_namespace = name_space;
        tbl_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "tbl-id")
    {
        tbl_id.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "tbl-id")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::Misc()
    :
    mi_clock_time{YType::uint64, "mi-clock-time"},
    mi_cpu_time{YType::uint64, "mi-cpu-time"},
    mi_cpuless_count{YType::uint32, "mi-cpuless-count"},
    mi_cpuless_init{YType::boolean, "mi-cpuless-init"},
    mi_idb_recycle_cleanup_count{YType::uint32, "mi-idb-recycle-cleanup-count"},
    mi_idb_recycle_count{YType::uint32, "mi-idb-recycle-count"},
    mi_num_mgmt_list{YType::uint32, "mi-num-mgmt-list"},
    mi_num_virtual_ll_addresses_added{YType::uint32, "mi-num-virtual-ll-addresses-added"},
    mi_num_virtual_ll_addresses_cached{YType::uint32, "mi-num-virtual-ll-addresses-cached"},
    mi_num_virtual_ll_addresses_deleted{YType::uint32, "mi-num-virtual-ll-addresses-deleted"},
    mi_num_virtual_ll_addresses_dropped{YType::uint32, "mi-num-virtual-ll-addresses-dropped"},
    mi_pfi_ifh_del{YType::uint64, "mi-pfi-ifh-del"},
    mi_pfi_ifh_stale{YType::uint64, "mi-pfi-ifh-stale"},
    mi_pfi_ifh_upd{YType::uint64, "mi-pfi-ifh-upd"},
    mi_prefer_aib_routes_over_rib_cfg{YType::boolean, "mi-prefer-aib-routes-over-rib-cfg"},
    mi_prefer_aib_routes_over_rib_oper{YType::boolean, "mi-prefer-aib-routes-over-rib-oper"},
    mi_shm_reset_ts{YType::uint64, "mi-shm-reset-ts"},
    mi_tot_dnld_time{YType::uint64, "mi-tot-dnld-time"},
    mi_tot_gtrie_time{YType::uint64, "mi-tot-gtrie-time"},
    mi_tot_plat_upd_time{YType::uint64, "mi-tot-plat-upd-time"},
    mi_xpl_ldi_enabled{YType::boolean, "mi-xpl-ldi-enabled"}
    	,
    mi_issu_state(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState>())
	,mi_plat_capabilities(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities>())
{
    mi_issu_state->parent = this;
    mi_plat_capabilities->parent = this;

    yang_name = "misc"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::~Misc()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::has_data() const
{
    for (std::size_t index=0; index<mi_cpuless_node.size(); index++)
    {
        if(mi_cpuless_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_del.size(); index++)
    {
        if(mi_del[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_frr_stat.size(); index++)
    {
        if(mi_frr_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_ext_cleanup_failed_count.size(); index++)
    {
        if(mi_idb_ext_cleanup_failed_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_lsec_enabled_num.size(); index++)
    {
        if(mi_idb_lsec_enabled_num[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_purge_cntr.size(); index++)
    {
        if(mi_idb_purge_cntr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_lrpf_num.size(); index++)
    {
        if(mi_lrpf_num[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_lrpf_stats_act.size(); index++)
    {
        if(mi_lrpf_stats_act[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_lrpf_stats_fail.size(); index++)
    {
        if(mi_lrpf_stats_fail[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_num_lisp_eid.size(); index++)
    {
        if(mi_num_lisp_eid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_num_lisp_valid_eid.size(); index++)
    {
        if(mi_num_lisp_valid_eid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_proto_dbg_stat.size(); index++)
    {
        if(mi_proto_dbg_stat[index]->has_data())
            return true;
    }
    return mi_clock_time.is_set
	|| mi_cpu_time.is_set
	|| mi_cpuless_count.is_set
	|| mi_cpuless_init.is_set
	|| mi_idb_recycle_cleanup_count.is_set
	|| mi_idb_recycle_count.is_set
	|| mi_num_mgmt_list.is_set
	|| mi_num_virtual_ll_addresses_added.is_set
	|| mi_num_virtual_ll_addresses_cached.is_set
	|| mi_num_virtual_ll_addresses_deleted.is_set
	|| mi_num_virtual_ll_addresses_dropped.is_set
	|| mi_pfi_ifh_del.is_set
	|| mi_pfi_ifh_stale.is_set
	|| mi_pfi_ifh_upd.is_set
	|| mi_prefer_aib_routes_over_rib_cfg.is_set
	|| mi_prefer_aib_routes_over_rib_oper.is_set
	|| mi_shm_reset_ts.is_set
	|| mi_tot_dnld_time.is_set
	|| mi_tot_gtrie_time.is_set
	|| mi_tot_plat_upd_time.is_set
	|| mi_xpl_ldi_enabled.is_set
	|| (mi_issu_state !=  nullptr && mi_issu_state->has_data())
	|| (mi_plat_capabilities !=  nullptr && mi_plat_capabilities->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::has_operation() const
{
    for (std::size_t index=0; index<mi_cpuless_node.size(); index++)
    {
        if(mi_cpuless_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_del.size(); index++)
    {
        if(mi_del[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_frr_stat.size(); index++)
    {
        if(mi_frr_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_ext_cleanup_failed_count.size(); index++)
    {
        if(mi_idb_ext_cleanup_failed_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_lsec_enabled_num.size(); index++)
    {
        if(mi_idb_lsec_enabled_num[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_purge_cntr.size(); index++)
    {
        if(mi_idb_purge_cntr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_lrpf_num.size(); index++)
    {
        if(mi_lrpf_num[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_lrpf_stats_act.size(); index++)
    {
        if(mi_lrpf_stats_act[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_lrpf_stats_fail.size(); index++)
    {
        if(mi_lrpf_stats_fail[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_num_lisp_eid.size(); index++)
    {
        if(mi_num_lisp_eid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_num_lisp_valid_eid.size(); index++)
    {
        if(mi_num_lisp_valid_eid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_proto_dbg_stat.size(); index++)
    {
        if(mi_proto_dbg_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mi_clock_time.yfilter)
	|| ydk::is_set(mi_cpu_time.yfilter)
	|| ydk::is_set(mi_cpuless_count.yfilter)
	|| ydk::is_set(mi_cpuless_init.yfilter)
	|| ydk::is_set(mi_idb_recycle_cleanup_count.yfilter)
	|| ydk::is_set(mi_idb_recycle_count.yfilter)
	|| ydk::is_set(mi_num_mgmt_list.yfilter)
	|| ydk::is_set(mi_num_virtual_ll_addresses_added.yfilter)
	|| ydk::is_set(mi_num_virtual_ll_addresses_cached.yfilter)
	|| ydk::is_set(mi_num_virtual_ll_addresses_deleted.yfilter)
	|| ydk::is_set(mi_num_virtual_ll_addresses_dropped.yfilter)
	|| ydk::is_set(mi_pfi_ifh_del.yfilter)
	|| ydk::is_set(mi_pfi_ifh_stale.yfilter)
	|| ydk::is_set(mi_pfi_ifh_upd.yfilter)
	|| ydk::is_set(mi_prefer_aib_routes_over_rib_cfg.yfilter)
	|| ydk::is_set(mi_prefer_aib_routes_over_rib_oper.yfilter)
	|| ydk::is_set(mi_shm_reset_ts.yfilter)
	|| ydk::is_set(mi_tot_dnld_time.yfilter)
	|| ydk::is_set(mi_tot_gtrie_time.yfilter)
	|| ydk::is_set(mi_tot_plat_upd_time.yfilter)
	|| ydk::is_set(mi_xpl_ldi_enabled.yfilter)
	|| (mi_issu_state !=  nullptr && mi_issu_state->has_operation())
	|| (mi_plat_capabilities !=  nullptr && mi_plat_capabilities->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "misc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_clock_time.is_set || is_set(mi_clock_time.yfilter)) leaf_name_data.push_back(mi_clock_time.get_name_leafdata());
    if (mi_cpu_time.is_set || is_set(mi_cpu_time.yfilter)) leaf_name_data.push_back(mi_cpu_time.get_name_leafdata());
    if (mi_cpuless_count.is_set || is_set(mi_cpuless_count.yfilter)) leaf_name_data.push_back(mi_cpuless_count.get_name_leafdata());
    if (mi_cpuless_init.is_set || is_set(mi_cpuless_init.yfilter)) leaf_name_data.push_back(mi_cpuless_init.get_name_leafdata());
    if (mi_idb_recycle_cleanup_count.is_set || is_set(mi_idb_recycle_cleanup_count.yfilter)) leaf_name_data.push_back(mi_idb_recycle_cleanup_count.get_name_leafdata());
    if (mi_idb_recycle_count.is_set || is_set(mi_idb_recycle_count.yfilter)) leaf_name_data.push_back(mi_idb_recycle_count.get_name_leafdata());
    if (mi_num_mgmt_list.is_set || is_set(mi_num_mgmt_list.yfilter)) leaf_name_data.push_back(mi_num_mgmt_list.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_added.is_set || is_set(mi_num_virtual_ll_addresses_added.yfilter)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_added.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_cached.is_set || is_set(mi_num_virtual_ll_addresses_cached.yfilter)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_cached.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_deleted.is_set || is_set(mi_num_virtual_ll_addresses_deleted.yfilter)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_deleted.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_dropped.is_set || is_set(mi_num_virtual_ll_addresses_dropped.yfilter)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_dropped.get_name_leafdata());
    if (mi_pfi_ifh_del.is_set || is_set(mi_pfi_ifh_del.yfilter)) leaf_name_data.push_back(mi_pfi_ifh_del.get_name_leafdata());
    if (mi_pfi_ifh_stale.is_set || is_set(mi_pfi_ifh_stale.yfilter)) leaf_name_data.push_back(mi_pfi_ifh_stale.get_name_leafdata());
    if (mi_pfi_ifh_upd.is_set || is_set(mi_pfi_ifh_upd.yfilter)) leaf_name_data.push_back(mi_pfi_ifh_upd.get_name_leafdata());
    if (mi_prefer_aib_routes_over_rib_cfg.is_set || is_set(mi_prefer_aib_routes_over_rib_cfg.yfilter)) leaf_name_data.push_back(mi_prefer_aib_routes_over_rib_cfg.get_name_leafdata());
    if (mi_prefer_aib_routes_over_rib_oper.is_set || is_set(mi_prefer_aib_routes_over_rib_oper.yfilter)) leaf_name_data.push_back(mi_prefer_aib_routes_over_rib_oper.get_name_leafdata());
    if (mi_shm_reset_ts.is_set || is_set(mi_shm_reset_ts.yfilter)) leaf_name_data.push_back(mi_shm_reset_ts.get_name_leafdata());
    if (mi_tot_dnld_time.is_set || is_set(mi_tot_dnld_time.yfilter)) leaf_name_data.push_back(mi_tot_dnld_time.get_name_leafdata());
    if (mi_tot_gtrie_time.is_set || is_set(mi_tot_gtrie_time.yfilter)) leaf_name_data.push_back(mi_tot_gtrie_time.get_name_leafdata());
    if (mi_tot_plat_upd_time.is_set || is_set(mi_tot_plat_upd_time.yfilter)) leaf_name_data.push_back(mi_tot_plat_upd_time.get_name_leafdata());
    if (mi_xpl_ldi_enabled.is_set || is_set(mi_xpl_ldi_enabled.yfilter)) leaf_name_data.push_back(mi_xpl_ldi_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mi-cpuless-node")
    {
        for(auto const & c : mi_cpuless_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode>();
        c->parent = this;
        mi_cpuless_node.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-del")
    {
        for(auto const & c : mi_del)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel>();
        c->parent = this;
        mi_del.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-frr-stat")
    {
        for(auto const & c : mi_frr_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat>();
        c->parent = this;
        mi_frr_stat.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-idb-ext-cleanup-failed-count")
    {
        for(auto const & c : mi_idb_ext_cleanup_failed_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount>();
        c->parent = this;
        mi_idb_ext_cleanup_failed_count.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-idb-lsec-enabled-num")
    {
        for(auto const & c : mi_idb_lsec_enabled_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum>();
        c->parent = this;
        mi_idb_lsec_enabled_num.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-idb-purge-cntr")
    {
        for(auto const & c : mi_idb_purge_cntr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr>();
        c->parent = this;
        mi_idb_purge_cntr.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-issu-state")
    {
        if(mi_issu_state == nullptr)
        {
            mi_issu_state = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState>();
        }
        return mi_issu_state;
    }

    if(child_yang_name == "mi-lrpf-num")
    {
        for(auto const & c : mi_lrpf_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum>();
        c->parent = this;
        mi_lrpf_num.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-lrpf-stats-act")
    {
        for(auto const & c : mi_lrpf_stats_act)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct>();
        c->parent = this;
        mi_lrpf_stats_act.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-lrpf-stats-fail")
    {
        for(auto const & c : mi_lrpf_stats_fail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail>();
        c->parent = this;
        mi_lrpf_stats_fail.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-num-lisp-eid")
    {
        for(auto const & c : mi_num_lisp_eid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid>();
        c->parent = this;
        mi_num_lisp_eid.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-num-lisp-valid-eid")
    {
        for(auto const & c : mi_num_lisp_valid_eid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid>();
        c->parent = this;
        mi_num_lisp_valid_eid.push_back(c);
        return c;
    }

    if(child_yang_name == "mi-plat-capabilities")
    {
        if(mi_plat_capabilities == nullptr)
        {
            mi_plat_capabilities = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities>();
        }
        return mi_plat_capabilities;
    }

    if(child_yang_name == "mi-proto-dbg-stat")
    {
        for(auto const & c : mi_proto_dbg_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat>();
        c->parent = this;
        mi_proto_dbg_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mi_cpuless_node)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_del)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_frr_stat)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_idb_ext_cleanup_failed_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_idb_lsec_enabled_num)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_idb_purge_cntr)
    {
        children[c->get_segment_path()] = c;
    }

    if(mi_issu_state != nullptr)
    {
        children["mi-issu-state"] = mi_issu_state;
    }

    for (auto const & c : mi_lrpf_num)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_lrpf_stats_act)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_lrpf_stats_fail)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_num_lisp_eid)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mi_num_lisp_valid_eid)
    {
        children[c->get_segment_path()] = c;
    }

    if(mi_plat_capabilities != nullptr)
    {
        children["mi-plat-capabilities"] = mi_plat_capabilities;
    }

    for (auto const & c : mi_proto_dbg_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-clock-time")
    {
        mi_clock_time = value;
        mi_clock_time.value_namespace = name_space;
        mi_clock_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-cpu-time")
    {
        mi_cpu_time = value;
        mi_cpu_time.value_namespace = name_space;
        mi_cpu_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-cpuless-count")
    {
        mi_cpuless_count = value;
        mi_cpuless_count.value_namespace = name_space;
        mi_cpuless_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-cpuless-init")
    {
        mi_cpuless_init = value;
        mi_cpuless_init.value_namespace = name_space;
        mi_cpuless_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-idb-recycle-cleanup-count")
    {
        mi_idb_recycle_cleanup_count = value;
        mi_idb_recycle_cleanup_count.value_namespace = name_space;
        mi_idb_recycle_cleanup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-idb-recycle-count")
    {
        mi_idb_recycle_count = value;
        mi_idb_recycle_count.value_namespace = name_space;
        mi_idb_recycle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-mgmt-list")
    {
        mi_num_mgmt_list = value;
        mi_num_mgmt_list.value_namespace = name_space;
        mi_num_mgmt_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-virtual-ll-addresses-added")
    {
        mi_num_virtual_ll_addresses_added = value;
        mi_num_virtual_ll_addresses_added.value_namespace = name_space;
        mi_num_virtual_ll_addresses_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-virtual-ll-addresses-cached")
    {
        mi_num_virtual_ll_addresses_cached = value;
        mi_num_virtual_ll_addresses_cached.value_namespace = name_space;
        mi_num_virtual_ll_addresses_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-virtual-ll-addresses-deleted")
    {
        mi_num_virtual_ll_addresses_deleted = value;
        mi_num_virtual_ll_addresses_deleted.value_namespace = name_space;
        mi_num_virtual_ll_addresses_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-virtual-ll-addresses-dropped")
    {
        mi_num_virtual_ll_addresses_dropped = value;
        mi_num_virtual_ll_addresses_dropped.value_namespace = name_space;
        mi_num_virtual_ll_addresses_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-pfi-ifh-del")
    {
        mi_pfi_ifh_del = value;
        mi_pfi_ifh_del.value_namespace = name_space;
        mi_pfi_ifh_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-pfi-ifh-stale")
    {
        mi_pfi_ifh_stale = value;
        mi_pfi_ifh_stale.value_namespace = name_space;
        mi_pfi_ifh_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-pfi-ifh-upd")
    {
        mi_pfi_ifh_upd = value;
        mi_pfi_ifh_upd.value_namespace = name_space;
        mi_pfi_ifh_upd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-prefer-aib-routes-over-rib-cfg")
    {
        mi_prefer_aib_routes_over_rib_cfg = value;
        mi_prefer_aib_routes_over_rib_cfg.value_namespace = name_space;
        mi_prefer_aib_routes_over_rib_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-prefer-aib-routes-over-rib-oper")
    {
        mi_prefer_aib_routes_over_rib_oper = value;
        mi_prefer_aib_routes_over_rib_oper.value_namespace = name_space;
        mi_prefer_aib_routes_over_rib_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-shm-reset-ts")
    {
        mi_shm_reset_ts = value;
        mi_shm_reset_ts.value_namespace = name_space;
        mi_shm_reset_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-tot-dnld-time")
    {
        mi_tot_dnld_time = value;
        mi_tot_dnld_time.value_namespace = name_space;
        mi_tot_dnld_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-tot-gtrie-time")
    {
        mi_tot_gtrie_time = value;
        mi_tot_gtrie_time.value_namespace = name_space;
        mi_tot_gtrie_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-tot-plat-upd-time")
    {
        mi_tot_plat_upd_time = value;
        mi_tot_plat_upd_time.value_namespace = name_space;
        mi_tot_plat_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-xpl-ldi-enabled")
    {
        mi_xpl_ldi_enabled = value;
        mi_xpl_ldi_enabled.value_namespace = name_space;
        mi_xpl_ldi_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-clock-time")
    {
        mi_clock_time.yfilter = yfilter;
    }
    if(value_path == "mi-cpu-time")
    {
        mi_cpu_time.yfilter = yfilter;
    }
    if(value_path == "mi-cpuless-count")
    {
        mi_cpuless_count.yfilter = yfilter;
    }
    if(value_path == "mi-cpuless-init")
    {
        mi_cpuless_init.yfilter = yfilter;
    }
    if(value_path == "mi-idb-recycle-cleanup-count")
    {
        mi_idb_recycle_cleanup_count.yfilter = yfilter;
    }
    if(value_path == "mi-idb-recycle-count")
    {
        mi_idb_recycle_count.yfilter = yfilter;
    }
    if(value_path == "mi-num-mgmt-list")
    {
        mi_num_mgmt_list.yfilter = yfilter;
    }
    if(value_path == "mi-num-virtual-ll-addresses-added")
    {
        mi_num_virtual_ll_addresses_added.yfilter = yfilter;
    }
    if(value_path == "mi-num-virtual-ll-addresses-cached")
    {
        mi_num_virtual_ll_addresses_cached.yfilter = yfilter;
    }
    if(value_path == "mi-num-virtual-ll-addresses-deleted")
    {
        mi_num_virtual_ll_addresses_deleted.yfilter = yfilter;
    }
    if(value_path == "mi-num-virtual-ll-addresses-dropped")
    {
        mi_num_virtual_ll_addresses_dropped.yfilter = yfilter;
    }
    if(value_path == "mi-pfi-ifh-del")
    {
        mi_pfi_ifh_del.yfilter = yfilter;
    }
    if(value_path == "mi-pfi-ifh-stale")
    {
        mi_pfi_ifh_stale.yfilter = yfilter;
    }
    if(value_path == "mi-pfi-ifh-upd")
    {
        mi_pfi_ifh_upd.yfilter = yfilter;
    }
    if(value_path == "mi-prefer-aib-routes-over-rib-cfg")
    {
        mi_prefer_aib_routes_over_rib_cfg.yfilter = yfilter;
    }
    if(value_path == "mi-prefer-aib-routes-over-rib-oper")
    {
        mi_prefer_aib_routes_over_rib_oper.yfilter = yfilter;
    }
    if(value_path == "mi-shm-reset-ts")
    {
        mi_shm_reset_ts.yfilter = yfilter;
    }
    if(value_path == "mi-tot-dnld-time")
    {
        mi_tot_dnld_time.yfilter = yfilter;
    }
    if(value_path == "mi-tot-gtrie-time")
    {
        mi_tot_gtrie_time.yfilter = yfilter;
    }
    if(value_path == "mi-tot-plat-upd-time")
    {
        mi_tot_plat_upd_time.yfilter = yfilter;
    }
    if(value_path == "mi-xpl-ldi-enabled")
    {
        mi_xpl_ldi_enabled.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi-cpuless-node" || name == "mi-del" || name == "mi-frr-stat" || name == "mi-idb-ext-cleanup-failed-count" || name == "mi-idb-lsec-enabled-num" || name == "mi-idb-purge-cntr" || name == "mi-issu-state" || name == "mi-lrpf-num" || name == "mi-lrpf-stats-act" || name == "mi-lrpf-stats-fail" || name == "mi-num-lisp-eid" || name == "mi-num-lisp-valid-eid" || name == "mi-plat-capabilities" || name == "mi-proto-dbg-stat" || name == "mi-clock-time" || name == "mi-cpu-time" || name == "mi-cpuless-count" || name == "mi-cpuless-init" || name == "mi-idb-recycle-cleanup-count" || name == "mi-idb-recycle-count" || name == "mi-num-mgmt-list" || name == "mi-num-virtual-ll-addresses-added" || name == "mi-num-virtual-ll-addresses-cached" || name == "mi-num-virtual-ll-addresses-deleted" || name == "mi-num-virtual-ll-addresses-dropped" || name == "mi-pfi-ifh-del" || name == "mi-pfi-ifh-stale" || name == "mi-pfi-ifh-upd" || name == "mi-prefer-aib-routes-over-rib-cfg" || name == "mi-prefer-aib-routes-over-rib-oper" || name == "mi-shm-reset-ts" || name == "mi-tot-dnld-time" || name == "mi-tot-gtrie-time" || name == "mi-tot-plat-upd-time" || name == "mi-xpl-ldi-enabled")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::MiCpulessNode()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-cpuless-node"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::~MiCpulessNode()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-cpuless-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::MiDel()
    :
    msec_time{YType::uint64, "msec-time"},
    prfx{YType::str, "prfx"},
    prfx_len{YType::uint16, "prfx-len"},
    prfx_proto{YType::uint16, "prfx-proto"},
    tableid{YType::uint32, "tableid"}
{

    yang_name = "mi-del"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::~MiDel()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_data() const
{
    return msec_time.is_set
	|| prfx.is_set
	|| prfx_len.is_set
	|| prfx_proto.is_set
	|| tableid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec_time.yfilter)
	|| ydk::is_set(prfx.yfilter)
	|| ydk::is_set(prfx_len.yfilter)
	|| ydk::is_set(prfx_proto.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-del";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec_time.is_set || is_set(msec_time.yfilter)) leaf_name_data.push_back(msec_time.get_name_leafdata());
    if (prfx.is_set || is_set(prfx.yfilter)) leaf_name_data.push_back(prfx.get_name_leafdata());
    if (prfx_len.is_set || is_set(prfx_len.yfilter)) leaf_name_data.push_back(prfx_len.get_name_leafdata());
    if (prfx_proto.is_set || is_set(prfx_proto.yfilter)) leaf_name_data.push_back(prfx_proto.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec-time")
    {
        msec_time = value;
        msec_time.value_namespace = name_space;
        msec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prfx")
    {
        prfx = value;
        prfx.value_namespace = name_space;
        prfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prfx-len")
    {
        prfx_len = value;
        prfx_len.value_namespace = name_space;
        prfx_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prfx-proto")
    {
        prfx_proto = value;
        prfx_proto.value_namespace = name_space;
        prfx_proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableid")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec-time")
    {
        msec_time.yfilter = yfilter;
    }
    if(value_path == "prfx")
    {
        prfx.yfilter = yfilter;
    }
    if(value_path == "prfx-len")
    {
        prfx_len.yfilter = yfilter;
    }
    if(value_path == "prfx-proto")
    {
        prfx_proto.yfilter = yfilter;
    }
    if(value_path == "tableid")
    {
        tableid.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec-time" || name == "prfx" || name == "prfx-len" || name == "prfx-proto" || name == "tableid")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::MiFrrStat()
    :
    mi_num_bfd_down{YType::uint32, "mi-num-bfd-down"},
    mi_num_bkup_frr_objects{YType::uint32, "mi-num-bkup-frr-objects"},
    mi_num_frr_logs{YType::uint32, "mi-num-frr-logs"},
    mi_num_frr_proto_events{YType::uint32, "mi-num-frr-proto-events"},
    mi_num_frr_reset{YType::uint32, "mi-num-frr-reset"},
    mi_num_frr_reset_queue_adds{YType::uint32, "mi-num-frr-reset-queue-adds"},
    mi_num_frr_reset_queue_remove{YType::uint32, "mi-num-frr-reset-queue-remove"},
    mi_num_intf_frr{YType::uint32, "mi-num-intf-frr"},
    mi_num_parent_intf_frr{YType::uint32, "mi-num-parent-intf-frr"},
    mi_num_pfi_intf_down{YType::uint32, "mi-num-pfi-intf-down"},
    mi_num_prot_frr_objects{YType::uint32, "mi-num-prot-frr-objects"},
    mi_num_tunid_alloc_failures{YType::uint32, "mi-num-tunid-alloc-failures"},
    mi_num_tunid_allocs{YType::uint32, "mi-num-tunid-allocs"},
    mi_num_tunid_free_failures{YType::uint32, "mi-num-tunid-free-failures"},
    mi_num_tunid_frees{YType::uint32, "mi-num-tunid-frees"}
{

    yang_name = "mi-frr-stat"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::~MiFrrStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_data() const
{
    return mi_num_bfd_down.is_set
	|| mi_num_bkup_frr_objects.is_set
	|| mi_num_frr_logs.is_set
	|| mi_num_frr_proto_events.is_set
	|| mi_num_frr_reset.is_set
	|| mi_num_frr_reset_queue_adds.is_set
	|| mi_num_frr_reset_queue_remove.is_set
	|| mi_num_intf_frr.is_set
	|| mi_num_parent_intf_frr.is_set
	|| mi_num_pfi_intf_down.is_set
	|| mi_num_prot_frr_objects.is_set
	|| mi_num_tunid_alloc_failures.is_set
	|| mi_num_tunid_allocs.is_set
	|| mi_num_tunid_free_failures.is_set
	|| mi_num_tunid_frees.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_num_bfd_down.yfilter)
	|| ydk::is_set(mi_num_bkup_frr_objects.yfilter)
	|| ydk::is_set(mi_num_frr_logs.yfilter)
	|| ydk::is_set(mi_num_frr_proto_events.yfilter)
	|| ydk::is_set(mi_num_frr_reset.yfilter)
	|| ydk::is_set(mi_num_frr_reset_queue_adds.yfilter)
	|| ydk::is_set(mi_num_frr_reset_queue_remove.yfilter)
	|| ydk::is_set(mi_num_intf_frr.yfilter)
	|| ydk::is_set(mi_num_parent_intf_frr.yfilter)
	|| ydk::is_set(mi_num_pfi_intf_down.yfilter)
	|| ydk::is_set(mi_num_prot_frr_objects.yfilter)
	|| ydk::is_set(mi_num_tunid_alloc_failures.yfilter)
	|| ydk::is_set(mi_num_tunid_allocs.yfilter)
	|| ydk::is_set(mi_num_tunid_free_failures.yfilter)
	|| ydk::is_set(mi_num_tunid_frees.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-frr-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_num_bfd_down.is_set || is_set(mi_num_bfd_down.yfilter)) leaf_name_data.push_back(mi_num_bfd_down.get_name_leafdata());
    if (mi_num_bkup_frr_objects.is_set || is_set(mi_num_bkup_frr_objects.yfilter)) leaf_name_data.push_back(mi_num_bkup_frr_objects.get_name_leafdata());
    if (mi_num_frr_logs.is_set || is_set(mi_num_frr_logs.yfilter)) leaf_name_data.push_back(mi_num_frr_logs.get_name_leafdata());
    if (mi_num_frr_proto_events.is_set || is_set(mi_num_frr_proto_events.yfilter)) leaf_name_data.push_back(mi_num_frr_proto_events.get_name_leafdata());
    if (mi_num_frr_reset.is_set || is_set(mi_num_frr_reset.yfilter)) leaf_name_data.push_back(mi_num_frr_reset.get_name_leafdata());
    if (mi_num_frr_reset_queue_adds.is_set || is_set(mi_num_frr_reset_queue_adds.yfilter)) leaf_name_data.push_back(mi_num_frr_reset_queue_adds.get_name_leafdata());
    if (mi_num_frr_reset_queue_remove.is_set || is_set(mi_num_frr_reset_queue_remove.yfilter)) leaf_name_data.push_back(mi_num_frr_reset_queue_remove.get_name_leafdata());
    if (mi_num_intf_frr.is_set || is_set(mi_num_intf_frr.yfilter)) leaf_name_data.push_back(mi_num_intf_frr.get_name_leafdata());
    if (mi_num_parent_intf_frr.is_set || is_set(mi_num_parent_intf_frr.yfilter)) leaf_name_data.push_back(mi_num_parent_intf_frr.get_name_leafdata());
    if (mi_num_pfi_intf_down.is_set || is_set(mi_num_pfi_intf_down.yfilter)) leaf_name_data.push_back(mi_num_pfi_intf_down.get_name_leafdata());
    if (mi_num_prot_frr_objects.is_set || is_set(mi_num_prot_frr_objects.yfilter)) leaf_name_data.push_back(mi_num_prot_frr_objects.get_name_leafdata());
    if (mi_num_tunid_alloc_failures.is_set || is_set(mi_num_tunid_alloc_failures.yfilter)) leaf_name_data.push_back(mi_num_tunid_alloc_failures.get_name_leafdata());
    if (mi_num_tunid_allocs.is_set || is_set(mi_num_tunid_allocs.yfilter)) leaf_name_data.push_back(mi_num_tunid_allocs.get_name_leafdata());
    if (mi_num_tunid_free_failures.is_set || is_set(mi_num_tunid_free_failures.yfilter)) leaf_name_data.push_back(mi_num_tunid_free_failures.get_name_leafdata());
    if (mi_num_tunid_frees.is_set || is_set(mi_num_tunid_frees.yfilter)) leaf_name_data.push_back(mi_num_tunid_frees.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-num-bfd-down")
    {
        mi_num_bfd_down = value;
        mi_num_bfd_down.value_namespace = name_space;
        mi_num_bfd_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-bkup-frr-objects")
    {
        mi_num_bkup_frr_objects = value;
        mi_num_bkup_frr_objects.value_namespace = name_space;
        mi_num_bkup_frr_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-logs")
    {
        mi_num_frr_logs = value;
        mi_num_frr_logs.value_namespace = name_space;
        mi_num_frr_logs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-proto-events")
    {
        mi_num_frr_proto_events = value;
        mi_num_frr_proto_events.value_namespace = name_space;
        mi_num_frr_proto_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-reset")
    {
        mi_num_frr_reset = value;
        mi_num_frr_reset.value_namespace = name_space;
        mi_num_frr_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-reset-queue-adds")
    {
        mi_num_frr_reset_queue_adds = value;
        mi_num_frr_reset_queue_adds.value_namespace = name_space;
        mi_num_frr_reset_queue_adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-frr-reset-queue-remove")
    {
        mi_num_frr_reset_queue_remove = value;
        mi_num_frr_reset_queue_remove.value_namespace = name_space;
        mi_num_frr_reset_queue_remove.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-intf-frr")
    {
        mi_num_intf_frr = value;
        mi_num_intf_frr.value_namespace = name_space;
        mi_num_intf_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-parent-intf-frr")
    {
        mi_num_parent_intf_frr = value;
        mi_num_parent_intf_frr.value_namespace = name_space;
        mi_num_parent_intf_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-pfi-intf-down")
    {
        mi_num_pfi_intf_down = value;
        mi_num_pfi_intf_down.value_namespace = name_space;
        mi_num_pfi_intf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-prot-frr-objects")
    {
        mi_num_prot_frr_objects = value;
        mi_num_prot_frr_objects.value_namespace = name_space;
        mi_num_prot_frr_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-alloc-failures")
    {
        mi_num_tunid_alloc_failures = value;
        mi_num_tunid_alloc_failures.value_namespace = name_space;
        mi_num_tunid_alloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-allocs")
    {
        mi_num_tunid_allocs = value;
        mi_num_tunid_allocs.value_namespace = name_space;
        mi_num_tunid_allocs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-free-failures")
    {
        mi_num_tunid_free_failures = value;
        mi_num_tunid_free_failures.value_namespace = name_space;
        mi_num_tunid_free_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi-num-tunid-frees")
    {
        mi_num_tunid_frees = value;
        mi_num_tunid_frees.value_namespace = name_space;
        mi_num_tunid_frees.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-num-bfd-down")
    {
        mi_num_bfd_down.yfilter = yfilter;
    }
    if(value_path == "mi-num-bkup-frr-objects")
    {
        mi_num_bkup_frr_objects.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-logs")
    {
        mi_num_frr_logs.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-proto-events")
    {
        mi_num_frr_proto_events.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-reset")
    {
        mi_num_frr_reset.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-reset-queue-adds")
    {
        mi_num_frr_reset_queue_adds.yfilter = yfilter;
    }
    if(value_path == "mi-num-frr-reset-queue-remove")
    {
        mi_num_frr_reset_queue_remove.yfilter = yfilter;
    }
    if(value_path == "mi-num-intf-frr")
    {
        mi_num_intf_frr.yfilter = yfilter;
    }
    if(value_path == "mi-num-parent-intf-frr")
    {
        mi_num_parent_intf_frr.yfilter = yfilter;
    }
    if(value_path == "mi-num-pfi-intf-down")
    {
        mi_num_pfi_intf_down.yfilter = yfilter;
    }
    if(value_path == "mi-num-prot-frr-objects")
    {
        mi_num_prot_frr_objects.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-alloc-failures")
    {
        mi_num_tunid_alloc_failures.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-allocs")
    {
        mi_num_tunid_allocs.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-free-failures")
    {
        mi_num_tunid_free_failures.yfilter = yfilter;
    }
    if(value_path == "mi-num-tunid-frees")
    {
        mi_num_tunid_frees.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi-num-bfd-down" || name == "mi-num-bkup-frr-objects" || name == "mi-num-frr-logs" || name == "mi-num-frr-proto-events" || name == "mi-num-frr-reset" || name == "mi-num-frr-reset-queue-adds" || name == "mi-num-frr-reset-queue-remove" || name == "mi-num-intf-frr" || name == "mi-num-parent-intf-frr" || name == "mi-num-pfi-intf-down" || name == "mi-num-prot-frr-objects" || name == "mi-num-tunid-alloc-failures" || name == "mi-num-tunid-allocs" || name == "mi-num-tunid-free-failures" || name == "mi-num-tunid-frees")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::MiIdbExtCleanupFailedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-idb-ext-cleanup-failed-count"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::~MiIdbExtCleanupFailedCount()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-idb-ext-cleanup-failed-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::MiIdbLsecEnabledNum()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-idb-lsec-enabled-num"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::~MiIdbLsecEnabledNum()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-idb-lsec-enabled-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::MiIdbPurgeCntr()
{

    yang_name = "mi-idb-purge-cntr"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::~MiIdbPurgeCntr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_data() const
{
    for (std::size_t index=0; index<fpp_cntr.size(); index++)
    {
        if(fpp_cntr[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_operation() const
{
    for (std::size_t index=0; index<fpp_cntr.size(); index++)
    {
        if(fpp_cntr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-idb-purge-cntr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpp-cntr")
    {
        for(auto const & c : fpp_cntr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr>();
        c->parent = this;
        fpp_cntr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpp_cntr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpp-cntr")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::FppCntr()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "fpp-cntr"; yang_parent_name = "mi-idb-purge-cntr"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::~FppCntr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpp-cntr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::MiIssuState()
    :
    eoc_received_imdr_time_stamp{YType::str, "eoc-received-imdr-time-stamp"},
    eoc_received_slc_time_stamp{YType::str, "eoc-received-slc-time-stamp"},
    eod_received_im_time_stamp{YType::str, "eod-received-im-time-stamp"},
    eod_sent_imdr_time_stamp{YType::str, "eod-sent-imdr-time-stamp"},
    eod_sent_slc_time_stamp{YType::str, "eod-sent-slc-time-stamp"},
    fis_issu_error_ts{YType::uint64, "fis-issu-error-ts"},
    fis_issu_restart{YType::boolean, "fis-issu-restart"},
    imdr_eoc_implicit{YType::boolean, "imdr-eoc-implicit"},
    imdr_support{YType::boolean, "imdr-support"},
    slc_eoc_implicit{YType::boolean, "slc-eoc-implicit"},
    slc_support{YType::boolean, "slc-support"}
{

    yang_name = "mi-issu-state"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::~MiIssuState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::has_data() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_data())
            return true;
    }
    return eoc_received_imdr_time_stamp.is_set
	|| eoc_received_slc_time_stamp.is_set
	|| eod_received_im_time_stamp.is_set
	|| eod_sent_imdr_time_stamp.is_set
	|| eod_sent_slc_time_stamp.is_set
	|| fis_issu_error_ts.is_set
	|| fis_issu_restart.is_set
	|| imdr_eoc_implicit.is_set
	|| imdr_support.is_set
	|| slc_eoc_implicit.is_set
	|| slc_support.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::has_operation() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eoc_received_imdr_time_stamp.yfilter)
	|| ydk::is_set(eoc_received_slc_time_stamp.yfilter)
	|| ydk::is_set(eod_received_im_time_stamp.yfilter)
	|| ydk::is_set(eod_sent_imdr_time_stamp.yfilter)
	|| ydk::is_set(eod_sent_slc_time_stamp.yfilter)
	|| ydk::is_set(fis_issu_error_ts.yfilter)
	|| ydk::is_set(fis_issu_restart.yfilter)
	|| ydk::is_set(imdr_eoc_implicit.yfilter)
	|| ydk::is_set(imdr_support.yfilter)
	|| ydk::is_set(slc_eoc_implicit.yfilter)
	|| ydk::is_set(slc_support.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-issu-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eoc_received_imdr_time_stamp.is_set || is_set(eoc_received_imdr_time_stamp.yfilter)) leaf_name_data.push_back(eoc_received_imdr_time_stamp.get_name_leafdata());
    if (eoc_received_slc_time_stamp.is_set || is_set(eoc_received_slc_time_stamp.yfilter)) leaf_name_data.push_back(eoc_received_slc_time_stamp.get_name_leafdata());
    if (eod_received_im_time_stamp.is_set || is_set(eod_received_im_time_stamp.yfilter)) leaf_name_data.push_back(eod_received_im_time_stamp.get_name_leafdata());
    if (eod_sent_imdr_time_stamp.is_set || is_set(eod_sent_imdr_time_stamp.yfilter)) leaf_name_data.push_back(eod_sent_imdr_time_stamp.get_name_leafdata());
    if (eod_sent_slc_time_stamp.is_set || is_set(eod_sent_slc_time_stamp.yfilter)) leaf_name_data.push_back(eod_sent_slc_time_stamp.get_name_leafdata());
    if (fis_issu_error_ts.is_set || is_set(fis_issu_error_ts.yfilter)) leaf_name_data.push_back(fis_issu_error_ts.get_name_leafdata());
    if (fis_issu_restart.is_set || is_set(fis_issu_restart.yfilter)) leaf_name_data.push_back(fis_issu_restart.get_name_leafdata());
    if (imdr_eoc_implicit.is_set || is_set(imdr_eoc_implicit.yfilter)) leaf_name_data.push_back(imdr_eoc_implicit.get_name_leafdata());
    if (imdr_support.is_set || is_set(imdr_support.yfilter)) leaf_name_data.push_back(imdr_support.get_name_leafdata());
    if (slc_eoc_implicit.is_set || is_set(slc_eoc_implicit.yfilter)) leaf_name_data.push_back(slc_eoc_implicit.get_name_leafdata());
    if (slc_support.is_set || is_set(slc_support.yfilter)) leaf_name_data.push_back(slc_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fis-proto-state")
    {
        for(auto const & c : fis_proto_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState>();
        c->parent = this;
        fis_proto_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fis_proto_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eoc-received-imdr-time-stamp")
    {
        eoc_received_imdr_time_stamp = value;
        eoc_received_imdr_time_stamp.value_namespace = name_space;
        eoc_received_imdr_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoc-received-slc-time-stamp")
    {
        eoc_received_slc_time_stamp = value;
        eoc_received_slc_time_stamp.value_namespace = name_space;
        eoc_received_slc_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-received-im-time-stamp")
    {
        eod_received_im_time_stamp = value;
        eod_received_im_time_stamp.value_namespace = name_space;
        eod_received_im_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-sent-imdr-time-stamp")
    {
        eod_sent_imdr_time_stamp = value;
        eod_sent_imdr_time_stamp.value_namespace = name_space;
        eod_sent_imdr_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-sent-slc-time-stamp")
    {
        eod_sent_slc_time_stamp = value;
        eod_sent_slc_time_stamp.value_namespace = name_space;
        eod_sent_slc_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fis-issu-error-ts")
    {
        fis_issu_error_ts = value;
        fis_issu_error_ts.value_namespace = name_space;
        fis_issu_error_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fis-issu-restart")
    {
        fis_issu_restart = value;
        fis_issu_restart.value_namespace = name_space;
        fis_issu_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imdr-eoc-implicit")
    {
        imdr_eoc_implicit = value;
        imdr_eoc_implicit.value_namespace = name_space;
        imdr_eoc_implicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imdr-support")
    {
        imdr_support = value;
        imdr_support.value_namespace = name_space;
        imdr_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slc-eoc-implicit")
    {
        slc_eoc_implicit = value;
        slc_eoc_implicit.value_namespace = name_space;
        slc_eoc_implicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slc-support")
    {
        slc_support = value;
        slc_support.value_namespace = name_space;
        slc_support.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eoc-received-imdr-time-stamp")
    {
        eoc_received_imdr_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eoc-received-slc-time-stamp")
    {
        eoc_received_slc_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eod-received-im-time-stamp")
    {
        eod_received_im_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eod-sent-imdr-time-stamp")
    {
        eod_sent_imdr_time_stamp.yfilter = yfilter;
    }
    if(value_path == "eod-sent-slc-time-stamp")
    {
        eod_sent_slc_time_stamp.yfilter = yfilter;
    }
    if(value_path == "fis-issu-error-ts")
    {
        fis_issu_error_ts.yfilter = yfilter;
    }
    if(value_path == "fis-issu-restart")
    {
        fis_issu_restart.yfilter = yfilter;
    }
    if(value_path == "imdr-eoc-implicit")
    {
        imdr_eoc_implicit.yfilter = yfilter;
    }
    if(value_path == "imdr-support")
    {
        imdr_support.yfilter = yfilter;
    }
    if(value_path == "slc-eoc-implicit")
    {
        slc_eoc_implicit.yfilter = yfilter;
    }
    if(value_path == "slc-support")
    {
        slc_support.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fis-proto-state" || name == "eoc-received-imdr-time-stamp" || name == "eoc-received-slc-time-stamp" || name == "eod-received-im-time-stamp" || name == "eod-sent-imdr-time-stamp" || name == "eod-sent-slc-time-stamp" || name == "fis-issu-error-ts" || name == "fis-issu-restart" || name == "imdr-eoc-implicit" || name == "imdr-support" || name == "slc-eoc-implicit" || name == "slc-support")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::FisProtoState()
    :
    aib_eod_time_stamp{YType::str, "aib-eod-time-stamp"},
    bcdl_tables{YType::uint32, "bcdl-tables"},
    converged_tables{YType::uint32, "converged-tables"},
    lmrib_eod_time_stamp{YType::str, "lmrib-eod-time-stamp"},
    lmrib_eod_valid{YType::boolean, "lmrib-eod-valid"},
    lsd_eod_time_stamp{YType::str, "lsd-eod-time-stamp"},
    lsd_eod_valid{YType::boolean, "lsd-eod-valid"},
    protocol_eod_time_stamp{YType::str, "protocol-eod-time-stamp"},
    protocol_eod_valid{YType::boolean, "protocol-eod-valid"},
    protocol_name{YType::str, "protocol-name"},
    rib_info_valid{YType::boolean, "rib-info-valid"},
    rib_tables_converged_time_stamp{YType::str, "rib-tables-converged-time-stamp"},
    rsi_eod_time_stamp{YType::str, "rsi-eod-time-stamp"},
    rsi_eod_valid{YType::boolean, "rsi-eod-valid"}
{

    yang_name = "fis-proto-state"; yang_parent_name = "mi-issu-state"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::~FisProtoState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::has_data() const
{
    return aib_eod_time_stamp.is_set
	|| bcdl_tables.is_set
	|| converged_tables.is_set
	|| lmrib_eod_time_stamp.is_set
	|| lmrib_eod_valid.is_set
	|| lsd_eod_time_stamp.is_set
	|| lsd_eod_valid.is_set
	|| protocol_eod_time_stamp.is_set
	|| protocol_eod_valid.is_set
	|| protocol_name.is_set
	|| rib_info_valid.is_set
	|| rib_tables_converged_time_stamp.is_set
	|| rsi_eod_time_stamp.is_set
	|| rsi_eod_valid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aib_eod_time_stamp.yfilter)
	|| ydk::is_set(bcdl_tables.yfilter)
	|| ydk::is_set(converged_tables.yfilter)
	|| ydk::is_set(lmrib_eod_time_stamp.yfilter)
	|| ydk::is_set(lmrib_eod_valid.yfilter)
	|| ydk::is_set(lsd_eod_time_stamp.yfilter)
	|| ydk::is_set(lsd_eod_valid.yfilter)
	|| ydk::is_set(protocol_eod_time_stamp.yfilter)
	|| ydk::is_set(protocol_eod_valid.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(rib_info_valid.yfilter)
	|| ydk::is_set(rib_tables_converged_time_stamp.yfilter)
	|| ydk::is_set(rsi_eod_time_stamp.yfilter)
	|| ydk::is_set(rsi_eod_valid.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fis-proto-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aib_eod_time_stamp.is_set || is_set(aib_eod_time_stamp.yfilter)) leaf_name_data.push_back(aib_eod_time_stamp.get_name_leafdata());
    if (bcdl_tables.is_set || is_set(bcdl_tables.yfilter)) leaf_name_data.push_back(bcdl_tables.get_name_leafdata());
    if (converged_tables.is_set || is_set(converged_tables.yfilter)) leaf_name_data.push_back(converged_tables.get_name_leafdata());
    if (lmrib_eod_time_stamp.is_set || is_set(lmrib_eod_time_stamp.yfilter)) leaf_name_data.push_back(lmrib_eod_time_stamp.get_name_leafdata());
    if (lmrib_eod_valid.is_set || is_set(lmrib_eod_valid.yfilter)) leaf_name_data.push_back(lmrib_eod_valid.get_name_leafdata());
    if (lsd_eod_time_stamp.is_set || is_set(lsd_eod_time_stamp.yfilter)) leaf_name_data.push_back(lsd_eod_time_stamp.get_name_leafdata());
    if (lsd_eod_valid.is_set || is_set(lsd_eod_valid.yfilter)) leaf_name_data.push_back(lsd_eod_valid.get_name_leafdata());
    if (protocol_eod_time_stamp.is_set || is_set(protocol_eod_time_stamp.yfilter)) leaf_name_data.push_back(protocol_eod_time_stamp.get_name_leafdata());
    if (protocol_eod_valid.is_set || is_set(protocol_eod_valid.yfilter)) leaf_name_data.push_back(protocol_eod_valid.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rib_info_valid.is_set || is_set(rib_info_valid.yfilter)) leaf_name_data.push_back(rib_info_valid.get_name_leafdata());
    if (rib_tables_converged_time_stamp.is_set || is_set(rib_tables_converged_time_stamp.yfilter)) leaf_name_data.push_back(rib_tables_converged_time_stamp.get_name_leafdata());
    if (rsi_eod_time_stamp.is_set || is_set(rsi_eod_time_stamp.yfilter)) leaf_name_data.push_back(rsi_eod_time_stamp.get_name_leafdata());
    if (rsi_eod_valid.is_set || is_set(rsi_eod_valid.yfilter)) leaf_name_data.push_back(rsi_eod_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aib-eod-time-stamp")
    {
        aib_eod_time_stamp = value;
        aib_eod_time_stamp.value_namespace = name_space;
        aib_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcdl-tables")
    {
        bcdl_tables = value;
        bcdl_tables.value_namespace = name_space;
        bcdl_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "converged-tables")
    {
        converged_tables = value;
        converged_tables.value_namespace = name_space;
        converged_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-eod-time-stamp")
    {
        lmrib_eod_time_stamp = value;
        lmrib_eod_time_stamp.value_namespace = name_space;
        lmrib_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-eod-valid")
    {
        lmrib_eod_valid = value;
        lmrib_eod_valid.value_namespace = name_space;
        lmrib_eod_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-eod-time-stamp")
    {
        lsd_eod_time_stamp = value;
        lsd_eod_time_stamp.value_namespace = name_space;
        lsd_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-eod-valid")
    {
        lsd_eod_valid = value;
        lsd_eod_valid.value_namespace = name_space;
        lsd_eod_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-eod-time-stamp")
    {
        protocol_eod_time_stamp = value;
        protocol_eod_time_stamp.value_namespace = name_space;
        protocol_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-eod-valid")
    {
        protocol_eod_valid = value;
        protocol_eod_valid.value_namespace = name_space;
        protocol_eod_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-info-valid")
    {
        rib_info_valid = value;
        rib_info_valid.value_namespace = name_space;
        rib_info_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tables-converged-time-stamp")
    {
        rib_tables_converged_time_stamp = value;
        rib_tables_converged_time_stamp.value_namespace = name_space;
        rib_tables_converged_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-eod-time-stamp")
    {
        rsi_eod_time_stamp = value;
        rsi_eod_time_stamp.value_namespace = name_space;
        rsi_eod_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-eod-valid")
    {
        rsi_eod_valid = value;
        rsi_eod_valid.value_namespace = name_space;
        rsi_eod_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aib-eod-time-stamp")
    {
        aib_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "bcdl-tables")
    {
        bcdl_tables.yfilter = yfilter;
    }
    if(value_path == "converged-tables")
    {
        converged_tables.yfilter = yfilter;
    }
    if(value_path == "lmrib-eod-time-stamp")
    {
        lmrib_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "lmrib-eod-valid")
    {
        lmrib_eod_valid.yfilter = yfilter;
    }
    if(value_path == "lsd-eod-time-stamp")
    {
        lsd_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "lsd-eod-valid")
    {
        lsd_eod_valid.yfilter = yfilter;
    }
    if(value_path == "protocol-eod-time-stamp")
    {
        protocol_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "protocol-eod-valid")
    {
        protocol_eod_valid.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "rib-info-valid")
    {
        rib_info_valid.yfilter = yfilter;
    }
    if(value_path == "rib-tables-converged-time-stamp")
    {
        rib_tables_converged_time_stamp.yfilter = yfilter;
    }
    if(value_path == "rsi-eod-time-stamp")
    {
        rsi_eod_time_stamp.yfilter = yfilter;
    }
    if(value_path == "rsi-eod-valid")
    {
        rsi_eod_valid.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aib-eod-time-stamp" || name == "bcdl-tables" || name == "converged-tables" || name == "lmrib-eod-time-stamp" || name == "lmrib-eod-valid" || name == "lsd-eod-time-stamp" || name == "lsd-eod-valid" || name == "protocol-eod-time-stamp" || name == "protocol-eod-valid" || name == "protocol-name" || name == "rib-info-valid" || name == "rib-tables-converged-time-stamp" || name == "rsi-eod-time-stamp" || name == "rsi-eod-valid")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::MiLrpfNum()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-lrpf-num"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::~MiLrpfNum()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-lrpf-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::MiLrpfStatsAct()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-lrpf-stats-act"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::~MiLrpfStatsAct()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-lrpf-stats-act";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::MiLrpfStatsFail()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-lrpf-stats-fail"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::~MiLrpfStatsFail()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-lrpf-stats-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::MiNumLispEid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-num-lisp-eid"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::~MiNumLispEid()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-num-lisp-eid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::MiNumLispValidEid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mi-num-lisp-valid-eid"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::~MiNumLispValidEid()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-num-lisp-valid-eid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::MiPlatCapabilities()
    :
    fpc_dlb_support{YType::boolean, "fpc-dlb-support"},
    fpc_exclude_deag_bkup{YType::boolean, "fpc-exclude-deag-bkup"},
    fpc_lba_tuples_default{YType::uint32, "fpc-lba-tuples-default"},
    fpc_link_mpls_nhinfo_in_ipv6_thread_support{YType::boolean, "fpc-link-mpls-nhinfo-in-ipv6-thread-support"},
    fpc_loadinfo_filter_support{YType::boolean, "fpc-loadinfo-filter-support"},
    fpc_local_label_split{YType::uint32, "fpc-local-label-split"},
    fpc_mraps_support{YType::boolean, "fpc-mraps-support"},
    fpc_nhid{YType::boolean, "fpc-nhid"},
    fpc_num_fwding_stages{YType::uint8, "fpc-num-fwding-stages"},
    fpc_num_l3_lbl_levels{YType::uint8, "fpc-num-l3-lbl-levels"},
    fpc_num_l3_lbl_paths{YType::uint8, "fpc-num-l3-lbl-paths"},
    fpc_num_l3_lbl_rec_paths{YType::uint8, "fpc-num-l3-lbl-rec-paths"},
    fpc_num_l3_ucmp_paths{YType::uint8, "fpc-num-l3-ucmp-paths"},
    fpc_num_paths_per_pbts_class{YType::uint8, "fpc-num-paths-per-pbts-class"},
    fpc_pbts_defclass_support{YType::boolean, "fpc-pbts-defclass-support"},
    fpc_platf_ready_cb_wait{YType::boolean, "fpc-platf-ready-cb-wait"},
    fpc_platf_temp_back_walk_reqd{YType::boolean, "fpc-platf-temp-back-walk-reqd"},
    fpc_platf_v4_upd_disable{YType::boolean, "fpc-platf-v4-upd-disable"},
    fpc_platf_v6_upd_disable{YType::boolean, "fpc-platf-v6-upd-disable"},
    fpc_prefix_filter_support{YType::uint8, "fpc-prefix-filter-support"},
    fpc_slowpath_ingress_inject_reqd{YType::boolean, "fpc-slowpath-ingress-inject-reqd"},
    fpc_stats_support{YType::boolean, "fpc-stats-support"}
{

    yang_name = "mi-plat-capabilities"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::~MiPlatCapabilities()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::has_data() const
{
    for (std::size_t index=0; index<fpc_lisp_decap_over_v4.size(); index++)
    {
        if(fpc_lisp_decap_over_v4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_decap_over_v6.size(); index++)
    {
        if(fpc_lisp_decap_over_v6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_ucmp.size(); index++)
    {
        if(fpc_lisp_ucmp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpc_resolve_via_table.size(); index++)
    {
        if(fpc_resolve_via_table[index]->has_data())
            return true;
    }
    return fpc_dlb_support.is_set
	|| fpc_exclude_deag_bkup.is_set
	|| fpc_lba_tuples_default.is_set
	|| fpc_link_mpls_nhinfo_in_ipv6_thread_support.is_set
	|| fpc_loadinfo_filter_support.is_set
	|| fpc_local_label_split.is_set
	|| fpc_mraps_support.is_set
	|| fpc_nhid.is_set
	|| fpc_num_fwding_stages.is_set
	|| fpc_num_l3_lbl_levels.is_set
	|| fpc_num_l3_lbl_paths.is_set
	|| fpc_num_l3_lbl_rec_paths.is_set
	|| fpc_num_l3_ucmp_paths.is_set
	|| fpc_num_paths_per_pbts_class.is_set
	|| fpc_pbts_defclass_support.is_set
	|| fpc_platf_ready_cb_wait.is_set
	|| fpc_platf_temp_back_walk_reqd.is_set
	|| fpc_platf_v4_upd_disable.is_set
	|| fpc_platf_v6_upd_disable.is_set
	|| fpc_prefix_filter_support.is_set
	|| fpc_slowpath_ingress_inject_reqd.is_set
	|| fpc_stats_support.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::has_operation() const
{
    for (std::size_t index=0; index<fpc_lisp_decap_over_v4.size(); index++)
    {
        if(fpc_lisp_decap_over_v4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_decap_over_v6.size(); index++)
    {
        if(fpc_lisp_decap_over_v6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_ucmp.size(); index++)
    {
        if(fpc_lisp_ucmp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpc_resolve_via_table.size(); index++)
    {
        if(fpc_resolve_via_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fpc_dlb_support.yfilter)
	|| ydk::is_set(fpc_exclude_deag_bkup.yfilter)
	|| ydk::is_set(fpc_lba_tuples_default.yfilter)
	|| ydk::is_set(fpc_link_mpls_nhinfo_in_ipv6_thread_support.yfilter)
	|| ydk::is_set(fpc_loadinfo_filter_support.yfilter)
	|| ydk::is_set(fpc_local_label_split.yfilter)
	|| ydk::is_set(fpc_mraps_support.yfilter)
	|| ydk::is_set(fpc_nhid.yfilter)
	|| ydk::is_set(fpc_num_fwding_stages.yfilter)
	|| ydk::is_set(fpc_num_l3_lbl_levels.yfilter)
	|| ydk::is_set(fpc_num_l3_lbl_paths.yfilter)
	|| ydk::is_set(fpc_num_l3_lbl_rec_paths.yfilter)
	|| ydk::is_set(fpc_num_l3_ucmp_paths.yfilter)
	|| ydk::is_set(fpc_num_paths_per_pbts_class.yfilter)
	|| ydk::is_set(fpc_pbts_defclass_support.yfilter)
	|| ydk::is_set(fpc_platf_ready_cb_wait.yfilter)
	|| ydk::is_set(fpc_platf_temp_back_walk_reqd.yfilter)
	|| ydk::is_set(fpc_platf_v4_upd_disable.yfilter)
	|| ydk::is_set(fpc_platf_v6_upd_disable.yfilter)
	|| ydk::is_set(fpc_prefix_filter_support.yfilter)
	|| ydk::is_set(fpc_slowpath_ingress_inject_reqd.yfilter)
	|| ydk::is_set(fpc_stats_support.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-plat-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpc_dlb_support.is_set || is_set(fpc_dlb_support.yfilter)) leaf_name_data.push_back(fpc_dlb_support.get_name_leafdata());
    if (fpc_exclude_deag_bkup.is_set || is_set(fpc_exclude_deag_bkup.yfilter)) leaf_name_data.push_back(fpc_exclude_deag_bkup.get_name_leafdata());
    if (fpc_lba_tuples_default.is_set || is_set(fpc_lba_tuples_default.yfilter)) leaf_name_data.push_back(fpc_lba_tuples_default.get_name_leafdata());
    if (fpc_link_mpls_nhinfo_in_ipv6_thread_support.is_set || is_set(fpc_link_mpls_nhinfo_in_ipv6_thread_support.yfilter)) leaf_name_data.push_back(fpc_link_mpls_nhinfo_in_ipv6_thread_support.get_name_leafdata());
    if (fpc_loadinfo_filter_support.is_set || is_set(fpc_loadinfo_filter_support.yfilter)) leaf_name_data.push_back(fpc_loadinfo_filter_support.get_name_leafdata());
    if (fpc_local_label_split.is_set || is_set(fpc_local_label_split.yfilter)) leaf_name_data.push_back(fpc_local_label_split.get_name_leafdata());
    if (fpc_mraps_support.is_set || is_set(fpc_mraps_support.yfilter)) leaf_name_data.push_back(fpc_mraps_support.get_name_leafdata());
    if (fpc_nhid.is_set || is_set(fpc_nhid.yfilter)) leaf_name_data.push_back(fpc_nhid.get_name_leafdata());
    if (fpc_num_fwding_stages.is_set || is_set(fpc_num_fwding_stages.yfilter)) leaf_name_data.push_back(fpc_num_fwding_stages.get_name_leafdata());
    if (fpc_num_l3_lbl_levels.is_set || is_set(fpc_num_l3_lbl_levels.yfilter)) leaf_name_data.push_back(fpc_num_l3_lbl_levels.get_name_leafdata());
    if (fpc_num_l3_lbl_paths.is_set || is_set(fpc_num_l3_lbl_paths.yfilter)) leaf_name_data.push_back(fpc_num_l3_lbl_paths.get_name_leafdata());
    if (fpc_num_l3_lbl_rec_paths.is_set || is_set(fpc_num_l3_lbl_rec_paths.yfilter)) leaf_name_data.push_back(fpc_num_l3_lbl_rec_paths.get_name_leafdata());
    if (fpc_num_l3_ucmp_paths.is_set || is_set(fpc_num_l3_ucmp_paths.yfilter)) leaf_name_data.push_back(fpc_num_l3_ucmp_paths.get_name_leafdata());
    if (fpc_num_paths_per_pbts_class.is_set || is_set(fpc_num_paths_per_pbts_class.yfilter)) leaf_name_data.push_back(fpc_num_paths_per_pbts_class.get_name_leafdata());
    if (fpc_pbts_defclass_support.is_set || is_set(fpc_pbts_defclass_support.yfilter)) leaf_name_data.push_back(fpc_pbts_defclass_support.get_name_leafdata());
    if (fpc_platf_ready_cb_wait.is_set || is_set(fpc_platf_ready_cb_wait.yfilter)) leaf_name_data.push_back(fpc_platf_ready_cb_wait.get_name_leafdata());
    if (fpc_platf_temp_back_walk_reqd.is_set || is_set(fpc_platf_temp_back_walk_reqd.yfilter)) leaf_name_data.push_back(fpc_platf_temp_back_walk_reqd.get_name_leafdata());
    if (fpc_platf_v4_upd_disable.is_set || is_set(fpc_platf_v4_upd_disable.yfilter)) leaf_name_data.push_back(fpc_platf_v4_upd_disable.get_name_leafdata());
    if (fpc_platf_v6_upd_disable.is_set || is_set(fpc_platf_v6_upd_disable.yfilter)) leaf_name_data.push_back(fpc_platf_v6_upd_disable.get_name_leafdata());
    if (fpc_prefix_filter_support.is_set || is_set(fpc_prefix_filter_support.yfilter)) leaf_name_data.push_back(fpc_prefix_filter_support.get_name_leafdata());
    if (fpc_slowpath_ingress_inject_reqd.is_set || is_set(fpc_slowpath_ingress_inject_reqd.yfilter)) leaf_name_data.push_back(fpc_slowpath_ingress_inject_reqd.get_name_leafdata());
    if (fpc_stats_support.is_set || is_set(fpc_stats_support.yfilter)) leaf_name_data.push_back(fpc_stats_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpc-lisp-decap-over-v4")
    {
        for(auto const & c : fpc_lisp_decap_over_v4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4>();
        c->parent = this;
        fpc_lisp_decap_over_v4.push_back(c);
        return c;
    }

    if(child_yang_name == "fpc-lisp-decap-over-v6")
    {
        for(auto const & c : fpc_lisp_decap_over_v6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6>();
        c->parent = this;
        fpc_lisp_decap_over_v6.push_back(c);
        return c;
    }

    if(child_yang_name == "fpc-lisp-ucmp")
    {
        for(auto const & c : fpc_lisp_ucmp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp>();
        c->parent = this;
        fpc_lisp_ucmp.push_back(c);
        return c;
    }

    if(child_yang_name == "fpc-resolve-via-table")
    {
        for(auto const & c : fpc_resolve_via_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable>();
        c->parent = this;
        fpc_resolve_via_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpc_lisp_decap_over_v4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fpc_lisp_decap_over_v6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fpc_lisp_ucmp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : fpc_resolve_via_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpc-dlb-support")
    {
        fpc_dlb_support = value;
        fpc_dlb_support.value_namespace = name_space;
        fpc_dlb_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-exclude-deag-bkup")
    {
        fpc_exclude_deag_bkup = value;
        fpc_exclude_deag_bkup.value_namespace = name_space;
        fpc_exclude_deag_bkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-lba-tuples-default")
    {
        fpc_lba_tuples_default = value;
        fpc_lba_tuples_default.value_namespace = name_space;
        fpc_lba_tuples_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-link-mpls-nhinfo-in-ipv6-thread-support")
    {
        fpc_link_mpls_nhinfo_in_ipv6_thread_support = value;
        fpc_link_mpls_nhinfo_in_ipv6_thread_support.value_namespace = name_space;
        fpc_link_mpls_nhinfo_in_ipv6_thread_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-loadinfo-filter-support")
    {
        fpc_loadinfo_filter_support = value;
        fpc_loadinfo_filter_support.value_namespace = name_space;
        fpc_loadinfo_filter_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-local-label-split")
    {
        fpc_local_label_split = value;
        fpc_local_label_split.value_namespace = name_space;
        fpc_local_label_split.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-mraps-support")
    {
        fpc_mraps_support = value;
        fpc_mraps_support.value_namespace = name_space;
        fpc_mraps_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-nhid")
    {
        fpc_nhid = value;
        fpc_nhid.value_namespace = name_space;
        fpc_nhid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-num-fwding-stages")
    {
        fpc_num_fwding_stages = value;
        fpc_num_fwding_stages.value_namespace = name_space;
        fpc_num_fwding_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-num-l3-lbl-levels")
    {
        fpc_num_l3_lbl_levels = value;
        fpc_num_l3_lbl_levels.value_namespace = name_space;
        fpc_num_l3_lbl_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-num-l3-lbl-paths")
    {
        fpc_num_l3_lbl_paths = value;
        fpc_num_l3_lbl_paths.value_namespace = name_space;
        fpc_num_l3_lbl_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-num-l3-lbl-rec-paths")
    {
        fpc_num_l3_lbl_rec_paths = value;
        fpc_num_l3_lbl_rec_paths.value_namespace = name_space;
        fpc_num_l3_lbl_rec_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-num-l3-ucmp-paths")
    {
        fpc_num_l3_ucmp_paths = value;
        fpc_num_l3_ucmp_paths.value_namespace = name_space;
        fpc_num_l3_ucmp_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-num-paths-per-pbts-class")
    {
        fpc_num_paths_per_pbts_class = value;
        fpc_num_paths_per_pbts_class.value_namespace = name_space;
        fpc_num_paths_per_pbts_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-pbts-defclass-support")
    {
        fpc_pbts_defclass_support = value;
        fpc_pbts_defclass_support.value_namespace = name_space;
        fpc_pbts_defclass_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-platf-ready-cb-wait")
    {
        fpc_platf_ready_cb_wait = value;
        fpc_platf_ready_cb_wait.value_namespace = name_space;
        fpc_platf_ready_cb_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-platf-temp-back-walk-reqd")
    {
        fpc_platf_temp_back_walk_reqd = value;
        fpc_platf_temp_back_walk_reqd.value_namespace = name_space;
        fpc_platf_temp_back_walk_reqd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-platf-v4-upd-disable")
    {
        fpc_platf_v4_upd_disable = value;
        fpc_platf_v4_upd_disable.value_namespace = name_space;
        fpc_platf_v4_upd_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-platf-v6-upd-disable")
    {
        fpc_platf_v6_upd_disable = value;
        fpc_platf_v6_upd_disable.value_namespace = name_space;
        fpc_platf_v6_upd_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-prefix-filter-support")
    {
        fpc_prefix_filter_support = value;
        fpc_prefix_filter_support.value_namespace = name_space;
        fpc_prefix_filter_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-slowpath-ingress-inject-reqd")
    {
        fpc_slowpath_ingress_inject_reqd = value;
        fpc_slowpath_ingress_inject_reqd.value_namespace = name_space;
        fpc_slowpath_ingress_inject_reqd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpc-stats-support")
    {
        fpc_stats_support = value;
        fpc_stats_support.value_namespace = name_space;
        fpc_stats_support.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpc-dlb-support")
    {
        fpc_dlb_support.yfilter = yfilter;
    }
    if(value_path == "fpc-exclude-deag-bkup")
    {
        fpc_exclude_deag_bkup.yfilter = yfilter;
    }
    if(value_path == "fpc-lba-tuples-default")
    {
        fpc_lba_tuples_default.yfilter = yfilter;
    }
    if(value_path == "fpc-link-mpls-nhinfo-in-ipv6-thread-support")
    {
        fpc_link_mpls_nhinfo_in_ipv6_thread_support.yfilter = yfilter;
    }
    if(value_path == "fpc-loadinfo-filter-support")
    {
        fpc_loadinfo_filter_support.yfilter = yfilter;
    }
    if(value_path == "fpc-local-label-split")
    {
        fpc_local_label_split.yfilter = yfilter;
    }
    if(value_path == "fpc-mraps-support")
    {
        fpc_mraps_support.yfilter = yfilter;
    }
    if(value_path == "fpc-nhid")
    {
        fpc_nhid.yfilter = yfilter;
    }
    if(value_path == "fpc-num-fwding-stages")
    {
        fpc_num_fwding_stages.yfilter = yfilter;
    }
    if(value_path == "fpc-num-l3-lbl-levels")
    {
        fpc_num_l3_lbl_levels.yfilter = yfilter;
    }
    if(value_path == "fpc-num-l3-lbl-paths")
    {
        fpc_num_l3_lbl_paths.yfilter = yfilter;
    }
    if(value_path == "fpc-num-l3-lbl-rec-paths")
    {
        fpc_num_l3_lbl_rec_paths.yfilter = yfilter;
    }
    if(value_path == "fpc-num-l3-ucmp-paths")
    {
        fpc_num_l3_ucmp_paths.yfilter = yfilter;
    }
    if(value_path == "fpc-num-paths-per-pbts-class")
    {
        fpc_num_paths_per_pbts_class.yfilter = yfilter;
    }
    if(value_path == "fpc-pbts-defclass-support")
    {
        fpc_pbts_defclass_support.yfilter = yfilter;
    }
    if(value_path == "fpc-platf-ready-cb-wait")
    {
        fpc_platf_ready_cb_wait.yfilter = yfilter;
    }
    if(value_path == "fpc-platf-temp-back-walk-reqd")
    {
        fpc_platf_temp_back_walk_reqd.yfilter = yfilter;
    }
    if(value_path == "fpc-platf-v4-upd-disable")
    {
        fpc_platf_v4_upd_disable.yfilter = yfilter;
    }
    if(value_path == "fpc-platf-v6-upd-disable")
    {
        fpc_platf_v6_upd_disable.yfilter = yfilter;
    }
    if(value_path == "fpc-prefix-filter-support")
    {
        fpc_prefix_filter_support.yfilter = yfilter;
    }
    if(value_path == "fpc-slowpath-ingress-inject-reqd")
    {
        fpc_slowpath_ingress_inject_reqd.yfilter = yfilter;
    }
    if(value_path == "fpc-stats-support")
    {
        fpc_stats_support.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpc-lisp-decap-over-v4" || name == "fpc-lisp-decap-over-v6" || name == "fpc-lisp-ucmp" || name == "fpc-resolve-via-table" || name == "fpc-dlb-support" || name == "fpc-exclude-deag-bkup" || name == "fpc-lba-tuples-default" || name == "fpc-link-mpls-nhinfo-in-ipv6-thread-support" || name == "fpc-loadinfo-filter-support" || name == "fpc-local-label-split" || name == "fpc-mraps-support" || name == "fpc-nhid" || name == "fpc-num-fwding-stages" || name == "fpc-num-l3-lbl-levels" || name == "fpc-num-l3-lbl-paths" || name == "fpc-num-l3-lbl-rec-paths" || name == "fpc-num-l3-ucmp-paths" || name == "fpc-num-paths-per-pbts-class" || name == "fpc-pbts-defclass-support" || name == "fpc-platf-ready-cb-wait" || name == "fpc-platf-temp-back-walk-reqd" || name == "fpc-platf-v4-upd-disable" || name == "fpc-platf-v6-upd-disable" || name == "fpc-prefix-filter-support" || name == "fpc-slowpath-ingress-inject-reqd" || name == "fpc-stats-support")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::FpcLispDecapOverV4()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "fpc-lisp-decap-over-v4"; yang_parent_name = "mi-plat-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::~FpcLispDecapOverV4()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-lisp-decap-over-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::FpcLispDecapOverV6()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "fpc-lisp-decap-over-v6"; yang_parent_name = "mi-plat-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::~FpcLispDecapOverV6()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-lisp-decap-over-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::FpcLispUcmp()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "fpc-lisp-ucmp"; yang_parent_name = "mi-plat-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::~FpcLispUcmp()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-lisp-ucmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::FpcResolveViaTable()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "fpc-resolve-via-table"; yang_parent_name = "mi-plat-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::~FpcResolveViaTable()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-resolve-via-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::MiProtoDbgStat()
    :
    fpd_adj_del{YType::uint64, "fpd-adj-del"},
    fpd_adj_drops{YType::uint64, "fpd-adj-drops"},
    fpd_adj_msg{YType::uint64, "fpd-adj-msg"},
    fpd_adj_tx_retry_nh_found{YType::uint64, "fpd-adj-tx-retry-nh-found"},
    fpd_adj_tx_retry_obj_reinit{YType::uint64, "fpd-adj-tx-retry-obj-reinit"},
    fpd_adj_upd{YType::uint64, "fpd-adj-upd"},
    fpd_adj_upd_tx{YType::uint64, "fpd-adj-upd-tx"},
    fpd_adj_upd_tx_nh_found{YType::uint64, "fpd-adj-upd-tx-nh-found"},
    fpd_adj_upd_tx_retry_created{YType::uint64, "fpd-adj-upd-tx-retry-created"},
    fpd_bcdl_msgs{YType::uint64, "fpd-bcdl-msgs"},
    fpd_gbltbl_entries{YType::uint64, "fpd-gbltbl-entries"},
    fpd_gbltbl_rej_entries{YType::uint64, "fpd-gbltbl-rej-entries"},
    fpd_lbl_recycled{YType::uint64, "fpd-lbl-recycled"},
    fpd_ldi_avg_backup_activate_time{YType::uint64, "fpd-ldi-avg-backup-activate-time"},
    fpd_ldi_backup_activate_count{YType::uint64, "fpd-ldi-backup-activate-count"},
    fpd_ldi_last_backup_activate_time{YType::uint64, "fpd-ldi-last-backup-activate-time"},
    fpd_ldi_max_backup_activate_time{YType::uint64, "fpd-ldi-max-backup-activate-time"},
    fpd_ldi_min_backup_activate_time{YType::uint64, "fpd-ldi-min-backup-activate-time"},
    fpd_ldi_num_correct_fixup{YType::uint64, "fpd-ldi-num-correct-fixup"},
    fpd_ldi_num_del_refcnt{YType::uint64, "fpd-ldi-num-del-refcnt"},
    fpd_ldi_num_fixedup{YType::uint64, "fpd-ldi-num-fixedup"},
    fpd_ldi_total_backup_activate_time{YType::uint64, "fpd-ldi-total-backup-activate-time"},
    fpd_num_allocs{YType::uint64, "fpd-num-allocs"},
    fpd_num_frees{YType::uint64, "fpd-num-frees"},
    fpd_num_retry_touts{YType::uint64, "fpd-num-retry-touts"},
    fpd_num_tbls{YType::uint32, "fpd-num-tbls"},
    fpd_pl_backup_disable_count{YType::uint64, "fpd-pl-backup-disable-count"},
    fpd_pl_backup_enable_count{YType::uint64, "fpd-pl-backup-enable-count"},
    fpd_pl_fast_nfn_count{YType::uint64, "fpd-pl-fast-nfn-count"},
    fpd_pl_inline_res_q{YType::uint64, "fpd-pl-inline-res-q"},
    fpd_pl_num_correct_fixup{YType::uint64, "fpd-pl-num-correct-fixup"},
    fpd_pl_num_queued_fixedup{YType::uint64, "fpd-pl-num-queued-fixedup"},
    fpd_pl_retry_add_exist{YType::uint64, "fpd-pl-retry-add-exist"},
    fpd_pl_with_backup_create_count{YType::uint64, "fpd-pl-with-backup-create-count"},
    fpd_pl_with_backup_del_count{YType::uint64, "fpd-pl-with-backup-del-count"},
    fpd_recursion_constraint_count{YType::uint64, "fpd-recursion-constraint-count"},
    fpd_retryq_sched_time{YType::uint32, "fpd-retryq-sched-time"},
    fpd_retryq_size{YType::uint32, "fpd-retryq-size"},
    fpd_retryq_timeout{YType::uint32, "fpd-retryq-timeout"},
    fpd_route_del{YType::uint64, "fpd-route-del"},
    fpd_route_drops{YType::uint64, "fpd-route-drops"},
    fpd_route_rcv{YType::uint64, "fpd-route-rcv"},
    fpd_route_upd{YType::uint64, "fpd-route-upd"},
    fpd_te_rcv{YType::uint64, "fpd-te-rcv"},
    fpd_te_version_mismatch_drops{YType::uint64, "fpd-te-version-mismatch-drops"},
    fpd_version_mismatch_drops{YType::uint64, "fpd-version-mismatch-drops"},
    fpd_vrftbl_entries{YType::uint64, "fpd-vrftbl-entries"},
    fpd_vrftbl_rej_entries{YType::uint64, "fpd-vrftbl-rej-entries"}
    	,
    fpd_gtrie_timing(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming>())
	,fpd_platf_upd_stats(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats>())
{
    fpd_gtrie_timing->parent = this;
    fpd_platf_upd_stats->parent = this;

    yang_name = "mi-proto-dbg-stat"; yang_parent_name = "misc"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::~MiProtoDbgStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::has_data() const
{
    for (std::size_t index=0; index<fpd_gbltbl_src_entry.size(); index++)
    {
        if(fpd_gbltbl_src_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpd_num_retry.size(); index++)
    {
        if(fpd_num_retry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpd_vrftbl_src_entry.size(); index++)
    {
        if(fpd_vrftbl_src_entry[index]->has_data())
            return true;
    }
    return fpd_adj_del.is_set
	|| fpd_adj_drops.is_set
	|| fpd_adj_msg.is_set
	|| fpd_adj_tx_retry_nh_found.is_set
	|| fpd_adj_tx_retry_obj_reinit.is_set
	|| fpd_adj_upd.is_set
	|| fpd_adj_upd_tx.is_set
	|| fpd_adj_upd_tx_nh_found.is_set
	|| fpd_adj_upd_tx_retry_created.is_set
	|| fpd_bcdl_msgs.is_set
	|| fpd_gbltbl_entries.is_set
	|| fpd_gbltbl_rej_entries.is_set
	|| fpd_lbl_recycled.is_set
	|| fpd_ldi_avg_backup_activate_time.is_set
	|| fpd_ldi_backup_activate_count.is_set
	|| fpd_ldi_last_backup_activate_time.is_set
	|| fpd_ldi_max_backup_activate_time.is_set
	|| fpd_ldi_min_backup_activate_time.is_set
	|| fpd_ldi_num_correct_fixup.is_set
	|| fpd_ldi_num_del_refcnt.is_set
	|| fpd_ldi_num_fixedup.is_set
	|| fpd_ldi_total_backup_activate_time.is_set
	|| fpd_num_allocs.is_set
	|| fpd_num_frees.is_set
	|| fpd_num_retry_touts.is_set
	|| fpd_num_tbls.is_set
	|| fpd_pl_backup_disable_count.is_set
	|| fpd_pl_backup_enable_count.is_set
	|| fpd_pl_fast_nfn_count.is_set
	|| fpd_pl_inline_res_q.is_set
	|| fpd_pl_num_correct_fixup.is_set
	|| fpd_pl_num_queued_fixedup.is_set
	|| fpd_pl_retry_add_exist.is_set
	|| fpd_pl_with_backup_create_count.is_set
	|| fpd_pl_with_backup_del_count.is_set
	|| fpd_recursion_constraint_count.is_set
	|| fpd_retryq_sched_time.is_set
	|| fpd_retryq_size.is_set
	|| fpd_retryq_timeout.is_set
	|| fpd_route_del.is_set
	|| fpd_route_drops.is_set
	|| fpd_route_rcv.is_set
	|| fpd_route_upd.is_set
	|| fpd_te_rcv.is_set
	|| fpd_te_version_mismatch_drops.is_set
	|| fpd_version_mismatch_drops.is_set
	|| fpd_vrftbl_entries.is_set
	|| fpd_vrftbl_rej_entries.is_set
	|| (fpd_gtrie_timing !=  nullptr && fpd_gtrie_timing->has_data())
	|| (fpd_platf_upd_stats !=  nullptr && fpd_platf_upd_stats->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::has_operation() const
{
    for (std::size_t index=0; index<fpd_gbltbl_src_entry.size(); index++)
    {
        if(fpd_gbltbl_src_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpd_num_retry.size(); index++)
    {
        if(fpd_num_retry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpd_vrftbl_src_entry.size(); index++)
    {
        if(fpd_vrftbl_src_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fpd_adj_del.yfilter)
	|| ydk::is_set(fpd_adj_drops.yfilter)
	|| ydk::is_set(fpd_adj_msg.yfilter)
	|| ydk::is_set(fpd_adj_tx_retry_nh_found.yfilter)
	|| ydk::is_set(fpd_adj_tx_retry_obj_reinit.yfilter)
	|| ydk::is_set(fpd_adj_upd.yfilter)
	|| ydk::is_set(fpd_adj_upd_tx.yfilter)
	|| ydk::is_set(fpd_adj_upd_tx_nh_found.yfilter)
	|| ydk::is_set(fpd_adj_upd_tx_retry_created.yfilter)
	|| ydk::is_set(fpd_bcdl_msgs.yfilter)
	|| ydk::is_set(fpd_gbltbl_entries.yfilter)
	|| ydk::is_set(fpd_gbltbl_rej_entries.yfilter)
	|| ydk::is_set(fpd_lbl_recycled.yfilter)
	|| ydk::is_set(fpd_ldi_avg_backup_activate_time.yfilter)
	|| ydk::is_set(fpd_ldi_backup_activate_count.yfilter)
	|| ydk::is_set(fpd_ldi_last_backup_activate_time.yfilter)
	|| ydk::is_set(fpd_ldi_max_backup_activate_time.yfilter)
	|| ydk::is_set(fpd_ldi_min_backup_activate_time.yfilter)
	|| ydk::is_set(fpd_ldi_num_correct_fixup.yfilter)
	|| ydk::is_set(fpd_ldi_num_del_refcnt.yfilter)
	|| ydk::is_set(fpd_ldi_num_fixedup.yfilter)
	|| ydk::is_set(fpd_ldi_total_backup_activate_time.yfilter)
	|| ydk::is_set(fpd_num_allocs.yfilter)
	|| ydk::is_set(fpd_num_frees.yfilter)
	|| ydk::is_set(fpd_num_retry_touts.yfilter)
	|| ydk::is_set(fpd_num_tbls.yfilter)
	|| ydk::is_set(fpd_pl_backup_disable_count.yfilter)
	|| ydk::is_set(fpd_pl_backup_enable_count.yfilter)
	|| ydk::is_set(fpd_pl_fast_nfn_count.yfilter)
	|| ydk::is_set(fpd_pl_inline_res_q.yfilter)
	|| ydk::is_set(fpd_pl_num_correct_fixup.yfilter)
	|| ydk::is_set(fpd_pl_num_queued_fixedup.yfilter)
	|| ydk::is_set(fpd_pl_retry_add_exist.yfilter)
	|| ydk::is_set(fpd_pl_with_backup_create_count.yfilter)
	|| ydk::is_set(fpd_pl_with_backup_del_count.yfilter)
	|| ydk::is_set(fpd_recursion_constraint_count.yfilter)
	|| ydk::is_set(fpd_retryq_sched_time.yfilter)
	|| ydk::is_set(fpd_retryq_size.yfilter)
	|| ydk::is_set(fpd_retryq_timeout.yfilter)
	|| ydk::is_set(fpd_route_del.yfilter)
	|| ydk::is_set(fpd_route_drops.yfilter)
	|| ydk::is_set(fpd_route_rcv.yfilter)
	|| ydk::is_set(fpd_route_upd.yfilter)
	|| ydk::is_set(fpd_te_rcv.yfilter)
	|| ydk::is_set(fpd_te_version_mismatch_drops.yfilter)
	|| ydk::is_set(fpd_version_mismatch_drops.yfilter)
	|| ydk::is_set(fpd_vrftbl_entries.yfilter)
	|| ydk::is_set(fpd_vrftbl_rej_entries.yfilter)
	|| (fpd_gtrie_timing !=  nullptr && fpd_gtrie_timing->has_operation())
	|| (fpd_platf_upd_stats !=  nullptr && fpd_platf_upd_stats->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-proto-dbg-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_adj_del.is_set || is_set(fpd_adj_del.yfilter)) leaf_name_data.push_back(fpd_adj_del.get_name_leafdata());
    if (fpd_adj_drops.is_set || is_set(fpd_adj_drops.yfilter)) leaf_name_data.push_back(fpd_adj_drops.get_name_leafdata());
    if (fpd_adj_msg.is_set || is_set(fpd_adj_msg.yfilter)) leaf_name_data.push_back(fpd_adj_msg.get_name_leafdata());
    if (fpd_adj_tx_retry_nh_found.is_set || is_set(fpd_adj_tx_retry_nh_found.yfilter)) leaf_name_data.push_back(fpd_adj_tx_retry_nh_found.get_name_leafdata());
    if (fpd_adj_tx_retry_obj_reinit.is_set || is_set(fpd_adj_tx_retry_obj_reinit.yfilter)) leaf_name_data.push_back(fpd_adj_tx_retry_obj_reinit.get_name_leafdata());
    if (fpd_adj_upd.is_set || is_set(fpd_adj_upd.yfilter)) leaf_name_data.push_back(fpd_adj_upd.get_name_leafdata());
    if (fpd_adj_upd_tx.is_set || is_set(fpd_adj_upd_tx.yfilter)) leaf_name_data.push_back(fpd_adj_upd_tx.get_name_leafdata());
    if (fpd_adj_upd_tx_nh_found.is_set || is_set(fpd_adj_upd_tx_nh_found.yfilter)) leaf_name_data.push_back(fpd_adj_upd_tx_nh_found.get_name_leafdata());
    if (fpd_adj_upd_tx_retry_created.is_set || is_set(fpd_adj_upd_tx_retry_created.yfilter)) leaf_name_data.push_back(fpd_adj_upd_tx_retry_created.get_name_leafdata());
    if (fpd_bcdl_msgs.is_set || is_set(fpd_bcdl_msgs.yfilter)) leaf_name_data.push_back(fpd_bcdl_msgs.get_name_leafdata());
    if (fpd_gbltbl_entries.is_set || is_set(fpd_gbltbl_entries.yfilter)) leaf_name_data.push_back(fpd_gbltbl_entries.get_name_leafdata());
    if (fpd_gbltbl_rej_entries.is_set || is_set(fpd_gbltbl_rej_entries.yfilter)) leaf_name_data.push_back(fpd_gbltbl_rej_entries.get_name_leafdata());
    if (fpd_lbl_recycled.is_set || is_set(fpd_lbl_recycled.yfilter)) leaf_name_data.push_back(fpd_lbl_recycled.get_name_leafdata());
    if (fpd_ldi_avg_backup_activate_time.is_set || is_set(fpd_ldi_avg_backup_activate_time.yfilter)) leaf_name_data.push_back(fpd_ldi_avg_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_backup_activate_count.is_set || is_set(fpd_ldi_backup_activate_count.yfilter)) leaf_name_data.push_back(fpd_ldi_backup_activate_count.get_name_leafdata());
    if (fpd_ldi_last_backup_activate_time.is_set || is_set(fpd_ldi_last_backup_activate_time.yfilter)) leaf_name_data.push_back(fpd_ldi_last_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_max_backup_activate_time.is_set || is_set(fpd_ldi_max_backup_activate_time.yfilter)) leaf_name_data.push_back(fpd_ldi_max_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_min_backup_activate_time.is_set || is_set(fpd_ldi_min_backup_activate_time.yfilter)) leaf_name_data.push_back(fpd_ldi_min_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_num_correct_fixup.is_set || is_set(fpd_ldi_num_correct_fixup.yfilter)) leaf_name_data.push_back(fpd_ldi_num_correct_fixup.get_name_leafdata());
    if (fpd_ldi_num_del_refcnt.is_set || is_set(fpd_ldi_num_del_refcnt.yfilter)) leaf_name_data.push_back(fpd_ldi_num_del_refcnt.get_name_leafdata());
    if (fpd_ldi_num_fixedup.is_set || is_set(fpd_ldi_num_fixedup.yfilter)) leaf_name_data.push_back(fpd_ldi_num_fixedup.get_name_leafdata());
    if (fpd_ldi_total_backup_activate_time.is_set || is_set(fpd_ldi_total_backup_activate_time.yfilter)) leaf_name_data.push_back(fpd_ldi_total_backup_activate_time.get_name_leafdata());
    if (fpd_num_allocs.is_set || is_set(fpd_num_allocs.yfilter)) leaf_name_data.push_back(fpd_num_allocs.get_name_leafdata());
    if (fpd_num_frees.is_set || is_set(fpd_num_frees.yfilter)) leaf_name_data.push_back(fpd_num_frees.get_name_leafdata());
    if (fpd_num_retry_touts.is_set || is_set(fpd_num_retry_touts.yfilter)) leaf_name_data.push_back(fpd_num_retry_touts.get_name_leafdata());
    if (fpd_num_tbls.is_set || is_set(fpd_num_tbls.yfilter)) leaf_name_data.push_back(fpd_num_tbls.get_name_leafdata());
    if (fpd_pl_backup_disable_count.is_set || is_set(fpd_pl_backup_disable_count.yfilter)) leaf_name_data.push_back(fpd_pl_backup_disable_count.get_name_leafdata());
    if (fpd_pl_backup_enable_count.is_set || is_set(fpd_pl_backup_enable_count.yfilter)) leaf_name_data.push_back(fpd_pl_backup_enable_count.get_name_leafdata());
    if (fpd_pl_fast_nfn_count.is_set || is_set(fpd_pl_fast_nfn_count.yfilter)) leaf_name_data.push_back(fpd_pl_fast_nfn_count.get_name_leafdata());
    if (fpd_pl_inline_res_q.is_set || is_set(fpd_pl_inline_res_q.yfilter)) leaf_name_data.push_back(fpd_pl_inline_res_q.get_name_leafdata());
    if (fpd_pl_num_correct_fixup.is_set || is_set(fpd_pl_num_correct_fixup.yfilter)) leaf_name_data.push_back(fpd_pl_num_correct_fixup.get_name_leafdata());
    if (fpd_pl_num_queued_fixedup.is_set || is_set(fpd_pl_num_queued_fixedup.yfilter)) leaf_name_data.push_back(fpd_pl_num_queued_fixedup.get_name_leafdata());
    if (fpd_pl_retry_add_exist.is_set || is_set(fpd_pl_retry_add_exist.yfilter)) leaf_name_data.push_back(fpd_pl_retry_add_exist.get_name_leafdata());
    if (fpd_pl_with_backup_create_count.is_set || is_set(fpd_pl_with_backup_create_count.yfilter)) leaf_name_data.push_back(fpd_pl_with_backup_create_count.get_name_leafdata());
    if (fpd_pl_with_backup_del_count.is_set || is_set(fpd_pl_with_backup_del_count.yfilter)) leaf_name_data.push_back(fpd_pl_with_backup_del_count.get_name_leafdata());
    if (fpd_recursion_constraint_count.is_set || is_set(fpd_recursion_constraint_count.yfilter)) leaf_name_data.push_back(fpd_recursion_constraint_count.get_name_leafdata());
    if (fpd_retryq_sched_time.is_set || is_set(fpd_retryq_sched_time.yfilter)) leaf_name_data.push_back(fpd_retryq_sched_time.get_name_leafdata());
    if (fpd_retryq_size.is_set || is_set(fpd_retryq_size.yfilter)) leaf_name_data.push_back(fpd_retryq_size.get_name_leafdata());
    if (fpd_retryq_timeout.is_set || is_set(fpd_retryq_timeout.yfilter)) leaf_name_data.push_back(fpd_retryq_timeout.get_name_leafdata());
    if (fpd_route_del.is_set || is_set(fpd_route_del.yfilter)) leaf_name_data.push_back(fpd_route_del.get_name_leafdata());
    if (fpd_route_drops.is_set || is_set(fpd_route_drops.yfilter)) leaf_name_data.push_back(fpd_route_drops.get_name_leafdata());
    if (fpd_route_rcv.is_set || is_set(fpd_route_rcv.yfilter)) leaf_name_data.push_back(fpd_route_rcv.get_name_leafdata());
    if (fpd_route_upd.is_set || is_set(fpd_route_upd.yfilter)) leaf_name_data.push_back(fpd_route_upd.get_name_leafdata());
    if (fpd_te_rcv.is_set || is_set(fpd_te_rcv.yfilter)) leaf_name_data.push_back(fpd_te_rcv.get_name_leafdata());
    if (fpd_te_version_mismatch_drops.is_set || is_set(fpd_te_version_mismatch_drops.yfilter)) leaf_name_data.push_back(fpd_te_version_mismatch_drops.get_name_leafdata());
    if (fpd_version_mismatch_drops.is_set || is_set(fpd_version_mismatch_drops.yfilter)) leaf_name_data.push_back(fpd_version_mismatch_drops.get_name_leafdata());
    if (fpd_vrftbl_entries.is_set || is_set(fpd_vrftbl_entries.yfilter)) leaf_name_data.push_back(fpd_vrftbl_entries.get_name_leafdata());
    if (fpd_vrftbl_rej_entries.is_set || is_set(fpd_vrftbl_rej_entries.yfilter)) leaf_name_data.push_back(fpd_vrftbl_rej_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-gbltbl-src-entry")
    {
        for(auto const & c : fpd_gbltbl_src_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry>();
        c->parent = this;
        fpd_gbltbl_src_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "fpd-gtrie-timing")
    {
        if(fpd_gtrie_timing == nullptr)
        {
            fpd_gtrie_timing = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming>();
        }
        return fpd_gtrie_timing;
    }

    if(child_yang_name == "fpd-num-retry")
    {
        for(auto const & c : fpd_num_retry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry>();
        c->parent = this;
        fpd_num_retry.push_back(c);
        return c;
    }

    if(child_yang_name == "fpd-platf-upd-stats")
    {
        if(fpd_platf_upd_stats == nullptr)
        {
            fpd_platf_upd_stats = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats>();
        }
        return fpd_platf_upd_stats;
    }

    if(child_yang_name == "fpd-vrftbl-src-entry")
    {
        for(auto const & c : fpd_vrftbl_src_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry>();
        c->parent = this;
        fpd_vrftbl_src_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_gbltbl_src_entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(fpd_gtrie_timing != nullptr)
    {
        children["fpd-gtrie-timing"] = fpd_gtrie_timing;
    }

    for (auto const & c : fpd_num_retry)
    {
        children[c->get_segment_path()] = c;
    }

    if(fpd_platf_upd_stats != nullptr)
    {
        children["fpd-platf-upd-stats"] = fpd_platf_upd_stats;
    }

    for (auto const & c : fpd_vrftbl_src_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpd-adj-del")
    {
        fpd_adj_del = value;
        fpd_adj_del.value_namespace = name_space;
        fpd_adj_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-drops")
    {
        fpd_adj_drops = value;
        fpd_adj_drops.value_namespace = name_space;
        fpd_adj_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-msg")
    {
        fpd_adj_msg = value;
        fpd_adj_msg.value_namespace = name_space;
        fpd_adj_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-tx-retry-nh-found")
    {
        fpd_adj_tx_retry_nh_found = value;
        fpd_adj_tx_retry_nh_found.value_namespace = name_space;
        fpd_adj_tx_retry_nh_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-tx-retry-obj-reinit")
    {
        fpd_adj_tx_retry_obj_reinit = value;
        fpd_adj_tx_retry_obj_reinit.value_namespace = name_space;
        fpd_adj_tx_retry_obj_reinit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-upd")
    {
        fpd_adj_upd = value;
        fpd_adj_upd.value_namespace = name_space;
        fpd_adj_upd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-upd-tx")
    {
        fpd_adj_upd_tx = value;
        fpd_adj_upd_tx.value_namespace = name_space;
        fpd_adj_upd_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-upd-tx-nh-found")
    {
        fpd_adj_upd_tx_nh_found = value;
        fpd_adj_upd_tx_nh_found.value_namespace = name_space;
        fpd_adj_upd_tx_nh_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-adj-upd-tx-retry-created")
    {
        fpd_adj_upd_tx_retry_created = value;
        fpd_adj_upd_tx_retry_created.value_namespace = name_space;
        fpd_adj_upd_tx_retry_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-bcdl-msgs")
    {
        fpd_bcdl_msgs = value;
        fpd_bcdl_msgs.value_namespace = name_space;
        fpd_bcdl_msgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-gbltbl-entries")
    {
        fpd_gbltbl_entries = value;
        fpd_gbltbl_entries.value_namespace = name_space;
        fpd_gbltbl_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-gbltbl-rej-entries")
    {
        fpd_gbltbl_rej_entries = value;
        fpd_gbltbl_rej_entries.value_namespace = name_space;
        fpd_gbltbl_rej_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-lbl-recycled")
    {
        fpd_lbl_recycled = value;
        fpd_lbl_recycled.value_namespace = name_space;
        fpd_lbl_recycled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-avg-backup-activate-time")
    {
        fpd_ldi_avg_backup_activate_time = value;
        fpd_ldi_avg_backup_activate_time.value_namespace = name_space;
        fpd_ldi_avg_backup_activate_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-backup-activate-count")
    {
        fpd_ldi_backup_activate_count = value;
        fpd_ldi_backup_activate_count.value_namespace = name_space;
        fpd_ldi_backup_activate_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-last-backup-activate-time")
    {
        fpd_ldi_last_backup_activate_time = value;
        fpd_ldi_last_backup_activate_time.value_namespace = name_space;
        fpd_ldi_last_backup_activate_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-max-backup-activate-time")
    {
        fpd_ldi_max_backup_activate_time = value;
        fpd_ldi_max_backup_activate_time.value_namespace = name_space;
        fpd_ldi_max_backup_activate_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-min-backup-activate-time")
    {
        fpd_ldi_min_backup_activate_time = value;
        fpd_ldi_min_backup_activate_time.value_namespace = name_space;
        fpd_ldi_min_backup_activate_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-num-correct-fixup")
    {
        fpd_ldi_num_correct_fixup = value;
        fpd_ldi_num_correct_fixup.value_namespace = name_space;
        fpd_ldi_num_correct_fixup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-num-del-refcnt")
    {
        fpd_ldi_num_del_refcnt = value;
        fpd_ldi_num_del_refcnt.value_namespace = name_space;
        fpd_ldi_num_del_refcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-num-fixedup")
    {
        fpd_ldi_num_fixedup = value;
        fpd_ldi_num_fixedup.value_namespace = name_space;
        fpd_ldi_num_fixedup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ldi-total-backup-activate-time")
    {
        fpd_ldi_total_backup_activate_time = value;
        fpd_ldi_total_backup_activate_time.value_namespace = name_space;
        fpd_ldi_total_backup_activate_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-num-allocs")
    {
        fpd_num_allocs = value;
        fpd_num_allocs.value_namespace = name_space;
        fpd_num_allocs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-num-frees")
    {
        fpd_num_frees = value;
        fpd_num_frees.value_namespace = name_space;
        fpd_num_frees.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-num-retry-touts")
    {
        fpd_num_retry_touts = value;
        fpd_num_retry_touts.value_namespace = name_space;
        fpd_num_retry_touts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-num-tbls")
    {
        fpd_num_tbls = value;
        fpd_num_tbls.value_namespace = name_space;
        fpd_num_tbls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-backup-disable-count")
    {
        fpd_pl_backup_disable_count = value;
        fpd_pl_backup_disable_count.value_namespace = name_space;
        fpd_pl_backup_disable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-backup-enable-count")
    {
        fpd_pl_backup_enable_count = value;
        fpd_pl_backup_enable_count.value_namespace = name_space;
        fpd_pl_backup_enable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-fast-nfn-count")
    {
        fpd_pl_fast_nfn_count = value;
        fpd_pl_fast_nfn_count.value_namespace = name_space;
        fpd_pl_fast_nfn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-inline-res-q")
    {
        fpd_pl_inline_res_q = value;
        fpd_pl_inline_res_q.value_namespace = name_space;
        fpd_pl_inline_res_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-num-correct-fixup")
    {
        fpd_pl_num_correct_fixup = value;
        fpd_pl_num_correct_fixup.value_namespace = name_space;
        fpd_pl_num_correct_fixup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-num-queued-fixedup")
    {
        fpd_pl_num_queued_fixedup = value;
        fpd_pl_num_queued_fixedup.value_namespace = name_space;
        fpd_pl_num_queued_fixedup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-retry-add-exist")
    {
        fpd_pl_retry_add_exist = value;
        fpd_pl_retry_add_exist.value_namespace = name_space;
        fpd_pl_retry_add_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-with-backup-create-count")
    {
        fpd_pl_with_backup_create_count = value;
        fpd_pl_with_backup_create_count.value_namespace = name_space;
        fpd_pl_with_backup_create_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-pl-with-backup-del-count")
    {
        fpd_pl_with_backup_del_count = value;
        fpd_pl_with_backup_del_count.value_namespace = name_space;
        fpd_pl_with_backup_del_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-recursion-constraint-count")
    {
        fpd_recursion_constraint_count = value;
        fpd_recursion_constraint_count.value_namespace = name_space;
        fpd_recursion_constraint_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-retryq-sched-time")
    {
        fpd_retryq_sched_time = value;
        fpd_retryq_sched_time.value_namespace = name_space;
        fpd_retryq_sched_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-retryq-size")
    {
        fpd_retryq_size = value;
        fpd_retryq_size.value_namespace = name_space;
        fpd_retryq_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-retryq-timeout")
    {
        fpd_retryq_timeout = value;
        fpd_retryq_timeout.value_namespace = name_space;
        fpd_retryq_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-route-del")
    {
        fpd_route_del = value;
        fpd_route_del.value_namespace = name_space;
        fpd_route_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-route-drops")
    {
        fpd_route_drops = value;
        fpd_route_drops.value_namespace = name_space;
        fpd_route_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-route-rcv")
    {
        fpd_route_rcv = value;
        fpd_route_rcv.value_namespace = name_space;
        fpd_route_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-route-upd")
    {
        fpd_route_upd = value;
        fpd_route_upd.value_namespace = name_space;
        fpd_route_upd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-te-rcv")
    {
        fpd_te_rcv = value;
        fpd_te_rcv.value_namespace = name_space;
        fpd_te_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-te-version-mismatch-drops")
    {
        fpd_te_version_mismatch_drops = value;
        fpd_te_version_mismatch_drops.value_namespace = name_space;
        fpd_te_version_mismatch_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-version-mismatch-drops")
    {
        fpd_version_mismatch_drops = value;
        fpd_version_mismatch_drops.value_namespace = name_space;
        fpd_version_mismatch_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-vrftbl-entries")
    {
        fpd_vrftbl_entries = value;
        fpd_vrftbl_entries.value_namespace = name_space;
        fpd_vrftbl_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-vrftbl-rej-entries")
    {
        fpd_vrftbl_rej_entries = value;
        fpd_vrftbl_rej_entries.value_namespace = name_space;
        fpd_vrftbl_rej_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpd-adj-del")
    {
        fpd_adj_del.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-drops")
    {
        fpd_adj_drops.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-msg")
    {
        fpd_adj_msg.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-tx-retry-nh-found")
    {
        fpd_adj_tx_retry_nh_found.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-tx-retry-obj-reinit")
    {
        fpd_adj_tx_retry_obj_reinit.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-upd")
    {
        fpd_adj_upd.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-upd-tx")
    {
        fpd_adj_upd_tx.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-upd-tx-nh-found")
    {
        fpd_adj_upd_tx_nh_found.yfilter = yfilter;
    }
    if(value_path == "fpd-adj-upd-tx-retry-created")
    {
        fpd_adj_upd_tx_retry_created.yfilter = yfilter;
    }
    if(value_path == "fpd-bcdl-msgs")
    {
        fpd_bcdl_msgs.yfilter = yfilter;
    }
    if(value_path == "fpd-gbltbl-entries")
    {
        fpd_gbltbl_entries.yfilter = yfilter;
    }
    if(value_path == "fpd-gbltbl-rej-entries")
    {
        fpd_gbltbl_rej_entries.yfilter = yfilter;
    }
    if(value_path == "fpd-lbl-recycled")
    {
        fpd_lbl_recycled.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-avg-backup-activate-time")
    {
        fpd_ldi_avg_backup_activate_time.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-backup-activate-count")
    {
        fpd_ldi_backup_activate_count.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-last-backup-activate-time")
    {
        fpd_ldi_last_backup_activate_time.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-max-backup-activate-time")
    {
        fpd_ldi_max_backup_activate_time.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-min-backup-activate-time")
    {
        fpd_ldi_min_backup_activate_time.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-num-correct-fixup")
    {
        fpd_ldi_num_correct_fixup.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-num-del-refcnt")
    {
        fpd_ldi_num_del_refcnt.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-num-fixedup")
    {
        fpd_ldi_num_fixedup.yfilter = yfilter;
    }
    if(value_path == "fpd-ldi-total-backup-activate-time")
    {
        fpd_ldi_total_backup_activate_time.yfilter = yfilter;
    }
    if(value_path == "fpd-num-allocs")
    {
        fpd_num_allocs.yfilter = yfilter;
    }
    if(value_path == "fpd-num-frees")
    {
        fpd_num_frees.yfilter = yfilter;
    }
    if(value_path == "fpd-num-retry-touts")
    {
        fpd_num_retry_touts.yfilter = yfilter;
    }
    if(value_path == "fpd-num-tbls")
    {
        fpd_num_tbls.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-backup-disable-count")
    {
        fpd_pl_backup_disable_count.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-backup-enable-count")
    {
        fpd_pl_backup_enable_count.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-fast-nfn-count")
    {
        fpd_pl_fast_nfn_count.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-inline-res-q")
    {
        fpd_pl_inline_res_q.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-num-correct-fixup")
    {
        fpd_pl_num_correct_fixup.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-num-queued-fixedup")
    {
        fpd_pl_num_queued_fixedup.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-retry-add-exist")
    {
        fpd_pl_retry_add_exist.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-with-backup-create-count")
    {
        fpd_pl_with_backup_create_count.yfilter = yfilter;
    }
    if(value_path == "fpd-pl-with-backup-del-count")
    {
        fpd_pl_with_backup_del_count.yfilter = yfilter;
    }
    if(value_path == "fpd-recursion-constraint-count")
    {
        fpd_recursion_constraint_count.yfilter = yfilter;
    }
    if(value_path == "fpd-retryq-sched-time")
    {
        fpd_retryq_sched_time.yfilter = yfilter;
    }
    if(value_path == "fpd-retryq-size")
    {
        fpd_retryq_size.yfilter = yfilter;
    }
    if(value_path == "fpd-retryq-timeout")
    {
        fpd_retryq_timeout.yfilter = yfilter;
    }
    if(value_path == "fpd-route-del")
    {
        fpd_route_del.yfilter = yfilter;
    }
    if(value_path == "fpd-route-drops")
    {
        fpd_route_drops.yfilter = yfilter;
    }
    if(value_path == "fpd-route-rcv")
    {
        fpd_route_rcv.yfilter = yfilter;
    }
    if(value_path == "fpd-route-upd")
    {
        fpd_route_upd.yfilter = yfilter;
    }
    if(value_path == "fpd-te-rcv")
    {
        fpd_te_rcv.yfilter = yfilter;
    }
    if(value_path == "fpd-te-version-mismatch-drops")
    {
        fpd_te_version_mismatch_drops.yfilter = yfilter;
    }
    if(value_path == "fpd-version-mismatch-drops")
    {
        fpd_version_mismatch_drops.yfilter = yfilter;
    }
    if(value_path == "fpd-vrftbl-entries")
    {
        fpd_vrftbl_entries.yfilter = yfilter;
    }
    if(value_path == "fpd-vrftbl-rej-entries")
    {
        fpd_vrftbl_rej_entries.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-gbltbl-src-entry" || name == "fpd-gtrie-timing" || name == "fpd-num-retry" || name == "fpd-platf-upd-stats" || name == "fpd-vrftbl-src-entry" || name == "fpd-adj-del" || name == "fpd-adj-drops" || name == "fpd-adj-msg" || name == "fpd-adj-tx-retry-nh-found" || name == "fpd-adj-tx-retry-obj-reinit" || name == "fpd-adj-upd" || name == "fpd-adj-upd-tx" || name == "fpd-adj-upd-tx-nh-found" || name == "fpd-adj-upd-tx-retry-created" || name == "fpd-bcdl-msgs" || name == "fpd-gbltbl-entries" || name == "fpd-gbltbl-rej-entries" || name == "fpd-lbl-recycled" || name == "fpd-ldi-avg-backup-activate-time" || name == "fpd-ldi-backup-activate-count" || name == "fpd-ldi-last-backup-activate-time" || name == "fpd-ldi-max-backup-activate-time" || name == "fpd-ldi-min-backup-activate-time" || name == "fpd-ldi-num-correct-fixup" || name == "fpd-ldi-num-del-refcnt" || name == "fpd-ldi-num-fixedup" || name == "fpd-ldi-total-backup-activate-time" || name == "fpd-num-allocs" || name == "fpd-num-frees" || name == "fpd-num-retry-touts" || name == "fpd-num-tbls" || name == "fpd-pl-backup-disable-count" || name == "fpd-pl-backup-enable-count" || name == "fpd-pl-fast-nfn-count" || name == "fpd-pl-inline-res-q" || name == "fpd-pl-num-correct-fixup" || name == "fpd-pl-num-queued-fixedup" || name == "fpd-pl-retry-add-exist" || name == "fpd-pl-with-backup-create-count" || name == "fpd-pl-with-backup-del-count" || name == "fpd-recursion-constraint-count" || name == "fpd-retryq-sched-time" || name == "fpd-retryq-size" || name == "fpd-retryq-timeout" || name == "fpd-route-del" || name == "fpd-route-drops" || name == "fpd-route-rcv" || name == "fpd-route-upd" || name == "fpd-te-rcv" || name == "fpd-te-version-mismatch-drops" || name == "fpd-version-mismatch-drops" || name == "fpd-vrftbl-entries" || name == "fpd-vrftbl-rej-entries")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::FpdGbltblSrcEntry()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "fpd-gbltbl-src-entry"; yang_parent_name = "mi-proto-dbg-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::~FpdGbltblSrcEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-gbltbl-src-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FpdGtrieTiming()
    :
    fgt_num_failure{YType::uint64, "fgt-num-failure"},
    fgt_num_success{YType::uint64, "fgt-num-success"},
    fgt_upd_total_time{YType::uint64, "fgt-upd-total-time"}
{

    yang_name = "fpd-gtrie-timing"; yang_parent_name = "mi-proto-dbg-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::~FpdGtrieTiming()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_data() const
{
    for (std::size_t index=0; index<fgt_gtrie_fn_timing.size(); index++)
    {
        if(fgt_gtrie_fn_timing[index]->has_data())
            return true;
    }
    return fgt_num_failure.is_set
	|| fgt_num_success.is_set
	|| fgt_upd_total_time.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_operation() const
{
    for (std::size_t index=0; index<fgt_gtrie_fn_timing.size(); index++)
    {
        if(fgt_gtrie_fn_timing[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fgt_num_failure.yfilter)
	|| ydk::is_set(fgt_num_success.yfilter)
	|| ydk::is_set(fgt_upd_total_time.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-gtrie-timing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgt_num_failure.is_set || is_set(fgt_num_failure.yfilter)) leaf_name_data.push_back(fgt_num_failure.get_name_leafdata());
    if (fgt_num_success.is_set || is_set(fgt_num_success.yfilter)) leaf_name_data.push_back(fgt_num_success.get_name_leafdata());
    if (fgt_upd_total_time.is_set || is_set(fgt_upd_total_time.yfilter)) leaf_name_data.push_back(fgt_upd_total_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgt-gtrie-fn-timing")
    {
        for(auto const & c : fgt_gtrie_fn_timing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming>();
        c->parent = this;
        fgt_gtrie_fn_timing.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fgt_gtrie_fn_timing)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgt-num-failure")
    {
        fgt_num_failure = value;
        fgt_num_failure.value_namespace = name_space;
        fgt_num_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgt-num-success")
    {
        fgt_num_success = value;
        fgt_num_success.value_namespace = name_space;
        fgt_num_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgt-upd-total-time")
    {
        fgt_upd_total_time = value;
        fgt_upd_total_time.value_namespace = name_space;
        fgt_upd_total_time.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgt-num-failure")
    {
        fgt_num_failure.yfilter = yfilter;
    }
    if(value_path == "fgt-num-success")
    {
        fgt_num_success.yfilter = yfilter;
    }
    if(value_path == "fgt-upd-total-time")
    {
        fgt_upd_total_time.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgt-gtrie-fn-timing" || name == "fgt-num-failure" || name == "fgt-num-success" || name == "fgt-upd-total-time")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::FgtGtrieFnTiming()
    :
    fgft_fn{YType::str, "fgft-fn"},
    fgft_max_time{YType::uint64, "fgft-max-time"},
    fgft_max_tstamp{YType::uint64, "fgft-max-tstamp"},
    fgft_tot_upd_time{YType::uint64, "fgft-tot-upd-time"},
    fgft_tot_updates{YType::uint64, "fgft-tot-updates"},
    fgft_tot_updates_zero{YType::uint64, "fgft-tot-updates-zero"}
{

    yang_name = "fgt-gtrie-fn-timing"; yang_parent_name = "fpd-gtrie-timing"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::~FgtGtrieFnTiming()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_data() const
{
    return fgft_fn.is_set
	|| fgft_max_time.is_set
	|| fgft_max_tstamp.is_set
	|| fgft_tot_upd_time.is_set
	|| fgft_tot_updates.is_set
	|| fgft_tot_updates_zero.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fgft_fn.yfilter)
	|| ydk::is_set(fgft_max_time.yfilter)
	|| ydk::is_set(fgft_max_tstamp.yfilter)
	|| ydk::is_set(fgft_tot_upd_time.yfilter)
	|| ydk::is_set(fgft_tot_updates.yfilter)
	|| ydk::is_set(fgft_tot_updates_zero.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgt-gtrie-fn-timing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgft_fn.is_set || is_set(fgft_fn.yfilter)) leaf_name_data.push_back(fgft_fn.get_name_leafdata());
    if (fgft_max_time.is_set || is_set(fgft_max_time.yfilter)) leaf_name_data.push_back(fgft_max_time.get_name_leafdata());
    if (fgft_max_tstamp.is_set || is_set(fgft_max_tstamp.yfilter)) leaf_name_data.push_back(fgft_max_tstamp.get_name_leafdata());
    if (fgft_tot_upd_time.is_set || is_set(fgft_tot_upd_time.yfilter)) leaf_name_data.push_back(fgft_tot_upd_time.get_name_leafdata());
    if (fgft_tot_updates.is_set || is_set(fgft_tot_updates.yfilter)) leaf_name_data.push_back(fgft_tot_updates.get_name_leafdata());
    if (fgft_tot_updates_zero.is_set || is_set(fgft_tot_updates_zero.yfilter)) leaf_name_data.push_back(fgft_tot_updates_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgft-fn")
    {
        fgft_fn = value;
        fgft_fn.value_namespace = name_space;
        fgft_fn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-max-time")
    {
        fgft_max_time = value;
        fgft_max_time.value_namespace = name_space;
        fgft_max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-max-tstamp")
    {
        fgft_max_tstamp = value;
        fgft_max_tstamp.value_namespace = name_space;
        fgft_max_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-tot-upd-time")
    {
        fgft_tot_upd_time = value;
        fgft_tot_upd_time.value_namespace = name_space;
        fgft_tot_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-tot-updates")
    {
        fgft_tot_updates = value;
        fgft_tot_updates.value_namespace = name_space;
        fgft_tot_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgft-tot-updates-zero")
    {
        fgft_tot_updates_zero = value;
        fgft_tot_updates_zero.value_namespace = name_space;
        fgft_tot_updates_zero.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgft-fn")
    {
        fgft_fn.yfilter = yfilter;
    }
    if(value_path == "fgft-max-time")
    {
        fgft_max_time.yfilter = yfilter;
    }
    if(value_path == "fgft-max-tstamp")
    {
        fgft_max_tstamp.yfilter = yfilter;
    }
    if(value_path == "fgft-tot-upd-time")
    {
        fgft_tot_upd_time.yfilter = yfilter;
    }
    if(value_path == "fgft-tot-updates")
    {
        fgft_tot_updates.yfilter = yfilter;
    }
    if(value_path == "fgft-tot-updates-zero")
    {
        fgft_tot_updates_zero.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgft-fn" || name == "fgft-max-time" || name == "fgft-max-tstamp" || name == "fgft-tot-upd-time" || name == "fgft-tot-updates" || name == "fgft-tot-updates-zero")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::FpdNumRetry()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "fpd-num-retry"; yang_parent_name = "mi-proto-dbg-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::~FpdNumRetry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-num-retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpdPlatfUpdStats()
    :
    fpus_num_failure{YType::uint64, "fpus-num-failure"},
    fpus_num_success{YType::uint64, "fpus-num-success"},
    fpus_upd_total_time{YType::uint64, "fpus-upd-total-time"}
{

    yang_name = "fpd-platf-upd-stats"; yang_parent_name = "mi-proto-dbg-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::~FpdPlatfUpdStats()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_data() const
{
    for (std::size_t index=0; index<fpus_obj_stat.size(); index++)
    {
        if(fpus_obj_stat[index]->has_data())
            return true;
    }
    return fpus_num_failure.is_set
	|| fpus_num_success.is_set
	|| fpus_upd_total_time.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_operation() const
{
    for (std::size_t index=0; index<fpus_obj_stat.size(); index++)
    {
        if(fpus_obj_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fpus_num_failure.yfilter)
	|| ydk::is_set(fpus_num_success.yfilter)
	|| ydk::is_set(fpus_upd_total_time.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-platf-upd-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpus_num_failure.is_set || is_set(fpus_num_failure.yfilter)) leaf_name_data.push_back(fpus_num_failure.get_name_leafdata());
    if (fpus_num_success.is_set || is_set(fpus_num_success.yfilter)) leaf_name_data.push_back(fpus_num_success.get_name_leafdata());
    if (fpus_upd_total_time.is_set || is_set(fpus_upd_total_time.yfilter)) leaf_name_data.push_back(fpus_upd_total_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpus-obj-stat")
    {
        for(auto const & c : fpus_obj_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat>();
        c->parent = this;
        fpus_obj_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpus_obj_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpus-num-failure")
    {
        fpus_num_failure = value;
        fpus_num_failure.value_namespace = name_space;
        fpus_num_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpus-num-success")
    {
        fpus_num_success = value;
        fpus_num_success.value_namespace = name_space;
        fpus_num_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpus-upd-total-time")
    {
        fpus_upd_total_time = value;
        fpus_upd_total_time.value_namespace = name_space;
        fpus_upd_total_time.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpus-num-failure")
    {
        fpus_num_failure.yfilter = yfilter;
    }
    if(value_path == "fpus-num-success")
    {
        fpus_num_success.yfilter = yfilter;
    }
    if(value_path == "fpus-upd-total-time")
    {
        fpus_upd_total_time.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpus-obj-stat" || name == "fpus-num-failure" || name == "fpus-num-success" || name == "fpus-upd-total-time")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FpusObjStat()
    :
    fos_tot_upd_time{YType::uint64, "fos-tot-upd-time"},
    fos_tot_updates{YType::uint64, "fos-tot-updates"}
{

    yang_name = "fpus-obj-stat"; yang_parent_name = "fpd-platf-upd-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::~FpusObjStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_data() const
{
    for (std::size_t index=0; index<fos_obj_act_stat.size(); index++)
    {
        if(fos_obj_act_stat[index]->has_data())
            return true;
    }
    return fos_tot_upd_time.is_set
	|| fos_tot_updates.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_operation() const
{
    for (std::size_t index=0; index<fos_obj_act_stat.size(); index++)
    {
        if(fos_obj_act_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fos_tot_upd_time.yfilter)
	|| ydk::is_set(fos_tot_updates.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpus-obj-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fos_tot_upd_time.is_set || is_set(fos_tot_upd_time.yfilter)) leaf_name_data.push_back(fos_tot_upd_time.get_name_leafdata());
    if (fos_tot_updates.is_set || is_set(fos_tot_updates.yfilter)) leaf_name_data.push_back(fos_tot_updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fos-obj-act-stat")
    {
        for(auto const & c : fos_obj_act_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat>();
        c->parent = this;
        fos_obj_act_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fos_obj_act_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fos-tot-upd-time")
    {
        fos_tot_upd_time = value;
        fos_tot_upd_time.value_namespace = name_space;
        fos_tot_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fos-tot-updates")
    {
        fos_tot_updates = value;
        fos_tot_updates.value_namespace = name_space;
        fos_tot_updates.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fos-tot-upd-time")
    {
        fos_tot_upd_time.yfilter = yfilter;
    }
    if(value_path == "fos-tot-updates")
    {
        fos_tot_updates.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fos-obj-act-stat" || name == "fos-tot-upd-time" || name == "fos-tot-updates")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::FosObjActStat()
    :
    foas_max_time{YType::uint64, "foas-max-time"},
    foas_max_tstamp{YType::uint64, "foas-max-tstamp"},
    foas_num_failure{YType::uint64, "foas-num-failure"},
    foas_num_success{YType::uint64, "foas-num-success"},
    foas_tot_upd_time{YType::uint64, "foas-tot-upd-time"},
    foas_tot_updates{YType::uint64, "foas-tot-updates"},
    foas_tot_updates_zero{YType::uint64, "foas-tot-updates-zero"}
{

    yang_name = "fos-obj-act-stat"; yang_parent_name = "fpus-obj-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::~FosObjActStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_data() const
{
    return foas_max_time.is_set
	|| foas_max_tstamp.is_set
	|| foas_num_failure.is_set
	|| foas_num_success.is_set
	|| foas_tot_upd_time.is_set
	|| foas_tot_updates.is_set
	|| foas_tot_updates_zero.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foas_max_time.yfilter)
	|| ydk::is_set(foas_max_tstamp.yfilter)
	|| ydk::is_set(foas_num_failure.yfilter)
	|| ydk::is_set(foas_num_success.yfilter)
	|| ydk::is_set(foas_tot_upd_time.yfilter)
	|| ydk::is_set(foas_tot_updates.yfilter)
	|| ydk::is_set(foas_tot_updates_zero.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fos-obj-act-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foas_max_time.is_set || is_set(foas_max_time.yfilter)) leaf_name_data.push_back(foas_max_time.get_name_leafdata());
    if (foas_max_tstamp.is_set || is_set(foas_max_tstamp.yfilter)) leaf_name_data.push_back(foas_max_tstamp.get_name_leafdata());
    if (foas_num_failure.is_set || is_set(foas_num_failure.yfilter)) leaf_name_data.push_back(foas_num_failure.get_name_leafdata());
    if (foas_num_success.is_set || is_set(foas_num_success.yfilter)) leaf_name_data.push_back(foas_num_success.get_name_leafdata());
    if (foas_tot_upd_time.is_set || is_set(foas_tot_upd_time.yfilter)) leaf_name_data.push_back(foas_tot_upd_time.get_name_leafdata());
    if (foas_tot_updates.is_set || is_set(foas_tot_updates.yfilter)) leaf_name_data.push_back(foas_tot_updates.get_name_leafdata());
    if (foas_tot_updates_zero.is_set || is_set(foas_tot_updates_zero.yfilter)) leaf_name_data.push_back(foas_tot_updates_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foas-max-time")
    {
        foas_max_time = value;
        foas_max_time.value_namespace = name_space;
        foas_max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-max-tstamp")
    {
        foas_max_tstamp = value;
        foas_max_tstamp.value_namespace = name_space;
        foas_max_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-num-failure")
    {
        foas_num_failure = value;
        foas_num_failure.value_namespace = name_space;
        foas_num_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-num-success")
    {
        foas_num_success = value;
        foas_num_success.value_namespace = name_space;
        foas_num_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-tot-upd-time")
    {
        foas_tot_upd_time = value;
        foas_tot_upd_time.value_namespace = name_space;
        foas_tot_upd_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-tot-updates")
    {
        foas_tot_updates = value;
        foas_tot_updates.value_namespace = name_space;
        foas_tot_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foas-tot-updates-zero")
    {
        foas_tot_updates_zero = value;
        foas_tot_updates_zero.value_namespace = name_space;
        foas_tot_updates_zero.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foas-max-time")
    {
        foas_max_time.yfilter = yfilter;
    }
    if(value_path == "foas-max-tstamp")
    {
        foas_max_tstamp.yfilter = yfilter;
    }
    if(value_path == "foas-num-failure")
    {
        foas_num_failure.yfilter = yfilter;
    }
    if(value_path == "foas-num-success")
    {
        foas_num_success.yfilter = yfilter;
    }
    if(value_path == "foas-tot-upd-time")
    {
        foas_tot_upd_time.yfilter = yfilter;
    }
    if(value_path == "foas-tot-updates")
    {
        foas_tot_updates.yfilter = yfilter;
    }
    if(value_path == "foas-tot-updates-zero")
    {
        foas_tot_updates_zero.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foas-max-time" || name == "foas-max-tstamp" || name == "foas-num-failure" || name == "foas-num-success" || name == "foas-tot-upd-time" || name == "foas-tot-updates" || name == "foas-tot-updates-zero")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::FpdVrftblSrcEntry()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "fpd-vrftbl-src-entry"; yang_parent_name = "mi-proto-dbg-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::~FpdVrftblSrcEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-vrftbl-src-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::NhIds()
{

    yang_name = "nh-ids"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::~NhIds()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::has_data() const
{
    for (std::size_t index=0; index<nh_id.size(); index++)
    {
        if(nh_id[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::has_operation() const
{
    for (std::size_t index=0; index<nh_id.size(); index++)
    {
        if(nh_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::NhIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::NhIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::NhIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-id")
    {
        for(auto const & c : nh_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId>();
        c->parent = this;
        nh_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::NhIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nh_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::NhIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::NhIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-id")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::NhId()
    :
    nh_address{YType::str, "nh-address"},
    nh_address_xr{YType::str, "nh-address-xr"},
    nh_id{YType::uint32, "nh-id"},
    nh_id_application{YType::uint8, "nh-id-application"},
    nh_id_value{YType::int32, "nh-id-value"},
    nh_interf_handle{YType::str, "nh-interf-handle"},
    nh_interface_name{YType::str, "nh-interface-name"},
    nh_link_type{YType::uint8, "nh-link-type"},
    nh_protocol{YType::uint8, "nh-protocol"},
    nh_table_id{YType::uint32, "nh-table-id"},
    time_of_last_update_in_msec{YType::uint64, "time-of-last-update-in-msec"},
    version{YType::uint64, "version"}
{

    yang_name = "nh-id"; yang_parent_name = "nh-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::~NhId()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::has_data() const
{
    return nh_address.is_set
	|| nh_address_xr.is_set
	|| nh_id.is_set
	|| nh_id_application.is_set
	|| nh_id_value.is_set
	|| nh_interf_handle.is_set
	|| nh_interface_name.is_set
	|| nh_link_type.is_set
	|| nh_protocol.is_set
	|| nh_table_id.is_set
	|| time_of_last_update_in_msec.is_set
	|| version.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_address.yfilter)
	|| ydk::is_set(nh_address_xr.yfilter)
	|| ydk::is_set(nh_id.yfilter)
	|| ydk::is_set(nh_id_application.yfilter)
	|| ydk::is_set(nh_id_value.yfilter)
	|| ydk::is_set(nh_interf_handle.yfilter)
	|| ydk::is_set(nh_interface_name.yfilter)
	|| ydk::is_set(nh_link_type.yfilter)
	|| ydk::is_set(nh_protocol.yfilter)
	|| ydk::is_set(nh_table_id.yfilter)
	|| ydk::is_set(time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_address.is_set || is_set(nh_address.yfilter)) leaf_name_data.push_back(nh_address.get_name_leafdata());
    if (nh_address_xr.is_set || is_set(nh_address_xr.yfilter)) leaf_name_data.push_back(nh_address_xr.get_name_leafdata());
    if (nh_id.is_set || is_set(nh_id.yfilter)) leaf_name_data.push_back(nh_id.get_name_leafdata());
    if (nh_id_application.is_set || is_set(nh_id_application.yfilter)) leaf_name_data.push_back(nh_id_application.get_name_leafdata());
    if (nh_id_value.is_set || is_set(nh_id_value.yfilter)) leaf_name_data.push_back(nh_id_value.get_name_leafdata());
    if (nh_interf_handle.is_set || is_set(nh_interf_handle.yfilter)) leaf_name_data.push_back(nh_interf_handle.get_name_leafdata());
    if (nh_interface_name.is_set || is_set(nh_interface_name.yfilter)) leaf_name_data.push_back(nh_interface_name.get_name_leafdata());
    if (nh_link_type.is_set || is_set(nh_link_type.yfilter)) leaf_name_data.push_back(nh_link_type.get_name_leafdata());
    if (nh_protocol.is_set || is_set(nh_protocol.yfilter)) leaf_name_data.push_back(nh_protocol.get_name_leafdata());
    if (nh_table_id.is_set || is_set(nh_table_id.yfilter)) leaf_name_data.push_back(nh_table_id.get_name_leafdata());
    if (time_of_last_update_in_msec.is_set || is_set(time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(time_of_last_update_in_msec.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-address")
    {
        nh_address = value;
        nh_address.value_namespace = name_space;
        nh_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-address-xr")
    {
        nh_address_xr = value;
        nh_address_xr.value_namespace = name_space;
        nh_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-id")
    {
        nh_id = value;
        nh_id.value_namespace = name_space;
        nh_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-id-application")
    {
        nh_id_application = value;
        nh_id_application.value_namespace = name_space;
        nh_id_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-id-value")
    {
        nh_id_value = value;
        nh_id_value.value_namespace = name_space;
        nh_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-interf-handle")
    {
        nh_interf_handle = value;
        nh_interf_handle.value_namespace = name_space;
        nh_interf_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-interface-name")
    {
        nh_interface_name = value;
        nh_interface_name.value_namespace = name_space;
        nh_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-link-type")
    {
        nh_link_type = value;
        nh_link_type.value_namespace = name_space;
        nh_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-protocol")
    {
        nh_protocol = value;
        nh_protocol.value_namespace = name_space;
        nh_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-table-id")
    {
        nh_table_id = value;
        nh_table_id.value_namespace = name_space;
        nh_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec = value;
        time_of_last_update_in_msec.value_namespace = name_space;
        time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-address")
    {
        nh_address.yfilter = yfilter;
    }
    if(value_path == "nh-address-xr")
    {
        nh_address_xr.yfilter = yfilter;
    }
    if(value_path == "nh-id")
    {
        nh_id.yfilter = yfilter;
    }
    if(value_path == "nh-id-application")
    {
        nh_id_application.yfilter = yfilter;
    }
    if(value_path == "nh-id-value")
    {
        nh_id_value.yfilter = yfilter;
    }
    if(value_path == "nh-interf-handle")
    {
        nh_interf_handle.yfilter = yfilter;
    }
    if(value_path == "nh-interface-name")
    {
        nh_interface_name.yfilter = yfilter;
    }
    if(value_path == "nh-link-type")
    {
        nh_link_type.yfilter = yfilter;
    }
    if(value_path == "nh-protocol")
    {
        nh_protocol.yfilter = yfilter;
    }
    if(value_path == "nh-table-id")
    {
        nh_table_id.yfilter = yfilter;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-address" || name == "nh-address-xr" || name == "nh-id" || name == "nh-id-application" || name == "nh-id-value" || name == "nh-interf-handle" || name == "nh-interface-name" || name == "nh-link-type" || name == "nh-protocol" || name == "nh-table-id" || name == "time-of-last-update-in-msec" || name == "version")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::Resource()
    :
    resource_detail_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo>())
	,resource_hardware_egress_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo>())
	,resource_hardware_ingress_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo>())
	,resource_summary_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo>())
{
    resource_detail_info->parent = this;
    resource_hardware_egress_info->parent = this;
    resource_hardware_ingress_info->parent = this;
    resource_summary_info->parent = this;

    yang_name = "resource"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::~Resource()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::has_data() const
{
    return (resource_detail_info !=  nullptr && resource_detail_info->has_data())
	|| (resource_hardware_egress_info !=  nullptr && resource_hardware_egress_info->has_data())
	|| (resource_hardware_ingress_info !=  nullptr && resource_hardware_ingress_info->has_data())
	|| (resource_summary_info !=  nullptr && resource_summary_info->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::has_operation() const
{
    return is_set(yfilter)
	|| (resource_detail_info !=  nullptr && resource_detail_info->has_operation())
	|| (resource_hardware_egress_info !=  nullptr && resource_hardware_egress_info->has_operation())
	|| (resource_hardware_ingress_info !=  nullptr && resource_hardware_ingress_info->has_operation())
	|| (resource_summary_info !=  nullptr && resource_summary_info->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resource-detail-info")
    {
        if(resource_detail_info == nullptr)
        {
            resource_detail_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo>();
        }
        return resource_detail_info;
    }

    if(child_yang_name == "resource-hardware-egress-info")
    {
        if(resource_hardware_egress_info == nullptr)
        {
            resource_hardware_egress_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo>();
        }
        return resource_hardware_egress_info;
    }

    if(child_yang_name == "resource-hardware-ingress-info")
    {
        if(resource_hardware_ingress_info == nullptr)
        {
            resource_hardware_ingress_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo>();
        }
        return resource_hardware_ingress_info;
    }

    if(child_yang_name == "resource-summary-info")
    {
        if(resource_summary_info == nullptr)
        {
            resource_summary_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo>();
        }
        return resource_summary_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resource_detail_info != nullptr)
    {
        children["resource-detail-info"] = resource_detail_info;
    }

    if(resource_hardware_egress_info != nullptr)
    {
        children["resource-hardware-egress-info"] = resource_hardware_egress_info;
    }

    if(resource_hardware_ingress_info != nullptr)
    {
        children["resource-hardware-ingress-info"] = resource_hardware_ingress_info;
    }

    if(resource_summary_info != nullptr)
    {
        children["resource-summary-info"] = resource_summary_info;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource-detail-info" || name == "resource-hardware-egress-info" || name == "resource-hardware-ingress-info" || name == "resource-summary-info")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::ResourceDetailInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{

    yang_name = "resource-detail-info"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::~ResourceDetailInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::has_data() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sr_curr_mode.yfilter)
	|| ydk::is_set(sr_hw_oor_count.yfilter)
	|| ydk::is_set(sr_hwrsrc_info.yfilter)
	|| ydk::is_set(sr_in_oor_ts.yfilter)
	|| ydk::is_set(sr_out_oor_ts.yfilter)
	|| ydk::is_set(sr_shmwin_oor_count.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.yfilter)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.yfilter)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.yfilter)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.yfilter)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.yfilter)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.yfilter)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-hwrsrc-mode")
    {
        for(auto const & c : sr_hwrsrc_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode>();
        c->parent = this;
        sr_hwrsrc_mode.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_hwrsrc_mode)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_shm_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
        sr_curr_mode.value_namespace = name_space;
        sr_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
        sr_hw_oor_count.value_namespace = name_space;
        sr_hw_oor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
        sr_hwrsrc_info.value_namespace = name_space;
        sr_hwrsrc_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
        sr_in_oor_ts.value_namespace = name_space;
        sr_in_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
        sr_out_oor_ts.value_namespace = name_space;
        sr_out_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
        sr_shmwin_oor_count.value_namespace = name_space;
        sr_shmwin_oor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode.yfilter = yfilter;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count.yfilter = yfilter;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info.yfilter = yfilter;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-hwrsrc-mode" || name == "sr-shm-state" || name == "sr-curr-mode" || name == "sr-hw-oor-count" || name == "sr-hwrsrc-info" || name == "sr-in-oor-ts" || name == "sr-out-oor-ts" || name == "sr-shmwin-oor-count")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::SrHwrsrcMode()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-hwrsrc-mode"; yang_parent_name = "resource-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::~SrHwrsrcMode()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-hwrsrc-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrHwrsrcMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{

    yang_name = "sr-shm-state"; yang_parent_name = "resource-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srs_avg_avail.yfilter)
	|| ydk::is_set(srs_curr_mode.yfilter)
	|| ydk::is_set(srs_max_avail.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.yfilter)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.yfilter)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.yfilter)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
        srs_avg_avail.value_namespace = name_space;
        srs_avg_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
        srs_curr_mode.value_namespace = name_space;
        srs_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
        srs_max_avail.value_namespace = name_space;
        srs_max_avail.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail.yfilter = yfilter;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode.yfilter = yfilter;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srs-avg-avail" || name == "srs-curr-mode" || name == "srs-max-avail")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::ResourceHardwareEgressInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{

    yang_name = "resource-hardware-egress-info"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::~ResourceHardwareEgressInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::has_data() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sr_curr_mode.yfilter)
	|| ydk::is_set(sr_hw_oor_count.yfilter)
	|| ydk::is_set(sr_hwrsrc_info.yfilter)
	|| ydk::is_set(sr_in_oor_ts.yfilter)
	|| ydk::is_set(sr_out_oor_ts.yfilter)
	|| ydk::is_set(sr_shmwin_oor_count.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-hardware-egress-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.yfilter)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.yfilter)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.yfilter)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.yfilter)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.yfilter)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.yfilter)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-hwrsrc-mode")
    {
        for(auto const & c : sr_hwrsrc_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode>();
        c->parent = this;
        sr_hwrsrc_mode.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_hwrsrc_mode)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_shm_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
        sr_curr_mode.value_namespace = name_space;
        sr_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
        sr_hw_oor_count.value_namespace = name_space;
        sr_hw_oor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
        sr_hwrsrc_info.value_namespace = name_space;
        sr_hwrsrc_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
        sr_in_oor_ts.value_namespace = name_space;
        sr_in_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
        sr_out_oor_ts.value_namespace = name_space;
        sr_out_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
        sr_shmwin_oor_count.value_namespace = name_space;
        sr_shmwin_oor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode.yfilter = yfilter;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count.yfilter = yfilter;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info.yfilter = yfilter;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-hwrsrc-mode" || name == "sr-shm-state" || name == "sr-curr-mode" || name == "sr-hw-oor-count" || name == "sr-hwrsrc-info" || name == "sr-in-oor-ts" || name == "sr-out-oor-ts" || name == "sr-shmwin-oor-count")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::SrHwrsrcMode()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-hwrsrc-mode"; yang_parent_name = "resource-hardware-egress-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::~SrHwrsrcMode()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-hwrsrc-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrHwrsrcMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{

    yang_name = "sr-shm-state"; yang_parent_name = "resource-hardware-egress-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srs_avg_avail.yfilter)
	|| ydk::is_set(srs_curr_mode.yfilter)
	|| ydk::is_set(srs_max_avail.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.yfilter)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.yfilter)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.yfilter)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
        srs_avg_avail.value_namespace = name_space;
        srs_avg_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
        srs_curr_mode.value_namespace = name_space;
        srs_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
        srs_max_avail.value_namespace = name_space;
        srs_max_avail.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail.yfilter = yfilter;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode.yfilter = yfilter;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srs-avg-avail" || name == "srs-curr-mode" || name == "srs-max-avail")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::ResourceHardwareIngressInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{

    yang_name = "resource-hardware-ingress-info"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::~ResourceHardwareIngressInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::has_data() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sr_curr_mode.yfilter)
	|| ydk::is_set(sr_hw_oor_count.yfilter)
	|| ydk::is_set(sr_hwrsrc_info.yfilter)
	|| ydk::is_set(sr_in_oor_ts.yfilter)
	|| ydk::is_set(sr_out_oor_ts.yfilter)
	|| ydk::is_set(sr_shmwin_oor_count.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-hardware-ingress-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.yfilter)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.yfilter)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.yfilter)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.yfilter)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.yfilter)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.yfilter)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-hwrsrc-mode")
    {
        for(auto const & c : sr_hwrsrc_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode>();
        c->parent = this;
        sr_hwrsrc_mode.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_hwrsrc_mode)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_shm_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
        sr_curr_mode.value_namespace = name_space;
        sr_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
        sr_hw_oor_count.value_namespace = name_space;
        sr_hw_oor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
        sr_hwrsrc_info.value_namespace = name_space;
        sr_hwrsrc_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
        sr_in_oor_ts.value_namespace = name_space;
        sr_in_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
        sr_out_oor_ts.value_namespace = name_space;
        sr_out_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
        sr_shmwin_oor_count.value_namespace = name_space;
        sr_shmwin_oor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode.yfilter = yfilter;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count.yfilter = yfilter;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info.yfilter = yfilter;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-hwrsrc-mode" || name == "sr-shm-state" || name == "sr-curr-mode" || name == "sr-hw-oor-count" || name == "sr-hwrsrc-info" || name == "sr-in-oor-ts" || name == "sr-out-oor-ts" || name == "sr-shmwin-oor-count")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::SrHwrsrcMode()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-hwrsrc-mode"; yang_parent_name = "resource-hardware-ingress-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::~SrHwrsrcMode()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-hwrsrc-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrHwrsrcMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{

    yang_name = "sr-shm-state"; yang_parent_name = "resource-hardware-ingress-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srs_avg_avail.yfilter)
	|| ydk::is_set(srs_curr_mode.yfilter)
	|| ydk::is_set(srs_max_avail.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.yfilter)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.yfilter)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.yfilter)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
        srs_avg_avail.value_namespace = name_space;
        srs_avg_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
        srs_curr_mode.value_namespace = name_space;
        srs_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
        srs_max_avail.value_namespace = name_space;
        srs_max_avail.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail.yfilter = yfilter;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode.yfilter = yfilter;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srs-avg-avail" || name == "srs-curr-mode" || name == "srs-max-avail")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::ResourceSummaryInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{

    yang_name = "resource-summary-info"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::~ResourceSummaryInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::has_data() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_hwrsrc_mode.size(); index++)
    {
        if(sr_hwrsrc_mode[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sr_curr_mode.yfilter)
	|| ydk::is_set(sr_hw_oor_count.yfilter)
	|| ydk::is_set(sr_hwrsrc_info.yfilter)
	|| ydk::is_set(sr_in_oor_ts.yfilter)
	|| ydk::is_set(sr_out_oor_ts.yfilter)
	|| ydk::is_set(sr_shmwin_oor_count.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-summary-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.yfilter)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.yfilter)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.yfilter)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.yfilter)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.yfilter)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.yfilter)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-hwrsrc-mode")
    {
        for(auto const & c : sr_hwrsrc_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode>();
        c->parent = this;
        sr_hwrsrc_mode.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_hwrsrc_mode)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_shm_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
        sr_curr_mode.value_namespace = name_space;
        sr_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
        sr_hw_oor_count.value_namespace = name_space;
        sr_hw_oor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
        sr_hwrsrc_info.value_namespace = name_space;
        sr_hwrsrc_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
        sr_in_oor_ts.value_namespace = name_space;
        sr_in_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
        sr_out_oor_ts.value_namespace = name_space;
        sr_out_oor_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
        sr_shmwin_oor_count.value_namespace = name_space;
        sr_shmwin_oor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode.yfilter = yfilter;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count.yfilter = yfilter;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info.yfilter = yfilter;
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts.yfilter = yfilter;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-hwrsrc-mode" || name == "sr-shm-state" || name == "sr-curr-mode" || name == "sr-hw-oor-count" || name == "sr-hwrsrc-info" || name == "sr-in-oor-ts" || name == "sr-out-oor-ts" || name == "sr-shmwin-oor-count")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::SrHwrsrcMode()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-hwrsrc-mode"; yang_parent_name = "resource-summary-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::~SrHwrsrcMode()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-hwrsrc-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrHwrsrcMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{

    yang_name = "sr-shm-state"; yang_parent_name = "resource-summary-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srs_avg_avail.yfilter)
	|| ydk::is_set(srs_curr_mode.yfilter)
	|| ydk::is_set(srs_max_avail.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.yfilter)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.yfilter)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.yfilter)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
        srs_avg_avail.value_namespace = name_space;
        srs_avg_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
        srs_curr_mode.value_namespace = name_space;
        srs_curr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
        srs_max_avail.value_namespace = name_space;
        srs_max_avail.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail.yfilter = yfilter;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode.yfilter = yfilter;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srs-avg-avail" || name == "srs-curr-mode" || name == "srs-max-avail")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::~Vrfs()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    interface_infos(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos>())
	,ip_prefix_briefs(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs>())
	,ip_prefix_details(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails>())
	,nh_info_brief(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief>())
	,nh_info_detail(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail>())
	,nh_info_detail_hardware_egress(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress>())
	,nh_info_detail_hardware_ingress(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress>())
	,summary(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary>())
{
    interface_infos->parent = this;
    ip_prefix_briefs->parent = this;
    ip_prefix_details->parent = this;
    nh_info_brief->parent = this;
    nh_info_detail->parent = this;
    nh_info_detail_hardware_egress->parent = this;
    nh_info_detail_hardware_ingress->parent = this;
    summary->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::~Vrf()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (interface_infos !=  nullptr && interface_infos->has_data())
	|| (ip_prefix_briefs !=  nullptr && ip_prefix_briefs->has_data())
	|| (ip_prefix_details !=  nullptr && ip_prefix_details->has_data())
	|| (nh_info_brief !=  nullptr && nh_info_brief->has_data())
	|| (nh_info_detail !=  nullptr && nh_info_detail->has_data())
	|| (nh_info_detail_hardware_egress !=  nullptr && nh_info_detail_hardware_egress->has_data())
	|| (nh_info_detail_hardware_ingress !=  nullptr && nh_info_detail_hardware_ingress->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (interface_infos !=  nullptr && interface_infos->has_operation())
	|| (ip_prefix_briefs !=  nullptr && ip_prefix_briefs->has_operation())
	|| (ip_prefix_details !=  nullptr && ip_prefix_details->has_operation())
	|| (nh_info_brief !=  nullptr && nh_info_brief->has_operation())
	|| (nh_info_detail !=  nullptr && nh_info_detail->has_operation())
	|| (nh_info_detail_hardware_egress !=  nullptr && nh_info_detail_hardware_egress->has_operation())
	|| (nh_info_detail_hardware_ingress !=  nullptr && nh_info_detail_hardware_ingress->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-infos")
    {
        if(interface_infos == nullptr)
        {
            interface_infos = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos>();
        }
        return interface_infos;
    }

    if(child_yang_name == "ip-prefix-briefs")
    {
        if(ip_prefix_briefs == nullptr)
        {
            ip_prefix_briefs = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs>();
        }
        return ip_prefix_briefs;
    }

    if(child_yang_name == "ip-prefix-details")
    {
        if(ip_prefix_details == nullptr)
        {
            ip_prefix_details = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails>();
        }
        return ip_prefix_details;
    }

    if(child_yang_name == "nh-info-brief")
    {
        if(nh_info_brief == nullptr)
        {
            nh_info_brief = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief>();
        }
        return nh_info_brief;
    }

    if(child_yang_name == "nh-info-detail")
    {
        if(nh_info_detail == nullptr)
        {
            nh_info_detail = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail>();
        }
        return nh_info_detail;
    }

    if(child_yang_name == "nh-info-detail-hardware-egress")
    {
        if(nh_info_detail_hardware_egress == nullptr)
        {
            nh_info_detail_hardware_egress = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress>();
        }
        return nh_info_detail_hardware_egress;
    }

    if(child_yang_name == "nh-info-detail-hardware-ingress")
    {
        if(nh_info_detail_hardware_ingress == nullptr)
        {
            nh_info_detail_hardware_ingress = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress>();
        }
        return nh_info_detail_hardware_ingress;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_infos != nullptr)
    {
        children["interface-infos"] = interface_infos;
    }

    if(ip_prefix_briefs != nullptr)
    {
        children["ip-prefix-briefs"] = ip_prefix_briefs;
    }

    if(ip_prefix_details != nullptr)
    {
        children["ip-prefix-details"] = ip_prefix_details;
    }

    if(nh_info_brief != nullptr)
    {
        children["nh-info-brief"] = nh_info_brief;
    }

    if(nh_info_detail != nullptr)
    {
        children["nh-info-detail"] = nh_info_detail;
    }

    if(nh_info_detail_hardware_egress != nullptr)
    {
        children["nh-info-detail-hardware-egress"] = nh_info_detail_hardware_egress;
    }

    if(nh_info_detail_hardware_ingress != nullptr)
    {
        children["nh-info-detail-hardware-ingress"] = nh_info_detail_hardware_ingress;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-infos" || name == "ip-prefix-briefs" || name == "ip-prefix-details" || name == "nh-info-brief" || name == "nh-info-detail" || name == "nh-info-detail-hardware-egress" || name == "nh-info-detail-hardware-ingress" || name == "summary" || name == "vrf-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfos()
{

    yang_name = "interface-infos"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::~InterfaceInfos()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::has_data() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::has_operation() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-info")
    {
        for(auto const & c : interface_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo>();
        c->parent = this;
        interface_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-info")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::InterfaceInfo()
    :
    link_type{YType::enumeration, "link-type"}
    	,
    interfaces(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "interface-info"; yang_parent_name = "interface-infos"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::~InterfaceInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::has_data() const
{
    return link_type.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info" <<"[link-type='" <<link_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "link-type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::~Interfaces()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    drop_packets_while_fib_switching_flag{YType::boolean, "drop-packets-while-fib-switching-flag"},
    fib_id_extension_flags{YType::uint32, "fib-id-extension-flags"},
    fib_id_extension_pointer{YType::uint32, "fib-id-extension-pointer"},
    fib_id_flags{YType::uint32, "fib-id-flags"},
    fib_id_pointer{YType::uint32, "fib-id-pointer"},
    fib_interface_type{YType::uint32, "fib-interface-type"},
    gre_tunnel_interface_flag{YType::boolean, "gre-tunnel-interface-flag"},
    interface_up_flag{YType::boolean, "interface-up-flag"},
    last_modified_time{YType::uint32, "last-modified-time"},
    last_operation{YType::enumeration, "last-operation"},
    loopback_interface_flag{YType::boolean, "loopback-interface-flag"},
    null_interface_flag{YType::boolean, "null-interface-flag"},
    number_of_dependent_next_hop_information{YType::uint32, "number-of-dependent-next-hop-information"},
    number_of_input_bytes{YType::uint64, "number-of-input-bytes"},
    number_of_input_packets{YType::uint64, "number-of-input-packets"},
    number_of_output_bytes{YType::uint64, "number-of-output-bytes"},
    number_of_output_packets{YType::uint64, "number-of-output-packets"},
    p2p_interface_flag{YType::boolean, "p2p-interface-flag"},
    per_interface{YType::str, "per-interface"},
    per_packet_load_balancing_flag{YType::boolean, "per-packet-load-balancing-flag"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    primary_ipv6_address{YType::str, "primary-ipv6-address"},
    protocol_enabled{YType::boolean, "protocol-enabled"},
    punt_packets_from_fib_switching_flag{YType::boolean, "punt-packets-from-fib-switching-flag"},
    punt_packets_from_linecard_flag{YType::boolean, "punt-packets-from-linecard-flag"},
    referance_count_for_protocol{YType::uint32, "referance-count-for-protocol"},
    reference_count{YType::uint16, "reference-count"},
    tunnel_interface_flag{YType::boolean, "tunnel-interface-flag"},
    vrf_local_cef_information_pointer{YType::uint32, "vrf-local-cef-information-pointer"}
    	,
    detail_fib_int_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation>())
	,si_internal(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal>())
{
    detail_fib_int_information->parent = this;
    si_internal->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::~Interface()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| drop_packets_while_fib_switching_flag.is_set
	|| fib_id_extension_flags.is_set
	|| fib_id_extension_pointer.is_set
	|| fib_id_flags.is_set
	|| fib_id_pointer.is_set
	|| fib_interface_type.is_set
	|| gre_tunnel_interface_flag.is_set
	|| interface_up_flag.is_set
	|| last_modified_time.is_set
	|| last_operation.is_set
	|| loopback_interface_flag.is_set
	|| null_interface_flag.is_set
	|| number_of_dependent_next_hop_information.is_set
	|| number_of_input_bytes.is_set
	|| number_of_input_packets.is_set
	|| number_of_output_bytes.is_set
	|| number_of_output_packets.is_set
	|| p2p_interface_flag.is_set
	|| per_interface.is_set
	|| per_packet_load_balancing_flag.is_set
	|| primary_ipv4_address.is_set
	|| primary_ipv6_address.is_set
	|| protocol_enabled.is_set
	|| punt_packets_from_fib_switching_flag.is_set
	|| punt_packets_from_linecard_flag.is_set
	|| referance_count_for_protocol.is_set
	|| reference_count.is_set
	|| tunnel_interface_flag.is_set
	|| vrf_local_cef_information_pointer.is_set
	|| (detail_fib_int_information !=  nullptr && detail_fib_int_information->has_data())
	|| (si_internal !=  nullptr && si_internal->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(drop_packets_while_fib_switching_flag.yfilter)
	|| ydk::is_set(fib_id_extension_flags.yfilter)
	|| ydk::is_set(fib_id_extension_pointer.yfilter)
	|| ydk::is_set(fib_id_flags.yfilter)
	|| ydk::is_set(fib_id_pointer.yfilter)
	|| ydk::is_set(fib_interface_type.yfilter)
	|| ydk::is_set(gre_tunnel_interface_flag.yfilter)
	|| ydk::is_set(interface_up_flag.yfilter)
	|| ydk::is_set(last_modified_time.yfilter)
	|| ydk::is_set(last_operation.yfilter)
	|| ydk::is_set(loopback_interface_flag.yfilter)
	|| ydk::is_set(null_interface_flag.yfilter)
	|| ydk::is_set(number_of_dependent_next_hop_information.yfilter)
	|| ydk::is_set(number_of_input_bytes.yfilter)
	|| ydk::is_set(number_of_input_packets.yfilter)
	|| ydk::is_set(number_of_output_bytes.yfilter)
	|| ydk::is_set(number_of_output_packets.yfilter)
	|| ydk::is_set(p2p_interface_flag.yfilter)
	|| ydk::is_set(per_interface.yfilter)
	|| ydk::is_set(per_packet_load_balancing_flag.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| ydk::is_set(primary_ipv6_address.yfilter)
	|| ydk::is_set(protocol_enabled.yfilter)
	|| ydk::is_set(punt_packets_from_fib_switching_flag.yfilter)
	|| ydk::is_set(punt_packets_from_linecard_flag.yfilter)
	|| ydk::is_set(referance_count_for_protocol.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| ydk::is_set(tunnel_interface_flag.yfilter)
	|| ydk::is_set(vrf_local_cef_information_pointer.yfilter)
	|| (detail_fib_int_information !=  nullptr && detail_fib_int_information->has_operation())
	|| (si_internal !=  nullptr && si_internal->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (drop_packets_while_fib_switching_flag.is_set || is_set(drop_packets_while_fib_switching_flag.yfilter)) leaf_name_data.push_back(drop_packets_while_fib_switching_flag.get_name_leafdata());
    if (fib_id_extension_flags.is_set || is_set(fib_id_extension_flags.yfilter)) leaf_name_data.push_back(fib_id_extension_flags.get_name_leafdata());
    if (fib_id_extension_pointer.is_set || is_set(fib_id_extension_pointer.yfilter)) leaf_name_data.push_back(fib_id_extension_pointer.get_name_leafdata());
    if (fib_id_flags.is_set || is_set(fib_id_flags.yfilter)) leaf_name_data.push_back(fib_id_flags.get_name_leafdata());
    if (fib_id_pointer.is_set || is_set(fib_id_pointer.yfilter)) leaf_name_data.push_back(fib_id_pointer.get_name_leafdata());
    if (fib_interface_type.is_set || is_set(fib_interface_type.yfilter)) leaf_name_data.push_back(fib_interface_type.get_name_leafdata());
    if (gre_tunnel_interface_flag.is_set || is_set(gre_tunnel_interface_flag.yfilter)) leaf_name_data.push_back(gre_tunnel_interface_flag.get_name_leafdata());
    if (interface_up_flag.is_set || is_set(interface_up_flag.yfilter)) leaf_name_data.push_back(interface_up_flag.get_name_leafdata());
    if (last_modified_time.is_set || is_set(last_modified_time.yfilter)) leaf_name_data.push_back(last_modified_time.get_name_leafdata());
    if (last_operation.is_set || is_set(last_operation.yfilter)) leaf_name_data.push_back(last_operation.get_name_leafdata());
    if (loopback_interface_flag.is_set || is_set(loopback_interface_flag.yfilter)) leaf_name_data.push_back(loopback_interface_flag.get_name_leafdata());
    if (null_interface_flag.is_set || is_set(null_interface_flag.yfilter)) leaf_name_data.push_back(null_interface_flag.get_name_leafdata());
    if (number_of_dependent_next_hop_information.is_set || is_set(number_of_dependent_next_hop_information.yfilter)) leaf_name_data.push_back(number_of_dependent_next_hop_information.get_name_leafdata());
    if (number_of_input_bytes.is_set || is_set(number_of_input_bytes.yfilter)) leaf_name_data.push_back(number_of_input_bytes.get_name_leafdata());
    if (number_of_input_packets.is_set || is_set(number_of_input_packets.yfilter)) leaf_name_data.push_back(number_of_input_packets.get_name_leafdata());
    if (number_of_output_bytes.is_set || is_set(number_of_output_bytes.yfilter)) leaf_name_data.push_back(number_of_output_bytes.get_name_leafdata());
    if (number_of_output_packets.is_set || is_set(number_of_output_packets.yfilter)) leaf_name_data.push_back(number_of_output_packets.get_name_leafdata());
    if (p2p_interface_flag.is_set || is_set(p2p_interface_flag.yfilter)) leaf_name_data.push_back(p2p_interface_flag.get_name_leafdata());
    if (per_interface.is_set || is_set(per_interface.yfilter)) leaf_name_data.push_back(per_interface.get_name_leafdata());
    if (per_packet_load_balancing_flag.is_set || is_set(per_packet_load_balancing_flag.yfilter)) leaf_name_data.push_back(per_packet_load_balancing_flag.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (primary_ipv6_address.is_set || is_set(primary_ipv6_address.yfilter)) leaf_name_data.push_back(primary_ipv6_address.get_name_leafdata());
    if (protocol_enabled.is_set || is_set(protocol_enabled.yfilter)) leaf_name_data.push_back(protocol_enabled.get_name_leafdata());
    if (punt_packets_from_fib_switching_flag.is_set || is_set(punt_packets_from_fib_switching_flag.yfilter)) leaf_name_data.push_back(punt_packets_from_fib_switching_flag.get_name_leafdata());
    if (punt_packets_from_linecard_flag.is_set || is_set(punt_packets_from_linecard_flag.yfilter)) leaf_name_data.push_back(punt_packets_from_linecard_flag.get_name_leafdata());
    if (referance_count_for_protocol.is_set || is_set(referance_count_for_protocol.yfilter)) leaf_name_data.push_back(referance_count_for_protocol.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());
    if (tunnel_interface_flag.is_set || is_set(tunnel_interface_flag.yfilter)) leaf_name_data.push_back(tunnel_interface_flag.get_name_leafdata());
    if (vrf_local_cef_information_pointer.is_set || is_set(vrf_local_cef_information_pointer.yfilter)) leaf_name_data.push_back(vrf_local_cef_information_pointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-fib-int-information")
    {
        if(detail_fib_int_information == nullptr)
        {
            detail_fib_int_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation>();
        }
        return detail_fib_int_information;
    }

    if(child_yang_name == "si-internal")
    {
        if(si_internal == nullptr)
        {
            si_internal = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal>();
        }
        return si_internal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_fib_int_information != nullptr)
    {
        children["detail-fib-int-information"] = detail_fib_int_information;
    }

    if(si_internal != nullptr)
    {
        children["si-internal"] = si_internal;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-packets-while-fib-switching-flag")
    {
        drop_packets_while_fib_switching_flag = value;
        drop_packets_while_fib_switching_flag.value_namespace = name_space;
        drop_packets_while_fib_switching_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-id-extension-flags")
    {
        fib_id_extension_flags = value;
        fib_id_extension_flags.value_namespace = name_space;
        fib_id_extension_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-id-extension-pointer")
    {
        fib_id_extension_pointer = value;
        fib_id_extension_pointer.value_namespace = name_space;
        fib_id_extension_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-id-flags")
    {
        fib_id_flags = value;
        fib_id_flags.value_namespace = name_space;
        fib_id_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-id-pointer")
    {
        fib_id_pointer = value;
        fib_id_pointer.value_namespace = name_space;
        fib_id_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-interface-type")
    {
        fib_interface_type = value;
        fib_interface_type.value_namespace = name_space;
        fib_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-tunnel-interface-flag")
    {
        gre_tunnel_interface_flag = value;
        gre_tunnel_interface_flag.value_namespace = name_space;
        gre_tunnel_interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag = value;
        interface_up_flag.value_namespace = name_space;
        interface_up_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time = value;
        last_modified_time.value_namespace = name_space;
        last_modified_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-operation")
    {
        last_operation = value;
        last_operation.value_namespace = name_space;
        last_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-interface-flag")
    {
        loopback_interface_flag = value;
        loopback_interface_flag.value_namespace = name_space;
        loopback_interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-interface-flag")
    {
        null_interface_flag = value;
        null_interface_flag.value_namespace = name_space;
        null_interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-dependent-next-hop-information")
    {
        number_of_dependent_next_hop_information = value;
        number_of_dependent_next_hop_information.value_namespace = name_space;
        number_of_dependent_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-input-bytes")
    {
        number_of_input_bytes = value;
        number_of_input_bytes.value_namespace = name_space;
        number_of_input_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-input-packets")
    {
        number_of_input_packets = value;
        number_of_input_packets.value_namespace = name_space;
        number_of_input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-output-bytes")
    {
        number_of_output_bytes = value;
        number_of_output_bytes.value_namespace = name_space;
        number_of_output_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-output-packets")
    {
        number_of_output_packets = value;
        number_of_output_packets.value_namespace = name_space;
        number_of_output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-interface-flag")
    {
        p2p_interface_flag = value;
        p2p_interface_flag.value_namespace = name_space;
        p2p_interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-interface")
    {
        per_interface = value;
        per_interface.value_namespace = name_space;
        per_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-packet-load-balancing-flag")
    {
        per_packet_load_balancing_flag = value;
        per_packet_load_balancing_flag.value_namespace = name_space;
        per_packet_load_balancing_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv6-address")
    {
        primary_ipv6_address = value;
        primary_ipv6_address.value_namespace = name_space;
        primary_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-enabled")
    {
        protocol_enabled = value;
        protocol_enabled.value_namespace = name_space;
        protocol_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-packets-from-fib-switching-flag")
    {
        punt_packets_from_fib_switching_flag = value;
        punt_packets_from_fib_switching_flag.value_namespace = name_space;
        punt_packets_from_fib_switching_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-packets-from-linecard-flag")
    {
        punt_packets_from_linecard_flag = value;
        punt_packets_from_linecard_flag.value_namespace = name_space;
        punt_packets_from_linecard_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referance-count-for-protocol")
    {
        referance_count_for_protocol = value;
        referance_count_for_protocol.value_namespace = name_space;
        referance_count_for_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-flag")
    {
        tunnel_interface_flag = value;
        tunnel_interface_flag.value_namespace = name_space;
        tunnel_interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-local-cef-information-pointer")
    {
        vrf_local_cef_information_pointer = value;
        vrf_local_cef_information_pointer.value_namespace = name_space;
        vrf_local_cef_information_pointer.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "drop-packets-while-fib-switching-flag")
    {
        drop_packets_while_fib_switching_flag.yfilter = yfilter;
    }
    if(value_path == "fib-id-extension-flags")
    {
        fib_id_extension_flags.yfilter = yfilter;
    }
    if(value_path == "fib-id-extension-pointer")
    {
        fib_id_extension_pointer.yfilter = yfilter;
    }
    if(value_path == "fib-id-flags")
    {
        fib_id_flags.yfilter = yfilter;
    }
    if(value_path == "fib-id-pointer")
    {
        fib_id_pointer.yfilter = yfilter;
    }
    if(value_path == "fib-interface-type")
    {
        fib_interface_type.yfilter = yfilter;
    }
    if(value_path == "gre-tunnel-interface-flag")
    {
        gre_tunnel_interface_flag.yfilter = yfilter;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag.yfilter = yfilter;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time.yfilter = yfilter;
    }
    if(value_path == "last-operation")
    {
        last_operation.yfilter = yfilter;
    }
    if(value_path == "loopback-interface-flag")
    {
        loopback_interface_flag.yfilter = yfilter;
    }
    if(value_path == "null-interface-flag")
    {
        null_interface_flag.yfilter = yfilter;
    }
    if(value_path == "number-of-dependent-next-hop-information")
    {
        number_of_dependent_next_hop_information.yfilter = yfilter;
    }
    if(value_path == "number-of-input-bytes")
    {
        number_of_input_bytes.yfilter = yfilter;
    }
    if(value_path == "number-of-input-packets")
    {
        number_of_input_packets.yfilter = yfilter;
    }
    if(value_path == "number-of-output-bytes")
    {
        number_of_output_bytes.yfilter = yfilter;
    }
    if(value_path == "number-of-output-packets")
    {
        number_of_output_packets.yfilter = yfilter;
    }
    if(value_path == "p2p-interface-flag")
    {
        p2p_interface_flag.yfilter = yfilter;
    }
    if(value_path == "per-interface")
    {
        per_interface.yfilter = yfilter;
    }
    if(value_path == "per-packet-load-balancing-flag")
    {
        per_packet_load_balancing_flag.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "primary-ipv6-address")
    {
        primary_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "protocol-enabled")
    {
        protocol_enabled.yfilter = yfilter;
    }
    if(value_path == "punt-packets-from-fib-switching-flag")
    {
        punt_packets_from_fib_switching_flag.yfilter = yfilter;
    }
    if(value_path == "punt-packets-from-linecard-flag")
    {
        punt_packets_from_linecard_flag.yfilter = yfilter;
    }
    if(value_path == "referance-count-for-protocol")
    {
        referance_count_for_protocol.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-flag")
    {
        tunnel_interface_flag.yfilter = yfilter;
    }
    if(value_path == "vrf-local-cef-information-pointer")
    {
        vrf_local_cef_information_pointer.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-fib-int-information" || name == "si-internal" || name == "interface-name" || name == "drop-packets-while-fib-switching-flag" || name == "fib-id-extension-flags" || name == "fib-id-extension-pointer" || name == "fib-id-flags" || name == "fib-id-pointer" || name == "fib-interface-type" || name == "gre-tunnel-interface-flag" || name == "interface-up-flag" || name == "last-modified-time" || name == "last-operation" || name == "loopback-interface-flag" || name == "null-interface-flag" || name == "number-of-dependent-next-hop-information" || name == "number-of-input-bytes" || name == "number-of-input-packets" || name == "number-of-output-bytes" || name == "number-of-output-packets" || name == "p2p-interface-flag" || name == "per-interface" || name == "per-packet-load-balancing-flag" || name == "primary-ipv4-address" || name == "primary-ipv6-address" || name == "protocol-enabled" || name == "punt-packets-from-fib-switching-flag" || name == "punt-packets-from-linecard-flag" || name == "referance-count-for-protocol" || name == "reference-count" || name == "tunnel-interface-flag" || name == "vrf-local-cef-information-pointer")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::DetailFibIntInformation()
    :
    bgp_pa_input_configured_flag{YType::boolean, "bgp-pa-input-configured-flag"},
    bgp_pa_output_configured_flag{YType::boolean, "bgp-pa-output-configured-flag"},
    default_route_with_rpf{YType::boolean, "default-route-with-rpf"},
    destination_bgp_pa_input_configured_flag{YType::boolean, "destination-bgp-pa-input-configured-flag"},
    destination_bgp_pa_output_configured_flag{YType::boolean, "destination-bgp-pa-output-configured-flag"},
    forwarding_flag{YType::boolean, "forwarding-flag"},
    icmp_flag{YType::uint32, "icmp-flag"},
    interface_mtu{YType::uint16, "interface-mtu"},
    multi_label_drop_flag{YType::boolean, "multi-label-drop-flag"},
    rpf_configured_flag{YType::boolean, "rpf-configured-flag"},
    rpf_mode{YType::enumeration, "rpf-mode"},
    self_ping_with_rpf{YType::boolean, "self-ping-with-rpf"},
    source_bgp_pa_input_configured_flag{YType::boolean, "source-bgp-pa-input-configured-flag"},
    source_bgp_pa_output_configured_flag{YType::boolean, "source-bgp-pa-output-configured-flag"}
{

    yang_name = "detail-fib-int-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::~DetailFibIntInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::has_data() const
{
    return bgp_pa_input_configured_flag.is_set
	|| bgp_pa_output_configured_flag.is_set
	|| default_route_with_rpf.is_set
	|| destination_bgp_pa_input_configured_flag.is_set
	|| destination_bgp_pa_output_configured_flag.is_set
	|| forwarding_flag.is_set
	|| icmp_flag.is_set
	|| interface_mtu.is_set
	|| multi_label_drop_flag.is_set
	|| rpf_configured_flag.is_set
	|| rpf_mode.is_set
	|| self_ping_with_rpf.is_set
	|| source_bgp_pa_input_configured_flag.is_set
	|| source_bgp_pa_output_configured_flag.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_pa_input_configured_flag.yfilter)
	|| ydk::is_set(bgp_pa_output_configured_flag.yfilter)
	|| ydk::is_set(default_route_with_rpf.yfilter)
	|| ydk::is_set(destination_bgp_pa_input_configured_flag.yfilter)
	|| ydk::is_set(destination_bgp_pa_output_configured_flag.yfilter)
	|| ydk::is_set(forwarding_flag.yfilter)
	|| ydk::is_set(icmp_flag.yfilter)
	|| ydk::is_set(interface_mtu.yfilter)
	|| ydk::is_set(multi_label_drop_flag.yfilter)
	|| ydk::is_set(rpf_configured_flag.yfilter)
	|| ydk::is_set(rpf_mode.yfilter)
	|| ydk::is_set(self_ping_with_rpf.yfilter)
	|| ydk::is_set(source_bgp_pa_input_configured_flag.yfilter)
	|| ydk::is_set(source_bgp_pa_output_configured_flag.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-fib-int-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_pa_input_configured_flag.is_set || is_set(bgp_pa_input_configured_flag.yfilter)) leaf_name_data.push_back(bgp_pa_input_configured_flag.get_name_leafdata());
    if (bgp_pa_output_configured_flag.is_set || is_set(bgp_pa_output_configured_flag.yfilter)) leaf_name_data.push_back(bgp_pa_output_configured_flag.get_name_leafdata());
    if (default_route_with_rpf.is_set || is_set(default_route_with_rpf.yfilter)) leaf_name_data.push_back(default_route_with_rpf.get_name_leafdata());
    if (destination_bgp_pa_input_configured_flag.is_set || is_set(destination_bgp_pa_input_configured_flag.yfilter)) leaf_name_data.push_back(destination_bgp_pa_input_configured_flag.get_name_leafdata());
    if (destination_bgp_pa_output_configured_flag.is_set || is_set(destination_bgp_pa_output_configured_flag.yfilter)) leaf_name_data.push_back(destination_bgp_pa_output_configured_flag.get_name_leafdata());
    if (forwarding_flag.is_set || is_set(forwarding_flag.yfilter)) leaf_name_data.push_back(forwarding_flag.get_name_leafdata());
    if (icmp_flag.is_set || is_set(icmp_flag.yfilter)) leaf_name_data.push_back(icmp_flag.get_name_leafdata());
    if (interface_mtu.is_set || is_set(interface_mtu.yfilter)) leaf_name_data.push_back(interface_mtu.get_name_leafdata());
    if (multi_label_drop_flag.is_set || is_set(multi_label_drop_flag.yfilter)) leaf_name_data.push_back(multi_label_drop_flag.get_name_leafdata());
    if (rpf_configured_flag.is_set || is_set(rpf_configured_flag.yfilter)) leaf_name_data.push_back(rpf_configured_flag.get_name_leafdata());
    if (rpf_mode.is_set || is_set(rpf_mode.yfilter)) leaf_name_data.push_back(rpf_mode.get_name_leafdata());
    if (self_ping_with_rpf.is_set || is_set(self_ping_with_rpf.yfilter)) leaf_name_data.push_back(self_ping_with_rpf.get_name_leafdata());
    if (source_bgp_pa_input_configured_flag.is_set || is_set(source_bgp_pa_input_configured_flag.yfilter)) leaf_name_data.push_back(source_bgp_pa_input_configured_flag.get_name_leafdata());
    if (source_bgp_pa_output_configured_flag.is_set || is_set(source_bgp_pa_output_configured_flag.yfilter)) leaf_name_data.push_back(source_bgp_pa_output_configured_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-pa-input-configured-flag")
    {
        bgp_pa_input_configured_flag = value;
        bgp_pa_input_configured_flag.value_namespace = name_space;
        bgp_pa_input_configured_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-pa-output-configured-flag")
    {
        bgp_pa_output_configured_flag = value;
        bgp_pa_output_configured_flag.value_namespace = name_space;
        bgp_pa_output_configured_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-route-with-rpf")
    {
        default_route_with_rpf = value;
        default_route_with_rpf.value_namespace = name_space;
        default_route_with_rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-bgp-pa-input-configured-flag")
    {
        destination_bgp_pa_input_configured_flag = value;
        destination_bgp_pa_input_configured_flag.value_namespace = name_space;
        destination_bgp_pa_input_configured_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-bgp-pa-output-configured-flag")
    {
        destination_bgp_pa_output_configured_flag = value;
        destination_bgp_pa_output_configured_flag.value_namespace = name_space;
        destination_bgp_pa_output_configured_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-flag")
    {
        forwarding_flag = value;
        forwarding_flag.value_namespace = name_space;
        forwarding_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-flag")
    {
        icmp_flag = value;
        icmp_flag.value_namespace = name_space;
        icmp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mtu")
    {
        interface_mtu = value;
        interface_mtu.value_namespace = name_space;
        interface_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-label-drop-flag")
    {
        multi_label_drop_flag = value;
        multi_label_drop_flag.value_namespace = name_space;
        multi_label_drop_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-configured-flag")
    {
        rpf_configured_flag = value;
        rpf_configured_flag.value_namespace = name_space;
        rpf_configured_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-mode")
    {
        rpf_mode = value;
        rpf_mode.value_namespace = name_space;
        rpf_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-ping-with-rpf")
    {
        self_ping_with_rpf = value;
        self_ping_with_rpf.value_namespace = name_space;
        self_ping_with_rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-bgp-pa-input-configured-flag")
    {
        source_bgp_pa_input_configured_flag = value;
        source_bgp_pa_input_configured_flag.value_namespace = name_space;
        source_bgp_pa_input_configured_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-bgp-pa-output-configured-flag")
    {
        source_bgp_pa_output_configured_flag = value;
        source_bgp_pa_output_configured_flag.value_namespace = name_space;
        source_bgp_pa_output_configured_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-pa-input-configured-flag")
    {
        bgp_pa_input_configured_flag.yfilter = yfilter;
    }
    if(value_path == "bgp-pa-output-configured-flag")
    {
        bgp_pa_output_configured_flag.yfilter = yfilter;
    }
    if(value_path == "default-route-with-rpf")
    {
        default_route_with_rpf.yfilter = yfilter;
    }
    if(value_path == "destination-bgp-pa-input-configured-flag")
    {
        destination_bgp_pa_input_configured_flag.yfilter = yfilter;
    }
    if(value_path == "destination-bgp-pa-output-configured-flag")
    {
        destination_bgp_pa_output_configured_flag.yfilter = yfilter;
    }
    if(value_path == "forwarding-flag")
    {
        forwarding_flag.yfilter = yfilter;
    }
    if(value_path == "icmp-flag")
    {
        icmp_flag.yfilter = yfilter;
    }
    if(value_path == "interface-mtu")
    {
        interface_mtu.yfilter = yfilter;
    }
    if(value_path == "multi-label-drop-flag")
    {
        multi_label_drop_flag.yfilter = yfilter;
    }
    if(value_path == "rpf-configured-flag")
    {
        rpf_configured_flag.yfilter = yfilter;
    }
    if(value_path == "rpf-mode")
    {
        rpf_mode.yfilter = yfilter;
    }
    if(value_path == "self-ping-with-rpf")
    {
        self_ping_with_rpf.yfilter = yfilter;
    }
    if(value_path == "source-bgp-pa-input-configured-flag")
    {
        source_bgp_pa_input_configured_flag.yfilter = yfilter;
    }
    if(value_path == "source-bgp-pa-output-configured-flag")
    {
        source_bgp_pa_output_configured_flag.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-pa-input-configured-flag" || name == "bgp-pa-output-configured-flag" || name == "default-route-with-rpf" || name == "destination-bgp-pa-input-configured-flag" || name == "destination-bgp-pa-output-configured-flag" || name == "forwarding-flag" || name == "icmp-flag" || name == "interface-mtu" || name == "multi-label-drop-flag" || name == "rpf-configured-flag" || name == "rpf-mode" || name == "self-ping-with-rpf" || name == "source-bgp-pa-input-configured-flag" || name == "source-bgp-pa-output-configured-flag")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::SiInternal()
    :
    fib_idb_hist(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist>())
	,fib_srte_head_hist(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist>())
{
    fib_idb_hist->parent = this;
    fib_srte_head_hist->parent = this;

    yang_name = "si-internal"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::~SiInternal()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::has_data() const
{
    return (fib_idb_hist !=  nullptr && fib_idb_hist->has_data())
	|| (fib_srte_head_hist !=  nullptr && fib_srte_head_hist->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::has_operation() const
{
    return is_set(yfilter)
	|| (fib_idb_hist !=  nullptr && fib_idb_hist->has_operation())
	|| (fib_srte_head_hist !=  nullptr && fib_srte_head_hist->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-idb-hist")
    {
        if(fib_idb_hist == nullptr)
        {
            fib_idb_hist = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist>();
        }
        return fib_idb_hist;
    }

    if(child_yang_name == "fib-srte-head-hist")
    {
        if(fib_srte_head_hist == nullptr)
        {
            fib_srte_head_hist = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist>();
        }
        return fib_srte_head_hist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_idb_hist != nullptr)
    {
        children["fib-idb-hist"] = fib_idb_hist;
    }

    if(fib_srte_head_hist != nullptr)
    {
        children["fib-srte-head-hist"] = fib_srte_head_hist;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-idb-hist" || name == "fib-srte-head-hist")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::FibIdbHist()
    :
    evt_class_name{YType::str, "evt-class-name"}
{

    yang_name = "fib-idb-hist"; yang_parent_name = "si-internal"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::~FibIdbHist()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::has_data() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_data())
            return true;
    }
    return evt_class_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::has_operation() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evt_class_name.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-idb-hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_class_name.is_set || is_set(evt_class_name.yfilter)) leaf_name_data.push_back(evt_class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evt-entry")
    {
        for(auto const & c : evt_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry>();
        c->parent = this;
        evt_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evt_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evt-class-name")
    {
        evt_class_name = value;
        evt_class_name.value_namespace = name_space;
        evt_class_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evt-class-name")
    {
        evt_class_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evt-entry" || name == "evt-class-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtEntry()
    :
    evt_many{YType::boolean, "evt-many"},
    evt_name{YType::str, "evt-name"},
    evt_sticky{YType::boolean, "evt-sticky"},
    evt_timestamp{YType::str, "evt-timestamp"},
    evt_type{YType::uint8, "evt-type"}
{

    yang_name = "evt-entry"; yang_parent_name = "fib-idb-hist"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::~EvtEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::has_data() const
{
    for (std::size_t index=0; index<evt_data.size(); index++)
    {
        if(evt_data[index]->has_data())
            return true;
    }
    return evt_many.is_set
	|| evt_name.is_set
	|| evt_sticky.is_set
	|| evt_timestamp.is_set
	|| evt_type.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::has_operation() const
{
    for (std::size_t index=0; index<evt_data.size(); index++)
    {
        if(evt_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evt_many.yfilter)
	|| ydk::is_set(evt_name.yfilter)
	|| ydk::is_set(evt_sticky.yfilter)
	|| ydk::is_set(evt_timestamp.yfilter)
	|| ydk::is_set(evt_type.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evt-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_many.is_set || is_set(evt_many.yfilter)) leaf_name_data.push_back(evt_many.get_name_leafdata());
    if (evt_name.is_set || is_set(evt_name.yfilter)) leaf_name_data.push_back(evt_name.get_name_leafdata());
    if (evt_sticky.is_set || is_set(evt_sticky.yfilter)) leaf_name_data.push_back(evt_sticky.get_name_leafdata());
    if (evt_timestamp.is_set || is_set(evt_timestamp.yfilter)) leaf_name_data.push_back(evt_timestamp.get_name_leafdata());
    if (evt_type.is_set || is_set(evt_type.yfilter)) leaf_name_data.push_back(evt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evt-data")
    {
        for(auto const & c : evt_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData>();
        c->parent = this;
        evt_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evt_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evt-many")
    {
        evt_many = value;
        evt_many.value_namespace = name_space;
        evt_many.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-name")
    {
        evt_name = value;
        evt_name.value_namespace = name_space;
        evt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-sticky")
    {
        evt_sticky = value;
        evt_sticky.value_namespace = name_space;
        evt_sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-timestamp")
    {
        evt_timestamp = value;
        evt_timestamp.value_namespace = name_space;
        evt_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-type")
    {
        evt_type = value;
        evt_type.value_namespace = name_space;
        evt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evt-many")
    {
        evt_many.yfilter = yfilter;
    }
    if(value_path == "evt-name")
    {
        evt_name.yfilter = yfilter;
    }
    if(value_path == "evt-sticky")
    {
        evt_sticky.yfilter = yfilter;
    }
    if(value_path == "evt-timestamp")
    {
        evt_timestamp.yfilter = yfilter;
    }
    if(value_path == "evt-type")
    {
        evt_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evt-data" || name == "evt-many" || name == "evt-name" || name == "evt-sticky" || name == "evt-timestamp" || name == "evt-type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::EvtData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "evt-data"; yang_parent_name = "evt-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::~EvtData()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evt-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::FibSrteHeadHist()
    :
    evt_class_name{YType::str, "evt-class-name"}
{

    yang_name = "fib-srte-head-hist"; yang_parent_name = "si-internal"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::~FibSrteHeadHist()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::has_data() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_data())
            return true;
    }
    return evt_class_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::has_operation() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evt_class_name.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-srte-head-hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_class_name.is_set || is_set(evt_class_name.yfilter)) leaf_name_data.push_back(evt_class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evt-entry")
    {
        for(auto const & c : evt_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry>();
        c->parent = this;
        evt_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evt_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evt-class-name")
    {
        evt_class_name = value;
        evt_class_name.value_namespace = name_space;
        evt_class_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evt-class-name")
    {
        evt_class_name.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evt-entry" || name == "evt-class-name")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtEntry()
    :
    evt_many{YType::boolean, "evt-many"},
    evt_name{YType::str, "evt-name"},
    evt_sticky{YType::boolean, "evt-sticky"},
    evt_timestamp{YType::str, "evt-timestamp"},
    evt_type{YType::uint8, "evt-type"}
{

    yang_name = "evt-entry"; yang_parent_name = "fib-srte-head-hist"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::~EvtEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::has_data() const
{
    for (std::size_t index=0; index<evt_data.size(); index++)
    {
        if(evt_data[index]->has_data())
            return true;
    }
    return evt_many.is_set
	|| evt_name.is_set
	|| evt_sticky.is_set
	|| evt_timestamp.is_set
	|| evt_type.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::has_operation() const
{
    for (std::size_t index=0; index<evt_data.size(); index++)
    {
        if(evt_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evt_many.yfilter)
	|| ydk::is_set(evt_name.yfilter)
	|| ydk::is_set(evt_sticky.yfilter)
	|| ydk::is_set(evt_timestamp.yfilter)
	|| ydk::is_set(evt_type.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evt-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_many.is_set || is_set(evt_many.yfilter)) leaf_name_data.push_back(evt_many.get_name_leafdata());
    if (evt_name.is_set || is_set(evt_name.yfilter)) leaf_name_data.push_back(evt_name.get_name_leafdata());
    if (evt_sticky.is_set || is_set(evt_sticky.yfilter)) leaf_name_data.push_back(evt_sticky.get_name_leafdata());
    if (evt_timestamp.is_set || is_set(evt_timestamp.yfilter)) leaf_name_data.push_back(evt_timestamp.get_name_leafdata());
    if (evt_type.is_set || is_set(evt_type.yfilter)) leaf_name_data.push_back(evt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evt-data")
    {
        for(auto const & c : evt_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData>();
        c->parent = this;
        evt_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evt_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evt-many")
    {
        evt_many = value;
        evt_many.value_namespace = name_space;
        evt_many.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-name")
    {
        evt_name = value;
        evt_name.value_namespace = name_space;
        evt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-sticky")
    {
        evt_sticky = value;
        evt_sticky.value_namespace = name_space;
        evt_sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-timestamp")
    {
        evt_timestamp = value;
        evt_timestamp.value_namespace = name_space;
        evt_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-type")
    {
        evt_type = value;
        evt_type.value_namespace = name_space;
        evt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evt-many")
    {
        evt_many.yfilter = yfilter;
    }
    if(value_path == "evt-name")
    {
        evt_name.yfilter = yfilter;
    }
    if(value_path == "evt-sticky")
    {
        evt_sticky.yfilter = yfilter;
    }
    if(value_path == "evt-timestamp")
    {
        evt_timestamp.yfilter = yfilter;
    }
    if(value_path == "evt-type")
    {
        evt_type.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evt-data" || name == "evt-many" || name == "evt-name" || name == "evt-sticky" || name == "evt-timestamp" || name == "evt-type")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::EvtData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "evt-data"; yang_parent_name = "evt-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::~EvtData()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evt-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBriefs()
{

    yang_name = "ip-prefix-briefs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::~IpPrefixBriefs()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::has_data() const
{
    for (std::size_t index=0; index<ip_prefix_brief.size(); index++)
    {
        if(ip_prefix_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::has_operation() const
{
    for (std::size_t index=0; index<ip_prefix_brief.size(); index++)
    {
        if(ip_prefix_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-prefix-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-prefix-brief")
    {
        for(auto const & c : ip_prefix_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief>();
        c->parent = this;
        ip_prefix_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_prefix_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix-brief")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::IpPrefixBrief()
    :
    broadcast_forward_flag{YType::boolean, "broadcast-forward-flag"},
    broadcast_recive_flag{YType::boolean, "broadcast-recive-flag"},
    dummy_real_zero_route{YType::boolean, "dummy-real-zero-route"},
    exact_path_gre_interface_handle{YType::uint32, "exact-path-gre-interface-handle"},
    exact_path_interface_handle{YType::uint32, "exact-path-interface-handle"},
    exact_route_gre_phys_ifh_avail{YType::boolean, "exact-route-gre-phys-ifh-avail"},
    exact_route_result{YType::boolean, "exact-route-result"},
    external_switch_triggered{YType::boolean, "external-switch-triggered"},
    fib_route_download_priority{YType::uint32, "fib-route-download-priority"},
    flags_external_ldi{YType::uint32, "flags-external-ldi"},
    l2_subscriber_ip_protocol{YType::uint32, "l2-subscriber-ip-protocol"},
    l2_subscriber_route{YType::boolean, "l2-subscriber-route"},
    l2_subscriber_xconnect_id{YType::uint32, "l2-subscriber-xconnect-id"},
    l2tpv3_cookie_length_bits{YType::uint32, "l2tpv3-cookie-length-bits"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_lw_flag{YType::uint32, "ldi-lw-flag"},
    lspa_flags{YType::uint32, "lspa-flags"},
    number_of_referances_to_ldi{YType::uint32, "number-of-referances-to-ldi"},
    number_of_referances_to_path_list{YType::uint32, "number-of-referances-to-path-list"},
    packet_should_recieve{YType::boolean, "packet-should-recieve"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_source{YType::uint32, "path-list-source"},
    platform_hardware{YType::str, "platform-hardware"},
    pointer_external_ldi{YType::uint32, "pointer-external-ldi"},
    prefix{YType::str, "prefix"},
    prefix_connected{YType::boolean, "prefix-connected"},
    prefix_for_adjancency{YType::boolean, "prefix-for-adjancency"},
    prefix_for_pic_next_hop{YType::boolean, "prefix-for-pic-next-hop"},
    prefix_is_static_or_connected{YType::boolean, "prefix-is-static-or-connected"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_type_fib_entry{YType::uint32, "protocol-type-fib-entry"},
    purgable_after_purge_interval{YType::boolean, "purgable-after-purge-interval"},
    ref_counter_of_ldi_lw_ldi{YType::uint32, "ref-counter-of-ldi-lw-ldi"},
    route_attribute_flag{YType::boolean, "route-attribute-flag"},
    route_for_external_reach_linecard_flag{YType::boolean, "route-for-external-reach-linecard-flag"},
    route_is_sr_flag{YType::boolean, "route-is-sr-flag"},
    time_of_last_update_in_msec{YType::uint64, "time-of-last-update-in-msec"},
    type_of_ldi_lw_ldi{YType::uint32, "type-of-ldi-lw-ldi"},
    version_of_route{YType::uint64, "version-of-route"},
    zero_by_zero_route_as_default{YType::boolean, "zero-by-zero-route-as-default"}
    	,
    detail_fib_entry_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation>())
	,fib_entry_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath>())
	,srv6_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information>())
{
    detail_fib_entry_information->parent = this;
    fib_entry_path->parent = this;
    srv6_information->parent = this;

    yang_name = "ip-prefix-brief"; yang_parent_name = "ip-prefix-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::~IpPrefixBrief()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::has_data() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_data())
            return true;
    }
    return broadcast_forward_flag.is_set
	|| broadcast_recive_flag.is_set
	|| dummy_real_zero_route.is_set
	|| exact_path_gre_interface_handle.is_set
	|| exact_path_interface_handle.is_set
	|| exact_route_gre_phys_ifh_avail.is_set
	|| exact_route_result.is_set
	|| external_switch_triggered.is_set
	|| fib_route_download_priority.is_set
	|| flags_external_ldi.is_set
	|| l2_subscriber_ip_protocol.is_set
	|| l2_subscriber_route.is_set
	|| l2_subscriber_xconnect_id.is_set
	|| l2tpv3_cookie_length_bits.is_set
	|| ldi_flags.is_set
	|| ldi_lw_flag.is_set
	|| lspa_flags.is_set
	|| number_of_referances_to_ldi.is_set
	|| number_of_referances_to_path_list.is_set
	|| packet_should_recieve.is_set
	|| path_list_flags.is_set
	|| path_list_source.is_set
	|| platform_hardware.is_set
	|| pointer_external_ldi.is_set
	|| prefix.is_set
	|| prefix_connected.is_set
	|| prefix_for_adjancency.is_set
	|| prefix_for_pic_next_hop.is_set
	|| prefix_is_static_or_connected.is_set
	|| prefix_length.is_set
	|| protocol_type_fib_entry.is_set
	|| purgable_after_purge_interval.is_set
	|| ref_counter_of_ldi_lw_ldi.is_set
	|| route_attribute_flag.is_set
	|| route_for_external_reach_linecard_flag.is_set
	|| route_is_sr_flag.is_set
	|| time_of_last_update_in_msec.is_set
	|| type_of_ldi_lw_ldi.is_set
	|| version_of_route.is_set
	|| zero_by_zero_route_as_default.is_set
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_data())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_data())
	|| (srv6_information !=  nullptr && srv6_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::has_operation() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(broadcast_forward_flag.yfilter)
	|| ydk::is_set(broadcast_recive_flag.yfilter)
	|| ydk::is_set(dummy_real_zero_route.yfilter)
	|| ydk::is_set(exact_path_gre_interface_handle.yfilter)
	|| ydk::is_set(exact_path_interface_handle.yfilter)
	|| ydk::is_set(exact_route_gre_phys_ifh_avail.yfilter)
	|| ydk::is_set(exact_route_result.yfilter)
	|| ydk::is_set(external_switch_triggered.yfilter)
	|| ydk::is_set(fib_route_download_priority.yfilter)
	|| ydk::is_set(flags_external_ldi.yfilter)
	|| ydk::is_set(l2_subscriber_ip_protocol.yfilter)
	|| ydk::is_set(l2_subscriber_route.yfilter)
	|| ydk::is_set(l2_subscriber_xconnect_id.yfilter)
	|| ydk::is_set(l2tpv3_cookie_length_bits.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_lw_flag.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(number_of_referances_to_ldi.yfilter)
	|| ydk::is_set(number_of_referances_to_path_list.yfilter)
	|| ydk::is_set(packet_should_recieve.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_source.yfilter)
	|| ydk::is_set(platform_hardware.yfilter)
	|| ydk::is_set(pointer_external_ldi.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_connected.yfilter)
	|| ydk::is_set(prefix_for_adjancency.yfilter)
	|| ydk::is_set(prefix_for_pic_next_hop.yfilter)
	|| ydk::is_set(prefix_is_static_or_connected.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol_type_fib_entry.yfilter)
	|| ydk::is_set(purgable_after_purge_interval.yfilter)
	|| ydk::is_set(ref_counter_of_ldi_lw_ldi.yfilter)
	|| ydk::is_set(route_attribute_flag.yfilter)
	|| ydk::is_set(route_for_external_reach_linecard_flag.yfilter)
	|| ydk::is_set(route_is_sr_flag.yfilter)
	|| ydk::is_set(time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(type_of_ldi_lw_ldi.yfilter)
	|| ydk::is_set(version_of_route.yfilter)
	|| ydk::is_set(zero_by_zero_route_as_default.yfilter)
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_operation())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_operation())
	|| (srv6_information !=  nullptr && srv6_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-prefix-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_forward_flag.is_set || is_set(broadcast_forward_flag.yfilter)) leaf_name_data.push_back(broadcast_forward_flag.get_name_leafdata());
    if (broadcast_recive_flag.is_set || is_set(broadcast_recive_flag.yfilter)) leaf_name_data.push_back(broadcast_recive_flag.get_name_leafdata());
    if (dummy_real_zero_route.is_set || is_set(dummy_real_zero_route.yfilter)) leaf_name_data.push_back(dummy_real_zero_route.get_name_leafdata());
    if (exact_path_gre_interface_handle.is_set || is_set(exact_path_gre_interface_handle.yfilter)) leaf_name_data.push_back(exact_path_gre_interface_handle.get_name_leafdata());
    if (exact_path_interface_handle.is_set || is_set(exact_path_interface_handle.yfilter)) leaf_name_data.push_back(exact_path_interface_handle.get_name_leafdata());
    if (exact_route_gre_phys_ifh_avail.is_set || is_set(exact_route_gre_phys_ifh_avail.yfilter)) leaf_name_data.push_back(exact_route_gre_phys_ifh_avail.get_name_leafdata());
    if (exact_route_result.is_set || is_set(exact_route_result.yfilter)) leaf_name_data.push_back(exact_route_result.get_name_leafdata());
    if (external_switch_triggered.is_set || is_set(external_switch_triggered.yfilter)) leaf_name_data.push_back(external_switch_triggered.get_name_leafdata());
    if (fib_route_download_priority.is_set || is_set(fib_route_download_priority.yfilter)) leaf_name_data.push_back(fib_route_download_priority.get_name_leafdata());
    if (flags_external_ldi.is_set || is_set(flags_external_ldi.yfilter)) leaf_name_data.push_back(flags_external_ldi.get_name_leafdata());
    if (l2_subscriber_ip_protocol.is_set || is_set(l2_subscriber_ip_protocol.yfilter)) leaf_name_data.push_back(l2_subscriber_ip_protocol.get_name_leafdata());
    if (l2_subscriber_route.is_set || is_set(l2_subscriber_route.yfilter)) leaf_name_data.push_back(l2_subscriber_route.get_name_leafdata());
    if (l2_subscriber_xconnect_id.is_set || is_set(l2_subscriber_xconnect_id.yfilter)) leaf_name_data.push_back(l2_subscriber_xconnect_id.get_name_leafdata());
    if (l2tpv3_cookie_length_bits.is_set || is_set(l2tpv3_cookie_length_bits.yfilter)) leaf_name_data.push_back(l2tpv3_cookie_length_bits.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_lw_flag.is_set || is_set(ldi_lw_flag.yfilter)) leaf_name_data.push_back(ldi_lw_flag.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (number_of_referances_to_ldi.is_set || is_set(number_of_referances_to_ldi.yfilter)) leaf_name_data.push_back(number_of_referances_to_ldi.get_name_leafdata());
    if (number_of_referances_to_path_list.is_set || is_set(number_of_referances_to_path_list.yfilter)) leaf_name_data.push_back(number_of_referances_to_path_list.get_name_leafdata());
    if (packet_should_recieve.is_set || is_set(packet_should_recieve.yfilter)) leaf_name_data.push_back(packet_should_recieve.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_source.is_set || is_set(path_list_source.yfilter)) leaf_name_data.push_back(path_list_source.get_name_leafdata());
    if (platform_hardware.is_set || is_set(platform_hardware.yfilter)) leaf_name_data.push_back(platform_hardware.get_name_leafdata());
    if (pointer_external_ldi.is_set || is_set(pointer_external_ldi.yfilter)) leaf_name_data.push_back(pointer_external_ldi.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_connected.is_set || is_set(prefix_connected.yfilter)) leaf_name_data.push_back(prefix_connected.get_name_leafdata());
    if (prefix_for_adjancency.is_set || is_set(prefix_for_adjancency.yfilter)) leaf_name_data.push_back(prefix_for_adjancency.get_name_leafdata());
    if (prefix_for_pic_next_hop.is_set || is_set(prefix_for_pic_next_hop.yfilter)) leaf_name_data.push_back(prefix_for_pic_next_hop.get_name_leafdata());
    if (prefix_is_static_or_connected.is_set || is_set(prefix_is_static_or_connected.yfilter)) leaf_name_data.push_back(prefix_is_static_or_connected.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_type_fib_entry.is_set || is_set(protocol_type_fib_entry.yfilter)) leaf_name_data.push_back(protocol_type_fib_entry.get_name_leafdata());
    if (purgable_after_purge_interval.is_set || is_set(purgable_after_purge_interval.yfilter)) leaf_name_data.push_back(purgable_after_purge_interval.get_name_leafdata());
    if (ref_counter_of_ldi_lw_ldi.is_set || is_set(ref_counter_of_ldi_lw_ldi.yfilter)) leaf_name_data.push_back(ref_counter_of_ldi_lw_ldi.get_name_leafdata());
    if (route_attribute_flag.is_set || is_set(route_attribute_flag.yfilter)) leaf_name_data.push_back(route_attribute_flag.get_name_leafdata());
    if (route_for_external_reach_linecard_flag.is_set || is_set(route_for_external_reach_linecard_flag.yfilter)) leaf_name_data.push_back(route_for_external_reach_linecard_flag.get_name_leafdata());
    if (route_is_sr_flag.is_set || is_set(route_is_sr_flag.yfilter)) leaf_name_data.push_back(route_is_sr_flag.get_name_leafdata());
    if (time_of_last_update_in_msec.is_set || is_set(time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(time_of_last_update_in_msec.get_name_leafdata());
    if (type_of_ldi_lw_ldi.is_set || is_set(type_of_ldi_lw_ldi.yfilter)) leaf_name_data.push_back(type_of_ldi_lw_ldi.get_name_leafdata());
    if (version_of_route.is_set || is_set(version_of_route.yfilter)) leaf_name_data.push_back(version_of_route.get_name_leafdata());
    if (zero_by_zero_route_as_default.is_set || is_set(zero_by_zero_route_as_default.yfilter)) leaf_name_data.push_back(zero_by_zero_route_as_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-fib-entry-information")
    {
        if(detail_fib_entry_information == nullptr)
        {
            detail_fib_entry_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation>();
        }
        return detail_fib_entry_information;
    }

    if(child_yang_name == "extension-object")
    {
        for(auto const & c : extension_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject>();
        c->parent = this;
        extension_object.push_back(c);
        return c;
    }

    if(child_yang_name == "fib-entry-path")
    {
        if(fib_entry_path == nullptr)
        {
            fib_entry_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath>();
        }
        return fib_entry_path;
    }

    if(child_yang_name == "srv6-information")
    {
        if(srv6_information == nullptr)
        {
            srv6_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information>();
        }
        return srv6_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_fib_entry_information != nullptr)
    {
        children["detail-fib-entry-information"] = detail_fib_entry_information;
    }

    for (auto const & c : extension_object)
    {
        children[c->get_segment_path()] = c;
    }

    if(fib_entry_path != nullptr)
    {
        children["fib-entry-path"] = fib_entry_path;
    }

    if(srv6_information != nullptr)
    {
        children["srv6-information"] = srv6_information;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-forward-flag")
    {
        broadcast_forward_flag = value;
        broadcast_forward_flag.value_namespace = name_space;
        broadcast_forward_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-recive-flag")
    {
        broadcast_recive_flag = value;
        broadcast_recive_flag.value_namespace = name_space;
        broadcast_recive_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy-real-zero-route")
    {
        dummy_real_zero_route = value;
        dummy_real_zero_route.value_namespace = name_space;
        dummy_real_zero_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-path-gre-interface-handle")
    {
        exact_path_gre_interface_handle = value;
        exact_path_gre_interface_handle.value_namespace = name_space;
        exact_path_gre_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-path-interface-handle")
    {
        exact_path_interface_handle = value;
        exact_path_interface_handle.value_namespace = name_space;
        exact_path_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-route-gre-phys-ifh-avail")
    {
        exact_route_gre_phys_ifh_avail = value;
        exact_route_gre_phys_ifh_avail.value_namespace = name_space;
        exact_route_gre_phys_ifh_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-route-result")
    {
        exact_route_result = value;
        exact_route_result.value_namespace = name_space;
        exact_route_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-switch-triggered")
    {
        external_switch_triggered = value;
        external_switch_triggered.value_namespace = name_space;
        external_switch_triggered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-route-download-priority")
    {
        fib_route_download_priority = value;
        fib_route_download_priority.value_namespace = name_space;
        fib_route_download_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags-external-ldi")
    {
        flags_external_ldi = value;
        flags_external_ldi.value_namespace = name_space;
        flags_external_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-subscriber-ip-protocol")
    {
        l2_subscriber_ip_protocol = value;
        l2_subscriber_ip_protocol.value_namespace = name_space;
        l2_subscriber_ip_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-subscriber-route")
    {
        l2_subscriber_route = value;
        l2_subscriber_route.value_namespace = name_space;
        l2_subscriber_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-subscriber-xconnect-id")
    {
        l2_subscriber_xconnect_id = value;
        l2_subscriber_xconnect_id.value_namespace = name_space;
        l2_subscriber_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-cookie-length-bits")
    {
        l2tpv3_cookie_length_bits = value;
        l2tpv3_cookie_length_bits.value_namespace = name_space;
        l2tpv3_cookie_length_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-lw-flag")
    {
        ldi_lw_flag = value;
        ldi_lw_flag.value_namespace = name_space;
        ldi_lw_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-referances-to-ldi")
    {
        number_of_referances_to_ldi = value;
        number_of_referances_to_ldi.value_namespace = name_space;
        number_of_referances_to_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-referances-to-path-list")
    {
        number_of_referances_to_path_list = value;
        number_of_referances_to_path_list.value_namespace = name_space;
        number_of_referances_to_path_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-should-recieve")
    {
        packet_should_recieve = value;
        packet_should_recieve.value_namespace = name_space;
        packet_should_recieve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-source")
    {
        path_list_source = value;
        path_list_source.value_namespace = name_space;
        path_list_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-hardware")
    {
        platform_hardware = value;
        platform_hardware.value_namespace = name_space;
        platform_hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pointer-external-ldi")
    {
        pointer_external_ldi = value;
        pointer_external_ldi.value_namespace = name_space;
        pointer_external_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-connected")
    {
        prefix_connected = value;
        prefix_connected.value_namespace = name_space;
        prefix_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-for-adjancency")
    {
        prefix_for_adjancency = value;
        prefix_for_adjancency.value_namespace = name_space;
        prefix_for_adjancency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-for-pic-next-hop")
    {
        prefix_for_pic_next_hop = value;
        prefix_for_pic_next_hop.value_namespace = name_space;
        prefix_for_pic_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-is-static-or-connected")
    {
        prefix_is_static_or_connected = value;
        prefix_is_static_or_connected.value_namespace = name_space;
        prefix_is_static_or_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-type-fib-entry")
    {
        protocol_type_fib_entry = value;
        protocol_type_fib_entry.value_namespace = name_space;
        protocol_type_fib_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgable-after-purge-interval")
    {
        purgable_after_purge_interval = value;
        purgable_after_purge_interval.value_namespace = name_space;
        purgable_after_purge_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ref-counter-of-ldi-lw-ldi")
    {
        ref_counter_of_ldi_lw_ldi = value;
        ref_counter_of_ldi_lw_ldi.value_namespace = name_space;
        ref_counter_of_ldi_lw_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-attribute-flag")
    {
        route_attribute_flag = value;
        route_attribute_flag.value_namespace = name_space;
        route_attribute_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-for-external-reach-linecard-flag")
    {
        route_for_external_reach_linecard_flag = value;
        route_for_external_reach_linecard_flag.value_namespace = name_space;
        route_for_external_reach_linecard_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-is-sr-flag")
    {
        route_is_sr_flag = value;
        route_is_sr_flag.value_namespace = name_space;
        route_is_sr_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec = value;
        time_of_last_update_in_msec.value_namespace = name_space;
        time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-of-ldi-lw-ldi")
    {
        type_of_ldi_lw_ldi = value;
        type_of_ldi_lw_ldi.value_namespace = name_space;
        type_of_ldi_lw_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-of-route")
    {
        version_of_route = value;
        version_of_route.value_namespace = name_space;
        version_of_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-by-zero-route-as-default")
    {
        zero_by_zero_route_as_default = value;
        zero_by_zero_route_as_default.value_namespace = name_space;
        zero_by_zero_route_as_default.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-forward-flag")
    {
        broadcast_forward_flag.yfilter = yfilter;
    }
    if(value_path == "broadcast-recive-flag")
    {
        broadcast_recive_flag.yfilter = yfilter;
    }
    if(value_path == "dummy-real-zero-route")
    {
        dummy_real_zero_route.yfilter = yfilter;
    }
    if(value_path == "exact-path-gre-interface-handle")
    {
        exact_path_gre_interface_handle.yfilter = yfilter;
    }
    if(value_path == "exact-path-interface-handle")
    {
        exact_path_interface_handle.yfilter = yfilter;
    }
    if(value_path == "exact-route-gre-phys-ifh-avail")
    {
        exact_route_gre_phys_ifh_avail.yfilter = yfilter;
    }
    if(value_path == "exact-route-result")
    {
        exact_route_result.yfilter = yfilter;
    }
    if(value_path == "external-switch-triggered")
    {
        external_switch_triggered.yfilter = yfilter;
    }
    if(value_path == "fib-route-download-priority")
    {
        fib_route_download_priority.yfilter = yfilter;
    }
    if(value_path == "flags-external-ldi")
    {
        flags_external_ldi.yfilter = yfilter;
    }
    if(value_path == "l2-subscriber-ip-protocol")
    {
        l2_subscriber_ip_protocol.yfilter = yfilter;
    }
    if(value_path == "l2-subscriber-route")
    {
        l2_subscriber_route.yfilter = yfilter;
    }
    if(value_path == "l2-subscriber-xconnect-id")
    {
        l2_subscriber_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-cookie-length-bits")
    {
        l2tpv3_cookie_length_bits.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-lw-flag")
    {
        ldi_lw_flag.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "number-of-referances-to-ldi")
    {
        number_of_referances_to_ldi.yfilter = yfilter;
    }
    if(value_path == "number-of-referances-to-path-list")
    {
        number_of_referances_to_path_list.yfilter = yfilter;
    }
    if(value_path == "packet-should-recieve")
    {
        packet_should_recieve.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-source")
    {
        path_list_source.yfilter = yfilter;
    }
    if(value_path == "platform-hardware")
    {
        platform_hardware.yfilter = yfilter;
    }
    if(value_path == "pointer-external-ldi")
    {
        pointer_external_ldi.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-connected")
    {
        prefix_connected.yfilter = yfilter;
    }
    if(value_path == "prefix-for-adjancency")
    {
        prefix_for_adjancency.yfilter = yfilter;
    }
    if(value_path == "prefix-for-pic-next-hop")
    {
        prefix_for_pic_next_hop.yfilter = yfilter;
    }
    if(value_path == "prefix-is-static-or-connected")
    {
        prefix_is_static_or_connected.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protocol-type-fib-entry")
    {
        protocol_type_fib_entry.yfilter = yfilter;
    }
    if(value_path == "purgable-after-purge-interval")
    {
        purgable_after_purge_interval.yfilter = yfilter;
    }
    if(value_path == "ref-counter-of-ldi-lw-ldi")
    {
        ref_counter_of_ldi_lw_ldi.yfilter = yfilter;
    }
    if(value_path == "route-attribute-flag")
    {
        route_attribute_flag.yfilter = yfilter;
    }
    if(value_path == "route-for-external-reach-linecard-flag")
    {
        route_for_external_reach_linecard_flag.yfilter = yfilter;
    }
    if(value_path == "route-is-sr-flag")
    {
        route_is_sr_flag.yfilter = yfilter;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "type-of-ldi-lw-ldi")
    {
        type_of_ldi_lw_ldi.yfilter = yfilter;
    }
    if(value_path == "version-of-route")
    {
        version_of_route.yfilter = yfilter;
    }
    if(value_path == "zero-by-zero-route-as-default")
    {
        zero_by_zero_route_as_default.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-fib-entry-information" || name == "extension-object" || name == "fib-entry-path" || name == "srv6-information" || name == "broadcast-forward-flag" || name == "broadcast-recive-flag" || name == "dummy-real-zero-route" || name == "exact-path-gre-interface-handle" || name == "exact-path-interface-handle" || name == "exact-route-gre-phys-ifh-avail" || name == "exact-route-result" || name == "external-switch-triggered" || name == "fib-route-download-priority" || name == "flags-external-ldi" || name == "l2-subscriber-ip-protocol" || name == "l2-subscriber-route" || name == "l2-subscriber-xconnect-id" || name == "l2tpv3-cookie-length-bits" || name == "ldi-flags" || name == "ldi-lw-flag" || name == "lspa-flags" || name == "number-of-referances-to-ldi" || name == "number-of-referances-to-path-list" || name == "packet-should-recieve" || name == "path-list-flags" || name == "path-list-source" || name == "platform-hardware" || name == "pointer-external-ldi" || name == "prefix" || name == "prefix-connected" || name == "prefix-for-adjancency" || name == "prefix-for-pic-next-hop" || name == "prefix-is-static-or-connected" || name == "prefix-length" || name == "protocol-type-fib-entry" || name == "purgable-after-purge-interval" || name == "ref-counter-of-ldi-lw-ldi" || name == "route-attribute-flag" || name == "route-for-external-reach-linecard-flag" || name == "route-is-sr-flag" || name == "time-of-last-update-in-msec" || name == "type-of-ldi-lw-ldi" || name == "version-of-route" || name == "zero-by-zero-route-as-default")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::DetailFibEntryInformation()
    :
    adjacency_address_length{YType::uint32, "adjacency-address-length"},
    adjacency_interface{YType::uint32, "adjacency-interface"},
    afi_fib_protocol_type{YType::uint32, "afi-fib-protocol-type"},
    aib_l3_address{YType::str, "aib-l3-address"},
    bgp_attribute_id{YType::uint32, "bgp-attribute-id"},
    bgp_attribute_next_hop_as{YType::uint32, "bgp-attribute-next-hop-as"},
    bgp_attribute_origin_as{YType::uint32, "bgp-attribute-origin-as"},
    bgp_local_attribute_id{YType::uint32, "bgp-local-attribute-id"},
    bytes_through_fib_entry{YType::uint64, "bytes-through-fib-entry"},
    com_string{YType::str, "com-string"},
    detailed_prefix_length{YType::uint32, "detailed-prefix-length"},
    extcom_string{YType::str, "extcom-string"},
    extended_community{YType::uint32, "extended-community"},
    fast_adjacency_flag{YType::boolean, "fast-adjacency-flag"},
    fib_entry_adjacency_address{YType::str, "fib-entry-adjacency-address"},
    fib_entry_adjacency_interface{YType::uint32, "fib-entry-adjacency-interface"},
    fib_entry_adjacency_type{YType::enumeration, "fib-entry-adjacency-type"},
    fib_entry_version{YType::uint32, "fib-entry-version"},
    fib_protocol_type{YType::uint32, "fib-protocol-type"},
    fib_special_nh_information_type{YType::uint32, "fib-special-nh-information-type"},
    flow_tag{YType::uint8, "flow-tag"},
    forward_class{YType::uint8, "forward-class"},
    illegal_fast_adjacency_flag{YType::boolean, "illegal-fast-adjacency-flag"},
    ldi_time_of_last_update_in_msec{YType::uint64, "ldi-time-of-last-update-in-msec"},
    load_sharing_type{YType::enumeration, "load-sharing-type"},
    lwldi_time_of_last_update_in_msec{YType::uint64, "lwldi-time-of-last-update-in-msec"},
    mpls_fec{YType::uint32, "mpls-fec"},
    packets_through_fib_entry{YType::uint64, "packets-through-fib-entry"},
    path_string{YType::str, "path-string"},
    per_prefix_accounting{YType::uint8, "per-prefix-accounting"},
    pl_time_of_last_update_in_msec{YType::uint64, "pl-time-of-last-update-in-msec"},
    pl_time_stamp_type{YType::uint32, "pl-time-stamp-type"},
    precedence_forpackets{YType::uint8, "precedence-forpackets"},
    prefix_protocol{YType::uint32, "prefix-protocol"},
    qos_group{YType::uint32, "qos-group"},
    qppb_qos_group_and_ip_precedence{YType::uint32, "qppb-qos-group-and-ip-precedence"},
    remote_adjacency_flag{YType::boolean, "remote-adjacency-flag"},
    switch_compontent_id{YType::uint32, "switch-compontent-id"},
    traffic_index_for_packets{YType::uint8, "traffic-index-for-packets"}
    	,
    loadshare_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation>())
{
    loadshare_information->parent = this;

    yang_name = "detail-fib-entry-information"; yang_parent_name = "ip-prefix-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::~DetailFibEntryInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::has_data() const
{
    return adjacency_address_length.is_set
	|| adjacency_interface.is_set
	|| afi_fib_protocol_type.is_set
	|| aib_l3_address.is_set
	|| bgp_attribute_id.is_set
	|| bgp_attribute_next_hop_as.is_set
	|| bgp_attribute_origin_as.is_set
	|| bgp_local_attribute_id.is_set
	|| bytes_through_fib_entry.is_set
	|| com_string.is_set
	|| detailed_prefix_length.is_set
	|| extcom_string.is_set
	|| extended_community.is_set
	|| fast_adjacency_flag.is_set
	|| fib_entry_adjacency_address.is_set
	|| fib_entry_adjacency_interface.is_set
	|| fib_entry_adjacency_type.is_set
	|| fib_entry_version.is_set
	|| fib_protocol_type.is_set
	|| fib_special_nh_information_type.is_set
	|| flow_tag.is_set
	|| forward_class.is_set
	|| illegal_fast_adjacency_flag.is_set
	|| ldi_time_of_last_update_in_msec.is_set
	|| load_sharing_type.is_set
	|| lwldi_time_of_last_update_in_msec.is_set
	|| mpls_fec.is_set
	|| packets_through_fib_entry.is_set
	|| path_string.is_set
	|| per_prefix_accounting.is_set
	|| pl_time_of_last_update_in_msec.is_set
	|| pl_time_stamp_type.is_set
	|| precedence_forpackets.is_set
	|| prefix_protocol.is_set
	|| qos_group.is_set
	|| qppb_qos_group_and_ip_precedence.is_set
	|| remote_adjacency_flag.is_set
	|| switch_compontent_id.is_set
	|| traffic_index_for_packets.is_set
	|| (loadshare_information !=  nullptr && loadshare_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_address_length.yfilter)
	|| ydk::is_set(adjacency_interface.yfilter)
	|| ydk::is_set(afi_fib_protocol_type.yfilter)
	|| ydk::is_set(aib_l3_address.yfilter)
	|| ydk::is_set(bgp_attribute_id.yfilter)
	|| ydk::is_set(bgp_attribute_next_hop_as.yfilter)
	|| ydk::is_set(bgp_attribute_origin_as.yfilter)
	|| ydk::is_set(bgp_local_attribute_id.yfilter)
	|| ydk::is_set(bytes_through_fib_entry.yfilter)
	|| ydk::is_set(com_string.yfilter)
	|| ydk::is_set(detailed_prefix_length.yfilter)
	|| ydk::is_set(extcom_string.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(fast_adjacency_flag.yfilter)
	|| ydk::is_set(fib_entry_adjacency_address.yfilter)
	|| ydk::is_set(fib_entry_adjacency_interface.yfilter)
	|| ydk::is_set(fib_entry_adjacency_type.yfilter)
	|| ydk::is_set(fib_entry_version.yfilter)
	|| ydk::is_set(fib_protocol_type.yfilter)
	|| ydk::is_set(fib_special_nh_information_type.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(illegal_fast_adjacency_flag.yfilter)
	|| ydk::is_set(ldi_time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(load_sharing_type.yfilter)
	|| ydk::is_set(lwldi_time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(mpls_fec.yfilter)
	|| ydk::is_set(packets_through_fib_entry.yfilter)
	|| ydk::is_set(path_string.yfilter)
	|| ydk::is_set(per_prefix_accounting.yfilter)
	|| ydk::is_set(pl_time_of_last_update_in_msec.yfilter)
	|| ydk::is_set(pl_time_stamp_type.yfilter)
	|| ydk::is_set(precedence_forpackets.yfilter)
	|| ydk::is_set(prefix_protocol.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(qppb_qos_group_and_ip_precedence.yfilter)
	|| ydk::is_set(remote_adjacency_flag.yfilter)
	|| ydk::is_set(switch_compontent_id.yfilter)
	|| ydk::is_set(traffic_index_for_packets.yfilter)
	|| (loadshare_information !=  nullptr && loadshare_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-fib-entry-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_address_length.is_set || is_set(adjacency_address_length.yfilter)) leaf_name_data.push_back(adjacency_address_length.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.yfilter)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (afi_fib_protocol_type.is_set || is_set(afi_fib_protocol_type.yfilter)) leaf_name_data.push_back(afi_fib_protocol_type.get_name_leafdata());
    if (aib_l3_address.is_set || is_set(aib_l3_address.yfilter)) leaf_name_data.push_back(aib_l3_address.get_name_leafdata());
    if (bgp_attribute_id.is_set || is_set(bgp_attribute_id.yfilter)) leaf_name_data.push_back(bgp_attribute_id.get_name_leafdata());
    if (bgp_attribute_next_hop_as.is_set || is_set(bgp_attribute_next_hop_as.yfilter)) leaf_name_data.push_back(bgp_attribute_next_hop_as.get_name_leafdata());
    if (bgp_attribute_origin_as.is_set || is_set(bgp_attribute_origin_as.yfilter)) leaf_name_data.push_back(bgp_attribute_origin_as.get_name_leafdata());
    if (bgp_local_attribute_id.is_set || is_set(bgp_local_attribute_id.yfilter)) leaf_name_data.push_back(bgp_local_attribute_id.get_name_leafdata());
    if (bytes_through_fib_entry.is_set || is_set(bytes_through_fib_entry.yfilter)) leaf_name_data.push_back(bytes_through_fib_entry.get_name_leafdata());
    if (com_string.is_set || is_set(com_string.yfilter)) leaf_name_data.push_back(com_string.get_name_leafdata());
    if (detailed_prefix_length.is_set || is_set(detailed_prefix_length.yfilter)) leaf_name_data.push_back(detailed_prefix_length.get_name_leafdata());
    if (extcom_string.is_set || is_set(extcom_string.yfilter)) leaf_name_data.push_back(extcom_string.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (fast_adjacency_flag.is_set || is_set(fast_adjacency_flag.yfilter)) leaf_name_data.push_back(fast_adjacency_flag.get_name_leafdata());
    if (fib_entry_adjacency_address.is_set || is_set(fib_entry_adjacency_address.yfilter)) leaf_name_data.push_back(fib_entry_adjacency_address.get_name_leafdata());
    if (fib_entry_adjacency_interface.is_set || is_set(fib_entry_adjacency_interface.yfilter)) leaf_name_data.push_back(fib_entry_adjacency_interface.get_name_leafdata());
    if (fib_entry_adjacency_type.is_set || is_set(fib_entry_adjacency_type.yfilter)) leaf_name_data.push_back(fib_entry_adjacency_type.get_name_leafdata());
    if (fib_entry_version.is_set || is_set(fib_entry_version.yfilter)) leaf_name_data.push_back(fib_entry_version.get_name_leafdata());
    if (fib_protocol_type.is_set || is_set(fib_protocol_type.yfilter)) leaf_name_data.push_back(fib_protocol_type.get_name_leafdata());
    if (fib_special_nh_information_type.is_set || is_set(fib_special_nh_information_type.yfilter)) leaf_name_data.push_back(fib_special_nh_information_type.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.yfilter)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (illegal_fast_adjacency_flag.is_set || is_set(illegal_fast_adjacency_flag.yfilter)) leaf_name_data.push_back(illegal_fast_adjacency_flag.get_name_leafdata());
    if (ldi_time_of_last_update_in_msec.is_set || is_set(ldi_time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(ldi_time_of_last_update_in_msec.get_name_leafdata());
    if (load_sharing_type.is_set || is_set(load_sharing_type.yfilter)) leaf_name_data.push_back(load_sharing_type.get_name_leafdata());
    if (lwldi_time_of_last_update_in_msec.is_set || is_set(lwldi_time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(lwldi_time_of_last_update_in_msec.get_name_leafdata());
    if (mpls_fec.is_set || is_set(mpls_fec.yfilter)) leaf_name_data.push_back(mpls_fec.get_name_leafdata());
    if (packets_through_fib_entry.is_set || is_set(packets_through_fib_entry.yfilter)) leaf_name_data.push_back(packets_through_fib_entry.get_name_leafdata());
    if (path_string.is_set || is_set(path_string.yfilter)) leaf_name_data.push_back(path_string.get_name_leafdata());
    if (per_prefix_accounting.is_set || is_set(per_prefix_accounting.yfilter)) leaf_name_data.push_back(per_prefix_accounting.get_name_leafdata());
    if (pl_time_of_last_update_in_msec.is_set || is_set(pl_time_of_last_update_in_msec.yfilter)) leaf_name_data.push_back(pl_time_of_last_update_in_msec.get_name_leafdata());
    if (pl_time_stamp_type.is_set || is_set(pl_time_stamp_type.yfilter)) leaf_name_data.push_back(pl_time_stamp_type.get_name_leafdata());
    if (precedence_forpackets.is_set || is_set(precedence_forpackets.yfilter)) leaf_name_data.push_back(precedence_forpackets.get_name_leafdata());
    if (prefix_protocol.is_set || is_set(prefix_protocol.yfilter)) leaf_name_data.push_back(prefix_protocol.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (qppb_qos_group_and_ip_precedence.is_set || is_set(qppb_qos_group_and_ip_precedence.yfilter)) leaf_name_data.push_back(qppb_qos_group_and_ip_precedence.get_name_leafdata());
    if (remote_adjacency_flag.is_set || is_set(remote_adjacency_flag.yfilter)) leaf_name_data.push_back(remote_adjacency_flag.get_name_leafdata());
    if (switch_compontent_id.is_set || is_set(switch_compontent_id.yfilter)) leaf_name_data.push_back(switch_compontent_id.get_name_leafdata());
    if (traffic_index_for_packets.is_set || is_set(traffic_index_for_packets.yfilter)) leaf_name_data.push_back(traffic_index_for_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loadshare-information")
    {
        if(loadshare_information == nullptr)
        {
            loadshare_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation>();
        }
        return loadshare_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loadshare_information != nullptr)
    {
        children["loadshare-information"] = loadshare_information;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-address-length")
    {
        adjacency_address_length = value;
        adjacency_address_length.value_namespace = name_space;
        adjacency_address_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
        adjacency_interface.value_namespace = name_space;
        adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-fib-protocol-type")
    {
        afi_fib_protocol_type = value;
        afi_fib_protocol_type.value_namespace = name_space;
        afi_fib_protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aib-l3-address")
    {
        aib_l3_address = value;
        aib_l3_address.value_namespace = name_space;
        aib_l3_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attribute-id")
    {
        bgp_attribute_id = value;
        bgp_attribute_id.value_namespace = name_space;
        bgp_attribute_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attribute-next-hop-as")
    {
        bgp_attribute_next_hop_as = value;
        bgp_attribute_next_hop_as.value_namespace = name_space;
        bgp_attribute_next_hop_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attribute-origin-as")
    {
        bgp_attribute_origin_as = value;
        bgp_attribute_origin_as.value_namespace = name_space;
        bgp_attribute_origin_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-local-attribute-id")
    {
        bgp_local_attribute_id = value;
        bgp_local_attribute_id.value_namespace = name_space;
        bgp_local_attribute_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-through-fib-entry")
    {
        bytes_through_fib_entry = value;
        bytes_through_fib_entry.value_namespace = name_space;
        bytes_through_fib_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-string")
    {
        com_string = value;
        com_string.value_namespace = name_space;
        com_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detailed-prefix-length")
    {
        detailed_prefix_length = value;
        detailed_prefix_length.value_namespace = name_space;
        detailed_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extcom-string")
    {
        extcom_string = value;
        extcom_string.value_namespace = name_space;
        extcom_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-adjacency-flag")
    {
        fast_adjacency_flag = value;
        fast_adjacency_flag.value_namespace = name_space;
        fast_adjacency_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-adjacency-address")
    {
        fib_entry_adjacency_address = value;
        fib_entry_adjacency_address.value_namespace = name_space;
        fib_entry_adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-adjacency-interface")
    {
        fib_entry_adjacency_interface = value;
        fib_entry_adjacency_interface.value_namespace = name_space;
        fib_entry_adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-adjacency-type")
    {
        fib_entry_adjacency_type = value;
        fib_entry_adjacency_type.value_namespace = name_space;
        fib_entry_adjacency_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-entry-version")
    {
        fib_entry_version = value;
        fib_entry_version.value_namespace = name_space;
        fib_entry_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-protocol-type")
    {
        fib_protocol_type = value;
        fib_protocol_type.value_namespace = name_space;
        fib_protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-special-nh-information-type")
    {
        fib_special_nh_information_type = value;
        fib_special_nh_information_type.value_namespace = name_space;
        fib_special_nh_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
        flow_tag.value_namespace = name_space;
        flow_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-fast-adjacency-flag")
    {
        illegal_fast_adjacency_flag = value;
        illegal_fast_adjacency_flag.value_namespace = name_space;
        illegal_fast_adjacency_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-time-of-last-update-in-msec")
    {
        ldi_time_of_last_update_in_msec = value;
        ldi_time_of_last_update_in_msec.value_namespace = name_space;
        ldi_time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing-type")
    {
        load_sharing_type = value;
        load_sharing_type.value_namespace = name_space;
        load_sharing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lwldi-time-of-last-update-in-msec")
    {
        lwldi_time_of_last_update_in_msec = value;
        lwldi_time_of_last_update_in_msec.value_namespace = name_space;
        lwldi_time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-fec")
    {
        mpls_fec = value;
        mpls_fec.value_namespace = name_space;
        mpls_fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-through-fib-entry")
    {
        packets_through_fib_entry = value;
        packets_through_fib_entry.value_namespace = name_space;
        packets_through_fib_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-string")
    {
        path_string = value;
        path_string.value_namespace = name_space;
        path_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix-accounting")
    {
        per_prefix_accounting = value;
        per_prefix_accounting.value_namespace = name_space;
        per_prefix_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pl-time-of-last-update-in-msec")
    {
        pl_time_of_last_update_in_msec = value;
        pl_time_of_last_update_in_msec.value_namespace = name_space;
        pl_time_of_last_update_in_msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pl-time-stamp-type")
    {
        pl_time_stamp_type = value;
        pl_time_stamp_type.value_namespace = name_space;
        pl_time_stamp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-forpackets")
    {
        precedence_forpackets = value;
        precedence_forpackets.value_namespace = name_space;
        precedence_forpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-protocol")
    {
        prefix_protocol = value;
        prefix_protocol.value_namespace = name_space;
        prefix_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qppb-qos-group-and-ip-precedence")
    {
        qppb_qos_group_and_ip_precedence = value;
        qppb_qos_group_and_ip_precedence.value_namespace = name_space;
        qppb_qos_group_and_ip_precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-adjacency-flag")
    {
        remote_adjacency_flag = value;
        remote_adjacency_flag.value_namespace = name_space;
        remote_adjacency_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-compontent-id")
    {
        switch_compontent_id = value;
        switch_compontent_id.value_namespace = name_space;
        switch_compontent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index-for-packets")
    {
        traffic_index_for_packets = value;
        traffic_index_for_packets.value_namespace = name_space;
        traffic_index_for_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-address-length")
    {
        adjacency_address_length.yfilter = yfilter;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "afi-fib-protocol-type")
    {
        afi_fib_protocol_type.yfilter = yfilter;
    }
    if(value_path == "aib-l3-address")
    {
        aib_l3_address.yfilter = yfilter;
    }
    if(value_path == "bgp-attribute-id")
    {
        bgp_attribute_id.yfilter = yfilter;
    }
    if(value_path == "bgp-attribute-next-hop-as")
    {
        bgp_attribute_next_hop_as.yfilter = yfilter;
    }
    if(value_path == "bgp-attribute-origin-as")
    {
        bgp_attribute_origin_as.yfilter = yfilter;
    }
    if(value_path == "bgp-local-attribute-id")
    {
        bgp_local_attribute_id.yfilter = yfilter;
    }
    if(value_path == "bytes-through-fib-entry")
    {
        bytes_through_fib_entry.yfilter = yfilter;
    }
    if(value_path == "com-string")
    {
        com_string.yfilter = yfilter;
    }
    if(value_path == "detailed-prefix-length")
    {
        detailed_prefix_length.yfilter = yfilter;
    }
    if(value_path == "extcom-string")
    {
        extcom_string.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "fast-adjacency-flag")
    {
        fast_adjacency_flag.yfilter = yfilter;
    }
    if(value_path == "fib-entry-adjacency-address")
    {
        fib_entry_adjacency_address.yfilter = yfilter;
    }
    if(value_path == "fib-entry-adjacency-interface")
    {
        fib_entry_adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "fib-entry-adjacency-type")
    {
        fib_entry_adjacency_type.yfilter = yfilter;
    }
    if(value_path == "fib-entry-version")
    {
        fib_entry_version.yfilter = yfilter;
    }
    if(value_path == "fib-protocol-type")
    {
        fib_protocol_type.yfilter = yfilter;
    }
    if(value_path == "fib-special-nh-information-type")
    {
        fib_special_nh_information_type.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "illegal-fast-adjacency-flag")
    {
        illegal_fast_adjacency_flag.yfilter = yfilter;
    }
    if(value_path == "ldi-time-of-last-update-in-msec")
    {
        ldi_time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "load-sharing-type")
    {
        load_sharing_type.yfilter = yfilter;
    }
    if(value_path == "lwldi-time-of-last-update-in-msec")
    {
        lwldi_time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "mpls-fec")
    {
        mpls_fec.yfilter = yfilter;
    }
    if(value_path == "packets-through-fib-entry")
    {
        packets_through_fib_entry.yfilter = yfilter;
    }
    if(value_path == "path-string")
    {
        path_string.yfilter = yfilter;
    }
    if(value_path == "per-prefix-accounting")
    {
        per_prefix_accounting.yfilter = yfilter;
    }
    if(value_path == "pl-time-of-last-update-in-msec")
    {
        pl_time_of_last_update_in_msec.yfilter = yfilter;
    }
    if(value_path == "pl-time-stamp-type")
    {
        pl_time_stamp_type.yfilter = yfilter;
    }
    if(value_path == "precedence-forpackets")
    {
        precedence_forpackets.yfilter = yfilter;
    }
    if(value_path == "prefix-protocol")
    {
        prefix_protocol.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "qppb-qos-group-and-ip-precedence")
    {
        qppb_qos_group_and_ip_precedence.yfilter = yfilter;
    }
    if(value_path == "remote-adjacency-flag")
    {
        remote_adjacency_flag.yfilter = yfilter;
    }
    if(value_path == "switch-compontent-id")
    {
        switch_compontent_id.yfilter = yfilter;
    }
    if(value_path == "traffic-index-for-packets")
    {
        traffic_index_for_packets.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadshare-information" || name == "adjacency-address-length" || name == "adjacency-interface" || name == "afi-fib-protocol-type" || name == "aib-l3-address" || name == "bgp-attribute-id" || name == "bgp-attribute-next-hop-as" || name == "bgp-attribute-origin-as" || name == "bgp-local-attribute-id" || name == "bytes-through-fib-entry" || name == "com-string" || name == "detailed-prefix-length" || name == "extcom-string" || name == "extended-community" || name == "fast-adjacency-flag" || name == "fib-entry-adjacency-address" || name == "fib-entry-adjacency-interface" || name == "fib-entry-adjacency-type" || name == "fib-entry-version" || name == "fib-protocol-type" || name == "fib-special-nh-information-type" || name == "flow-tag" || name == "forward-class" || name == "illegal-fast-adjacency-flag" || name == "ldi-time-of-last-update-in-msec" || name == "load-sharing-type" || name == "lwldi-time-of-last-update-in-msec" || name == "mpls-fec" || name == "packets-through-fib-entry" || name == "path-string" || name == "per-prefix-accounting" || name == "pl-time-of-last-update-in-msec" || name == "pl-time-stamp-type" || name == "precedence-forpackets" || name == "prefix-protocol" || name == "qos-group" || name == "qppb-qos-group-and-ip-precedence" || name == "remote-adjacency-flag" || name == "switch-compontent-id" || name == "traffic-index-for-packets")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadshareInformation()
    :
    bytes_through_load_information{YType::uint64, "bytes-through-load-information"},
    is_owner{YType::boolean, "is-owner"},
    load_information_owner_deleted_flag{YType::boolean, "load-information-owner-deleted-flag"},
    load_information_reference_count{YType::uint16, "load-information-reference-count"},
    loadinfo_sanity_flag{YType::boolean, "loadinfo-sanity-flag"},
    mask_length_of_owner{YType::uint32, "mask-length-of-owner"},
    packets_through_load_information{YType::uint64, "packets-through-load-information"},
    per_dest_load_sharing_flag{YType::boolean, "per-dest-load-sharing-flag"},
    prefix_of_owner{YType::uint32, "prefix-of-owner"},
    total_bytes_through_load_information{YType::uint64, "total-bytes-through-load-information"},
    total_packets_through_load_information{YType::uint64, "total-packets-through-load-information"}
    	,
    load_informtion_internal_data(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>())
{
    load_informtion_internal_data->parent = this;

    yang_name = "loadshare-information"; yang_parent_name = "detail-fib-entry-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::~LoadshareInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::has_data() const
{
    return bytes_through_load_information.is_set
	|| is_owner.is_set
	|| load_information_owner_deleted_flag.is_set
	|| load_information_reference_count.is_set
	|| loadinfo_sanity_flag.is_set
	|| mask_length_of_owner.is_set
	|| packets_through_load_information.is_set
	|| per_dest_load_sharing_flag.is_set
	|| prefix_of_owner.is_set
	|| total_bytes_through_load_information.is_set
	|| total_packets_through_load_information.is_set
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes_through_load_information.yfilter)
	|| ydk::is_set(is_owner.yfilter)
	|| ydk::is_set(load_information_owner_deleted_flag.yfilter)
	|| ydk::is_set(load_information_reference_count.yfilter)
	|| ydk::is_set(loadinfo_sanity_flag.yfilter)
	|| ydk::is_set(mask_length_of_owner.yfilter)
	|| ydk::is_set(packets_through_load_information.yfilter)
	|| ydk::is_set(per_dest_load_sharing_flag.yfilter)
	|| ydk::is_set(prefix_of_owner.yfilter)
	|| ydk::is_set(total_bytes_through_load_information.yfilter)
	|| ydk::is_set(total_packets_through_load_information.yfilter)
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadshare-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_through_load_information.is_set || is_set(bytes_through_load_information.yfilter)) leaf_name_data.push_back(bytes_through_load_information.get_name_leafdata());
    if (is_owner.is_set || is_set(is_owner.yfilter)) leaf_name_data.push_back(is_owner.get_name_leafdata());
    if (load_information_owner_deleted_flag.is_set || is_set(load_information_owner_deleted_flag.yfilter)) leaf_name_data.push_back(load_information_owner_deleted_flag.get_name_leafdata());
    if (load_information_reference_count.is_set || is_set(load_information_reference_count.yfilter)) leaf_name_data.push_back(load_information_reference_count.get_name_leafdata());
    if (loadinfo_sanity_flag.is_set || is_set(loadinfo_sanity_flag.yfilter)) leaf_name_data.push_back(loadinfo_sanity_flag.get_name_leafdata());
    if (mask_length_of_owner.is_set || is_set(mask_length_of_owner.yfilter)) leaf_name_data.push_back(mask_length_of_owner.get_name_leafdata());
    if (packets_through_load_information.is_set || is_set(packets_through_load_information.yfilter)) leaf_name_data.push_back(packets_through_load_information.get_name_leafdata());
    if (per_dest_load_sharing_flag.is_set || is_set(per_dest_load_sharing_flag.yfilter)) leaf_name_data.push_back(per_dest_load_sharing_flag.get_name_leafdata());
    if (prefix_of_owner.is_set || is_set(prefix_of_owner.yfilter)) leaf_name_data.push_back(prefix_of_owner.get_name_leafdata());
    if (total_bytes_through_load_information.is_set || is_set(total_bytes_through_load_information.yfilter)) leaf_name_data.push_back(total_bytes_through_load_information.get_name_leafdata());
    if (total_packets_through_load_information.is_set || is_set(total_packets_through_load_information.yfilter)) leaf_name_data.push_back(total_packets_through_load_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-informtion-internal-data")
    {
        if(load_informtion_internal_data == nullptr)
        {
            load_informtion_internal_data = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>();
        }
        return load_informtion_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_informtion_internal_data != nullptr)
    {
        children["load-informtion-internal-data"] = load_informtion_internal_data;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes-through-load-information")
    {
        bytes_through_load_information = value;
        bytes_through_load_information.value_namespace = name_space;
        bytes_through_load_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-owner")
    {
        is_owner = value;
        is_owner.value_namespace = name_space;
        is_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-information-owner-deleted-flag")
    {
        load_information_owner_deleted_flag = value;
        load_information_owner_deleted_flag.value_namespace = name_space;
        load_information_owner_deleted_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-information-reference-count")
    {
        load_information_reference_count = value;
        load_information_reference_count.value_namespace = name_space;
        load_information_reference_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadinfo-sanity-flag")
    {
        loadinfo_sanity_flag = value;
        loadinfo_sanity_flag.value_namespace = name_space;
        loadinfo_sanity_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length-of-owner")
    {
        mask_length_of_owner = value;
        mask_length_of_owner.value_namespace = name_space;
        mask_length_of_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-through-load-information")
    {
        packets_through_load_information = value;
        packets_through_load_information.value_namespace = name_space;
        packets_through_load_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-dest-load-sharing-flag")
    {
        per_dest_load_sharing_flag = value;
        per_dest_load_sharing_flag.value_namespace = name_space;
        per_dest_load_sharing_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-of-owner")
    {
        prefix_of_owner = value;
        prefix_of_owner.value_namespace = name_space;
        prefix_of_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bytes-through-load-information")
    {
        total_bytes_through_load_information = value;
        total_bytes_through_load_information.value_namespace = name_space;
        total_bytes_through_load_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-through-load-information")
    {
        total_packets_through_load_information = value;
        total_packets_through_load_information.value_namespace = name_space;
        total_packets_through_load_information.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes-through-load-information")
    {
        bytes_through_load_information.yfilter = yfilter;
    }
    if(value_path == "is-owner")
    {
        is_owner.yfilter = yfilter;
    }
    if(value_path == "load-information-owner-deleted-flag")
    {
        load_information_owner_deleted_flag.yfilter = yfilter;
    }
    if(value_path == "load-information-reference-count")
    {
        load_information_reference_count.yfilter = yfilter;
    }
    if(value_path == "loadinfo-sanity-flag")
    {
        loadinfo_sanity_flag.yfilter = yfilter;
    }
    if(value_path == "mask-length-of-owner")
    {
        mask_length_of_owner.yfilter = yfilter;
    }
    if(value_path == "packets-through-load-information")
    {
        packets_through_load_information.yfilter = yfilter;
    }
    if(value_path == "per-dest-load-sharing-flag")
    {
        per_dest_load_sharing_flag.yfilter = yfilter;
    }
    if(value_path == "prefix-of-owner")
    {
        prefix_of_owner.yfilter = yfilter;
    }
    if(value_path == "total-bytes-through-load-information")
    {
        total_bytes_through_load_information.yfilter = yfilter;
    }
    if(value_path == "total-packets-through-load-information")
    {
        total_packets_through_load_information.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-informtion-internal-data" || name == "bytes-through-load-information" || name == "is-owner" || name == "load-information-owner-deleted-flag" || name == "load-information-reference-count" || name == "loadinfo-sanity-flag" || name == "mask-length-of-owner" || name == "packets-through-load-information" || name == "per-dest-load-sharing-flag" || name == "prefix-of-owner" || name == "total-bytes-through-load-information" || name == "total-packets-through-load-information")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::LoadInformtionInternalData()
    :
    is_pbts_info_valid{YType::boolean, "is-pbts-info-valid"},
    ldi_next_hop_buckets{YType::uint8, "ldi-next-hop-buckets"},
    level_ofldis{YType::uint8, "level-ofldis"},
    maximum_index_arrays{YType::uint32, "maximum-index-arrays"},
    maximum_slots{YType::uint32, "maximum-slots"},
    normalized_weights{YType::str, "normalized-weights"},
    number_of_ldis{YType::uint8, "number-of-ldis"},
    path_indices{YType::str, "path-indices"},
    path_ldi_numbers{YType::str, "path-ldi-numbers"},
    pbts_class_num_paths{YType::str, "pbts-class-num-paths"},
    pbts_class_offset{YType::str, "pbts-class-offset"},
    pbts_fallback_mapped_class{YType::str, "pbts-fallback-mapped-class"},
    platform_hardware_information{YType::str, "platform-hardware-information"},
    round_robin_disable{YType::boolean, "round-robin-disable"},
    tunnel_class_value{YType::str, "tunnel-class-value"}
{

    yang_name = "load-informtion-internal-data"; yang_parent_name = "loadshare-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::~LoadInformtionInternalData()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_data() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_handle.size(); index++)
    {
        if(interface_handle[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sanity_flag.size(); index++)
    {
        if(sanity_flag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weights_of_path.size(); index++)
    {
        if(weights_of_path[index]->has_data())
            return true;
    }
    return is_pbts_info_valid.is_set
	|| ldi_next_hop_buckets.is_set
	|| level_ofldis.is_set
	|| maximum_index_arrays.is_set
	|| maximum_slots.is_set
	|| normalized_weights.is_set
	|| number_of_ldis.is_set
	|| path_indices.is_set
	|| path_ldi_numbers.is_set
	|| pbts_class_num_paths.is_set
	|| pbts_class_offset.is_set
	|| pbts_fallback_mapped_class.is_set
	|| platform_hardware_information.is_set
	|| round_robin_disable.is_set
	|| tunnel_class_value.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_operation() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_handle.size(); index++)
    {
        if(interface_handle[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sanity_flag.size(); index++)
    {
        if(sanity_flag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weights_of_path.size(); index++)
    {
        if(weights_of_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_pbts_info_valid.yfilter)
	|| ydk::is_set(ldi_next_hop_buckets.yfilter)
	|| ydk::is_set(level_ofldis.yfilter)
	|| ydk::is_set(maximum_index_arrays.yfilter)
	|| ydk::is_set(maximum_slots.yfilter)
	|| ydk::is_set(normalized_weights.yfilter)
	|| ydk::is_set(number_of_ldis.yfilter)
	|| ydk::is_set(path_indices.yfilter)
	|| ydk::is_set(path_ldi_numbers.yfilter)
	|| ydk::is_set(pbts_class_num_paths.yfilter)
	|| ydk::is_set(pbts_class_offset.yfilter)
	|| ydk::is_set(pbts_fallback_mapped_class.yfilter)
	|| ydk::is_set(platform_hardware_information.yfilter)
	|| ydk::is_set(round_robin_disable.yfilter)
	|| ydk::is_set(tunnel_class_value.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-informtion-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pbts_info_valid.is_set || is_set(is_pbts_info_valid.yfilter)) leaf_name_data.push_back(is_pbts_info_valid.get_name_leafdata());
    if (ldi_next_hop_buckets.is_set || is_set(ldi_next_hop_buckets.yfilter)) leaf_name_data.push_back(ldi_next_hop_buckets.get_name_leafdata());
    if (level_ofldis.is_set || is_set(level_ofldis.yfilter)) leaf_name_data.push_back(level_ofldis.get_name_leafdata());
    if (maximum_index_arrays.is_set || is_set(maximum_index_arrays.yfilter)) leaf_name_data.push_back(maximum_index_arrays.get_name_leafdata());
    if (maximum_slots.is_set || is_set(maximum_slots.yfilter)) leaf_name_data.push_back(maximum_slots.get_name_leafdata());
    if (normalized_weights.is_set || is_set(normalized_weights.yfilter)) leaf_name_data.push_back(normalized_weights.get_name_leafdata());
    if (number_of_ldis.is_set || is_set(number_of_ldis.yfilter)) leaf_name_data.push_back(number_of_ldis.get_name_leafdata());
    if (path_indices.is_set || is_set(path_indices.yfilter)) leaf_name_data.push_back(path_indices.get_name_leafdata());
    if (path_ldi_numbers.is_set || is_set(path_ldi_numbers.yfilter)) leaf_name_data.push_back(path_ldi_numbers.get_name_leafdata());
    if (pbts_class_num_paths.is_set || is_set(pbts_class_num_paths.yfilter)) leaf_name_data.push_back(pbts_class_num_paths.get_name_leafdata());
    if (pbts_class_offset.is_set || is_set(pbts_class_offset.yfilter)) leaf_name_data.push_back(pbts_class_offset.get_name_leafdata());
    if (pbts_fallback_mapped_class.is_set || is_set(pbts_fallback_mapped_class.yfilter)) leaf_name_data.push_back(pbts_fallback_mapped_class.get_name_leafdata());
    if (platform_hardware_information.is_set || is_set(platform_hardware_information.yfilter)) leaf_name_data.push_back(platform_hardware_information.get_name_leafdata());
    if (round_robin_disable.is_set || is_set(round_robin_disable.yfilter)) leaf_name_data.push_back(round_robin_disable.get_name_leafdata());
    if (tunnel_class_value.is_set || is_set(tunnel_class_value.yfilter)) leaf_name_data.push_back(tunnel_class_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-address")
    {
        for(auto const & c : adjacency_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress>();
        c->parent = this;
        adjacency_address.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-handle")
    {
        for(auto const & c : interface_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle>();
        c->parent = this;
        interface_handle.push_back(c);
        return c;
    }

    if(child_yang_name == "pbts-class-is-fallback-mapped")
    {
        for(auto const & c : pbts_class_is_fallback_mapped)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped>();
        c->parent = this;
        pbts_class_is_fallback_mapped.push_back(c);
        return c;
    }

    if(child_yang_name == "pbts-fallback-to-drop")
    {
        for(auto const & c : pbts_fallback_to_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop>();
        c->parent = this;
        pbts_fallback_to_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "sanity-flag")
    {
        for(auto const & c : sanity_flag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag>();
        c->parent = this;
        sanity_flag.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-is-forward-class")
    {
        for(auto const & c : tunnel_is_forward_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass>();
        c->parent = this;
        tunnel_is_forward_class.push_back(c);
        return c;
    }

    if(child_yang_name == "weights-of-path")
    {
        for(auto const & c : weights_of_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath>();
        c->parent = this;
        weights_of_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_handle)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pbts_class_is_fallback_mapped)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pbts_fallback_to_drop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sanity_flag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tunnel_is_forward_class)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : weights_of_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-pbts-info-valid")
    {
        is_pbts_info_valid = value;
        is_pbts_info_valid.value_namespace = name_space;
        is_pbts_info_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-next-hop-buckets")
    {
        ldi_next_hop_buckets = value;
        ldi_next_hop_buckets.value_namespace = name_space;
        ldi_next_hop_buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-ofldis")
    {
        level_ofldis = value;
        level_ofldis.value_namespace = name_space;
        level_ofldis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-index-arrays")
    {
        maximum_index_arrays = value;
        maximum_index_arrays.value_namespace = name_space;
        maximum_index_arrays.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-slots")
    {
        maximum_slots = value;
        maximum_slots.value_namespace = name_space;
        maximum_slots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normalized-weights")
    {
        normalized_weights = value;
        normalized_weights.value_namespace = name_space;
        normalized_weights.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldis")
    {
        number_of_ldis = value;
        number_of_ldis.value_namespace = name_space;
        number_of_ldis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-indices")
    {
        path_indices = value;
        path_indices.value_namespace = name_space;
        path_indices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-ldi-numbers")
    {
        path_ldi_numbers = value;
        path_ldi_numbers.value_namespace = name_space;
        path_ldi_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbts-class-num-paths")
    {
        pbts_class_num_paths = value;
        pbts_class_num_paths.value_namespace = name_space;
        pbts_class_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbts-class-offset")
    {
        pbts_class_offset = value;
        pbts_class_offset.value_namespace = name_space;
        pbts_class_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbts-fallback-mapped-class")
    {
        pbts_fallback_mapped_class = value;
        pbts_fallback_mapped_class.value_namespace = name_space;
        pbts_fallback_mapped_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-hardware-information")
    {
        platform_hardware_information = value;
        platform_hardware_information.value_namespace = name_space;
        platform_hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "round-robin-disable")
    {
        round_robin_disable = value;
        round_robin_disable.value_namespace = name_space;
        round_robin_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-class-value")
    {
        tunnel_class_value = value;
        tunnel_class_value.value_namespace = name_space;
        tunnel_class_value.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-pbts-info-valid")
    {
        is_pbts_info_valid.yfilter = yfilter;
    }
    if(value_path == "ldi-next-hop-buckets")
    {
        ldi_next_hop_buckets.yfilter = yfilter;
    }
    if(value_path == "level-ofldis")
    {
        level_ofldis.yfilter = yfilter;
    }
    if(value_path == "maximum-index-arrays")
    {
        maximum_index_arrays.yfilter = yfilter;
    }
    if(value_path == "maximum-slots")
    {
        maximum_slots.yfilter = yfilter;
    }
    if(value_path == "normalized-weights")
    {
        normalized_weights.yfilter = yfilter;
    }
    if(value_path == "number-of-ldis")
    {
        number_of_ldis.yfilter = yfilter;
    }
    if(value_path == "path-indices")
    {
        path_indices.yfilter = yfilter;
    }
    if(value_path == "path-ldi-numbers")
    {
        path_ldi_numbers.yfilter = yfilter;
    }
    if(value_path == "pbts-class-num-paths")
    {
        pbts_class_num_paths.yfilter = yfilter;
    }
    if(value_path == "pbts-class-offset")
    {
        pbts_class_offset.yfilter = yfilter;
    }
    if(value_path == "pbts-fallback-mapped-class")
    {
        pbts_fallback_mapped_class.yfilter = yfilter;
    }
    if(value_path == "platform-hardware-information")
    {
        platform_hardware_information.yfilter = yfilter;
    }
    if(value_path == "round-robin-disable")
    {
        round_robin_disable.yfilter = yfilter;
    }
    if(value_path == "tunnel-class-value")
    {
        tunnel_class_value.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-address" || name == "interface-handle" || name == "pbts-class-is-fallback-mapped" || name == "pbts-fallback-to-drop" || name == "sanity-flag" || name == "tunnel-is-forward-class" || name == "weights-of-path" || name == "is-pbts-info-valid" || name == "ldi-next-hop-buckets" || name == "level-ofldis" || name == "maximum-index-arrays" || name == "maximum-slots" || name == "normalized-weights" || name == "number-of-ldis" || name == "path-indices" || name == "path-ldi-numbers" || name == "pbts-class-num-paths" || name == "pbts-class-offset" || name == "pbts-fallback-mapped-class" || name == "platform-hardware-information" || name == "round-robin-disable" || name == "tunnel-class-value")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::AdjacencyAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "adjacency-address"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::~AdjacencyAddress()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_data() const
{
    return address.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::InterfaceHandle()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-handle"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::~InterfaceHandle()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-handle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::PbtsClassIsFallbackMapped()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "pbts-class-is-fallback-mapped"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::~PbtsClassIsFallbackMapped()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-class-is-fallback-mapped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::PbtsFallbackToDrop()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "pbts-fallback-to-drop"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::~PbtsFallbackToDrop()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-fallback-to-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::SanityFlag()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "sanity-flag"; yang_parent_name = "load-informtion-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::~SanityFlag()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sanity-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

const Enum::YLeaf MgmtFibMplsLspRole::head {0, "head"};
const Enum::YLeaf MgmtFibMplsLspRole::midpoint {1, "midpoint"};

const Enum::YLeaf FibNhinfoExtBag::replicated_nh_info {0, "replicated-nh-info"};
const Enum::YLeaf FibNhinfoExtBag::shared_nh_info {1, "shared-nh-info"};

const Enum::YLeaf FibafiProto::ipv4 {0, "ipv4"};
const Enum::YLeaf FibafiProto::ipv4_mpls {1, "ipv4-mpls"};
const Enum::YLeaf FibafiProto::ipv6 {2, "ipv6"};
const Enum::YLeaf FibafiProto::ipv6_mpls {3, "ipv6-mpls"};

const Enum::YLeaf MgmtFibMplsFrrState::partial {0, "partial"};
const Enum::YLeaf MgmtFibMplsFrrState::active {1, "active"};
const Enum::YLeaf MgmtFibMplsFrrState::ready {2, "ready"};
const Enum::YLeaf MgmtFibMplsFrrState::complete {3, "complete"};
const Enum::YLeaf MgmtFibMplsFrrState::any {4, "any"};

const Enum::YLeaf Proto::ipv4 {0, "ipv4"};
const Enum::YLeaf Proto::ipv6 {1, "ipv6"};
const Enum::YLeaf Proto::mpls {2, "mpls"};

const Enum::YLeaf FibRpfMode::fib_rpf_mode_strict {0, "fib-rpf-mode-strict"};
const Enum::YLeaf FibRpfMode::fib_rpf_mode_loose {1, "fib-rpf-mode-loose"};
const Enum::YLeaf FibRpfMode::fib_rpf_mode_unknown {2, "fib-rpf-mode-unknown"};

const Enum::YLeaf FibRouteSource::lsd {5, "lsd"};
const Enum::YLeaf FibRouteSource::rib {7, "rib"};
const Enum::YLeaf FibRouteSource::mrib {13, "mrib"};

const Enum::YLeaf SsLbaState::l3 {0, "l3"};
const Enum::YLeaf SsLbaState::l4 {1, "l4"};

const Enum::YLeaf FibLink::link_ipv4 {0, "link-ipv4"};
const Enum::YLeaf FibLink::link_ipv6 {1, "link-ipv6"};
const Enum::YLeaf FibLink::link_mpls {2, "link-mpls"};

const Enum::YLeaf FibUpdatePathLfaProtection::not_lfa_protected {0, "not-lfa-protected"};
const Enum::YLeaf FibUpdatePathLfaProtection::local_lfa_protected {1, "local-lfa-protected"};
const Enum::YLeaf FibUpdatePathLfaProtection::remote_lfa_protected {2, "remote-lfa-protected"};
const Enum::YLeaf FibUpdatePathLfaProtection::ti_lfa_protected {3, "ti-lfa-protected"};

const Enum::YLeaf FibNehSpecial::nh_not_found {0, "nh-not-found"};
const Enum::YLeaf FibNehSpecial::nh_null0 {1, "nh-null0"};
const Enum::YLeaf FibNehSpecial::nh_punt {2, "nh-punt"};
const Enum::YLeaf FibNehSpecial::nh_drop {3, "nh-drop"};
const Enum::YLeaf FibNehSpecial::nh_glean {4, "nh-glean"};
const Enum::YLeaf FibNehSpecial::nh_receive {5, "nh-receive"};
const Enum::YLeaf FibNehSpecial::nh_broadcast {6, "nh-broadcast"};
const Enum::YLeaf FibNehSpecial::nh_external {7, "nh-external"};
const Enum::YLeaf FibNehSpecial::nh_lisp {8, "nh-lisp"};
const Enum::YLeaf FibNehSpecial::nh_lookup {9, "nh-lookup"};
const Enum::YLeaf FibNehSpecial::nh_max_type {10, "nh-max-type"};

const Enum::YLeaf Mplseos::eos0 {0, "eos0"};
const Enum::YLeaf Mplseos::eos1 {1, "eos1"};

const Enum::YLeaf FibllcEntry::xc {1, "xc"};
const Enum::YLeaf FibllcEntry::pfx {2, "pfx"};

const Enum::YLeaf FibShIpencapHdr::fib_sh_ip_encap_none {0, "fib-sh-ip-encap-none"};
const Enum::YLeaf FibShIpencapHdr::fib_sh_ip_encap_ip4 {1, "fib-sh-ip-encap-ip4"};
const Enum::YLeaf FibShIpencapHdr::fib_sh_ip_encap_ip6 {2, "fib-sh-ip-encap-ip6"};
const Enum::YLeaf FibShIpencapHdr::fib_sh_ip_encap_udp {3, "fib-sh-ip-encap-udp"};
const Enum::YLeaf FibShIpencapHdr::fib_sh_ip_encap_lisp {4, "fib-sh-ip-encap-lisp"};

const Enum::YLeaf NextHop::tx {0, "tx"};
const Enum::YLeaf NextHop::rx {1, "rx"};
const Enum::YLeaf NextHop::special {2, "special"};

const Enum::YLeaf FibProtocol::ipv4 {0, "ipv4"};
const Enum::YLeaf FibProtocol::ipv6 {1, "ipv6"};
const Enum::YLeaf FibProtocol::mpls {2, "mpls"};

const Enum::YLeaf FibLoadshareShow::fib_load_share_none {0, "fib-load-share-none"};
const Enum::YLeaf FibLoadshareShow::fib_load_share_per_packet {1, "fib-load-share-per-packet"};
const Enum::YLeaf FibLoadshareShow::fib_load_share_dest_sharing {2, "fib-load-share-dest-sharing"};

const Enum::YLeaf FibAdjacencyShow::fib_adjacency_normal {0, "fib-adjacency-normal"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_null {1, "fib-adjacency-null"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_punt {2, "fib-adjacency-punt"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_drop {3, "fib-adjacency-drop"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_glean {4, "fib-adjacency-glean"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_discard {5, "fib-adjacency-discard"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_broadcast {6, "fib-adjacency-broadcast"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_external {7, "fib-adjacency-external"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_lisp {8, "fib-adjacency-lisp"};
const Enum::YLeaf FibAdjacencyShow::fib_adjacency_unknown {9, "fib-adjacency-unknown"};

const Enum::YLeaf FibMplsLlcEntryBag::fib_mpls_llc_bag_type_xc {1, "fib-mpls-llc-bag-type-xc"};
const Enum::YLeaf FibMplsLlcEntryBag::fib_mpls_llc_bag_type_pfx {2, "fib-mpls-llc-bag-type-pfx"};
const Enum::YLeaf FibMplsLlcEntryBag::fib_mpls_llc_bag_type_lsm {3, "fib-mpls-llc-bag-type-lsm"};
const Enum::YLeaf FibMplsLlcEntryBag::fib_mpls_llc_bag_type_max {4, "fib-mpls-llc-bag-type-max"};

const Enum::YLeaf FibidbOper::fibidb_none {0, "fibidb-none"};
const Enum::YLeaf FibidbOper::fibidb_create {1, "fibidb-create"};
const Enum::YLeaf FibidbOper::fibidb_delete {2, "fibidb-delete"};
const Enum::YLeaf FibidbOper::fibidb_modify {3, "fibidb-modify"};
const Enum::YLeaf FibidbOper::fibidb_max {4, "fibidb-max"};

const Enum::YLeaf FibFrrProtocolShow::frr_protocol_ipv4 {0, "frr-protocol-ipv4"};
const Enum::YLeaf FibFrrProtocolShow::frr_protocol_ipv6 {1, "frr-protocol-ipv6"};
const Enum::YLeaf FibFrrProtocolShow::frr_protocol_mpls {2, "frr-protocol-mpls"};

const Enum::YLeaf FibNeh::nh_local {0, "nh-local"};
const Enum::YLeaf FibNeh::nh_remote {1, "nh-remote"};
const Enum::YLeaf FibNeh::nh_special {2, "nh-special"};

const Enum::YLeaf FibShTblFibExtBag::leaf_extension {1, "leaf-extension"};


}
}

