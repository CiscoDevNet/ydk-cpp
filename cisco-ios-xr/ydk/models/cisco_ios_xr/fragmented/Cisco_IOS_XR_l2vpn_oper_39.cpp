
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_39.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

GenericInterfaceListV2::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    generic_interface_lists(std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists>())
{
    generic_interface_lists->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Nodes::Node::~Node()
{
}

bool GenericInterfaceListV2::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_data());
}

bool GenericInterfaceListV2::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_operation());
}

std::string GenericInterfaceListV2::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-lists")
    {
        if(generic_interface_lists == nullptr)
        {
            generic_interface_lists = std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists>();
        }
        return generic_interface_lists;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_interface_lists != nullptr)
    {
        _children["generic-interface-lists"] = generic_interface_lists;
    }

    return _children;
}

void GenericInterfaceListV2::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-lists" || name == "node-id")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceLists()
    :
    generic_interface_list(this, {"generic_interface_list_name"})
{

    yang_name = "generic-interface-lists"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-list")
    {
        auto ent_ = std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList>();
        ent_->parent = this;
        generic_interface_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : generic_interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    items{YType::uint32, "items"},
    is_provisioned{YType::boolean, "is-provisioned"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
        ,
    interface(this, {})
{

    yang_name = "generic-interface-list"; yang_parent_name = "generic-interface-lists"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::~GenericInterfaceList()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| interface_list_name.is_set
	|| interface_list_id.is_set
	|| items.is_set
	|| is_provisioned.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";
    ADD_KEY_TOKEN(generic_interface_list_name, "generic-interface-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-name" || name == "interface-list-id" || name == "items" || name == "is-provisioned" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::Standby()
    :
    generic_interface_lists(std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaceLists>())
{
    generic_interface_lists->parent = this;

    yang_name = "standby"; yang_parent_name = "generic-interface-list-v2"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Standby::~Standby()
{
}

bool GenericInterfaceListV2::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (generic_interface_lists !=  nullptr && generic_interface_lists->has_data());
}

bool GenericInterfaceListV2::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_operation());
}

std::string GenericInterfaceListV2::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-lists")
    {
        if(generic_interface_lists == nullptr)
        {
            generic_interface_lists = std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaceLists>();
        }
        return generic_interface_lists;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_interface_lists != nullptr)
    {
        _children["generic-interface-lists"] = generic_interface_lists;
    }

    return _children;
}

void GenericInterfaceListV2::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-lists")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceLists()
    :
    generic_interface_list(this, {"generic_interface_list_name"})
{

    yang_name = "generic-interface-lists"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Standby::GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Standby::GenericInterfaceLists::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Standby::GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::GenericInterfaceLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Standby::GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-list")
    {
        auto ent_ = std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList>();
        ent_->parent = this;
        generic_interface_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Standby::GenericInterfaceLists::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : generic_interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GenericInterfaceListV2::Standby::GenericInterfaceLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Standby::GenericInterfaceLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    items{YType::uint32, "items"},
    is_provisioned{YType::boolean, "is-provisioned"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
        ,
    interface(this, {})
{

    yang_name = "generic-interface-list"; yang_parent_name = "generic-interface-lists"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::~GenericInterfaceList()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| interface_list_name.is_set
	|| interface_list_id.is_set
	|| items.is_set
	|| is_provisioned.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/standby/generic-interface-lists/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";
    ADD_KEY_TOKEN(generic_interface_list_name, "generic-interface-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-name" || name == "interface-list-id" || name == "items" || name == "is-provisioned" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Active::Active()
    :
    generic_interface_lists(std::make_shared<GenericInterfaceListV2::Active::GenericInterfaceLists>())
{
    generic_interface_lists->parent = this;

    yang_name = "active"; yang_parent_name = "generic-interface-list-v2"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Active::~Active()
{
}

bool GenericInterfaceListV2::Active::has_data() const
{
    if (is_presence_container) return true;
    return (generic_interface_lists !=  nullptr && generic_interface_lists->has_data());
}

bool GenericInterfaceListV2::Active::has_operation() const
{
    return is_set(yfilter)
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_operation());
}

std::string GenericInterfaceListV2::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-lists")
    {
        if(generic_interface_lists == nullptr)
        {
            generic_interface_lists = std::make_shared<GenericInterfaceListV2::Active::GenericInterfaceLists>();
        }
        return generic_interface_lists;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_interface_lists != nullptr)
    {
        _children["generic-interface-lists"] = generic_interface_lists;
    }

    return _children;
}

void GenericInterfaceListV2::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-lists")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceLists()
    :
    generic_interface_list(this, {"generic_interface_list_name"})
{

    yang_name = "generic-interface-lists"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Active::GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Active::GenericInterfaceLists::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/active/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Active::GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::GenericInterfaceLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Active::GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-list")
    {
        auto ent_ = std::make_shared<GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList>();
        ent_->parent = this;
        generic_interface_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Active::GenericInterfaceLists::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : generic_interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GenericInterfaceListV2::Active::GenericInterfaceLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Active::GenericInterfaceLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    items{YType::uint32, "items"},
    is_provisioned{YType::boolean, "is-provisioned"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
        ,
    interface(this, {})
{

    yang_name = "generic-interface-list"; yang_parent_name = "generic-interface-lists"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::~GenericInterfaceList()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| interface_list_name.is_set
	|| interface_list_id.is_set
	|| items.is_set
	|| is_provisioned.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/active/generic-interface-lists/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";
    ADD_KEY_TOKEN(generic_interface_list_name, "generic-interface-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-name" || name == "interface-list-id" || name == "items" || name == "is-provisioned" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
        return true;
    return false;
}


}
}

