
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cofo_csi_ma_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cofo_csi_ma_oper {

CrossSdrIntfMa::CrossSdrIntfMa()
    :
    nodes(std::make_shared<CrossSdrIntfMa::Nodes>())
{
    nodes->parent = this;

    yang_name = "cross-sdr-intf-ma"; yang_parent_name = "Cisco-IOS-XR-cofo-csi-ma-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CrossSdrIntfMa::~CrossSdrIntfMa()
{
}

bool CrossSdrIntfMa::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool CrossSdrIntfMa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string CrossSdrIntfMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cofo-csi-ma-oper:cross-sdr-intf-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<CrossSdrIntfMa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void CrossSdrIntfMa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossSdrIntfMa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CrossSdrIntfMa::clone_ptr() const
{
    return std::make_shared<CrossSdrIntfMa>();
}

std::string CrossSdrIntfMa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CrossSdrIntfMa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CrossSdrIntfMa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CrossSdrIntfMa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CrossSdrIntfMa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "cross-sdr-intf-ma"; is_top_level_class = false; has_list_ancestor = false; 
}

CrossSdrIntfMa::Nodes::~Nodes()
{
}

bool CrossSdrIntfMa::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossSdrIntfMa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cofo-csi-ma-oper:cross-sdr-intf-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string CrossSdrIntfMa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossSdrIntfMa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossSdrIntfMa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    rack_ids(std::make_shared<CrossSdrIntfMa::Nodes::Node::RackIds>())
    , csi_indexes(std::make_shared<CrossSdrIntfMa::Nodes::Node::CsiIndexes>())
    , interface_names(std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames>())
    , global(std::make_shared<CrossSdrIntfMa::Nodes::Node::Global>())
    , sdr_ids(std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds>())
{
    rack_ids->parent = this;
    csi_indexes->parent = this;
    interface_names->parent = this;
    global->parent = this;
    sdr_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

CrossSdrIntfMa::Nodes::Node::~Node()
{
}

bool CrossSdrIntfMa::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (rack_ids !=  nullptr && rack_ids->has_data())
	|| (csi_indexes !=  nullptr && csi_indexes->has_data())
	|| (interface_names !=  nullptr && interface_names->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (sdr_ids !=  nullptr && sdr_ids->has_data());
}

bool CrossSdrIntfMa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (rack_ids !=  nullptr && rack_ids->has_operation())
	|| (csi_indexes !=  nullptr && csi_indexes->has_operation())
	|| (interface_names !=  nullptr && interface_names->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (sdr_ids !=  nullptr && sdr_ids->has_operation());
}

std::string CrossSdrIntfMa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cofo-csi-ma-oper:cross-sdr-intf-ma/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string CrossSdrIntfMa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack-ids")
    {
        if(rack_ids == nullptr)
        {
            rack_ids = std::make_shared<CrossSdrIntfMa::Nodes::Node::RackIds>();
        }
        return rack_ids;
    }

    if(child_yang_name == "csi-indexes")
    {
        if(csi_indexes == nullptr)
        {
            csi_indexes = std::make_shared<CrossSdrIntfMa::Nodes::Node::CsiIndexes>();
        }
        return csi_indexes;
    }

    if(child_yang_name == "interface-names")
    {
        if(interface_names == nullptr)
        {
            interface_names = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames>();
        }
        return interface_names;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<CrossSdrIntfMa::Nodes::Node::Global>();
        }
        return global;
    }

    if(child_yang_name == "sdr-ids")
    {
        if(sdr_ids == nullptr)
        {
            sdr_ids = std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds>();
        }
        return sdr_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rack_ids != nullptr)
    {
        children["rack-ids"] = rack_ids;
    }

    if(csi_indexes != nullptr)
    {
        children["csi-indexes"] = csi_indexes;
    }

    if(interface_names != nullptr)
    {
        children["interface-names"] = interface_names;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(sdr_ids != nullptr)
    {
        children["sdr-ids"] = sdr_ids;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-ids" || name == "csi-indexes" || name == "interface-names" || name == "global" || name == "sdr-ids" || name == "node-name")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackIds()
    :
    rack_id(this, {"rack_id"})
{

    yang_name = "rack-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::RackIds::~RackIds()
{
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack_id.len(); index++)
    {
        if(rack_id[index]->has_data())
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::has_operation() const
{
    for (std::size_t index=0; index<rack_id.len(); index++)
    {
        if(rack_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::RackIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::RackIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::RackIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack-id")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::RackIds::RackId>();
        c->parent = this;
        rack_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::RackIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::RackIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossSdrIntfMa::Nodes::Node::RackIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-id")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackId::RackId()
    :
    rack_id{YType::uint32, "rack-id"}
        ,
    slot_id(this, {"slot_id"})
{

    yang_name = "rack-id"; yang_parent_name = "rack-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackId::~RackId()
{
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot_id.len(); index++)
    {
        if(slot_id[index]->has_data())
            return true;
    }
    return rack_id.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::has_operation() const
{
    for (std::size_t index=0; index<slot_id.len(); index++)
    {
        if(slot_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::RackIds::RackId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack-id";
    ADD_KEY_TOKEN(rack_id, "rack-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::RackIds::RackId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::RackIds::RackId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot-id")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId>();
        c->parent = this;
        slot_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::RackIds::RackId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : slot_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::RackIds::RackId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::RackIds::RackId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-id")
    {
        rack_id.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot-id" || name == "rack-id")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SlotId()
    :
    slot_id{YType::uint32, "slot-id"},
    rack_slot_id{YType::uint64, "rack-slot-id"},
    node_id{YType::uint32, "node-id"},
    node_up{YType::boolean, "node-up"}
        ,
    slice_arr(this, {})
{

    yang_name = "slot-id"; yang_parent_name = "rack-id"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::~SlotId()
{
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slice_arr.len(); index++)
    {
        if(slice_arr[index]->has_data())
            return true;
    }
    return slot_id.is_set
	|| rack_slot_id.is_set
	|| node_id.is_set
	|| node_up.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::has_operation() const
{
    for (std::size_t index=0; index<slice_arr.len(); index++)
    {
        if(slice_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter)
	|| ydk::is_set(rack_slot_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(node_up.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot-id";
    ADD_KEY_TOKEN(slot_id, "slot-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());
    if (rack_slot_id.is_set || is_set(rack_slot_id.yfilter)) leaf_name_data.push_back(rack_slot_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (node_up.is_set || is_set(node_up.yfilter)) leaf_name_data.push_back(node_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr>();
        c->parent = this;
        slice_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : slice_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-slot-id")
    {
        rack_slot_id = value;
        rack_slot_id.value_namespace = name_space;
        rack_slot_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-up")
    {
        node_up = value;
        node_up.value_namespace = name_space;
        node_up.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
    if(value_path == "rack-slot-id")
    {
        rack_slot_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "node-up")
    {
        node_up.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-arr" || name == "slot-id" || name == "rack-slot-id" || name == "node-id" || name == "node-up")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::SliceArr()
    :
    slice_node_id{YType::uint32, "slice-node-id"},
    admin_up{YType::boolean, "admin-up"},
    oper_up{YType::boolean, "oper-up"},
    pic{YType::uint64, "pic"},
    csi_pic_arr{YType::uint64, "csi-pic-arr"}
{

    yang_name = "slice-arr"; yang_parent_name = "slot-id"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::~SliceArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : csi_pic_arr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return slice_node_id.is_set
	|| admin_up.is_set
	|| oper_up.is_set
	|| pic.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::has_operation() const
{
    for (auto const & leaf : csi_pic_arr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slice_node_id.yfilter)
	|| ydk::is_set(admin_up.yfilter)
	|| ydk::is_set(oper_up.yfilter)
	|| ydk::is_set(pic.yfilter)
	|| ydk::is_set(csi_pic_arr.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_node_id.is_set || is_set(slice_node_id.yfilter)) leaf_name_data.push_back(slice_node_id.get_name_leafdata());
    if (admin_up.is_set || is_set(admin_up.yfilter)) leaf_name_data.push_back(admin_up.get_name_leafdata());
    if (oper_up.is_set || is_set(oper_up.yfilter)) leaf_name_data.push_back(oper_up.get_name_leafdata());
    if (pic.is_set || is_set(pic.yfilter)) leaf_name_data.push_back(pic.get_name_leafdata());

    auto csi_pic_arr_name_datas = csi_pic_arr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), csi_pic_arr_name_datas.begin(), csi_pic_arr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-node-id")
    {
        slice_node_id = value;
        slice_node_id.value_namespace = name_space;
        slice_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up")
    {
        admin_up = value;
        admin_up.value_namespace = name_space;
        admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-up")
    {
        oper_up = value;
        oper_up.value_namespace = name_space;
        oper_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pic")
    {
        pic = value;
        pic.value_namespace = name_space;
        pic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csi-pic-arr")
    {
        csi_pic_arr.append(value);
    }
}

void CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-node-id")
    {
        slice_node_id.yfilter = yfilter;
    }
    if(value_path == "admin-up")
    {
        admin_up.yfilter = yfilter;
    }
    if(value_path == "oper-up")
    {
        oper_up.yfilter = yfilter;
    }
    if(value_path == "pic")
    {
        pic.yfilter = yfilter;
    }
    if(value_path == "csi-pic-arr")
    {
        csi_pic_arr.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-node-id" || name == "admin-up" || name == "oper-up" || name == "pic" || name == "csi-pic-arr")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndexes()
    :
    csi_index(this, {"csi_index"})
{

    yang_name = "csi-indexes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::CsiIndexes::~CsiIndexes()
{
}

bool CrossSdrIntfMa::Nodes::Node::CsiIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csi_index.len(); index++)
    {
        if(csi_index[index]->has_data())
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::Node::CsiIndexes::has_operation() const
{
    for (std::size_t index=0; index<csi_index.len(); index++)
    {
        if(csi_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::CsiIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csi-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::CsiIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::CsiIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csi-index")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex>();
        c->parent = this;
        csi_index.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::CsiIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : csi_index.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::CsiIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossSdrIntfMa::Nodes::Node::CsiIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossSdrIntfMa::Nodes::Node::CsiIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csi-index")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::CsiIndex()
    :
    csi_index{YType::uint32, "csi-index"},
    csi_index_xr{YType::uint32, "csi-index-xr"},
    sdr_id{YType::uint32, "sdr-id"},
    peer_sdr_id{YType::uint32, "peer-sdr-id"},
    peer_sdr_name{YType::str, "peer-sdr-name"},
    item_state{YType::enumeration, "item-state"},
    csi_helper_reg{YType::boolean, "csi-helper-reg"}
{

    yang_name = "csi-index"; yang_parent_name = "csi-indexes"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::~CsiIndex()
{
}

bool CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::has_data() const
{
    if (is_presence_container) return true;
    return csi_index.is_set
	|| csi_index_xr.is_set
	|| sdr_id.is_set
	|| peer_sdr_id.is_set
	|| peer_sdr_name.is_set
	|| item_state.is_set
	|| csi_helper_reg.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csi_index.yfilter)
	|| ydk::is_set(csi_index_xr.yfilter)
	|| ydk::is_set(sdr_id.yfilter)
	|| ydk::is_set(peer_sdr_id.yfilter)
	|| ydk::is_set(peer_sdr_name.yfilter)
	|| ydk::is_set(item_state.yfilter)
	|| ydk::is_set(csi_helper_reg.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csi-index";
    ADD_KEY_TOKEN(csi_index, "csi-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csi_index.is_set || is_set(csi_index.yfilter)) leaf_name_data.push_back(csi_index.get_name_leafdata());
    if (csi_index_xr.is_set || is_set(csi_index_xr.yfilter)) leaf_name_data.push_back(csi_index_xr.get_name_leafdata());
    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());
    if (peer_sdr_id.is_set || is_set(peer_sdr_id.yfilter)) leaf_name_data.push_back(peer_sdr_id.get_name_leafdata());
    if (peer_sdr_name.is_set || is_set(peer_sdr_name.yfilter)) leaf_name_data.push_back(peer_sdr_name.get_name_leafdata());
    if (item_state.is_set || is_set(item_state.yfilter)) leaf_name_data.push_back(item_state.get_name_leafdata());
    if (csi_helper_reg.is_set || is_set(csi_helper_reg.yfilter)) leaf_name_data.push_back(csi_helper_reg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csi-index")
    {
        csi_index = value;
        csi_index.value_namespace = name_space;
        csi_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csi-index-xr")
    {
        csi_index_xr = value;
        csi_index_xr.value_namespace = name_space;
        csi_index_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-sdr-id")
    {
        peer_sdr_id = value;
        peer_sdr_id.value_namespace = name_space;
        peer_sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-sdr-name")
    {
        peer_sdr_name = value;
        peer_sdr_name.value_namespace = name_space;
        peer_sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-state")
    {
        item_state = value;
        item_state.value_namespace = name_space;
        item_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csi-helper-reg")
    {
        csi_helper_reg = value;
        csi_helper_reg.value_namespace = name_space;
        csi_helper_reg.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csi-index")
    {
        csi_index.yfilter = yfilter;
    }
    if(value_path == "csi-index-xr")
    {
        csi_index_xr.yfilter = yfilter;
    }
    if(value_path == "sdr-id")
    {
        sdr_id.yfilter = yfilter;
    }
    if(value_path == "peer-sdr-id")
    {
        peer_sdr_id.yfilter = yfilter;
    }
    if(value_path == "peer-sdr-name")
    {
        peer_sdr_name.yfilter = yfilter;
    }
    if(value_path == "item-state")
    {
        item_state.yfilter = yfilter;
    }
    if(value_path == "csi-helper-reg")
    {
        csi_helper_reg.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csi-index" || name == "csi-index-xr" || name == "sdr-id" || name == "peer-sdr-id" || name == "peer-sdr-name" || name == "item-state" || name == "csi-helper-reg")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceNames()
    :
    interface_name(this, {"csi_index"})
{

    yang_name = "interface-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::~InterfaceNames()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_name.len(); index++)
    {
        if(interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<interface_name.len(); index++)
    {
        if(interface_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-name")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::InterfaceName()
    :
    csi_index{YType::uint32, "csi-index"},
    name{YType::str, "name"},
    handle{YType::str, "handle"},
    csi_index_xr{YType::uint32, "csi-index-xr"},
    sdr_id{YType::uint32, "sdr-id"},
    peer_sdr_id{YType::uint32, "peer-sdr-id"},
    repl_handle{YType::uint32, "repl-handle"},
    repl_fail_count{YType::uint32, "repl-fail-count"},
    item_state{YType::enumeration, "item-state"},
    if_state{YType::uint32, "if-state"},
    rem_slice_attr{YType::boolean, "rem-slice-attr"},
    rem_ip_attr{YType::boolean, "rem-ip-attr"}
        ,
    pub_data(std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData>())
    , local_ip_arr(this, {})
    , peer_ip_arr(this, {})
{
    pub_data->parent = this;

    yang_name = "interface-name"; yang_parent_name = "interface-names"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::~InterfaceName()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_ip_arr.len(); index++)
    {
        if(local_ip_arr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peer_ip_arr.len(); index++)
    {
        if(peer_ip_arr[index]->has_data())
            return true;
    }
    return csi_index.is_set
	|| name.is_set
	|| handle.is_set
	|| csi_index_xr.is_set
	|| sdr_id.is_set
	|| peer_sdr_id.is_set
	|| repl_handle.is_set
	|| repl_fail_count.is_set
	|| item_state.is_set
	|| if_state.is_set
	|| rem_slice_attr.is_set
	|| rem_ip_attr.is_set
	|| (pub_data !=  nullptr && pub_data->has_data());
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::has_operation() const
{
    for (std::size_t index=0; index<local_ip_arr.len(); index++)
    {
        if(local_ip_arr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peer_ip_arr.len(); index++)
    {
        if(peer_ip_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(csi_index.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(csi_index_xr.yfilter)
	|| ydk::is_set(sdr_id.yfilter)
	|| ydk::is_set(peer_sdr_id.yfilter)
	|| ydk::is_set(repl_handle.yfilter)
	|| ydk::is_set(repl_fail_count.yfilter)
	|| ydk::is_set(item_state.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(rem_slice_attr.yfilter)
	|| ydk::is_set(rem_ip_attr.yfilter)
	|| (pub_data !=  nullptr && pub_data->has_operation());
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-name";
    ADD_KEY_TOKEN(csi_index, "csi-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csi_index.is_set || is_set(csi_index.yfilter)) leaf_name_data.push_back(csi_index.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (csi_index_xr.is_set || is_set(csi_index_xr.yfilter)) leaf_name_data.push_back(csi_index_xr.get_name_leafdata());
    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());
    if (peer_sdr_id.is_set || is_set(peer_sdr_id.yfilter)) leaf_name_data.push_back(peer_sdr_id.get_name_leafdata());
    if (repl_handle.is_set || is_set(repl_handle.yfilter)) leaf_name_data.push_back(repl_handle.get_name_leafdata());
    if (repl_fail_count.is_set || is_set(repl_fail_count.yfilter)) leaf_name_data.push_back(repl_fail_count.get_name_leafdata());
    if (item_state.is_set || is_set(item_state.yfilter)) leaf_name_data.push_back(item_state.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (rem_slice_attr.is_set || is_set(rem_slice_attr.yfilter)) leaf_name_data.push_back(rem_slice_attr.get_name_leafdata());
    if (rem_ip_attr.is_set || is_set(rem_ip_attr.yfilter)) leaf_name_data.push_back(rem_ip_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pub-data")
    {
        if(pub_data == nullptr)
        {
            pub_data = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData>();
        }
        return pub_data;
    }

    if(child_yang_name == "local-ip-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr>();
        c->parent = this;
        local_ip_arr.append(c);
        return c;
    }

    if(child_yang_name == "peer-ip-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr>();
        c->parent = this;
        peer_ip_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pub_data != nullptr)
    {
        children["pub-data"] = pub_data;
    }

    count = 0;
    for (auto c : local_ip_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : peer_ip_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csi-index")
    {
        csi_index = value;
        csi_index.value_namespace = name_space;
        csi_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csi-index-xr")
    {
        csi_index_xr = value;
        csi_index_xr.value_namespace = name_space;
        csi_index_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-sdr-id")
    {
        peer_sdr_id = value;
        peer_sdr_id.value_namespace = name_space;
        peer_sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repl-handle")
    {
        repl_handle = value;
        repl_handle.value_namespace = name_space;
        repl_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repl-fail-count")
    {
        repl_fail_count = value;
        repl_fail_count.value_namespace = name_space;
        repl_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-state")
    {
        item_state = value;
        item_state.value_namespace = name_space;
        item_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-slice-attr")
    {
        rem_slice_attr = value;
        rem_slice_attr.value_namespace = name_space;
        rem_slice_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-ip-attr")
    {
        rem_ip_attr = value;
        rem_ip_attr.value_namespace = name_space;
        rem_ip_attr.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csi-index")
    {
        csi_index.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "csi-index-xr")
    {
        csi_index_xr.yfilter = yfilter;
    }
    if(value_path == "sdr-id")
    {
        sdr_id.yfilter = yfilter;
    }
    if(value_path == "peer-sdr-id")
    {
        peer_sdr_id.yfilter = yfilter;
    }
    if(value_path == "repl-handle")
    {
        repl_handle.yfilter = yfilter;
    }
    if(value_path == "repl-fail-count")
    {
        repl_fail_count.yfilter = yfilter;
    }
    if(value_path == "item-state")
    {
        item_state.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "rem-slice-attr")
    {
        rem_slice_attr.yfilter = yfilter;
    }
    if(value_path == "rem-ip-attr")
    {
        rem_ip_attr.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pub-data" || name == "local-ip-arr" || name == "peer-ip-arr" || name == "csi-index" || name == "name" || name == "handle" || name == "csi-index-xr" || name == "sdr-id" || name == "peer-sdr-id" || name == "repl-handle" || name == "repl-fail-count" || name == "item-state" || name == "if-state" || name == "rem-slice-attr" || name == "rem-ip-attr")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::PubData()
    :
    csi_pic_arr{YType::uint64, "csi-pic-arr"}
        ,
    csi_info_arr(this, {})
{

    yang_name = "pub-data"; yang_parent_name = "interface-name"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::~PubData()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csi_info_arr.len(); index++)
    {
        if(csi_info_arr[index]->has_data())
            return true;
    }
    for (auto const & leaf : csi_pic_arr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::has_operation() const
{
    for (std::size_t index=0; index<csi_info_arr.len(); index++)
    {
        if(csi_info_arr[index]->has_operation())
            return true;
    }
    for (auto const & leaf : csi_pic_arr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(csi_pic_arr.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto csi_pic_arr_name_datas = csi_pic_arr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), csi_pic_arr_name_datas.begin(), csi_pic_arr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csi-info-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr>();
        c->parent = this;
        csi_info_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : csi_info_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csi-pic-arr")
    {
        csi_pic_arr.append(value);
    }
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csi-pic-arr")
    {
        csi_pic_arr.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csi-info-arr" || name == "csi-pic-arr")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::CsiInfoArr()
    :
    csi_index{YType::uint32, "csi-index"}
        ,
    ip_arr(this, {})
{

    yang_name = "csi-info-arr"; yang_parent_name = "pub-data"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::~CsiInfoArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_arr.len(); index++)
    {
        if(ip_arr[index]->has_data())
            return true;
    }
    return csi_index.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::has_operation() const
{
    for (std::size_t index=0; index<ip_arr.len(); index++)
    {
        if(ip_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(csi_index.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csi-info-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csi_index.is_set || is_set(csi_index.yfilter)) leaf_name_data.push_back(csi_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr>();
        c->parent = this;
        ip_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csi-index")
    {
        csi_index = value;
        csi_index.value_namespace = name_space;
        csi_index.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csi-index")
    {
        csi_index.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-arr" || name == "csi-index")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::IpArr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-arr"; yang_parent_name = "csi-info-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::~IpArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::LocalIpArr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-ip-arr"; yang_parent_name = "interface-name"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::~LocalIpArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ip-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::PeerIpArr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-ip-arr"; yang_parent_name = "interface-name"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::~PeerIpArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ip-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::Global::Global()
    :
    invmgr_conn_state{YType::enumeration, "invmgr-conn-state"},
    fail_over_timer_state{YType::enumeration, "fail-over-timer-state"},
    own_im_conn_state{YType::enumeration, "own-im-conn-state"},
    gdp_im_conn_state{YType::enumeration, "gdp-im-conn-state"},
    l3p_im_conn_state{YType::enumeration, "l3p-im-conn-state"}
{

    yang_name = "global"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::Global::~Global()
{
}

bool CrossSdrIntfMa::Nodes::Node::Global::has_data() const
{
    if (is_presence_container) return true;
    return invmgr_conn_state.is_set
	|| fail_over_timer_state.is_set
	|| own_im_conn_state.is_set
	|| gdp_im_conn_state.is_set
	|| l3p_im_conn_state.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invmgr_conn_state.yfilter)
	|| ydk::is_set(fail_over_timer_state.yfilter)
	|| ydk::is_set(own_im_conn_state.yfilter)
	|| ydk::is_set(gdp_im_conn_state.yfilter)
	|| ydk::is_set(l3p_im_conn_state.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invmgr_conn_state.is_set || is_set(invmgr_conn_state.yfilter)) leaf_name_data.push_back(invmgr_conn_state.get_name_leafdata());
    if (fail_over_timer_state.is_set || is_set(fail_over_timer_state.yfilter)) leaf_name_data.push_back(fail_over_timer_state.get_name_leafdata());
    if (own_im_conn_state.is_set || is_set(own_im_conn_state.yfilter)) leaf_name_data.push_back(own_im_conn_state.get_name_leafdata());
    if (gdp_im_conn_state.is_set || is_set(gdp_im_conn_state.yfilter)) leaf_name_data.push_back(gdp_im_conn_state.get_name_leafdata());
    if (l3p_im_conn_state.is_set || is_set(l3p_im_conn_state.yfilter)) leaf_name_data.push_back(l3p_im_conn_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invmgr-conn-state")
    {
        invmgr_conn_state = value;
        invmgr_conn_state.value_namespace = name_space;
        invmgr_conn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-over-timer-state")
    {
        fail_over_timer_state = value;
        fail_over_timer_state.value_namespace = name_space;
        fail_over_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "own-im-conn-state")
    {
        own_im_conn_state = value;
        own_im_conn_state.value_namespace = name_space;
        own_im_conn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdp-im-conn-state")
    {
        gdp_im_conn_state = value;
        gdp_im_conn_state.value_namespace = name_space;
        gdp_im_conn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3p-im-conn-state")
    {
        l3p_im_conn_state = value;
        l3p_im_conn_state.value_namespace = name_space;
        l3p_im_conn_state.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invmgr-conn-state")
    {
        invmgr_conn_state.yfilter = yfilter;
    }
    if(value_path == "fail-over-timer-state")
    {
        fail_over_timer_state.yfilter = yfilter;
    }
    if(value_path == "own-im-conn-state")
    {
        own_im_conn_state.yfilter = yfilter;
    }
    if(value_path == "gdp-im-conn-state")
    {
        gdp_im_conn_state.yfilter = yfilter;
    }
    if(value_path == "l3p-im-conn-state")
    {
        l3p_im_conn_state.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invmgr-conn-state" || name == "fail-over-timer-state" || name == "own-im-conn-state" || name == "gdp-im-conn-state" || name == "l3p-im-conn-state")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrIds()
    :
    sdr_id(this, {"sdr_id"})
{

    yang_name = "sdr-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::SdrIds::~SdrIds()
{
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::SdrIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::SdrIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::SdrIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::SdrIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::SdrId()
    :
    sdr_id{YType::uint32, "sdr-id"},
    sdr_id_xr{YType::uint32, "sdr-id-xr"},
    item_state{YType::enumeration, "item-state"}
        ,
    pub_data(std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData>())
{
    pub_data->parent = this;

    yang_name = "sdr-id"; yang_parent_name = "sdr-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::~SdrId()
{
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::has_data() const
{
    if (is_presence_container) return true;
    return sdr_id.is_set
	|| sdr_id_xr.is_set
	|| item_state.is_set
	|| (pub_data !=  nullptr && pub_data->has_data());
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_id.yfilter)
	|| ydk::is_set(sdr_id_xr.yfilter)
	|| ydk::is_set(item_state.yfilter)
	|| (pub_data !=  nullptr && pub_data->has_operation());
}

std::string CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr_id, "sdr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());
    if (sdr_id_xr.is_set || is_set(sdr_id_xr.yfilter)) leaf_name_data.push_back(sdr_id_xr.get_name_leafdata());
    if (item_state.is_set || is_set(item_state.yfilter)) leaf_name_data.push_back(item_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pub-data")
    {
        if(pub_data == nullptr)
        {
            pub_data = std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData>();
        }
        return pub_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pub_data != nullptr)
    {
        children["pub-data"] = pub_data;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-id-xr")
    {
        sdr_id_xr = value;
        sdr_id_xr.value_namespace = name_space;
        sdr_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-state")
    {
        item_state = value;
        item_state.value_namespace = name_space;
        item_state.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-id")
    {
        sdr_id.yfilter = yfilter;
    }
    if(value_path == "sdr-id-xr")
    {
        sdr_id_xr.yfilter = yfilter;
    }
    if(value_path == "item-state")
    {
        item_state.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pub-data" || name == "sdr-id" || name == "sdr-id-xr" || name == "item-state")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::PubData()
    :
    csi_pic_arr{YType::uint64, "csi-pic-arr"}
        ,
    csi_info_arr(this, {})
{

    yang_name = "pub-data"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::~PubData()
{
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csi_info_arr.len(); index++)
    {
        if(csi_info_arr[index]->has_data())
            return true;
    }
    for (auto const & leaf : csi_pic_arr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::has_operation() const
{
    for (std::size_t index=0; index<csi_info_arr.len(); index++)
    {
        if(csi_info_arr[index]->has_operation())
            return true;
    }
    for (auto const & leaf : csi_pic_arr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(csi_pic_arr.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto csi_pic_arr_name_datas = csi_pic_arr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), csi_pic_arr_name_datas.begin(), csi_pic_arr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csi-info-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr>();
        c->parent = this;
        csi_info_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : csi_info_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csi-pic-arr")
    {
        csi_pic_arr.append(value);
    }
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csi-pic-arr")
    {
        csi_pic_arr.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csi-info-arr" || name == "csi-pic-arr")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::CsiInfoArr()
    :
    csi_index{YType::uint32, "csi-index"}
        ,
    ip_arr(this, {})
{

    yang_name = "csi-info-arr"; yang_parent_name = "pub-data"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::~CsiInfoArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_arr.len(); index++)
    {
        if(ip_arr[index]->has_data())
            return true;
    }
    return csi_index.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::has_operation() const
{
    for (std::size_t index=0; index<ip_arr.len(); index++)
    {
        if(ip_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(csi_index.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csi-info-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csi_index.is_set || is_set(csi_index.yfilter)) leaf_name_data.push_back(csi_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-arr")
    {
        auto c = std::make_shared<CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr>();
        c->parent = this;
        ip_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csi-index")
    {
        csi_index = value;
        csi_index.value_namespace = name_space;
        csi_index.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csi-index")
    {
        csi_index.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-arr" || name == "csi-index")
        return true;
    return false;
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::IpArr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-arr"; yang_parent_name = "csi-info-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::~IpArr()
{
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

const Enum::YLeaf CsiMaFoTimerState::csi_ma_fo_default {1, "csi-ma-fo-default"};
const Enum::YLeaf CsiMaFoTimerState::csi_ma_fo_push_self_data {2, "csi-ma-fo-push-self-data"};
const Enum::YLeaf CsiMaFoTimerState::csi_ma_fo_sync_rem_data {3, "csi-ma-fo-sync-rem-data"};
const Enum::YLeaf CsiMaFoTimerState::csi_ma_fo_synced {4, "csi-ma-fo-synced"};
const Enum::YLeaf CsiMaFoTimerState::csi_ma_fo_max {5, "csi-ma-fo-max"};

const Enum::YLeaf CsiMaAfi::csi_afi_ipv4 {1, "csi-afi-ipv4"};
const Enum::YLeaf CsiMaAfi::csi_afi_ipv6 {2, "csi-afi-ipv6"};
const Enum::YLeaf CsiMaAfi::csi_afi_invalid {3, "csi-afi-invalid"};

const Enum::YLeaf CsiMaItemState::csi_ma_item_create_req {0, "csi-ma-item-create-req"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_attr_req {1, "csi-ma-item-attr-req"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_valid {2, "csi-ma-item-valid"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_synced {3, "csi-ma-item-synced"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_mark_ed {4, "csi-ma-item-mark-ed"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_invalid {5, "csi-ma-item-invalid"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_delete_req {6, "csi-ma-item-delete-req"};
const Enum::YLeaf CsiMaItemState::csi_ma_item_max_states {7, "csi-ma-item-max-states"};

const Enum::YLeaf CsiMaConnState::csi_ma_conn_default {0, "csi-ma-conn-default"};
const Enum::YLeaf CsiMaConnState::csi_ma_conn_closed {1, "csi-ma-conn-closed"};
const Enum::YLeaf CsiMaConnState::csi_ma_conn_opened {2, "csi-ma-conn-opened"};
const Enum::YLeaf CsiMaConnState::csi_ma_conn_synced {3, "csi-ma-conn-synced"};
const Enum::YLeaf CsiMaConnState::csi_ma_conn_max {4, "csi-ma-conn-max"};


}
}

