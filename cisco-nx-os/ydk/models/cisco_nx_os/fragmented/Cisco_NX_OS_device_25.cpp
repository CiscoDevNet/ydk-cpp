
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_25.hpp"
#include "Cisco_NX_OS_device_26.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::PortMemberList()
    :
    seqnum{YType::uint32, "seqNum"},
    portop{YType::uint8, "portOp"},
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"},
    configstatus{YType::uint8, "configStatus"},
    usersetbit{YType::uint64, "userSetBit"}
{

    yang_name = "PortMember-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::~PortMemberList()
{
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| portop.is_set
	|| port1.is_set
	|| port2.is_set
	|| configstatus.is_set
	|| usersetbit.is_set;
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(portop.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(usersetbit.yfilter);
}

std::string System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PortMember-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (portop.is_set || is_set(portop.yfilter)) leaf_name_data.push_back(portop.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portOp")
    {
        portop = value;
        portop.value_namespace = name_space;
        portop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "portOp")
    {
        portop.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "portOp" || name == "port1" || name == "port2" || name == "configStatus" || name == "userSetBit")
        return true;
    return false;
}

System::AclItems::VlanItems::VlanItems()
    :
    vlanacl_list(this, {"name"})
{

    yang_name = "vlan-items"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::VlanItems::~VlanItems()
{
}

bool System::AclItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanacl_list.len(); index++)
    {
        if(vlanacl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlanacl_list.len(); index++)
    {
        if(vlanacl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLANACL-list")
    {
        auto c = std::make_shared<System::AclItems::VlanItems::VLANACLList>();
        c->parent = this;
        vlanacl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanacl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VLANACL-list")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::VLANACLList()
    :
    name{YType::str, "name"},
    maxseq{YType::uint32, "maxseq"}
        ,
    seq_items(std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems>())
    , vlanlist_items(std::make_shared<System::AclItems::VlanItems::VLANACLList::VlanlistItems>())
{
    seq_items->parent = this;
    vlanlist_items->parent = this;

    yang_name = "VLANACL-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::VlanItems::VLANACLList::~VLANACLList()
{
}

bool System::AclItems::VlanItems::VLANACLList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| maxseq.is_set
	|| (seq_items !=  nullptr && seq_items->has_data())
	|| (vlanlist_items !=  nullptr && vlanlist_items->has_data());
}

bool System::AclItems::VlanItems::VLANACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(maxseq.yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation())
	|| (vlanlist_items !=  nullptr && vlanlist_items->has_operation());
}

std::string System::AclItems::VlanItems::VLANACLList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::VlanItems::VLANACLList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VLANACL-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (maxseq.is_set || is_set(maxseq.yfilter)) leaf_name_data.push_back(maxseq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems>();
        }
        return seq_items;
    }

    if(child_yang_name == "vlanlist-items")
    {
        if(vlanlist_items == nullptr)
        {
            vlanlist_items = std::make_shared<System::AclItems::VlanItems::VLANACLList::VlanlistItems>();
        }
        return vlanlist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    if(vlanlist_items != nullptr)
    {
        children["vlanlist-items"] = vlanlist_items;
    }

    return children;
}

void System::AclItems::VlanItems::VLANACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxseq")
    {
        maxseq = value;
        maxseq.value_namespace = name_space;
        maxseq.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::VlanItems::VLANACLList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "maxseq")
    {
        maxseq.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "vlanlist-items" || name == "name" || name == "maxseq")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::SeqItems::SeqItems()
    :
    vlanseq_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "VLANACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::VlanItems::VLANACLList::SeqItems::~SeqItems()
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanseq_list.len(); index++)
    {
        if(vlanseq_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<vlanseq_list.len(); index++)
    {
        if(vlanseq_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::VlanItems::VLANACLList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLANSeq-list")
    {
        auto c = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList>();
        c->parent = this;
        vlanseq_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanseq_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VLANSeq-list")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::VLANSeqList()
    :
    seqnum{YType::uint32, "seqNum"},
    peracestatistics{YType::uint8, "perACEStatistics"}
        ,
    match_items(std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems>())
    , action_items(std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems>())
{
    match_items->parent = this;
    action_items->parent = this;

    yang_name = "VLANSeq-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::~VLANSeqList()
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| peracestatistics.is_set
	|| (match_items !=  nullptr && match_items->has_data())
	|| (action_items !=  nullptr && action_items->has_data());
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| (match_items !=  nullptr && match_items->has_operation())
	|| (action_items !=  nullptr && action_items->has_operation());
}

std::string System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VLANSeq-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-items")
    {
        if(match_items == nullptr)
        {
            match_items = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems>();
        }
        return match_items;
    }

    if(child_yang_name == "action-items")
    {
        if(action_items == nullptr)
        {
            action_items = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems>();
        }
        return action_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match_items != nullptr)
    {
        children["match-items"] = match_items;
    }

    if(action_items != nullptr)
    {
        children["action-items"] = action_items;
    }

    return children;
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics = value;
        peracestatistics.value_namespace = name_space;
        peracestatistics.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-items" || name == "action-items" || name == "seqNum" || name == "perACEStatistics")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::MatchItems()
    :
    vlanaclmatch_list(this, {"acltype", "aclname"})
{

    yang_name = "match-items"; yang_parent_name = "VLANSeq-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::~MatchItems()
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanaclmatch_list.len(); index++)
    {
        if(vlanaclmatch_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::has_operation() const
{
    for (std::size_t index=0; index<vlanaclmatch_list.len(); index++)
    {
        if(vlanaclmatch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLANACLMatch-list")
    {
        auto c = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList>();
        c->parent = this;
        vlanaclmatch_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanaclmatch_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VLANACLMatch-list")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::VLANACLMatchList()
    :
    acltype{YType::uint16, "acltype"},
    aclname{YType::str, "aclname"}
{

    yang_name = "VLANACLMatch-list"; yang_parent_name = "match-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::~VLANACLMatchList()
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::has_data() const
{
    if (is_presence_container) return true;
    return acltype.is_set
	|| aclname.is_set;
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acltype.yfilter)
	|| ydk::is_set(aclname.yfilter);
}

std::string System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VLANACLMatch-list";
    ADD_KEY_TOKEN(acltype, "acltype");
    ADD_KEY_TOKEN(aclname, "aclname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acltype.is_set || is_set(acltype.yfilter)) leaf_name_data.push_back(acltype.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acltype")
    {
        acltype = value;
        acltype.value_namespace = name_space;
        acltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclname")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acltype")
    {
        acltype.yfilter = yfilter;
    }
    if(value_path == "aclname")
    {
        aclname.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acltype" || name == "aclname")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::ActionItems()
    :
    actiontype{YType::enumeration, "actiontype"},
    log{YType::uint8, "log"},
    redirectintf{YType::str, "redirectintf"}
{

    yang_name = "action-items"; yang_parent_name = "VLANSeq-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::~ActionItems()
{
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::has_data() const
{
    if (is_presence_container) return true;
    return actiontype.is_set
	|| log.is_set
	|| redirectintf.is_set;
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actiontype.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(redirectintf.yfilter);
}

std::string System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actiontype.is_set || is_set(actiontype.yfilter)) leaf_name_data.push_back(actiontype.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (redirectintf.is_set || is_set(redirectintf.yfilter)) leaf_name_data.push_back(redirectintf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actiontype")
    {
        actiontype = value;
        actiontype.value_namespace = name_space;
        actiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirectintf")
    {
        redirectintf = value;
        redirectintf.value_namespace = name_space;
        redirectintf.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actiontype")
    {
        actiontype.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "redirectintf")
    {
        redirectintf.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actiontype" || name == "log" || name == "redirectintf")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::VlanlistItems::VlanlistItems()
    :
    list{YType::str, "list"},
    operation_{YType::uint8, "operation"},
    listoper{YType::str, "listoper"},
    listerr{YType::str, "listerr"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "vlanlist-items"; yang_parent_name = "VLANACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::VlanItems::VLANACLList::VlanlistItems::~VlanlistItems()
{
}

bool System::AclItems::VlanItems::VLANACLList::VlanlistItems::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set
	|| operation_.is_set
	|| listoper.is_set
	|| listerr.is_set
	|| timestamp.is_set;
}

bool System::AclItems::VlanItems::VLANACLList::VlanlistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(listoper.yfilter)
	|| ydk::is_set(listerr.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::AclItems::VlanItems::VLANACLList::VlanlistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanlist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::VlanItems::VLANACLList::VlanlistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (listoper.is_set || is_set(listoper.yfilter)) leaf_name_data.push_back(listoper.get_name_leafdata());
    if (listerr.is_set || is_set(listerr.yfilter)) leaf_name_data.push_back(listerr.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::VlanItems::VLANACLList::VlanlistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::VlanItems::VLANACLList::VlanlistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::VlanItems::VLANACLList::VlanlistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listoper")
    {
        listoper = value;
        listoper.value_namespace = name_space;
        listoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listerr")
    {
        listerr = value;
        listerr.value_namespace = name_space;
        listerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::VlanItems::VLANACLList::VlanlistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "listoper")
    {
        listoper.yfilter = yfilter;
    }
    if(value_path == "listerr")
    {
        listerr.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::VlanlistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "operation" || name == "listoper" || name == "listerr" || name == "timeStamp")
        return true;
    return false;
}

System::AclItems::MacItems::MacItems()
    :
    statclear_items(std::make_shared<System::AclItems::MacItems::StatClearItems>())
    , policy_items(std::make_shared<System::AclItems::MacItems::PolicyItems>())
    , name_items(std::make_shared<System::AclItems::MacItems::NameItems>())
{
    statclear_items->parent = this;
    policy_items->parent = this;
    name_items->parent = this;

    yang_name = "mac-items"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::~MacItems()
{
}

bool System::AclItems::MacItems::has_data() const
{
    if (is_presence_container) return true;
    return (statclear_items !=  nullptr && statclear_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data());
}

bool System::AclItems::MacItems::has_operation() const
{
    return is_set(yfilter)
	|| (statclear_items !=  nullptr && statclear_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::AclItems::MacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statClear-items")
    {
        if(statclear_items == nullptr)
        {
            statclear_items = std::make_shared<System::AclItems::MacItems::StatClearItems>();
        }
        return statclear_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::AclItems::MacItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::AclItems::MacItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statclear_items != nullptr)
    {
        children["statClear-items"] = statclear_items;
    }

    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    if(name_items != nullptr)
    {
        children["name-items"] = name_items;
    }

    return children;
}

void System::AclItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "policy-items" || name == "name-items")
        return true;
    return false;
}

System::AclItems::MacItems::StatClearItems::StatClearItems()
    :
    name{YType::str, "name"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "statClear-items"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::StatClearItems::~StatClearItems()
{
}

bool System::AclItems::MacItems::StatClearItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| timestamp.is_set;
}

bool System::AclItems::MacItems::StatClearItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::AclItems::MacItems::StatClearItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::StatClearItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statClear-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::StatClearItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::StatClearItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::StatClearItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::StatClearItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "timeStamp")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::PolicyItems()
    :
    ingress_items(std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems>())
    , egress_items(std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems>())
{
    ingress_items->parent = this;
    egress_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::~PolicyItems()
{
}

bool System::AclItems::MacItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (ingress_items !=  nullptr && ingress_items->has_data())
	|| (egress_items !=  nullptr && egress_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (ingress_items !=  nullptr && ingress_items->has_operation())
	|| (egress_items !=  nullptr && egress_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-items")
    {
        if(ingress_items == nullptr)
        {
            ingress_items = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems>();
        }
        return ingress_items;
    }

    if(child_yang_name == "egress-items")
    {
        if(egress_items == nullptr)
        {
            egress_items = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems>();
        }
        return egress_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ingress_items != nullptr)
    {
        children["ingress-items"] = ingress_items;
    }

    if(egress_items != nullptr)
    {
        children["egress-items"] = egress_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-items" || name == "egress-items")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IngressItems()
    :
    intf_items(std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems>())
    , vty_items(std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems>())
{
    intf_items->parent = this;
    vty_items->parent = this;

    yang_name = "ingress-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::~IngressItems()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::IngressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "ingress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::~IntfItems()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/ingress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_>())
    , portacl_items(std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems>())
{
    acl_items->parent = this;
    portacl_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::~IfList()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (portacl_items !=  nullptr && portacl_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/ingress-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_>();
        }
        return acl_items;
    }

    if(child_yang_name == "portacl-items")
    {
        if(portacl_items == nullptr)
        {
            portacl_items = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems>();
        }
        return portacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        children["portacl-items"] = portacl_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::~AclItems_()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "portacl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::~PortaclItems()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::VtyItems()
    :
    acl_items(std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_>())
{
    acl_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "ingress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::~VtyItems()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/ingress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::~AclItems_()
{
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/ingress-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::EgressItems()
    :
    intf_items(std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems>())
    , vty_items(std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems>())
{
    intf_items->parent = this;
    vty_items->parent = this;

    yang_name = "egress-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::~EgressItems()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::EgressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "egress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::~IntfItems()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/egress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_>())
    , portacl_items(std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems>())
{
    acl_items->parent = this;
    portacl_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::~IfList()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (portacl_items !=  nullptr && portacl_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/egress-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_>();
        }
        return acl_items;
    }

    if(child_yang_name == "portacl-items")
    {
        if(portacl_items == nullptr)
        {
            portacl_items = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems>();
        }
        return portacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        children["portacl-items"] = portacl_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::~AclItems_()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "portacl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::~PortaclItems()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::VtyItems()
    :
    acl_items(std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_>())
{
    acl_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "egress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::~VtyItems()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/egress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::~AclItems_()
{
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/policy-items/egress-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::NameItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::NameItems::~NameItems()
{
}

bool System::AclItems::MacItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::MacItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::MacItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-list")
    {
        auto c = std::make_shared<System::AclItems::MacItems::NameItems::ACLList>();
        c->parent = this;
        acl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::MacItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACL-list")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::ACLList()
    :
    name{YType::str, "name"},
    peracestatistics{YType::uint8, "perACEStatistics"},
    configstatus{YType::uint32, "configStatus"}
        ,
    reseq_items(std::make_shared<System::AclItems::MacItems::NameItems::ACLList::ReseqItems>())
    , seq_items(std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems>())
{
    reseq_items->parent = this;
    seq_items->parent = this;

    yang_name = "ACL-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::MacItems::NameItems::ACLList::~ACLList()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data())
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::MacItems::NameItems::ACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (reseq_items !=  nullptr && reseq_items->has_operation())
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::MacItems::NameItems::ACLList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/mac-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::MacItems::NameItems::ACLList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reseq-items")
    {
        if(reseq_items == nullptr)
        {
            reseq_items = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::ReseqItems>();
        }
        return reseq_items;
    }

    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reseq_items != nullptr)
    {
        children["reseq-items"] = reseq_items;
    }

    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics = value;
        peracestatistics.value_namespace = name_space;
        peracestatistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "seq-items" || name == "name" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems()
    :
    start{YType::uint32, "start"},
    step{YType::uint32, "step"},
    reseqdone{YType::boolean, "reseqDone"}
        ,
    reseq_items(std::make_shared<System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_>())
{
    reseq_items->parent = this;

    yang_name = "reseq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::~ReseqItems()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| step.is_set
	|| reseqdone.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data());
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(step.yfilter)
	|| ydk::is_set(reseqdone.yfilter)
	|| (reseq_items !=  nullptr && reseq_items->has_operation());
}

std::string System::AclItems::MacItems::NameItems::ACLList::ReseqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reseq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::ReseqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (step.is_set || is_set(step.yfilter)) leaf_name_data.push_back(step.get_name_leafdata());
    if (reseqdone.is_set || is_set(reseqdone.yfilter)) leaf_name_data.push_back(reseqdone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reseq-items")
    {
        if(reseq_items == nullptr)
        {
            reseq_items = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_>();
        }
        return reseq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reseq_items != nullptr)
    {
        children["reseq-items"] = reseq_items;
    }

    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::ReseqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "step")
    {
        step = value;
        step.value_namespace = name_space;
        step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reseqDone")
    {
        reseqdone = value;
        reseqdone.value_namespace = name_space;
        reseqdone.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::ReseqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "step")
    {
        step.yfilter = yfilter;
    }
    if(value_path == "reseqDone")
    {
        reseqdone.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "start" || name == "step" || name == "reseqDone")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqItems_()
    :
    reseqresultentry_list(this, {"beforeseq"})
{

    yang_name = "reseq-items"; yang_parent_name = "reseq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::~ReseqItems_()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reseqresultentry_list.len(); index++)
    {
        if(reseqresultentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::has_operation() const
{
    for (std::size_t index=0; index<reseqresultentry_list.len(); index++)
    {
        if(reseqresultentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reseq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReseqResultEntry-list")
    {
        auto c = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList>();
        c->parent = this;
        reseqresultentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reseqresultentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReseqResultEntry-list")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::ReseqResultEntryList()
    :
    beforeseq{YType::uint32, "beforeSeq"},
    afterseq{YType::uint32, "afterSeq"}
{

    yang_name = "ReseqResultEntry-list"; yang_parent_name = "reseq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::~ReseqResultEntryList()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_data() const
{
    if (is_presence_container) return true;
    return beforeseq.is_set
	|| afterseq.is_set;
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(beforeseq.yfilter)
	|| ydk::is_set(afterseq.yfilter);
}

std::string System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReseqResultEntry-list";
    ADD_KEY_TOKEN(beforeseq, "beforeSeq");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (beforeseq.is_set || is_set(beforeseq.yfilter)) leaf_name_data.push_back(beforeseq.get_name_leafdata());
    if (afterseq.is_set || is_set(afterseq.yfilter)) leaf_name_data.push_back(afterseq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "beforeSeq")
    {
        beforeseq = value;
        beforeseq.value_namespace = name_space;
        beforeseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afterSeq")
    {
        afterseq = value;
        afterseq.value_namespace = name_space;
        afterseq.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "beforeSeq")
    {
        beforeseq.yfilter = yfilter;
    }
    if(value_path == "afterSeq")
    {
        afterseq.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "beforeSeq" || name == "afterSeq")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SeqItems()
    :
    seq_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::~SeqItems()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<seq_list.len(); index++)
    {
        if(seq_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<seq_list.len(); index++)
    {
        if(seq_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::MacItems::NameItems::ACLList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SEQ-list")
    {
        auto c = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList>();
        c->parent = this;
        seq_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : seq_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SEQ-list")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::SEQList()
    :
    seqnum{YType::uint32, "seqNum"}
        ,
    ace_items(std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems>())
    , remark_items(std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems>())
{
    ace_items->parent = this;
    remark_items->parent = this;

    yang_name = "SEQ-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::~SEQList()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| (ace_items !=  nullptr && ace_items->has_data())
	|| (remark_items !=  nullptr && remark_items->has_data());
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| (ace_items !=  nullptr && ace_items->has_operation())
	|| (remark_items !=  nullptr && remark_items->has_operation());
}

std::string System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SEQ-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-items")
    {
        if(ace_items == nullptr)
        {
            ace_items = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems>();
        }
        return ace_items;
    }

    if(child_yang_name == "remark-items")
    {
        if(remark_items == nullptr)
        {
            remark_items = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems>();
        }
        return remark_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ace_items != nullptr)
    {
        children["ace-items"] = ace_items;
    }

    if(remark_items != nullptr)
    {
        children["remark-items"] = remark_items;
    }

    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-items" || name == "remark-items" || name == "seqNum")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::AceItems()
    :
    protocol{YType::uint32, "protocol"},
    cos{YType::uint8, "cos"},
    redirect{YType::str, "redirect"},
    timerange{YType::str, "timeRange"},
    vlan{YType::uint32, "vlan"},
    erspandscp{YType::uint8, "erspanDscp"},
    erspangre{YType::uint32, "erspanGre"},
    usersetbit{YType::uint64, "userSetBit"},
    action{YType::enumeration, "action"},
    srcprefix{YType::str, "srcPrefix"},
    srcprefixmask{YType::str, "srcPrefixMask"},
    dstprefix{YType::str, "dstPrefix"},
    dstprefixmask{YType::str, "dstPrefixMask"},
    packets{YType::uint64, "packets"}
{

    yang_name = "ace-items"; yang_parent_name = "SEQ-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::~AceItems()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| cos.is_set
	|| redirect.is_set
	|| timerange.is_set
	|| vlan.is_set
	|| erspandscp.is_set
	|| erspangre.is_set
	|| usersetbit.is_set
	|| action.is_set
	|| srcprefix.is_set
	|| srcprefixmask.is_set
	|| dstprefix.is_set
	|| dstprefixmask.is_set
	|| packets.is_set;
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(timerange.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(erspandscp.yfilter)
	|| ydk::is_set(erspangre.yfilter)
	|| ydk::is_set(usersetbit.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(srcprefix.yfilter)
	|| ydk::is_set(srcprefixmask.yfilter)
	|| ydk::is_set(dstprefix.yfilter)
	|| ydk::is_set(dstprefixmask.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (timerange.is_set || is_set(timerange.yfilter)) leaf_name_data.push_back(timerange.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (erspandscp.is_set || is_set(erspandscp.yfilter)) leaf_name_data.push_back(erspandscp.get_name_leafdata());
    if (erspangre.is_set || is_set(erspangre.yfilter)) leaf_name_data.push_back(erspangre.get_name_leafdata());
    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (srcprefix.is_set || is_set(srcprefix.yfilter)) leaf_name_data.push_back(srcprefix.get_name_leafdata());
    if (srcprefixmask.is_set || is_set(srcprefixmask.yfilter)) leaf_name_data.push_back(srcprefixmask.get_name_leafdata());
    if (dstprefix.is_set || is_set(dstprefix.yfilter)) leaf_name_data.push_back(dstprefix.get_name_leafdata());
    if (dstprefixmask.is_set || is_set(dstprefixmask.yfilter)) leaf_name_data.push_back(dstprefixmask.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeRange")
    {
        timerange = value;
        timerange.value_namespace = name_space;
        timerange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erspanDscp")
    {
        erspandscp = value;
        erspandscp.value_namespace = name_space;
        erspandscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erspanGre")
    {
        erspangre = value;
        erspangre.value_namespace = name_space;
        erspangre.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefix")
    {
        srcprefix = value;
        srcprefix.value_namespace = name_space;
        srcprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefixMask")
    {
        srcprefixmask = value;
        srcprefixmask.value_namespace = name_space;
        srcprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefix")
    {
        dstprefix = value;
        dstprefix.value_namespace = name_space;
        dstprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefixMask")
    {
        dstprefixmask = value;
        dstprefixmask.value_namespace = name_space;
        dstprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "timeRange")
    {
        timerange.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "erspanDscp")
    {
        erspandscp.yfilter = yfilter;
    }
    if(value_path == "erspanGre")
    {
        erspangre.yfilter = yfilter;
    }
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "srcPrefix")
    {
        srcprefix.yfilter = yfilter;
    }
    if(value_path == "srcPrefixMask")
    {
        srcprefixmask.yfilter = yfilter;
    }
    if(value_path == "dstPrefix")
    {
        dstprefix.yfilter = yfilter;
    }
    if(value_path == "dstPrefixMask")
    {
        dstprefixmask.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "cos" || name == "redirect" || name == "timeRange" || name == "vlan" || name == "erspanDscp" || name == "erspanGre" || name == "userSetBit" || name == "action" || name == "srcPrefix" || name == "srcPrefixMask" || name == "dstPrefix" || name == "dstPrefixMask" || name == "packets")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::RemarkItems()
    :
    seqnum{YType::uint32, "seqNum"},
    remark{YType::str, "remark"}
{

    yang_name = "remark-items"; yang_parent_name = "SEQ-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::~RemarkItems()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| remark.is_set;
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(remark.yfilter);
}

std::string System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remark-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "remark")
        return true;
    return false;
}

System::AclItems::Ipv4Items::Ipv4Items()
    :
    statclear_items(std::make_shared<System::AclItems::Ipv4Items::StatClearItems>())
    , policy_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems>())
    , name_items(std::make_shared<System::AclItems::Ipv4Items::NameItems>())
    , oname_items(std::make_shared<System::AclItems::Ipv4Items::ONameItems>())
{
    statclear_items->parent = this;
    policy_items->parent = this;
    name_items->parent = this;
    oname_items->parent = this;

    yang_name = "ipv4-items"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::~Ipv4Items()
{
}

bool System::AclItems::Ipv4Items::has_data() const
{
    if (is_presence_container) return true;
    return (statclear_items !=  nullptr && statclear_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data())
	|| (oname_items !=  nullptr && oname_items->has_data());
}

bool System::AclItems::Ipv4Items::has_operation() const
{
    return is_set(yfilter)
	|| (statclear_items !=  nullptr && statclear_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (name_items !=  nullptr && name_items->has_operation())
	|| (oname_items !=  nullptr && oname_items->has_operation());
}

std::string System::AclItems::Ipv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statClear-items")
    {
        if(statclear_items == nullptr)
        {
            statclear_items = std::make_shared<System::AclItems::Ipv4Items::StatClearItems>();
        }
        return statclear_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::AclItems::Ipv4Items::NameItems>();
        }
        return name_items;
    }

    if(child_yang_name == "oName-items")
    {
        if(oname_items == nullptr)
        {
            oname_items = std::make_shared<System::AclItems::Ipv4Items::ONameItems>();
        }
        return oname_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statclear_items != nullptr)
    {
        children["statClear-items"] = statclear_items;
    }

    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    if(name_items != nullptr)
    {
        children["name-items"] = name_items;
    }

    if(oname_items != nullptr)
    {
        children["oName-items"] = oname_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "policy-items" || name == "name-items" || name == "oName-items")
        return true;
    return false;
}

System::AclItems::Ipv4Items::StatClearItems::StatClearItems()
    :
    name{YType::str, "name"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "statClear-items"; yang_parent_name = "ipv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::StatClearItems::~StatClearItems()
{
}

bool System::AclItems::Ipv4Items::StatClearItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| timestamp.is_set;
}

bool System::AclItems::Ipv4Items::StatClearItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::AclItems::Ipv4Items::StatClearItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::StatClearItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statClear-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::StatClearItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::StatClearItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::StatClearItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::StatClearItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "timeStamp")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::PolicyItems()
    :
    ingress_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems>())
    , egress_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems>())
{
    ingress_items->parent = this;
    egress_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "ipv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::~PolicyItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (ingress_items !=  nullptr && ingress_items->has_data())
	|| (egress_items !=  nullptr && egress_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (ingress_items !=  nullptr && ingress_items->has_operation())
	|| (egress_items !=  nullptr && egress_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-items")
    {
        if(ingress_items == nullptr)
        {
            ingress_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems>();
        }
        return ingress_items;
    }

    if(child_yang_name == "egress-items")
    {
        if(egress_items == nullptr)
        {
            egress_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems>();
        }
        return egress_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ingress_items != nullptr)
    {
        children["ingress-items"] = ingress_items;
    }

    if(egress_items != nullptr)
    {
        children["egress-items"] = egress_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-items" || name == "egress-items")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IngressItems()
    :
    intf_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems>())
    , vty_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems>())
{
    intf_items->parent = this;
    vty_items->parent = this;

    yang_name = "ingress-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::~IngressItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "ingress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::~IntfItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/ingress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_>())
    , portacl_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems>())
{
    acl_items->parent = this;
    portacl_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::~IfList()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (portacl_items !=  nullptr && portacl_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/ingress-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_>();
        }
        return acl_items;
    }

    if(child_yang_name == "portacl-items")
    {
        if(portacl_items == nullptr)
        {
            portacl_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems>();
        }
        return portacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        children["portacl-items"] = portacl_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "portacl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::~PortaclItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::VtyItems()
    :
    acl_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_>())
{
    acl_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "ingress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::~VtyItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/ingress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/ingress-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::EgressItems()
    :
    intf_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems>())
    , vty_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems>())
{
    intf_items->parent = this;
    vty_items->parent = this;

    yang_name = "egress-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::~EgressItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "egress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::~IntfItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/egress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_>())
    , portacl_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems>())
{
    acl_items->parent = this;
    portacl_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::~IfList()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (portacl_items !=  nullptr && portacl_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/egress-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_>();
        }
        return acl_items;
    }

    if(child_yang_name == "portacl-items")
    {
        if(portacl_items == nullptr)
        {
            portacl_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems>();
        }
        return portacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        children["portacl-items"] = portacl_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "portacl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::~PortaclItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::VtyItems()
    :
    acl_items(std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_>())
{
    acl_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "egress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::~VtyItems()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/egress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/policy-items/egress-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::NameItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "ipv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::NameItems::~NameItems()
{
}

bool System::AclItems::Ipv4Items::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::NameItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList>();
        c->parent = this;
        acl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACL-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::ACLList()
    :
    name{YType::str, "name"},
    peracestatistics{YType::uint8, "perACEStatistics"},
    configstatus{YType::uint32, "configStatus"}
        ,
    reseq_items(std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems>())
    , seq_items(std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems>())
{
    reseq_items->parent = this;
    seq_items->parent = this;

    yang_name = "ACL-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::~ACLList()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data())
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (reseq_items !=  nullptr && reseq_items->has_operation())
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reseq-items")
    {
        if(reseq_items == nullptr)
        {
            reseq_items = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems>();
        }
        return reseq_items;
    }

    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reseq_items != nullptr)
    {
        children["reseq-items"] = reseq_items;
    }

    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics = value;
        peracestatistics.value_namespace = name_space;
        peracestatistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::NameItems::ACLList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "seq-items" || name == "name" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems()
    :
    start{YType::uint32, "start"},
    step{YType::uint32, "step"},
    reseqdone{YType::boolean, "reseqDone"}
        ,
    reseq_items(std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_>())
{
    reseq_items->parent = this;

    yang_name = "reseq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::~ReseqItems()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| step.is_set
	|| reseqdone.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data());
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(step.yfilter)
	|| ydk::is_set(reseqdone.yfilter)
	|| (reseq_items !=  nullptr && reseq_items->has_operation());
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reseq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (step.is_set || is_set(step.yfilter)) leaf_name_data.push_back(step.get_name_leafdata());
    if (reseqdone.is_set || is_set(reseqdone.yfilter)) leaf_name_data.push_back(reseqdone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reseq-items")
    {
        if(reseq_items == nullptr)
        {
            reseq_items = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_>();
        }
        return reseq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reseq_items != nullptr)
    {
        children["reseq-items"] = reseq_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "step")
    {
        step = value;
        step.value_namespace = name_space;
        step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reseqDone")
    {
        reseqdone = value;
        reseqdone.value_namespace = name_space;
        reseqdone.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "step")
    {
        step.yfilter = yfilter;
    }
    if(value_path == "reseqDone")
    {
        reseqdone.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "start" || name == "step" || name == "reseqDone")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqItems_()
    :
    reseqresultentry_list(this, {"beforeseq"})
{

    yang_name = "reseq-items"; yang_parent_name = "reseq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::~ReseqItems_()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reseqresultentry_list.len(); index++)
    {
        if(reseqresultentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::has_operation() const
{
    for (std::size_t index=0; index<reseqresultentry_list.len(); index++)
    {
        if(reseqresultentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reseq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReseqResultEntry-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList>();
        c->parent = this;
        reseqresultentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reseqresultentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReseqResultEntry-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::ReseqResultEntryList()
    :
    beforeseq{YType::uint32, "beforeSeq"},
    afterseq{YType::uint32, "afterSeq"}
{

    yang_name = "ReseqResultEntry-list"; yang_parent_name = "reseq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::~ReseqResultEntryList()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_data() const
{
    if (is_presence_container) return true;
    return beforeseq.is_set
	|| afterseq.is_set;
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(beforeseq.yfilter)
	|| ydk::is_set(afterseq.yfilter);
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReseqResultEntry-list";
    ADD_KEY_TOKEN(beforeseq, "beforeSeq");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (beforeseq.is_set || is_set(beforeseq.yfilter)) leaf_name_data.push_back(beforeseq.get_name_leafdata());
    if (afterseq.is_set || is_set(afterseq.yfilter)) leaf_name_data.push_back(afterseq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "beforeSeq")
    {
        beforeseq = value;
        beforeseq.value_namespace = name_space;
        beforeseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afterSeq")
    {
        afterseq = value;
        afterseq.value_namespace = name_space;
        afterseq.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "beforeSeq")
    {
        beforeseq.yfilter = yfilter;
    }
    if(value_path == "afterSeq")
    {
        afterseq.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "beforeSeq" || name == "afterSeq")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::SeqItems()
    :
    ace_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::~SeqItems()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ace_list.len(); index++)
    {
        if(ace_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<ace_list.len(); index++)
    {
        if(ace_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACE-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList>();
        c->parent = this;
        ace_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ace_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACE-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::ACEList()
    :
    seqnum{YType::uint32, "seqNum"},
    protocol{YType::uint8, "protocol"},
    protocolmask{YType::uint8, "protocolMask"},
    srcprefix{YType::str, "srcPrefix"},
    srcprefixmask{YType::str, "srcPrefixMask"},
    srcprefixlength{YType::uint8, "srcPrefixLength"},
    dstprefix{YType::str, "dstPrefix"},
    dstprefixmask{YType::str, "dstPrefixMask"},
    dstprefixlength{YType::uint8, "dstPrefixLength"},
    precedence{YType::uint8, "precedence"},
    ttl{YType::uint8, "ttl"},
    icmpstr{YType::uint16, "icmpStr"},
    icmptype{YType::uint16, "icmpType"},
    icmpcode{YType::uint16, "icmpCode"},
    tos{YType::uint8, "tos"},
    configstatus{YType::uint8, "configStatus"},
    remark{YType::str, "remark"},
    usersetbit{YType::uint64, "userSetBit"},
    action{YType::enumeration, "action"},
    srcportop{YType::uint8, "srcPortOp"},
    srcport1{YType::uint16, "srcPort1"},
    srcport2{YType::uint16, "srcPort2"},
    srcportmask{YType::uint16, "srcPortMask"},
    dstportop{YType::uint8, "dstPortOp"},
    dstport1{YType::uint16, "dstPort1"},
    dstport2{YType::uint16, "dstPort2"},
    dstportmask{YType::uint16, "dstPortMask"},
    logging{YType::boolean, "logging"},
    dscp{YType::uint8, "dscp"},
    pktlenop{YType::uint8, "pktLenOp"},
    pktlen1{YType::uint16, "pktLen1"},
    pktlen2{YType::uint16, "pktLen2"},
    urg{YType::boolean, "urg"},
    ack{YType::boolean, "ack"},
    psh{YType::boolean, "psh"},
    rst{YType::boolean, "rst"},
    syn{YType::boolean, "syn"},
    fin{YType::boolean, "fin"},
    est{YType::boolean, "est"},
    rev{YType::boolean, "rev"},
    tcpflagsmask{YType::uint8, "tcpFlagsMask"},
    packets{YType::uint64, "packets"},
    fragment{YType::boolean, "fragment"},
    capturesession{YType::uint16, "captureSession"},
    httpoption{YType::enumeration, "httpOption"},
    vni{YType::uint32, "vni"},
    vlan{YType::uint32, "vlan"},
    tcpoptionlength{YType::uint32, "tcpOptionLength"},
    timerange{YType::str, "timeRange"},
    srcaddrgroup{YType::str, "srcAddrGroup"},
    dstaddrgroup{YType::str, "dstAddrGroup"},
    srcportgroup{YType::str, "srcPortGroup"},
    dstportgroup{YType::str, "dstPortGroup"},
    redirect{YType::str, "redirect"}
        ,
    udf_items(std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems>())
{
    udf_items->parent = this;

    yang_name = "ACE-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::~ACEList()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| protocol.is_set
	|| protocolmask.is_set
	|| srcprefix.is_set
	|| srcprefixmask.is_set
	|| srcprefixlength.is_set
	|| dstprefix.is_set
	|| dstprefixmask.is_set
	|| dstprefixlength.is_set
	|| precedence.is_set
	|| ttl.is_set
	|| icmpstr.is_set
	|| icmptype.is_set
	|| icmpcode.is_set
	|| tos.is_set
	|| configstatus.is_set
	|| remark.is_set
	|| usersetbit.is_set
	|| action.is_set
	|| srcportop.is_set
	|| srcport1.is_set
	|| srcport2.is_set
	|| srcportmask.is_set
	|| dstportop.is_set
	|| dstport1.is_set
	|| dstport2.is_set
	|| dstportmask.is_set
	|| logging.is_set
	|| dscp.is_set
	|| pktlenop.is_set
	|| pktlen1.is_set
	|| pktlen2.is_set
	|| urg.is_set
	|| ack.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| fin.is_set
	|| est.is_set
	|| rev.is_set
	|| tcpflagsmask.is_set
	|| packets.is_set
	|| fragment.is_set
	|| capturesession.is_set
	|| httpoption.is_set
	|| vni.is_set
	|| vlan.is_set
	|| tcpoptionlength.is_set
	|| timerange.is_set
	|| srcaddrgroup.is_set
	|| dstaddrgroup.is_set
	|| srcportgroup.is_set
	|| dstportgroup.is_set
	|| redirect.is_set
	|| (udf_items !=  nullptr && udf_items->has_data());
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(protocolmask.yfilter)
	|| ydk::is_set(srcprefix.yfilter)
	|| ydk::is_set(srcprefixmask.yfilter)
	|| ydk::is_set(srcprefixlength.yfilter)
	|| ydk::is_set(dstprefix.yfilter)
	|| ydk::is_set(dstprefixmask.yfilter)
	|| ydk::is_set(dstprefixlength.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(icmpstr.yfilter)
	|| ydk::is_set(icmptype.yfilter)
	|| ydk::is_set(icmpcode.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(usersetbit.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(srcportop.yfilter)
	|| ydk::is_set(srcport1.yfilter)
	|| ydk::is_set(srcport2.yfilter)
	|| ydk::is_set(srcportmask.yfilter)
	|| ydk::is_set(dstportop.yfilter)
	|| ydk::is_set(dstport1.yfilter)
	|| ydk::is_set(dstport2.yfilter)
	|| ydk::is_set(dstportmask.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(pktlenop.yfilter)
	|| ydk::is_set(pktlen1.yfilter)
	|| ydk::is_set(pktlen2.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(est.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(tcpflagsmask.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(capturesession.yfilter)
	|| ydk::is_set(httpoption.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(tcpoptionlength.yfilter)
	|| ydk::is_set(timerange.yfilter)
	|| ydk::is_set(srcaddrgroup.yfilter)
	|| ydk::is_set(dstaddrgroup.yfilter)
	|| ydk::is_set(srcportgroup.yfilter)
	|| ydk::is_set(dstportgroup.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| (udf_items !=  nullptr && udf_items->has_operation());
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACE-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (protocolmask.is_set || is_set(protocolmask.yfilter)) leaf_name_data.push_back(protocolmask.get_name_leafdata());
    if (srcprefix.is_set || is_set(srcprefix.yfilter)) leaf_name_data.push_back(srcprefix.get_name_leafdata());
    if (srcprefixmask.is_set || is_set(srcprefixmask.yfilter)) leaf_name_data.push_back(srcprefixmask.get_name_leafdata());
    if (srcprefixlength.is_set || is_set(srcprefixlength.yfilter)) leaf_name_data.push_back(srcprefixlength.get_name_leafdata());
    if (dstprefix.is_set || is_set(dstprefix.yfilter)) leaf_name_data.push_back(dstprefix.get_name_leafdata());
    if (dstprefixmask.is_set || is_set(dstprefixmask.yfilter)) leaf_name_data.push_back(dstprefixmask.get_name_leafdata());
    if (dstprefixlength.is_set || is_set(dstprefixlength.yfilter)) leaf_name_data.push_back(dstprefixlength.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (icmpstr.is_set || is_set(icmpstr.yfilter)) leaf_name_data.push_back(icmpstr.get_name_leafdata());
    if (icmptype.is_set || is_set(icmptype.yfilter)) leaf_name_data.push_back(icmptype.get_name_leafdata());
    if (icmpcode.is_set || is_set(icmpcode.yfilter)) leaf_name_data.push_back(icmpcode.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (srcportop.is_set || is_set(srcportop.yfilter)) leaf_name_data.push_back(srcportop.get_name_leafdata());
    if (srcport1.is_set || is_set(srcport1.yfilter)) leaf_name_data.push_back(srcport1.get_name_leafdata());
    if (srcport2.is_set || is_set(srcport2.yfilter)) leaf_name_data.push_back(srcport2.get_name_leafdata());
    if (srcportmask.is_set || is_set(srcportmask.yfilter)) leaf_name_data.push_back(srcportmask.get_name_leafdata());
    if (dstportop.is_set || is_set(dstportop.yfilter)) leaf_name_data.push_back(dstportop.get_name_leafdata());
    if (dstport1.is_set || is_set(dstport1.yfilter)) leaf_name_data.push_back(dstport1.get_name_leafdata());
    if (dstport2.is_set || is_set(dstport2.yfilter)) leaf_name_data.push_back(dstport2.get_name_leafdata());
    if (dstportmask.is_set || is_set(dstportmask.yfilter)) leaf_name_data.push_back(dstportmask.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (pktlenop.is_set || is_set(pktlenop.yfilter)) leaf_name_data.push_back(pktlenop.get_name_leafdata());
    if (pktlen1.is_set || is_set(pktlen1.yfilter)) leaf_name_data.push_back(pktlen1.get_name_leafdata());
    if (pktlen2.is_set || is_set(pktlen2.yfilter)) leaf_name_data.push_back(pktlen2.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (est.is_set || is_set(est.yfilter)) leaf_name_data.push_back(est.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (tcpflagsmask.is_set || is_set(tcpflagsmask.yfilter)) leaf_name_data.push_back(tcpflagsmask.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (capturesession.is_set || is_set(capturesession.yfilter)) leaf_name_data.push_back(capturesession.get_name_leafdata());
    if (httpoption.is_set || is_set(httpoption.yfilter)) leaf_name_data.push_back(httpoption.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (tcpoptionlength.is_set || is_set(tcpoptionlength.yfilter)) leaf_name_data.push_back(tcpoptionlength.get_name_leafdata());
    if (timerange.is_set || is_set(timerange.yfilter)) leaf_name_data.push_back(timerange.get_name_leafdata());
    if (srcaddrgroup.is_set || is_set(srcaddrgroup.yfilter)) leaf_name_data.push_back(srcaddrgroup.get_name_leafdata());
    if (dstaddrgroup.is_set || is_set(dstaddrgroup.yfilter)) leaf_name_data.push_back(dstaddrgroup.get_name_leafdata());
    if (srcportgroup.is_set || is_set(srcportgroup.yfilter)) leaf_name_data.push_back(srcportgroup.get_name_leafdata());
    if (dstportgroup.is_set || is_set(dstportgroup.yfilter)) leaf_name_data.push_back(dstportgroup.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-items")
    {
        if(udf_items == nullptr)
        {
            udf_items = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems>();
        }
        return udf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udf_items != nullptr)
    {
        children["udf-items"] = udf_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolMask")
    {
        protocolmask = value;
        protocolmask.value_namespace = name_space;
        protocolmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefix")
    {
        srcprefix = value;
        srcprefix.value_namespace = name_space;
        srcprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefixMask")
    {
        srcprefixmask = value;
        srcprefixmask.value_namespace = name_space;
        srcprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefixLength")
    {
        srcprefixlength = value;
        srcprefixlength.value_namespace = name_space;
        srcprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefix")
    {
        dstprefix = value;
        dstprefix.value_namespace = name_space;
        dstprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefixMask")
    {
        dstprefixmask = value;
        dstprefixmask.value_namespace = name_space;
        dstprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefixLength")
    {
        dstprefixlength = value;
        dstprefixlength.value_namespace = name_space;
        dstprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpStr")
    {
        icmpstr = value;
        icmpstr.value_namespace = name_space;
        icmpstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpType")
    {
        icmptype = value;
        icmptype.value_namespace = name_space;
        icmptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpCode")
    {
        icmpcode = value;
        icmpcode.value_namespace = name_space;
        icmpcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPortOp")
    {
        srcportop = value;
        srcportop.value_namespace = name_space;
        srcportop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort1")
    {
        srcport1 = value;
        srcport1.value_namespace = name_space;
        srcport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort2")
    {
        srcport2 = value;
        srcport2.value_namespace = name_space;
        srcport2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPortMask")
    {
        srcportmask = value;
        srcportmask.value_namespace = name_space;
        srcportmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPortOp")
    {
        dstportop = value;
        dstportop.value_namespace = name_space;
        dstportop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort1")
    {
        dstport1 = value;
        dstport1.value_namespace = name_space;
        dstport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort2")
    {
        dstport2 = value;
        dstport2.value_namespace = name_space;
        dstport2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPortMask")
    {
        dstportmask = value;
        dstportmask.value_namespace = name_space;
        dstportmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenOp")
    {
        pktlenop = value;
        pktlenop.value_namespace = name_space;
        pktlenop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLen1")
    {
        pktlen1 = value;
        pktlen1.value_namespace = name_space;
        pktlen1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLen2")
    {
        pktlen2 = value;
        pktlen2.value_namespace = name_space;
        pktlen2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "est")
    {
        est = value;
        est.value_namespace = name_space;
        est.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpFlagsMask")
    {
        tcpflagsmask = value;
        tcpflagsmask.value_namespace = name_space;
        tcpflagsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureSession")
    {
        capturesession = value;
        capturesession.value_namespace = name_space;
        capturesession.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpOption")
    {
        httpoption = value;
        httpoption.value_namespace = name_space;
        httpoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpOptionLength")
    {
        tcpoptionlength = value;
        tcpoptionlength.value_namespace = name_space;
        tcpoptionlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeRange")
    {
        timerange = value;
        timerange.value_namespace = name_space;
        timerange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddrGroup")
    {
        srcaddrgroup = value;
        srcaddrgroup.value_namespace = name_space;
        srcaddrgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddrGroup")
    {
        dstaddrgroup = value;
        dstaddrgroup.value_namespace = name_space;
        dstaddrgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPortGroup")
    {
        srcportgroup = value;
        srcportgroup.value_namespace = name_space;
        srcportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPortGroup")
    {
        dstportgroup = value;
        dstportgroup.value_namespace = name_space;
        dstportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "protocolMask")
    {
        protocolmask.yfilter = yfilter;
    }
    if(value_path == "srcPrefix")
    {
        srcprefix.yfilter = yfilter;
    }
    if(value_path == "srcPrefixMask")
    {
        srcprefixmask.yfilter = yfilter;
    }
    if(value_path == "srcPrefixLength")
    {
        srcprefixlength.yfilter = yfilter;
    }
    if(value_path == "dstPrefix")
    {
        dstprefix.yfilter = yfilter;
    }
    if(value_path == "dstPrefixMask")
    {
        dstprefixmask.yfilter = yfilter;
    }
    if(value_path == "dstPrefixLength")
    {
        dstprefixlength.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "icmpStr")
    {
        icmpstr.yfilter = yfilter;
    }
    if(value_path == "icmpType")
    {
        icmptype.yfilter = yfilter;
    }
    if(value_path == "icmpCode")
    {
        icmpcode.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "srcPortOp")
    {
        srcportop.yfilter = yfilter;
    }
    if(value_path == "srcPort1")
    {
        srcport1.yfilter = yfilter;
    }
    if(value_path == "srcPort2")
    {
        srcport2.yfilter = yfilter;
    }
    if(value_path == "srcPortMask")
    {
        srcportmask.yfilter = yfilter;
    }
    if(value_path == "dstPortOp")
    {
        dstportop.yfilter = yfilter;
    }
    if(value_path == "dstPort1")
    {
        dstport1.yfilter = yfilter;
    }
    if(value_path == "dstPort2")
    {
        dstport2.yfilter = yfilter;
    }
    if(value_path == "dstPortMask")
    {
        dstportmask.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "pktLenOp")
    {
        pktlenop.yfilter = yfilter;
    }
    if(value_path == "pktLen1")
    {
        pktlen1.yfilter = yfilter;
    }
    if(value_path == "pktLen2")
    {
        pktlen2.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "est")
    {
        est.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "tcpFlagsMask")
    {
        tcpflagsmask.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "captureSession")
    {
        capturesession.yfilter = yfilter;
    }
    if(value_path == "httpOption")
    {
        httpoption.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "tcpOptionLength")
    {
        tcpoptionlength.yfilter = yfilter;
    }
    if(value_path == "timeRange")
    {
        timerange.yfilter = yfilter;
    }
    if(value_path == "srcAddrGroup")
    {
        srcaddrgroup.yfilter = yfilter;
    }
    if(value_path == "dstAddrGroup")
    {
        dstaddrgroup.yfilter = yfilter;
    }
    if(value_path == "srcPortGroup")
    {
        srcportgroup.yfilter = yfilter;
    }
    if(value_path == "dstPortGroup")
    {
        dstportgroup.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-items" || name == "seqNum" || name == "protocol" || name == "protocolMask" || name == "srcPrefix" || name == "srcPrefixMask" || name == "srcPrefixLength" || name == "dstPrefix" || name == "dstPrefixMask" || name == "dstPrefixLength" || name == "precedence" || name == "ttl" || name == "icmpStr" || name == "icmpType" || name == "icmpCode" || name == "tos" || name == "configStatus" || name == "remark" || name == "userSetBit" || name == "action" || name == "srcPortOp" || name == "srcPort1" || name == "srcPort2" || name == "srcPortMask" || name == "dstPortOp" || name == "dstPort1" || name == "dstPort2" || name == "dstPortMask" || name == "logging" || name == "dscp" || name == "pktLenOp" || name == "pktLen1" || name == "pktLen2" || name == "urg" || name == "ack" || name == "psh" || name == "rst" || name == "syn" || name == "fin" || name == "est" || name == "rev" || name == "tcpFlagsMask" || name == "packets" || name == "fragment" || name == "captureSession" || name == "httpOption" || name == "vni" || name == "vlan" || name == "tcpOptionLength" || name == "timeRange" || name == "srcAddrGroup" || name == "dstAddrGroup" || name == "srcPortGroup" || name == "dstPortGroup" || name == "redirect")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::UdfItems()
    :
    udf1name{YType::str, "udf1Name"},
    udf1val{YType::uint16, "udf1Val"},
    udf1mask{YType::uint16, "udf1Mask"},
    udf2name{YType::str, "udf2Name"},
    udf2val{YType::uint16, "udf2Val"},
    udf2mask{YType::uint16, "udf2Mask"},
    udf3name{YType::str, "udf3Name"},
    udf3val{YType::uint16, "udf3Val"},
    udf3mask{YType::uint16, "udf3Mask"},
    udf4name{YType::str, "udf4Name"},
    udf4val{YType::uint16, "udf4Val"},
    udf4mask{YType::uint16, "udf4Mask"},
    udf5name{YType::str, "udf5Name"},
    udf5val{YType::uint16, "udf5Val"},
    udf5mask{YType::uint16, "udf5Mask"},
    udf6name{YType::str, "udf6Name"},
    udf6val{YType::uint16, "udf6Val"},
    udf6mask{YType::uint16, "udf6Mask"},
    udf7name{YType::str, "udf7Name"},
    udf7val{YType::uint16, "udf7Val"},
    udf7mask{YType::uint16, "udf7Mask"},
    udf8name{YType::str, "udf8Name"},
    udf8val{YType::uint16, "udf8Val"},
    udf8mask{YType::uint16, "udf8Mask"},
    udf9name{YType::str, "udf9Name"},
    udf9val{YType::uint16, "udf9Val"},
    udf9mask{YType::uint16, "udf9Mask"},
    udf10name{YType::str, "udf10Name"},
    udf10val{YType::uint16, "udf10Val"},
    udf10mask{YType::uint16, "udf10Mask"},
    udf11name{YType::str, "udf11Name"},
    udf11val{YType::uint16, "udf11Val"},
    udf11mask{YType::uint16, "udf11Mask"},
    udf12name{YType::str, "udf12Name"},
    udf12val{YType::uint16, "udf12Val"},
    udf12mask{YType::uint16, "udf12Mask"},
    udf13name{YType::str, "udf13Name"},
    udf13val{YType::uint16, "udf13Val"},
    udf13mask{YType::uint16, "udf13Mask"},
    udf14name{YType::str, "udf14Name"},
    udf14val{YType::uint16, "udf14Val"},
    udf14mask{YType::uint16, "udf14Mask"},
    udf15name{YType::str, "udf15Name"},
    udf15val{YType::uint16, "udf15Val"},
    udf15mask{YType::uint16, "udf15Mask"},
    udf16name{YType::str, "udf16Name"},
    udf16val{YType::uint16, "udf16Val"},
    udf16mask{YType::uint16, "udf16Mask"},
    udf17name{YType::str, "udf17Name"},
    udf17val{YType::uint16, "udf17Val"},
    udf17mask{YType::uint16, "udf17Mask"},
    udf18name{YType::str, "udf18Name"},
    udf18val{YType::uint16, "udf18Val"},
    udf18mask{YType::uint16, "udf18Mask"}
{

    yang_name = "udf-items"; yang_parent_name = "ACE-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::~UdfItems()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::has_data() const
{
    if (is_presence_container) return true;
    return udf1name.is_set
	|| udf1val.is_set
	|| udf1mask.is_set
	|| udf2name.is_set
	|| udf2val.is_set
	|| udf2mask.is_set
	|| udf3name.is_set
	|| udf3val.is_set
	|| udf3mask.is_set
	|| udf4name.is_set
	|| udf4val.is_set
	|| udf4mask.is_set
	|| udf5name.is_set
	|| udf5val.is_set
	|| udf5mask.is_set
	|| udf6name.is_set
	|| udf6val.is_set
	|| udf6mask.is_set
	|| udf7name.is_set
	|| udf7val.is_set
	|| udf7mask.is_set
	|| udf8name.is_set
	|| udf8val.is_set
	|| udf8mask.is_set
	|| udf9name.is_set
	|| udf9val.is_set
	|| udf9mask.is_set
	|| udf10name.is_set
	|| udf10val.is_set
	|| udf10mask.is_set
	|| udf11name.is_set
	|| udf11val.is_set
	|| udf11mask.is_set
	|| udf12name.is_set
	|| udf12val.is_set
	|| udf12mask.is_set
	|| udf13name.is_set
	|| udf13val.is_set
	|| udf13mask.is_set
	|| udf14name.is_set
	|| udf14val.is_set
	|| udf14mask.is_set
	|| udf15name.is_set
	|| udf15val.is_set
	|| udf15mask.is_set
	|| udf16name.is_set
	|| udf16val.is_set
	|| udf16mask.is_set
	|| udf17name.is_set
	|| udf17val.is_set
	|| udf17mask.is_set
	|| udf18name.is_set
	|| udf18val.is_set
	|| udf18mask.is_set;
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udf1name.yfilter)
	|| ydk::is_set(udf1val.yfilter)
	|| ydk::is_set(udf1mask.yfilter)
	|| ydk::is_set(udf2name.yfilter)
	|| ydk::is_set(udf2val.yfilter)
	|| ydk::is_set(udf2mask.yfilter)
	|| ydk::is_set(udf3name.yfilter)
	|| ydk::is_set(udf3val.yfilter)
	|| ydk::is_set(udf3mask.yfilter)
	|| ydk::is_set(udf4name.yfilter)
	|| ydk::is_set(udf4val.yfilter)
	|| ydk::is_set(udf4mask.yfilter)
	|| ydk::is_set(udf5name.yfilter)
	|| ydk::is_set(udf5val.yfilter)
	|| ydk::is_set(udf5mask.yfilter)
	|| ydk::is_set(udf6name.yfilter)
	|| ydk::is_set(udf6val.yfilter)
	|| ydk::is_set(udf6mask.yfilter)
	|| ydk::is_set(udf7name.yfilter)
	|| ydk::is_set(udf7val.yfilter)
	|| ydk::is_set(udf7mask.yfilter)
	|| ydk::is_set(udf8name.yfilter)
	|| ydk::is_set(udf8val.yfilter)
	|| ydk::is_set(udf8mask.yfilter)
	|| ydk::is_set(udf9name.yfilter)
	|| ydk::is_set(udf9val.yfilter)
	|| ydk::is_set(udf9mask.yfilter)
	|| ydk::is_set(udf10name.yfilter)
	|| ydk::is_set(udf10val.yfilter)
	|| ydk::is_set(udf10mask.yfilter)
	|| ydk::is_set(udf11name.yfilter)
	|| ydk::is_set(udf11val.yfilter)
	|| ydk::is_set(udf11mask.yfilter)
	|| ydk::is_set(udf12name.yfilter)
	|| ydk::is_set(udf12val.yfilter)
	|| ydk::is_set(udf12mask.yfilter)
	|| ydk::is_set(udf13name.yfilter)
	|| ydk::is_set(udf13val.yfilter)
	|| ydk::is_set(udf13mask.yfilter)
	|| ydk::is_set(udf14name.yfilter)
	|| ydk::is_set(udf14val.yfilter)
	|| ydk::is_set(udf14mask.yfilter)
	|| ydk::is_set(udf15name.yfilter)
	|| ydk::is_set(udf15val.yfilter)
	|| ydk::is_set(udf15mask.yfilter)
	|| ydk::is_set(udf16name.yfilter)
	|| ydk::is_set(udf16val.yfilter)
	|| ydk::is_set(udf16mask.yfilter)
	|| ydk::is_set(udf17name.yfilter)
	|| ydk::is_set(udf17val.yfilter)
	|| ydk::is_set(udf17mask.yfilter)
	|| ydk::is_set(udf18name.yfilter)
	|| ydk::is_set(udf18val.yfilter)
	|| ydk::is_set(udf18mask.yfilter);
}

std::string System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udf1name.is_set || is_set(udf1name.yfilter)) leaf_name_data.push_back(udf1name.get_name_leafdata());
    if (udf1val.is_set || is_set(udf1val.yfilter)) leaf_name_data.push_back(udf1val.get_name_leafdata());
    if (udf1mask.is_set || is_set(udf1mask.yfilter)) leaf_name_data.push_back(udf1mask.get_name_leafdata());
    if (udf2name.is_set || is_set(udf2name.yfilter)) leaf_name_data.push_back(udf2name.get_name_leafdata());
    if (udf2val.is_set || is_set(udf2val.yfilter)) leaf_name_data.push_back(udf2val.get_name_leafdata());
    if (udf2mask.is_set || is_set(udf2mask.yfilter)) leaf_name_data.push_back(udf2mask.get_name_leafdata());
    if (udf3name.is_set || is_set(udf3name.yfilter)) leaf_name_data.push_back(udf3name.get_name_leafdata());
    if (udf3val.is_set || is_set(udf3val.yfilter)) leaf_name_data.push_back(udf3val.get_name_leafdata());
    if (udf3mask.is_set || is_set(udf3mask.yfilter)) leaf_name_data.push_back(udf3mask.get_name_leafdata());
    if (udf4name.is_set || is_set(udf4name.yfilter)) leaf_name_data.push_back(udf4name.get_name_leafdata());
    if (udf4val.is_set || is_set(udf4val.yfilter)) leaf_name_data.push_back(udf4val.get_name_leafdata());
    if (udf4mask.is_set || is_set(udf4mask.yfilter)) leaf_name_data.push_back(udf4mask.get_name_leafdata());
    if (udf5name.is_set || is_set(udf5name.yfilter)) leaf_name_data.push_back(udf5name.get_name_leafdata());
    if (udf5val.is_set || is_set(udf5val.yfilter)) leaf_name_data.push_back(udf5val.get_name_leafdata());
    if (udf5mask.is_set || is_set(udf5mask.yfilter)) leaf_name_data.push_back(udf5mask.get_name_leafdata());
    if (udf6name.is_set || is_set(udf6name.yfilter)) leaf_name_data.push_back(udf6name.get_name_leafdata());
    if (udf6val.is_set || is_set(udf6val.yfilter)) leaf_name_data.push_back(udf6val.get_name_leafdata());
    if (udf6mask.is_set || is_set(udf6mask.yfilter)) leaf_name_data.push_back(udf6mask.get_name_leafdata());
    if (udf7name.is_set || is_set(udf7name.yfilter)) leaf_name_data.push_back(udf7name.get_name_leafdata());
    if (udf7val.is_set || is_set(udf7val.yfilter)) leaf_name_data.push_back(udf7val.get_name_leafdata());
    if (udf7mask.is_set || is_set(udf7mask.yfilter)) leaf_name_data.push_back(udf7mask.get_name_leafdata());
    if (udf8name.is_set || is_set(udf8name.yfilter)) leaf_name_data.push_back(udf8name.get_name_leafdata());
    if (udf8val.is_set || is_set(udf8val.yfilter)) leaf_name_data.push_back(udf8val.get_name_leafdata());
    if (udf8mask.is_set || is_set(udf8mask.yfilter)) leaf_name_data.push_back(udf8mask.get_name_leafdata());
    if (udf9name.is_set || is_set(udf9name.yfilter)) leaf_name_data.push_back(udf9name.get_name_leafdata());
    if (udf9val.is_set || is_set(udf9val.yfilter)) leaf_name_data.push_back(udf9val.get_name_leafdata());
    if (udf9mask.is_set || is_set(udf9mask.yfilter)) leaf_name_data.push_back(udf9mask.get_name_leafdata());
    if (udf10name.is_set || is_set(udf10name.yfilter)) leaf_name_data.push_back(udf10name.get_name_leafdata());
    if (udf10val.is_set || is_set(udf10val.yfilter)) leaf_name_data.push_back(udf10val.get_name_leafdata());
    if (udf10mask.is_set || is_set(udf10mask.yfilter)) leaf_name_data.push_back(udf10mask.get_name_leafdata());
    if (udf11name.is_set || is_set(udf11name.yfilter)) leaf_name_data.push_back(udf11name.get_name_leafdata());
    if (udf11val.is_set || is_set(udf11val.yfilter)) leaf_name_data.push_back(udf11val.get_name_leafdata());
    if (udf11mask.is_set || is_set(udf11mask.yfilter)) leaf_name_data.push_back(udf11mask.get_name_leafdata());
    if (udf12name.is_set || is_set(udf12name.yfilter)) leaf_name_data.push_back(udf12name.get_name_leafdata());
    if (udf12val.is_set || is_set(udf12val.yfilter)) leaf_name_data.push_back(udf12val.get_name_leafdata());
    if (udf12mask.is_set || is_set(udf12mask.yfilter)) leaf_name_data.push_back(udf12mask.get_name_leafdata());
    if (udf13name.is_set || is_set(udf13name.yfilter)) leaf_name_data.push_back(udf13name.get_name_leafdata());
    if (udf13val.is_set || is_set(udf13val.yfilter)) leaf_name_data.push_back(udf13val.get_name_leafdata());
    if (udf13mask.is_set || is_set(udf13mask.yfilter)) leaf_name_data.push_back(udf13mask.get_name_leafdata());
    if (udf14name.is_set || is_set(udf14name.yfilter)) leaf_name_data.push_back(udf14name.get_name_leafdata());
    if (udf14val.is_set || is_set(udf14val.yfilter)) leaf_name_data.push_back(udf14val.get_name_leafdata());
    if (udf14mask.is_set || is_set(udf14mask.yfilter)) leaf_name_data.push_back(udf14mask.get_name_leafdata());
    if (udf15name.is_set || is_set(udf15name.yfilter)) leaf_name_data.push_back(udf15name.get_name_leafdata());
    if (udf15val.is_set || is_set(udf15val.yfilter)) leaf_name_data.push_back(udf15val.get_name_leafdata());
    if (udf15mask.is_set || is_set(udf15mask.yfilter)) leaf_name_data.push_back(udf15mask.get_name_leafdata());
    if (udf16name.is_set || is_set(udf16name.yfilter)) leaf_name_data.push_back(udf16name.get_name_leafdata());
    if (udf16val.is_set || is_set(udf16val.yfilter)) leaf_name_data.push_back(udf16val.get_name_leafdata());
    if (udf16mask.is_set || is_set(udf16mask.yfilter)) leaf_name_data.push_back(udf16mask.get_name_leafdata());
    if (udf17name.is_set || is_set(udf17name.yfilter)) leaf_name_data.push_back(udf17name.get_name_leafdata());
    if (udf17val.is_set || is_set(udf17val.yfilter)) leaf_name_data.push_back(udf17val.get_name_leafdata());
    if (udf17mask.is_set || is_set(udf17mask.yfilter)) leaf_name_data.push_back(udf17mask.get_name_leafdata());
    if (udf18name.is_set || is_set(udf18name.yfilter)) leaf_name_data.push_back(udf18name.get_name_leafdata());
    if (udf18val.is_set || is_set(udf18val.yfilter)) leaf_name_data.push_back(udf18val.get_name_leafdata());
    if (udf18mask.is_set || is_set(udf18mask.yfilter)) leaf_name_data.push_back(udf18mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udf1Name")
    {
        udf1name = value;
        udf1name.value_namespace = name_space;
        udf1name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf1Val")
    {
        udf1val = value;
        udf1val.value_namespace = name_space;
        udf1val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf1Mask")
    {
        udf1mask = value;
        udf1mask.value_namespace = name_space;
        udf1mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf2Name")
    {
        udf2name = value;
        udf2name.value_namespace = name_space;
        udf2name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf2Val")
    {
        udf2val = value;
        udf2val.value_namespace = name_space;
        udf2val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf2Mask")
    {
        udf2mask = value;
        udf2mask.value_namespace = name_space;
        udf2mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf3Name")
    {
        udf3name = value;
        udf3name.value_namespace = name_space;
        udf3name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf3Val")
    {
        udf3val = value;
        udf3val.value_namespace = name_space;
        udf3val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf3Mask")
    {
        udf3mask = value;
        udf3mask.value_namespace = name_space;
        udf3mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf4Name")
    {
        udf4name = value;
        udf4name.value_namespace = name_space;
        udf4name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf4Val")
    {
        udf4val = value;
        udf4val.value_namespace = name_space;
        udf4val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf4Mask")
    {
        udf4mask = value;
        udf4mask.value_namespace = name_space;
        udf4mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf5Name")
    {
        udf5name = value;
        udf5name.value_namespace = name_space;
        udf5name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf5Val")
    {
        udf5val = value;
        udf5val.value_namespace = name_space;
        udf5val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf5Mask")
    {
        udf5mask = value;
        udf5mask.value_namespace = name_space;
        udf5mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf6Name")
    {
        udf6name = value;
        udf6name.value_namespace = name_space;
        udf6name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf6Val")
    {
        udf6val = value;
        udf6val.value_namespace = name_space;
        udf6val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf6Mask")
    {
        udf6mask = value;
        udf6mask.value_namespace = name_space;
        udf6mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf7Name")
    {
        udf7name = value;
        udf7name.value_namespace = name_space;
        udf7name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf7Val")
    {
        udf7val = value;
        udf7val.value_namespace = name_space;
        udf7val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf7Mask")
    {
        udf7mask = value;
        udf7mask.value_namespace = name_space;
        udf7mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf8Name")
    {
        udf8name = value;
        udf8name.value_namespace = name_space;
        udf8name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf8Val")
    {
        udf8val = value;
        udf8val.value_namespace = name_space;
        udf8val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf8Mask")
    {
        udf8mask = value;
        udf8mask.value_namespace = name_space;
        udf8mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf9Name")
    {
        udf9name = value;
        udf9name.value_namespace = name_space;
        udf9name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf9Val")
    {
        udf9val = value;
        udf9val.value_namespace = name_space;
        udf9val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf9Mask")
    {
        udf9mask = value;
        udf9mask.value_namespace = name_space;
        udf9mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf10Name")
    {
        udf10name = value;
        udf10name.value_namespace = name_space;
        udf10name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf10Val")
    {
        udf10val = value;
        udf10val.value_namespace = name_space;
        udf10val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf10Mask")
    {
        udf10mask = value;
        udf10mask.value_namespace = name_space;
        udf10mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf11Name")
    {
        udf11name = value;
        udf11name.value_namespace = name_space;
        udf11name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf11Val")
    {
        udf11val = value;
        udf11val.value_namespace = name_space;
        udf11val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf11Mask")
    {
        udf11mask = value;
        udf11mask.value_namespace = name_space;
        udf11mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf12Name")
    {
        udf12name = value;
        udf12name.value_namespace = name_space;
        udf12name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf12Val")
    {
        udf12val = value;
        udf12val.value_namespace = name_space;
        udf12val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf12Mask")
    {
        udf12mask = value;
        udf12mask.value_namespace = name_space;
        udf12mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf13Name")
    {
        udf13name = value;
        udf13name.value_namespace = name_space;
        udf13name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf13Val")
    {
        udf13val = value;
        udf13val.value_namespace = name_space;
        udf13val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf13Mask")
    {
        udf13mask = value;
        udf13mask.value_namespace = name_space;
        udf13mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf14Name")
    {
        udf14name = value;
        udf14name.value_namespace = name_space;
        udf14name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf14Val")
    {
        udf14val = value;
        udf14val.value_namespace = name_space;
        udf14val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf14Mask")
    {
        udf14mask = value;
        udf14mask.value_namespace = name_space;
        udf14mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf15Name")
    {
        udf15name = value;
        udf15name.value_namespace = name_space;
        udf15name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf15Val")
    {
        udf15val = value;
        udf15val.value_namespace = name_space;
        udf15val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf15Mask")
    {
        udf15mask = value;
        udf15mask.value_namespace = name_space;
        udf15mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf16Name")
    {
        udf16name = value;
        udf16name.value_namespace = name_space;
        udf16name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf16Val")
    {
        udf16val = value;
        udf16val.value_namespace = name_space;
        udf16val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf16Mask")
    {
        udf16mask = value;
        udf16mask.value_namespace = name_space;
        udf16mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf17Name")
    {
        udf17name = value;
        udf17name.value_namespace = name_space;
        udf17name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf17Val")
    {
        udf17val = value;
        udf17val.value_namespace = name_space;
        udf17val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf17Mask")
    {
        udf17mask = value;
        udf17mask.value_namespace = name_space;
        udf17mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf18Name")
    {
        udf18name = value;
        udf18name.value_namespace = name_space;
        udf18name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf18Val")
    {
        udf18val = value;
        udf18val.value_namespace = name_space;
        udf18val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf18Mask")
    {
        udf18mask = value;
        udf18mask.value_namespace = name_space;
        udf18mask.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udf1Name")
    {
        udf1name.yfilter = yfilter;
    }
    if(value_path == "udf1Val")
    {
        udf1val.yfilter = yfilter;
    }
    if(value_path == "udf1Mask")
    {
        udf1mask.yfilter = yfilter;
    }
    if(value_path == "udf2Name")
    {
        udf2name.yfilter = yfilter;
    }
    if(value_path == "udf2Val")
    {
        udf2val.yfilter = yfilter;
    }
    if(value_path == "udf2Mask")
    {
        udf2mask.yfilter = yfilter;
    }
    if(value_path == "udf3Name")
    {
        udf3name.yfilter = yfilter;
    }
    if(value_path == "udf3Val")
    {
        udf3val.yfilter = yfilter;
    }
    if(value_path == "udf3Mask")
    {
        udf3mask.yfilter = yfilter;
    }
    if(value_path == "udf4Name")
    {
        udf4name.yfilter = yfilter;
    }
    if(value_path == "udf4Val")
    {
        udf4val.yfilter = yfilter;
    }
    if(value_path == "udf4Mask")
    {
        udf4mask.yfilter = yfilter;
    }
    if(value_path == "udf5Name")
    {
        udf5name.yfilter = yfilter;
    }
    if(value_path == "udf5Val")
    {
        udf5val.yfilter = yfilter;
    }
    if(value_path == "udf5Mask")
    {
        udf5mask.yfilter = yfilter;
    }
    if(value_path == "udf6Name")
    {
        udf6name.yfilter = yfilter;
    }
    if(value_path == "udf6Val")
    {
        udf6val.yfilter = yfilter;
    }
    if(value_path == "udf6Mask")
    {
        udf6mask.yfilter = yfilter;
    }
    if(value_path == "udf7Name")
    {
        udf7name.yfilter = yfilter;
    }
    if(value_path == "udf7Val")
    {
        udf7val.yfilter = yfilter;
    }
    if(value_path == "udf7Mask")
    {
        udf7mask.yfilter = yfilter;
    }
    if(value_path == "udf8Name")
    {
        udf8name.yfilter = yfilter;
    }
    if(value_path == "udf8Val")
    {
        udf8val.yfilter = yfilter;
    }
    if(value_path == "udf8Mask")
    {
        udf8mask.yfilter = yfilter;
    }
    if(value_path == "udf9Name")
    {
        udf9name.yfilter = yfilter;
    }
    if(value_path == "udf9Val")
    {
        udf9val.yfilter = yfilter;
    }
    if(value_path == "udf9Mask")
    {
        udf9mask.yfilter = yfilter;
    }
    if(value_path == "udf10Name")
    {
        udf10name.yfilter = yfilter;
    }
    if(value_path == "udf10Val")
    {
        udf10val.yfilter = yfilter;
    }
    if(value_path == "udf10Mask")
    {
        udf10mask.yfilter = yfilter;
    }
    if(value_path == "udf11Name")
    {
        udf11name.yfilter = yfilter;
    }
    if(value_path == "udf11Val")
    {
        udf11val.yfilter = yfilter;
    }
    if(value_path == "udf11Mask")
    {
        udf11mask.yfilter = yfilter;
    }
    if(value_path == "udf12Name")
    {
        udf12name.yfilter = yfilter;
    }
    if(value_path == "udf12Val")
    {
        udf12val.yfilter = yfilter;
    }
    if(value_path == "udf12Mask")
    {
        udf12mask.yfilter = yfilter;
    }
    if(value_path == "udf13Name")
    {
        udf13name.yfilter = yfilter;
    }
    if(value_path == "udf13Val")
    {
        udf13val.yfilter = yfilter;
    }
    if(value_path == "udf13Mask")
    {
        udf13mask.yfilter = yfilter;
    }
    if(value_path == "udf14Name")
    {
        udf14name.yfilter = yfilter;
    }
    if(value_path == "udf14Val")
    {
        udf14val.yfilter = yfilter;
    }
    if(value_path == "udf14Mask")
    {
        udf14mask.yfilter = yfilter;
    }
    if(value_path == "udf15Name")
    {
        udf15name.yfilter = yfilter;
    }
    if(value_path == "udf15Val")
    {
        udf15val.yfilter = yfilter;
    }
    if(value_path == "udf15Mask")
    {
        udf15mask.yfilter = yfilter;
    }
    if(value_path == "udf16Name")
    {
        udf16name.yfilter = yfilter;
    }
    if(value_path == "udf16Val")
    {
        udf16val.yfilter = yfilter;
    }
    if(value_path == "udf16Mask")
    {
        udf16mask.yfilter = yfilter;
    }
    if(value_path == "udf17Name")
    {
        udf17name.yfilter = yfilter;
    }
    if(value_path == "udf17Val")
    {
        udf17val.yfilter = yfilter;
    }
    if(value_path == "udf17Mask")
    {
        udf17mask.yfilter = yfilter;
    }
    if(value_path == "udf18Name")
    {
        udf18name.yfilter = yfilter;
    }
    if(value_path == "udf18Val")
    {
        udf18val.yfilter = yfilter;
    }
    if(value_path == "udf18Mask")
    {
        udf18mask.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf1Name" || name == "udf1Val" || name == "udf1Mask" || name == "udf2Name" || name == "udf2Val" || name == "udf2Mask" || name == "udf3Name" || name == "udf3Val" || name == "udf3Mask" || name == "udf4Name" || name == "udf4Val" || name == "udf4Mask" || name == "udf5Name" || name == "udf5Val" || name == "udf5Mask" || name == "udf6Name" || name == "udf6Val" || name == "udf6Mask" || name == "udf7Name" || name == "udf7Val" || name == "udf7Mask" || name == "udf8Name" || name == "udf8Val" || name == "udf8Mask" || name == "udf9Name" || name == "udf9Val" || name == "udf9Mask" || name == "udf10Name" || name == "udf10Val" || name == "udf10Mask" || name == "udf11Name" || name == "udf11Val" || name == "udf11Mask" || name == "udf12Name" || name == "udf12Val" || name == "udf12Mask" || name == "udf13Name" || name == "udf13Val" || name == "udf13Mask" || name == "udf14Name" || name == "udf14Val" || name == "udf14Mask" || name == "udf15Name" || name == "udf15Val" || name == "udf15Mask" || name == "udf16Name" || name == "udf16Val" || name == "udf16Mask" || name == "udf17Name" || name == "udf17Val" || name == "udf17Mask" || name == "udf18Name" || name == "udf18Val" || name == "udf18Mask")
        return true;
    return false;
}

System::AclItems::Ipv4Items::ONameItems::ONameItems()
    :
    addrgroup_list(this, {"name"})
{

    yang_name = "oName-items"; yang_parent_name = "ipv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::ONameItems::~ONameItems()
{
}

bool System::AclItems::Ipv4Items::ONameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addrgroup_list.len(); index++)
    {
        if(addrgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::ONameItems::has_operation() const
{
    for (std::size_t index=0; index<addrgroup_list.len(); index++)
    {
        if(addrgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::ONameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::ONameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oName-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::ONameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::ONameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrGroup-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::ONameItems::AddrGroupList>();
        c->parent = this;
        addrgroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::ONameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addrgroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::ONameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::ONameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::ONameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AddrGroup-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::ONameItems::AddrGroupList::AddrGroupList()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
        ,
    seq_items(std::make_shared<System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "AddrGroup-list"; yang_parent_name = "oName-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv4Items::ONameItems::AddrGroupList::~AddrGroupList()
{
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv4-items/oName-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AddrGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    return children;
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::SeqItems()
    :
    addrmember_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "AddrGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::~SeqItems()
{
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addrmember_list.len(); index++)
    {
        if(addrmember_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<addrmember_list.len(); index++)
    {
        if(addrmember_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrMember-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList>();
        c->parent = this;
        addrmember_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addrmember_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AddrMember-list")
        return true;
    return false;
}

System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::AddrMemberList()
    :
    seqnum{YType::uint32, "seqNum"},
    prefix{YType::str, "prefix"},
    prefixmask{YType::str, "prefixMask"},
    prefixlength{YType::uint8, "prefixLength"},
    configstatus{YType::uint8, "configStatus"},
    usersetbit{YType::uint64, "userSetBit"}
{

    yang_name = "AddrMember-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::~AddrMemberList()
{
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| prefix.is_set
	|| prefixmask.is_set
	|| prefixlength.is_set
	|| configstatus.is_set
	|| usersetbit.is_set;
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefixmask.yfilter)
	|| ydk::is_set(prefixlength.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(usersetbit.yfilter);
}

std::string System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AddrMember-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefixmask.is_set || is_set(prefixmask.yfilter)) leaf_name_data.push_back(prefixmask.get_name_leafdata());
    if (prefixlength.is_set || is_set(prefixlength.yfilter)) leaf_name_data.push_back(prefixlength.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixMask")
    {
        prefixmask = value;
        prefixmask.value_namespace = name_space;
        prefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixLength")
    {
        prefixlength = value;
        prefixlength.value_namespace = name_space;
        prefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefixMask")
    {
        prefixmask.yfilter = yfilter;
    }
    if(value_path == "prefixLength")
    {
        prefixlength.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "prefix" || name == "prefixMask" || name == "prefixLength" || name == "configStatus" || name == "userSetBit")
        return true;
    return false;
}

System::AclItems::Ipv6Items::Ipv6Items()
    :
    statclear_items(std::make_shared<System::AclItems::Ipv6Items::StatClearItems>())
    , policy_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems>())
    , name_items(std::make_shared<System::AclItems::Ipv6Items::NameItems>())
    , oname_items(std::make_shared<System::AclItems::Ipv6Items::ONameItems>())
{
    statclear_items->parent = this;
    policy_items->parent = this;
    name_items->parent = this;
    oname_items->parent = this;

    yang_name = "ipv6-items"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::~Ipv6Items()
{
}

bool System::AclItems::Ipv6Items::has_data() const
{
    if (is_presence_container) return true;
    return (statclear_items !=  nullptr && statclear_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data())
	|| (oname_items !=  nullptr && oname_items->has_data());
}

bool System::AclItems::Ipv6Items::has_operation() const
{
    return is_set(yfilter)
	|| (statclear_items !=  nullptr && statclear_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (name_items !=  nullptr && name_items->has_operation())
	|| (oname_items !=  nullptr && oname_items->has_operation());
}

std::string System::AclItems::Ipv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statClear-items")
    {
        if(statclear_items == nullptr)
        {
            statclear_items = std::make_shared<System::AclItems::Ipv6Items::StatClearItems>();
        }
        return statclear_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::AclItems::Ipv6Items::NameItems>();
        }
        return name_items;
    }

    if(child_yang_name == "oName-items")
    {
        if(oname_items == nullptr)
        {
            oname_items = std::make_shared<System::AclItems::Ipv6Items::ONameItems>();
        }
        return oname_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statclear_items != nullptr)
    {
        children["statClear-items"] = statclear_items;
    }

    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    if(name_items != nullptr)
    {
        children["name-items"] = name_items;
    }

    if(oname_items != nullptr)
    {
        children["oName-items"] = oname_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "policy-items" || name == "name-items" || name == "oName-items")
        return true;
    return false;
}

System::AclItems::Ipv6Items::StatClearItems::StatClearItems()
    :
    name{YType::str, "name"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "statClear-items"; yang_parent_name = "ipv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::StatClearItems::~StatClearItems()
{
}

bool System::AclItems::Ipv6Items::StatClearItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| timestamp.is_set;
}

bool System::AclItems::Ipv6Items::StatClearItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::AclItems::Ipv6Items::StatClearItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::StatClearItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statClear-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::StatClearItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::StatClearItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::StatClearItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::StatClearItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "timeStamp")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::PolicyItems()
    :
    ingress_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems>())
    , egress_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems>())
{
    ingress_items->parent = this;
    egress_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "ipv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::~PolicyItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (ingress_items !=  nullptr && ingress_items->has_data())
	|| (egress_items !=  nullptr && egress_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (ingress_items !=  nullptr && ingress_items->has_operation())
	|| (egress_items !=  nullptr && egress_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-items")
    {
        if(ingress_items == nullptr)
        {
            ingress_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems>();
        }
        return ingress_items;
    }

    if(child_yang_name == "egress-items")
    {
        if(egress_items == nullptr)
        {
            egress_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems>();
        }
        return egress_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ingress_items != nullptr)
    {
        children["ingress-items"] = ingress_items;
    }

    if(egress_items != nullptr)
    {
        children["egress-items"] = egress_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-items" || name == "egress-items")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IngressItems()
    :
    intf_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems>())
    , vty_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems>())
{
    intf_items->parent = this;
    vty_items->parent = this;

    yang_name = "ingress-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::~IngressItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "ingress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::~IntfItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/ingress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_>())
    , portacl_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems>())
{
    acl_items->parent = this;
    portacl_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::~IfList()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (portacl_items !=  nullptr && portacl_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/ingress-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_>();
        }
        return acl_items;
    }

    if(child_yang_name == "portacl-items")
    {
        if(portacl_items == nullptr)
        {
            portacl_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems>();
        }
        return portacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        children["portacl-items"] = portacl_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "portacl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::~PortaclItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::VtyItems()
    :
    acl_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_>())
{
    acl_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "ingress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::~VtyItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/ingress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/ingress-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::EgressItems()
    :
    intf_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems>())
    , vty_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems>())
{
    intf_items->parent = this;
    vty_items->parent = this;

    yang_name = "egress-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::~EgressItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "egress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::~IntfItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/egress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_>())
    , portacl_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems>())
{
    acl_items->parent = this;
    portacl_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::~IfList()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (portacl_items !=  nullptr && portacl_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/egress-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_>();
        }
        return acl_items;
    }

    if(child_yang_name == "portacl-items")
    {
        if(portacl_items == nullptr)
        {
            portacl_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems>();
        }
        return portacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        children["portacl-items"] = portacl_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "portacl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::~PortaclItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::VtyItems()
    :
    acl_items(std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_>())
{
    acl_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "egress-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::~VtyItems()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/egress-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::~AclItems_()
{
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/policy-items/egress-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::NameItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "ipv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::NameItems::~NameItems()
{
}

bool System::AclItems::Ipv6Items::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::NameItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList>();
        c->parent = this;
        acl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACL-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::ACLList()
    :
    name{YType::str, "name"},
    peracestatistics{YType::uint8, "perACEStatistics"},
    configstatus{YType::uint32, "configStatus"}
        ,
    reseq_items(std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems>())
    , seq_items(std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems>())
{
    reseq_items->parent = this;
    seq_items->parent = this;

    yang_name = "ACL-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::~ACLList()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data())
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (reseq_items !=  nullptr && reseq_items->has_operation())
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::ACLList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::ACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reseq-items")
    {
        if(reseq_items == nullptr)
        {
            reseq_items = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems>();
        }
        return reseq_items;
    }

    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reseq_items != nullptr)
    {
        children["reseq-items"] = reseq_items;
    }

    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics = value;
        peracestatistics.value_namespace = name_space;
        peracestatistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::NameItems::ACLList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "perACEStatistics")
    {
        peracestatistics.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "seq-items" || name == "name" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems()
    :
    start{YType::uint32, "start"},
    step{YType::uint32, "step"},
    reseqdone{YType::boolean, "reseqDone"}
        ,
    reseq_items(std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_>())
{
    reseq_items->parent = this;

    yang_name = "reseq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::~ReseqItems()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| step.is_set
	|| reseqdone.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data());
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(step.yfilter)
	|| ydk::is_set(reseqdone.yfilter)
	|| (reseq_items !=  nullptr && reseq_items->has_operation());
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reseq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (step.is_set || is_set(step.yfilter)) leaf_name_data.push_back(step.get_name_leafdata());
    if (reseqdone.is_set || is_set(reseqdone.yfilter)) leaf_name_data.push_back(reseqdone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reseq-items")
    {
        if(reseq_items == nullptr)
        {
            reseq_items = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_>();
        }
        return reseq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reseq_items != nullptr)
    {
        children["reseq-items"] = reseq_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "step")
    {
        step = value;
        step.value_namespace = name_space;
        step.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reseqDone")
    {
        reseqdone = value;
        reseqdone.value_namespace = name_space;
        reseqdone.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "step")
    {
        step.yfilter = yfilter;
    }
    if(value_path == "reseqDone")
    {
        reseqdone.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "start" || name == "step" || name == "reseqDone")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqItems_()
    :
    reseqresultentry_list(this, {"beforeseq"})
{

    yang_name = "reseq-items"; yang_parent_name = "reseq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::~ReseqItems_()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reseqresultentry_list.len(); index++)
    {
        if(reseqresultentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::has_operation() const
{
    for (std::size_t index=0; index<reseqresultentry_list.len(); index++)
    {
        if(reseqresultentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reseq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReseqResultEntry-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList>();
        c->parent = this;
        reseqresultentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reseqresultentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReseqResultEntry-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::ReseqResultEntryList()
    :
    beforeseq{YType::uint32, "beforeSeq"},
    afterseq{YType::uint32, "afterSeq"}
{

    yang_name = "ReseqResultEntry-list"; yang_parent_name = "reseq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::~ReseqResultEntryList()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_data() const
{
    if (is_presence_container) return true;
    return beforeseq.is_set
	|| afterseq.is_set;
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(beforeseq.yfilter)
	|| ydk::is_set(afterseq.yfilter);
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReseqResultEntry-list";
    ADD_KEY_TOKEN(beforeseq, "beforeSeq");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (beforeseq.is_set || is_set(beforeseq.yfilter)) leaf_name_data.push_back(beforeseq.get_name_leafdata());
    if (afterseq.is_set || is_set(afterseq.yfilter)) leaf_name_data.push_back(afterseq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "beforeSeq")
    {
        beforeseq = value;
        beforeseq.value_namespace = name_space;
        beforeseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afterSeq")
    {
        afterseq = value;
        afterseq.value_namespace = name_space;
        afterseq.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "beforeSeq")
    {
        beforeseq.yfilter = yfilter;
    }
    if(value_path == "afterSeq")
    {
        afterseq.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "beforeSeq" || name == "afterSeq")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::SeqItems()
    :
    ace_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::~SeqItems()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ace_list.len(); index++)
    {
        if(ace_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<ace_list.len(); index++)
    {
        if(ace_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACE-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList>();
        c->parent = this;
        ace_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ace_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACE-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::ACEList()
    :
    seqnum{YType::uint32, "seqNum"},
    protocol{YType::uint8, "protocol"},
    protocolmask{YType::uint8, "protocolMask"},
    srcprefix{YType::str, "srcPrefix"},
    srcprefixmask{YType::str, "srcPrefixMask"},
    srcprefixlength{YType::uint8, "srcPrefixLength"},
    dstprefix{YType::str, "dstPrefix"},
    dstprefixmask{YType::str, "dstPrefixMask"},
    dstprefixlength{YType::uint8, "dstPrefixLength"},
    flowlabel{YType::uint32, "flowLabel"},
    icmpstr{YType::uint16, "icmpStr"},
    icmptype{YType::uint16, "icmpType"},
    icmpcode{YType::uint16, "icmpCode"},
    configstatus{YType::uint8, "configStatus"},
    remark{YType::str, "remark"},
    usersetbit{YType::uint64, "userSetBit"},
    action{YType::enumeration, "action"},
    srcportop{YType::uint8, "srcPortOp"},
    srcport1{YType::uint16, "srcPort1"},
    srcport2{YType::uint16, "srcPort2"},
    srcportmask{YType::uint16, "srcPortMask"},
    dstportop{YType::uint8, "dstPortOp"},
    dstport1{YType::uint16, "dstPort1"},
    dstport2{YType::uint16, "dstPort2"},
    dstportmask{YType::uint16, "dstPortMask"},
    logging{YType::boolean, "logging"},
    dscp{YType::uint8, "dscp"},
    pktlenop{YType::uint8, "pktLenOp"},
    pktlen1{YType::uint16, "pktLen1"},
    pktlen2{YType::uint16, "pktLen2"},
    urg{YType::boolean, "urg"},
    ack{YType::boolean, "ack"},
    psh{YType::boolean, "psh"},
    rst{YType::boolean, "rst"},
    syn{YType::boolean, "syn"},
    fin{YType::boolean, "fin"},
    est{YType::boolean, "est"},
    rev{YType::boolean, "rev"},
    tcpflagsmask{YType::uint8, "tcpFlagsMask"},
    packets{YType::uint64, "packets"},
    fragment{YType::boolean, "fragment"},
    capturesession{YType::uint16, "captureSession"},
    httpoption{YType::enumeration, "httpOption"},
    vni{YType::uint32, "vni"},
    vlan{YType::uint32, "vlan"},
    tcpoptionlength{YType::uint32, "tcpOptionLength"},
    timerange{YType::str, "timeRange"},
    srcaddrgroup{YType::str, "srcAddrGroup"},
    dstaddrgroup{YType::str, "dstAddrGroup"},
    srcportgroup{YType::str, "srcPortGroup"},
    dstportgroup{YType::str, "dstPortGroup"},
    redirect{YType::str, "redirect"}
{

    yang_name = "ACE-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::~ACEList()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| protocol.is_set
	|| protocolmask.is_set
	|| srcprefix.is_set
	|| srcprefixmask.is_set
	|| srcprefixlength.is_set
	|| dstprefix.is_set
	|| dstprefixmask.is_set
	|| dstprefixlength.is_set
	|| flowlabel.is_set
	|| icmpstr.is_set
	|| icmptype.is_set
	|| icmpcode.is_set
	|| configstatus.is_set
	|| remark.is_set
	|| usersetbit.is_set
	|| action.is_set
	|| srcportop.is_set
	|| srcport1.is_set
	|| srcport2.is_set
	|| srcportmask.is_set
	|| dstportop.is_set
	|| dstport1.is_set
	|| dstport2.is_set
	|| dstportmask.is_set
	|| logging.is_set
	|| dscp.is_set
	|| pktlenop.is_set
	|| pktlen1.is_set
	|| pktlen2.is_set
	|| urg.is_set
	|| ack.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| fin.is_set
	|| est.is_set
	|| rev.is_set
	|| tcpflagsmask.is_set
	|| packets.is_set
	|| fragment.is_set
	|| capturesession.is_set
	|| httpoption.is_set
	|| vni.is_set
	|| vlan.is_set
	|| tcpoptionlength.is_set
	|| timerange.is_set
	|| srcaddrgroup.is_set
	|| dstaddrgroup.is_set
	|| srcportgroup.is_set
	|| dstportgroup.is_set
	|| redirect.is_set;
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(protocolmask.yfilter)
	|| ydk::is_set(srcprefix.yfilter)
	|| ydk::is_set(srcprefixmask.yfilter)
	|| ydk::is_set(srcprefixlength.yfilter)
	|| ydk::is_set(dstprefix.yfilter)
	|| ydk::is_set(dstprefixmask.yfilter)
	|| ydk::is_set(dstprefixlength.yfilter)
	|| ydk::is_set(flowlabel.yfilter)
	|| ydk::is_set(icmpstr.yfilter)
	|| ydk::is_set(icmptype.yfilter)
	|| ydk::is_set(icmpcode.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(usersetbit.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(srcportop.yfilter)
	|| ydk::is_set(srcport1.yfilter)
	|| ydk::is_set(srcport2.yfilter)
	|| ydk::is_set(srcportmask.yfilter)
	|| ydk::is_set(dstportop.yfilter)
	|| ydk::is_set(dstport1.yfilter)
	|| ydk::is_set(dstport2.yfilter)
	|| ydk::is_set(dstportmask.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(pktlenop.yfilter)
	|| ydk::is_set(pktlen1.yfilter)
	|| ydk::is_set(pktlen2.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(est.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(tcpflagsmask.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(capturesession.yfilter)
	|| ydk::is_set(httpoption.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(tcpoptionlength.yfilter)
	|| ydk::is_set(timerange.yfilter)
	|| ydk::is_set(srcaddrgroup.yfilter)
	|| ydk::is_set(dstaddrgroup.yfilter)
	|| ydk::is_set(srcportgroup.yfilter)
	|| ydk::is_set(dstportgroup.yfilter)
	|| ydk::is_set(redirect.yfilter);
}

std::string System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACE-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (protocolmask.is_set || is_set(protocolmask.yfilter)) leaf_name_data.push_back(protocolmask.get_name_leafdata());
    if (srcprefix.is_set || is_set(srcprefix.yfilter)) leaf_name_data.push_back(srcprefix.get_name_leafdata());
    if (srcprefixmask.is_set || is_set(srcprefixmask.yfilter)) leaf_name_data.push_back(srcprefixmask.get_name_leafdata());
    if (srcprefixlength.is_set || is_set(srcprefixlength.yfilter)) leaf_name_data.push_back(srcprefixlength.get_name_leafdata());
    if (dstprefix.is_set || is_set(dstprefix.yfilter)) leaf_name_data.push_back(dstprefix.get_name_leafdata());
    if (dstprefixmask.is_set || is_set(dstprefixmask.yfilter)) leaf_name_data.push_back(dstprefixmask.get_name_leafdata());
    if (dstprefixlength.is_set || is_set(dstprefixlength.yfilter)) leaf_name_data.push_back(dstprefixlength.get_name_leafdata());
    if (flowlabel.is_set || is_set(flowlabel.yfilter)) leaf_name_data.push_back(flowlabel.get_name_leafdata());
    if (icmpstr.is_set || is_set(icmpstr.yfilter)) leaf_name_data.push_back(icmpstr.get_name_leafdata());
    if (icmptype.is_set || is_set(icmptype.yfilter)) leaf_name_data.push_back(icmptype.get_name_leafdata());
    if (icmpcode.is_set || is_set(icmpcode.yfilter)) leaf_name_data.push_back(icmpcode.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (srcportop.is_set || is_set(srcportop.yfilter)) leaf_name_data.push_back(srcportop.get_name_leafdata());
    if (srcport1.is_set || is_set(srcport1.yfilter)) leaf_name_data.push_back(srcport1.get_name_leafdata());
    if (srcport2.is_set || is_set(srcport2.yfilter)) leaf_name_data.push_back(srcport2.get_name_leafdata());
    if (srcportmask.is_set || is_set(srcportmask.yfilter)) leaf_name_data.push_back(srcportmask.get_name_leafdata());
    if (dstportop.is_set || is_set(dstportop.yfilter)) leaf_name_data.push_back(dstportop.get_name_leafdata());
    if (dstport1.is_set || is_set(dstport1.yfilter)) leaf_name_data.push_back(dstport1.get_name_leafdata());
    if (dstport2.is_set || is_set(dstport2.yfilter)) leaf_name_data.push_back(dstport2.get_name_leafdata());
    if (dstportmask.is_set || is_set(dstportmask.yfilter)) leaf_name_data.push_back(dstportmask.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (pktlenop.is_set || is_set(pktlenop.yfilter)) leaf_name_data.push_back(pktlenop.get_name_leafdata());
    if (pktlen1.is_set || is_set(pktlen1.yfilter)) leaf_name_data.push_back(pktlen1.get_name_leafdata());
    if (pktlen2.is_set || is_set(pktlen2.yfilter)) leaf_name_data.push_back(pktlen2.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (est.is_set || is_set(est.yfilter)) leaf_name_data.push_back(est.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (tcpflagsmask.is_set || is_set(tcpflagsmask.yfilter)) leaf_name_data.push_back(tcpflagsmask.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (capturesession.is_set || is_set(capturesession.yfilter)) leaf_name_data.push_back(capturesession.get_name_leafdata());
    if (httpoption.is_set || is_set(httpoption.yfilter)) leaf_name_data.push_back(httpoption.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (tcpoptionlength.is_set || is_set(tcpoptionlength.yfilter)) leaf_name_data.push_back(tcpoptionlength.get_name_leafdata());
    if (timerange.is_set || is_set(timerange.yfilter)) leaf_name_data.push_back(timerange.get_name_leafdata());
    if (srcaddrgroup.is_set || is_set(srcaddrgroup.yfilter)) leaf_name_data.push_back(srcaddrgroup.get_name_leafdata());
    if (dstaddrgroup.is_set || is_set(dstaddrgroup.yfilter)) leaf_name_data.push_back(dstaddrgroup.get_name_leafdata());
    if (srcportgroup.is_set || is_set(srcportgroup.yfilter)) leaf_name_data.push_back(srcportgroup.get_name_leafdata());
    if (dstportgroup.is_set || is_set(dstportgroup.yfilter)) leaf_name_data.push_back(dstportgroup.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolMask")
    {
        protocolmask = value;
        protocolmask.value_namespace = name_space;
        protocolmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefix")
    {
        srcprefix = value;
        srcprefix.value_namespace = name_space;
        srcprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefixMask")
    {
        srcprefixmask = value;
        srcprefixmask.value_namespace = name_space;
        srcprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPrefixLength")
    {
        srcprefixlength = value;
        srcprefixlength.value_namespace = name_space;
        srcprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefix")
    {
        dstprefix = value;
        dstprefix.value_namespace = name_space;
        dstprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefixMask")
    {
        dstprefixmask = value;
        dstprefixmask.value_namespace = name_space;
        dstprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPrefixLength")
    {
        dstprefixlength = value;
        dstprefixlength.value_namespace = name_space;
        dstprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowLabel")
    {
        flowlabel = value;
        flowlabel.value_namespace = name_space;
        flowlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpStr")
    {
        icmpstr = value;
        icmpstr.value_namespace = name_space;
        icmpstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpType")
    {
        icmptype = value;
        icmptype.value_namespace = name_space;
        icmptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpCode")
    {
        icmpcode = value;
        icmpcode.value_namespace = name_space;
        icmpcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPortOp")
    {
        srcportop = value;
        srcportop.value_namespace = name_space;
        srcportop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort1")
    {
        srcport1 = value;
        srcport1.value_namespace = name_space;
        srcport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort2")
    {
        srcport2 = value;
        srcport2.value_namespace = name_space;
        srcport2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPortMask")
    {
        srcportmask = value;
        srcportmask.value_namespace = name_space;
        srcportmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPortOp")
    {
        dstportop = value;
        dstportop.value_namespace = name_space;
        dstportop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort1")
    {
        dstport1 = value;
        dstport1.value_namespace = name_space;
        dstport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort2")
    {
        dstport2 = value;
        dstport2.value_namespace = name_space;
        dstport2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPortMask")
    {
        dstportmask = value;
        dstportmask.value_namespace = name_space;
        dstportmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenOp")
    {
        pktlenop = value;
        pktlenop.value_namespace = name_space;
        pktlenop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLen1")
    {
        pktlen1 = value;
        pktlen1.value_namespace = name_space;
        pktlen1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLen2")
    {
        pktlen2 = value;
        pktlen2.value_namespace = name_space;
        pktlen2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "est")
    {
        est = value;
        est.value_namespace = name_space;
        est.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpFlagsMask")
    {
        tcpflagsmask = value;
        tcpflagsmask.value_namespace = name_space;
        tcpflagsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captureSession")
    {
        capturesession = value;
        capturesession.value_namespace = name_space;
        capturesession.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpOption")
    {
        httpoption = value;
        httpoption.value_namespace = name_space;
        httpoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpOptionLength")
    {
        tcpoptionlength = value;
        tcpoptionlength.value_namespace = name_space;
        tcpoptionlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeRange")
    {
        timerange = value;
        timerange.value_namespace = name_space;
        timerange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddrGroup")
    {
        srcaddrgroup = value;
        srcaddrgroup.value_namespace = name_space;
        srcaddrgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddrGroup")
    {
        dstaddrgroup = value;
        dstaddrgroup.value_namespace = name_space;
        dstaddrgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPortGroup")
    {
        srcportgroup = value;
        srcportgroup.value_namespace = name_space;
        srcportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPortGroup")
    {
        dstportgroup = value;
        dstportgroup.value_namespace = name_space;
        dstportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "protocolMask")
    {
        protocolmask.yfilter = yfilter;
    }
    if(value_path == "srcPrefix")
    {
        srcprefix.yfilter = yfilter;
    }
    if(value_path == "srcPrefixMask")
    {
        srcprefixmask.yfilter = yfilter;
    }
    if(value_path == "srcPrefixLength")
    {
        srcprefixlength.yfilter = yfilter;
    }
    if(value_path == "dstPrefix")
    {
        dstprefix.yfilter = yfilter;
    }
    if(value_path == "dstPrefixMask")
    {
        dstprefixmask.yfilter = yfilter;
    }
    if(value_path == "dstPrefixLength")
    {
        dstprefixlength.yfilter = yfilter;
    }
    if(value_path == "flowLabel")
    {
        flowlabel.yfilter = yfilter;
    }
    if(value_path == "icmpStr")
    {
        icmpstr.yfilter = yfilter;
    }
    if(value_path == "icmpType")
    {
        icmptype.yfilter = yfilter;
    }
    if(value_path == "icmpCode")
    {
        icmpcode.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "srcPortOp")
    {
        srcportop.yfilter = yfilter;
    }
    if(value_path == "srcPort1")
    {
        srcport1.yfilter = yfilter;
    }
    if(value_path == "srcPort2")
    {
        srcport2.yfilter = yfilter;
    }
    if(value_path == "srcPortMask")
    {
        srcportmask.yfilter = yfilter;
    }
    if(value_path == "dstPortOp")
    {
        dstportop.yfilter = yfilter;
    }
    if(value_path == "dstPort1")
    {
        dstport1.yfilter = yfilter;
    }
    if(value_path == "dstPort2")
    {
        dstport2.yfilter = yfilter;
    }
    if(value_path == "dstPortMask")
    {
        dstportmask.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "pktLenOp")
    {
        pktlenop.yfilter = yfilter;
    }
    if(value_path == "pktLen1")
    {
        pktlen1.yfilter = yfilter;
    }
    if(value_path == "pktLen2")
    {
        pktlen2.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "est")
    {
        est.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "tcpFlagsMask")
    {
        tcpflagsmask.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "captureSession")
    {
        capturesession.yfilter = yfilter;
    }
    if(value_path == "httpOption")
    {
        httpoption.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "tcpOptionLength")
    {
        tcpoptionlength.yfilter = yfilter;
    }
    if(value_path == "timeRange")
    {
        timerange.yfilter = yfilter;
    }
    if(value_path == "srcAddrGroup")
    {
        srcaddrgroup.yfilter = yfilter;
    }
    if(value_path == "dstAddrGroup")
    {
        dstaddrgroup.yfilter = yfilter;
    }
    if(value_path == "srcPortGroup")
    {
        srcportgroup.yfilter = yfilter;
    }
    if(value_path == "dstPortGroup")
    {
        dstportgroup.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "protocol" || name == "protocolMask" || name == "srcPrefix" || name == "srcPrefixMask" || name == "srcPrefixLength" || name == "dstPrefix" || name == "dstPrefixMask" || name == "dstPrefixLength" || name == "flowLabel" || name == "icmpStr" || name == "icmpType" || name == "icmpCode" || name == "configStatus" || name == "remark" || name == "userSetBit" || name == "action" || name == "srcPortOp" || name == "srcPort1" || name == "srcPort2" || name == "srcPortMask" || name == "dstPortOp" || name == "dstPort1" || name == "dstPort2" || name == "dstPortMask" || name == "logging" || name == "dscp" || name == "pktLenOp" || name == "pktLen1" || name == "pktLen2" || name == "urg" || name == "ack" || name == "psh" || name == "rst" || name == "syn" || name == "fin" || name == "est" || name == "rev" || name == "tcpFlagsMask" || name == "packets" || name == "fragment" || name == "captureSession" || name == "httpOption" || name == "vni" || name == "vlan" || name == "tcpOptionLength" || name == "timeRange" || name == "srcAddrGroup" || name == "dstAddrGroup" || name == "srcPortGroup" || name == "dstPortGroup" || name == "redirect")
        return true;
    return false;
}

System::AclItems::Ipv6Items::ONameItems::ONameItems()
    :
    addrgroup_list(this, {"name"})
{

    yang_name = "oName-items"; yang_parent_name = "ipv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::ONameItems::~ONameItems()
{
}

bool System::AclItems::Ipv6Items::ONameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addrgroup_list.len(); index++)
    {
        if(addrgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::ONameItems::has_operation() const
{
    for (std::size_t index=0; index<addrgroup_list.len(); index++)
    {
        if(addrgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::ONameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::ONameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oName-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::ONameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::ONameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrGroup-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::ONameItems::AddrGroupList>();
        c->parent = this;
        addrgroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::ONameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addrgroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::ONameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::ONameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::ONameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AddrGroup-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::ONameItems::AddrGroupList::AddrGroupList()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
        ,
    seq_items(std::make_shared<System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "AddrGroup-list"; yang_parent_name = "oName-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::Ipv6Items::ONameItems::AddrGroupList::~AddrGroupList()
{
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/ipv6-items/oName-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AddrGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    return children;
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::SeqItems()
    :
    addrmember_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "AddrGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::~SeqItems()
{
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addrmember_list.len(); index++)
    {
        if(addrmember_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<addrmember_list.len(); index++)
    {
        if(addrmember_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrMember-list")
    {
        auto c = std::make_shared<System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList>();
        c->parent = this;
        addrmember_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addrmember_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AddrMember-list")
        return true;
    return false;
}

System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::AddrMemberList()
    :
    seqnum{YType::uint32, "seqNum"},
    prefix{YType::str, "prefix"},
    prefixmask{YType::str, "prefixMask"},
    prefixlength{YType::uint8, "prefixLength"},
    configstatus{YType::uint8, "configStatus"},
    usersetbit{YType::uint64, "userSetBit"}
{

    yang_name = "AddrMember-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::~AddrMemberList()
{
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| prefix.is_set
	|| prefixmask.is_set
	|| prefixlength.is_set
	|| configstatus.is_set
	|| usersetbit.is_set;
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefixmask.yfilter)
	|| ydk::is_set(prefixlength.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(usersetbit.yfilter);
}

std::string System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AddrMember-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefixmask.is_set || is_set(prefixmask.yfilter)) leaf_name_data.push_back(prefixmask.get_name_leafdata());
    if (prefixlength.is_set || is_set(prefixlength.yfilter)) leaf_name_data.push_back(prefixlength.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixMask")
    {
        prefixmask = value;
        prefixmask.value_namespace = name_space;
        prefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixLength")
    {
        prefixlength = value;
        prefixlength.value_namespace = name_space;
        prefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefixMask")
    {
        prefixmask.yfilter = yfilter;
    }
    if(value_path == "prefixLength")
    {
        prefixlength.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "prefix" || name == "prefixMask" || name == "prefixLength" || name == "configStatus" || name == "userSetBit")
        return true;
    return false;
}

System::ActrlItems::ActrlItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    aux_items(std::make_shared<System::ActrlItems::AuxItems>())
    , filt_items(std::make_shared<System::ActrlItems::FiltItems>())
    , inst_items(std::make_shared<System::ActrlItems::InstItems>())
    , scope_items(std::make_shared<System::ActrlItems::ScopeItems>())
{
    aux_items->parent = this;
    filt_items->parent = this;
    inst_items->parent = this;
    scope_items->parent = this;

    yang_name = "actrl-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::~ActrlItems()
{
}

bool System::ActrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (aux_items !=  nullptr && aux_items->has_data())
	|| (filt_items !=  nullptr && filt_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (scope_items !=  nullptr && scope_items->has_data());
}

bool System::ActrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (aux_items !=  nullptr && aux_items->has_operation())
	|| (filt_items !=  nullptr && filt_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (scope_items !=  nullptr && scope_items->has_operation());
}

std::string System::ActrlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aux-items")
    {
        if(aux_items == nullptr)
        {
            aux_items = std::make_shared<System::ActrlItems::AuxItems>();
        }
        return aux_items;
    }

    if(child_yang_name == "filt-items")
    {
        if(filt_items == nullptr)
        {
            filt_items = std::make_shared<System::ActrlItems::FiltItems>();
        }
        return filt_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::ActrlItems::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "scope-items")
    {
        if(scope_items == nullptr)
        {
            scope_items = std::make_shared<System::ActrlItems::ScopeItems>();
        }
        return scope_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aux_items != nullptr)
    {
        children["aux-items"] = aux_items;
    }

    if(filt_items != nullptr)
    {
        children["filt-items"] = filt_items;
    }

    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    if(scope_items != nullptr)
    {
        children["scope-items"] = scope_items;
    }

    return children;
}

void System::ActrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::ActrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aux-items" || name == "filt-items" || name == "inst-items" || name == "scope-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::ActrlItems::AuxItems::AuxItems()
    :
    name{YType::str, "name"}
        ,
    scope_items(std::make_shared<System::ActrlItems::AuxItems::ScopeItems>())
    , rule_items(std::make_shared<System::ActrlItems::AuxItems::RuleItems>())
    , flt_items(std::make_shared<System::ActrlItems::AuxItems::FltItems>())
    , mgmtrule_items(std::make_shared<System::ActrlItems::AuxItems::MgmtruleItems>())
    , mgmtauxflt_items(std::make_shared<System::ActrlItems::AuxItems::MgmtauxfltItems>())
{
    scope_items->parent = this;
    rule_items->parent = this;
    flt_items->parent = this;
    mgmtrule_items->parent = this;
    mgmtauxflt_items->parent = this;

    yang_name = "aux-items"; yang_parent_name = "actrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::~AuxItems()
{
}

bool System::ActrlItems::AuxItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (scope_items !=  nullptr && scope_items->has_data())
	|| (rule_items !=  nullptr && rule_items->has_data())
	|| (flt_items !=  nullptr && flt_items->has_data())
	|| (mgmtrule_items !=  nullptr && mgmtrule_items->has_data())
	|| (mgmtauxflt_items !=  nullptr && mgmtauxflt_items->has_data());
}

bool System::ActrlItems::AuxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (scope_items !=  nullptr && scope_items->has_operation())
	|| (rule_items !=  nullptr && rule_items->has_operation())
	|| (flt_items !=  nullptr && flt_items->has_operation())
	|| (mgmtrule_items !=  nullptr && mgmtrule_items->has_operation())
	|| (mgmtauxflt_items !=  nullptr && mgmtauxflt_items->has_operation());
}

std::string System::ActrlItems::AuxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aux-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope-items")
    {
        if(scope_items == nullptr)
        {
            scope_items = std::make_shared<System::ActrlItems::AuxItems::ScopeItems>();
        }
        return scope_items;
    }

    if(child_yang_name == "rule-items")
    {
        if(rule_items == nullptr)
        {
            rule_items = std::make_shared<System::ActrlItems::AuxItems::RuleItems>();
        }
        return rule_items;
    }

    if(child_yang_name == "flt-items")
    {
        if(flt_items == nullptr)
        {
            flt_items = std::make_shared<System::ActrlItems::AuxItems::FltItems>();
        }
        return flt_items;
    }

    if(child_yang_name == "mgmtrule-items")
    {
        if(mgmtrule_items == nullptr)
        {
            mgmtrule_items = std::make_shared<System::ActrlItems::AuxItems::MgmtruleItems>();
        }
        return mgmtrule_items;
    }

    if(child_yang_name == "mgmtauxflt-items")
    {
        if(mgmtauxflt_items == nullptr)
        {
            mgmtauxflt_items = std::make_shared<System::ActrlItems::AuxItems::MgmtauxfltItems>();
        }
        return mgmtauxflt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scope_items != nullptr)
    {
        children["scope-items"] = scope_items;
    }

    if(rule_items != nullptr)
    {
        children["rule-items"] = rule_items;
    }

    if(flt_items != nullptr)
    {
        children["flt-items"] = flt_items;
    }

    if(mgmtrule_items != nullptr)
    {
        children["mgmtrule-items"] = mgmtrule_items;
    }

    if(mgmtauxflt_items != nullptr)
    {
        children["mgmtauxflt-items"] = mgmtauxflt_items;
    }

    return children;
}

void System::ActrlItems::AuxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope-items" || name == "rule-items" || name == "flt-items" || name == "mgmtrule-items" || name == "mgmtauxflt-items" || name == "name")
        return true;
    return false;
}

System::ActrlItems::AuxItems::ScopeItems::ScopeItems()
    :
    auxscope_list(this, {"id"})
{

    yang_name = "scope-items"; yang_parent_name = "aux-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::ScopeItems::~ScopeItems()
{
}

bool System::ActrlItems::AuxItems::ScopeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auxscope_list.len(); index++)
    {
        if(auxscope_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::AuxItems::ScopeItems::has_operation() const
{
    for (std::size_t index=0; index<auxscope_list.len(); index++)
    {
        if(auxscope_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::AuxItems::ScopeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::ScopeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::ScopeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::ScopeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxScope-list")
    {
        auto c = std::make_shared<System::ActrlItems::AuxItems::ScopeItems::AuxScopeList>();
        c->parent = this;
        auxscope_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::ScopeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : auxscope_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::AuxItems::ScopeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::AuxItems::ScopeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::AuxItems::ScopeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AuxScope-list")
        return true;
    return false;
}

System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::AuxScopeList()
    :
    id{YType::uint32, "id"},
    pinstnodeid{YType::uint32, "pinstNodeId"},
    startnodeidarr{YType::str, "startNodeIdArr"},
    endnodeidarr{YType::str, "endNodeIdArr"},
    name{YType::str, "name"}
{

    yang_name = "AuxScope-list"; yang_parent_name = "scope-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::~AuxScopeList()
{
}

bool System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pinstnodeid.is_set
	|| startnodeidarr.is_set
	|| endnodeidarr.is_set
	|| name.is_set;
}

bool System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pinstnodeid.yfilter)
	|| ydk::is_set(startnodeidarr.yfilter)
	|| ydk::is_set(endnodeidarr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/scope-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AuxScope-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pinstnodeid.is_set || is_set(pinstnodeid.yfilter)) leaf_name_data.push_back(pinstnodeid.get_name_leafdata());
    if (startnodeidarr.is_set || is_set(startnodeidarr.yfilter)) leaf_name_data.push_back(startnodeidarr.get_name_leafdata());
    if (endnodeidarr.is_set || is_set(endnodeidarr.yfilter)) leaf_name_data.push_back(endnodeidarr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pinstNodeId")
    {
        pinstnodeid = value;
        pinstnodeid.value_namespace = name_space;
        pinstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startNodeIdArr")
    {
        startnodeidarr = value;
        startnodeidarr.value_namespace = name_space;
        startnodeidarr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endNodeIdArr")
    {
        endnodeidarr = value;
        endnodeidarr.value_namespace = name_space;
        endnodeidarr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pinstNodeId")
    {
        pinstnodeid.yfilter = yfilter;
    }
    if(value_path == "startNodeIdArr")
    {
        startnodeidarr.yfilter = yfilter;
    }
    if(value_path == "endNodeIdArr")
    {
        endnodeidarr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pinstNodeId" || name == "startNodeIdArr" || name == "endNodeIdArr" || name == "name")
        return true;
    return false;
}

System::ActrlItems::AuxItems::RuleItems::RuleItems()
    :
    auxrule_list(this, {"id"})
{

    yang_name = "rule-items"; yang_parent_name = "aux-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::RuleItems::~RuleItems()
{
}

bool System::ActrlItems::AuxItems::RuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auxrule_list.len(); index++)
    {
        if(auxrule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::AuxItems::RuleItems::has_operation() const
{
    for (std::size_t index=0; index<auxrule_list.len(); index++)
    {
        if(auxrule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::AuxItems::RuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::RuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::RuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxRule-list")
    {
        auto c = std::make_shared<System::ActrlItems::AuxItems::RuleItems::AuxRuleList>();
        c->parent = this;
        auxrule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : auxrule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::AuxItems::RuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::AuxItems::RuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::AuxItems::RuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AuxRule-list")
        return true;
    return false;
}

System::ActrlItems::AuxItems::RuleItems::AuxRuleList::AuxRuleList()
    :
    id{YType::uint32, "id"},
    fltid{YType::uint32, "fltid"},
    prio{YType::uint8, "prio"},
    rulenodeid{YType::uint32, "ruleNodeId"},
    scopeid{YType::uint32, "scopeId"},
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "AuxRule-list"; yang_parent_name = "rule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::RuleItems::AuxRuleList::~AuxRuleList()
{
}

bool System::ActrlItems::AuxItems::RuleItems::AuxRuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fltid.is_set
	|| prio.is_set
	|| rulenodeid.is_set
	|| scopeid.is_set
	|| direction.is_set
	|| name.is_set;
}

bool System::ActrlItems::AuxItems::RuleItems::AuxRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fltid.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(rulenodeid.yfilter)
	|| ydk::is_set(scopeid.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/rule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AuxRule-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fltid.is_set || is_set(fltid.yfilter)) leaf_name_data.push_back(fltid.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (rulenodeid.is_set || is_set(rulenodeid.yfilter)) leaf_name_data.push_back(rulenodeid.get_name_leafdata());
    if (scopeid.is_set || is_set(scopeid.yfilter)) leaf_name_data.push_back(scopeid.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::AuxItems::RuleItems::AuxRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltid")
    {
        fltid = value;
        fltid.value_namespace = name_space;
        fltid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleNodeId")
    {
        rulenodeid = value;
        rulenodeid.value_namespace = name_space;
        rulenodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scopeId")
    {
        scopeid = value;
        scopeid.value_namespace = name_space;
        scopeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::RuleItems::AuxRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fltid")
    {
        fltid.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "ruleNodeId")
    {
        rulenodeid.yfilter = yfilter;
    }
    if(value_path == "scopeId")
    {
        scopeid.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::RuleItems::AuxRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fltid" || name == "prio" || name == "ruleNodeId" || name == "scopeId" || name == "direction" || name == "name")
        return true;
    return false;
}

System::ActrlItems::AuxItems::FltItems::FltItems()
    :
    auxflt_list(this, {"id"})
{

    yang_name = "flt-items"; yang_parent_name = "aux-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::FltItems::~FltItems()
{
}

bool System::ActrlItems::AuxItems::FltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auxflt_list.len(); index++)
    {
        if(auxflt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::AuxItems::FltItems::has_operation() const
{
    for (std::size_t index=0; index<auxflt_list.len(); index++)
    {
        if(auxflt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::AuxItems::FltItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::FltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::FltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::FltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxFlt-list")
    {
        auto c = std::make_shared<System::ActrlItems::AuxItems::FltItems::AuxFltList>();
        c->parent = this;
        auxflt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::FltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : auxflt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::AuxItems::FltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::AuxItems::FltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::AuxItems::FltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AuxFlt-list")
        return true;
    return false;
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::AuxFltList()
    :
    id{YType::uint32, "id"},
    ruleidarr{YType::str, "ruleidArr"},
    ruleindex{YType::uint16, "ruleIndex"},
    fltgroupnodeid{YType::uint32, "fltgroupNodeId"},
    name{YType::str, "name"}
        ,
    ent_items(std::make_shared<System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "AuxFlt-list"; yang_parent_name = "flt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::~AuxFltList()
{
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ruleidarr.is_set
	|| ruleindex.is_set
	|| fltgroupnodeid.is_set
	|| name.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ruleidarr.yfilter)
	|| ydk::is_set(ruleindex.yfilter)
	|| ydk::is_set(fltgroupnodeid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::ActrlItems::AuxItems::FltItems::AuxFltList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/flt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::FltItems::AuxFltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AuxFlt-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::FltItems::AuxFltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ruleidarr.is_set || is_set(ruleidarr.yfilter)) leaf_name_data.push_back(ruleidarr.get_name_leafdata());
    if (ruleindex.is_set || is_set(ruleindex.yfilter)) leaf_name_data.push_back(ruleindex.get_name_leafdata());
    if (fltgroupnodeid.is_set || is_set(fltgroupnodeid.yfilter)) leaf_name_data.push_back(fltgroupnodeid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::FltItems::AuxFltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::FltItems::AuxFltList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleidArr")
    {
        ruleidarr = value;
        ruleidarr.value_namespace = name_space;
        ruleidarr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleIndex")
    {
        ruleindex = value;
        ruleindex.value_namespace = name_space;
        ruleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltgroupNodeId")
    {
        fltgroupnodeid = value;
        fltgroupnodeid.value_namespace = name_space;
        fltgroupnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ruleidArr")
    {
        ruleidarr.yfilter = yfilter;
    }
    if(value_path == "ruleIndex")
    {
        ruleindex.yfilter = yfilter;
    }
    if(value_path == "fltgroupNodeId")
    {
        fltgroupnodeid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "id" || name == "ruleidArr" || name == "ruleIndex" || name == "fltgroupNodeId" || name == "name")
        return true;
    return false;
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::EntItems()
    :
    auxentry_list(this, {"name"})
{

    yang_name = "ent-items"; yang_parent_name = "AuxFlt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::~EntItems()
{
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auxentry_list.len(); index++)
    {
        if(auxentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<auxentry_list.len(); index++)
    {
        if(auxentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxEntry-list")
    {
        auto c = std::make_shared<System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList>();
        c->parent = this;
        auxentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : auxentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AuxEntry-list")
        return true;
    return false;
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::AuxEntryList()
    :
    name{YType::str, "name"},
    parentid{YType::uint32, "parentId"},
    entrynodeid{YType::uint32, "entryNodeId"}
{

    yang_name = "AuxEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::~AuxEntryList()
{
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| parentid.is_set
	|| entrynodeid.is_set;
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(parentid.yfilter)
	|| ydk::is_set(entrynodeid.yfilter);
}

std::string System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AuxEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (parentid.is_set || is_set(parentid.yfilter)) leaf_name_data.push_back(parentid.get_name_leafdata());
    if (entrynodeid.is_set || is_set(entrynodeid.yfilter)) leaf_name_data.push_back(entrynodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parentId")
    {
        parentid = value;
        parentid.value_namespace = name_space;
        parentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entryNodeId")
    {
        entrynodeid = value;
        entrynodeid.value_namespace = name_space;
        entrynodeid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "parentId")
    {
        parentid.yfilter = yfilter;
    }
    if(value_path == "entryNodeId")
    {
        entrynodeid.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "parentId" || name == "entryNodeId")
        return true;
    return false;
}

System::ActrlItems::AuxItems::MgmtruleItems::MgmtruleItems()
    :
    mgmtauxrule_list(this, {"id"})
{

    yang_name = "mgmtrule-items"; yang_parent_name = "aux-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::MgmtruleItems::~MgmtruleItems()
{
}

bool System::ActrlItems::AuxItems::MgmtruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtauxrule_list.len(); index++)
    {
        if(mgmtauxrule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::AuxItems::MgmtruleItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtauxrule_list.len(); index++)
    {
        if(mgmtauxrule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::AuxItems::MgmtruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::MgmtruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmtrule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::MgmtruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::MgmtruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAuxRule-list")
    {
        auto c = std::make_shared<System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList>();
        c->parent = this;
        mgmtauxrule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::MgmtruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtauxrule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::AuxItems::MgmtruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::AuxItems::MgmtruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::AuxItems::MgmtruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtAuxRule-list")
        return true;
    return false;
}

System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::MgmtAuxRuleList()
    :
    id{YType::uint32, "id"},
    ctx_id{YType::uint32, "ctx_id"},
    scope_id{YType::uint32, "scope_id"},
    fltid{YType::uint32, "fltid"},
    name{YType::str, "name"}
{

    yang_name = "MgmtAuxRule-list"; yang_parent_name = "mgmtrule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::~MgmtAuxRuleList()
{
}

bool System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctx_id.is_set
	|| scope_id.is_set
	|| fltid.is_set
	|| name.is_set;
}

bool System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctx_id.yfilter)
	|| ydk::is_set(scope_id.yfilter)
	|| ydk::is_set(fltid.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/mgmtrule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtAuxRule-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctx_id.is_set || is_set(ctx_id.yfilter)) leaf_name_data.push_back(ctx_id.get_name_leafdata());
    if (scope_id.is_set || is_set(scope_id.yfilter)) leaf_name_data.push_back(scope_id.get_name_leafdata());
    if (fltid.is_set || is_set(fltid.yfilter)) leaf_name_data.push_back(fltid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctx_id")
    {
        ctx_id = value;
        ctx_id.value_namespace = name_space;
        ctx_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope_id")
    {
        scope_id = value;
        scope_id.value_namespace = name_space;
        scope_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltid")
    {
        fltid = value;
        fltid.value_namespace = name_space;
        fltid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctx_id")
    {
        ctx_id.yfilter = yfilter;
    }
    if(value_path == "scope_id")
    {
        scope_id.yfilter = yfilter;
    }
    if(value_path == "fltid")
    {
        fltid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctx_id" || name == "scope_id" || name == "fltid" || name == "name")
        return true;
    return false;
}

System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtauxfltItems()
    :
    mgmtauxflt_list(this, {"id"})
{

    yang_name = "mgmtauxflt-items"; yang_parent_name = "aux-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::MgmtauxfltItems::~MgmtauxfltItems()
{
}

bool System::ActrlItems::AuxItems::MgmtauxfltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtauxflt_list.len(); index++)
    {
        if(mgmtauxflt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::AuxItems::MgmtauxfltItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtauxflt_list.len(); index++)
    {
        if(mgmtauxflt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::AuxItems::MgmtauxfltItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::MgmtauxfltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmtauxflt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::MgmtauxfltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::MgmtauxfltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAuxFlt-list")
    {
        auto c = std::make_shared<System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList>();
        c->parent = this;
        mgmtauxflt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::MgmtauxfltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtauxflt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::AuxItems::MgmtauxfltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::AuxItems::MgmtauxfltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::AuxItems::MgmtauxfltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtAuxFlt-list")
        return true;
    return false;
}

System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::MgmtAuxFltList()
    :
    id{YType::uint32, "id"},
    mgmtruleidarr{YType::str, "mgmtruleidArr"},
    mgmtruleindex{YType::uint16, "mgmtruleIndex"},
    name{YType::str, "name"}
{

    yang_name = "MgmtAuxFlt-list"; yang_parent_name = "mgmtauxflt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::~MgmtAuxFltList()
{
}

bool System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| mgmtruleidarr.is_set
	|| mgmtruleindex.is_set
	|| name.is_set;
}

bool System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mgmtruleidarr.yfilter)
	|| ydk::is_set(mgmtruleindex.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/aux-items/mgmtauxflt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtAuxFlt-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mgmtruleidarr.is_set || is_set(mgmtruleidarr.yfilter)) leaf_name_data.push_back(mgmtruleidarr.get_name_leafdata());
    if (mgmtruleindex.is_set || is_set(mgmtruleindex.yfilter)) leaf_name_data.push_back(mgmtruleindex.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtruleidArr")
    {
        mgmtruleidarr = value;
        mgmtruleidarr.value_namespace = name_space;
        mgmtruleidarr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtruleIndex")
    {
        mgmtruleindex = value;
        mgmtruleindex.value_namespace = name_space;
        mgmtruleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mgmtruleidArr")
    {
        mgmtruleidarr.yfilter = yfilter;
    }
    if(value_path == "mgmtruleIndex")
    {
        mgmtruleindex.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "mgmtruleidArr" || name == "mgmtruleIndex" || name == "name")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FiltItems()
    :
    flt_list(this, {"id"})
{

    yang_name = "filt-items"; yang_parent_name = "actrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::FiltItems::~FiltItems()
{
}

bool System::ActrlItems::FiltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flt_list.len(); index++)
    {
        if(flt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::has_operation() const
{
    for (std::size_t index=0; index<flt_list.len(); index++)
    {
        if(flt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::FiltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Flt-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList>();
        c->parent = this;
        flt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Flt-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::FltList()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::ActrlItems::FiltItems::FltList::EntItems>())
    , rtfvtoremoterfltp_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems>())
    , rtfvtoremoterfltatt_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems>())
    , rsrfltpconn_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RsrfltpConnItems>())
    , rtvnsconntofltinst_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems>())
    , rtvzfwdrfltpatt_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems>())
    , rtvzrevrfltpatt_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems>())
    , rtvztaboorfltatt_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems>())
    , rtvzrfltatt_items(std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems>())
{
    ent_items->parent = this;
    rtfvtoremoterfltp_items->parent = this;
    rtfvtoremoterfltatt_items->parent = this;
    rsrfltpconn_items->parent = this;
    rtvnsconntofltinst_items->parent = this;
    rtvzfwdrfltpatt_items->parent = this;
    rtvzrevrfltpatt_items->parent = this;
    rtvztaboorfltatt_items->parent = this;
    rtvzrfltatt_items->parent = this;

    yang_name = "Flt-list"; yang_parent_name = "filt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::FiltItems::FltList::~FltList()
{
}

bool System::ActrlItems::FiltItems::FltList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtfvtoremoterfltp_items !=  nullptr && rtfvtoremoterfltp_items->has_data())
	|| (rtfvtoremoterfltatt_items !=  nullptr && rtfvtoremoterfltatt_items->has_data())
	|| (rsrfltpconn_items !=  nullptr && rsrfltpconn_items->has_data())
	|| (rtvnsconntofltinst_items !=  nullptr && rtvnsconntofltinst_items->has_data())
	|| (rtvzfwdrfltpatt_items !=  nullptr && rtvzfwdrfltpatt_items->has_data())
	|| (rtvzrevrfltpatt_items !=  nullptr && rtvzrevrfltpatt_items->has_data())
	|| (rtvztaboorfltatt_items !=  nullptr && rtvztaboorfltatt_items->has_data())
	|| (rtvzrfltatt_items !=  nullptr && rtvzrfltatt_items->has_data());
}

bool System::ActrlItems::FiltItems::FltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtfvtoremoterfltp_items !=  nullptr && rtfvtoremoterfltp_items->has_operation())
	|| (rtfvtoremoterfltatt_items !=  nullptr && rtfvtoremoterfltatt_items->has_operation())
	|| (rsrfltpconn_items !=  nullptr && rsrfltpconn_items->has_operation())
	|| (rtvnsconntofltinst_items !=  nullptr && rtvnsconntofltinst_items->has_operation())
	|| (rtvzfwdrfltpatt_items !=  nullptr && rtvzfwdrfltpatt_items->has_operation())
	|| (rtvzrevrfltpatt_items !=  nullptr && rtvzrevrfltpatt_items->has_operation())
	|| (rtvztaboorfltatt_items !=  nullptr && rtvztaboorfltatt_items->has_operation())
	|| (rtvzrfltatt_items !=  nullptr && rtvzrfltatt_items->has_operation());
}

std::string System::ActrlItems::FiltItems::FltList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/filt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::FiltItems::FltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Flt-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::ActrlItems::FiltItems::FltList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtfvToRemoteRFltP-items")
    {
        if(rtfvtoremoterfltp_items == nullptr)
        {
            rtfvtoremoterfltp_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems>();
        }
        return rtfvtoremoterfltp_items;
    }

    if(child_yang_name == "rtfvToRemoteRFltAtt-items")
    {
        if(rtfvtoremoterfltatt_items == nullptr)
        {
            rtfvtoremoterfltatt_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems>();
        }
        return rtfvtoremoterfltatt_items;
    }

    if(child_yang_name == "rsrfltpConn-items")
    {
        if(rsrfltpconn_items == nullptr)
        {
            rsrfltpconn_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RsrfltpConnItems>();
        }
        return rsrfltpconn_items;
    }

    if(child_yang_name == "rtvnsConnToFltInst-items")
    {
        if(rtvnsconntofltinst_items == nullptr)
        {
            rtvnsconntofltinst_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems>();
        }
        return rtvnsconntofltinst_items;
    }

    if(child_yang_name == "rtvzFwdRFltPAtt-items")
    {
        if(rtvzfwdrfltpatt_items == nullptr)
        {
            rtvzfwdrfltpatt_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems>();
        }
        return rtvzfwdrfltpatt_items;
    }

    if(child_yang_name == "rtvzRevRFltPAtt-items")
    {
        if(rtvzrevrfltpatt_items == nullptr)
        {
            rtvzrevrfltpatt_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems>();
        }
        return rtvzrevrfltpatt_items;
    }

    if(child_yang_name == "rtvzTabooRFltAtt-items")
    {
        if(rtvztaboorfltatt_items == nullptr)
        {
            rtvztaboorfltatt_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems>();
        }
        return rtvztaboorfltatt_items;
    }

    if(child_yang_name == "rtvzRFltAtt-items")
    {
        if(rtvzrfltatt_items == nullptr)
        {
            rtvzrfltatt_items = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems>();
        }
        return rtvzrfltatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    if(rtfvtoremoterfltp_items != nullptr)
    {
        children["rtfvToRemoteRFltP-items"] = rtfvtoremoterfltp_items;
    }

    if(rtfvtoremoterfltatt_items != nullptr)
    {
        children["rtfvToRemoteRFltAtt-items"] = rtfvtoremoterfltatt_items;
    }

    if(rsrfltpconn_items != nullptr)
    {
        children["rsrfltpConn-items"] = rsrfltpconn_items;
    }

    if(rtvnsconntofltinst_items != nullptr)
    {
        children["rtvnsConnToFltInst-items"] = rtvnsconntofltinst_items;
    }

    if(rtvzfwdrfltpatt_items != nullptr)
    {
        children["rtvzFwdRFltPAtt-items"] = rtvzfwdrfltpatt_items;
    }

    if(rtvzrevrfltpatt_items != nullptr)
    {
        children["rtvzRevRFltPAtt-items"] = rtvzrevrfltpatt_items;
    }

    if(rtvztaboorfltatt_items != nullptr)
    {
        children["rtvzTabooRFltAtt-items"] = rtvztaboorfltatt_items;
    }

    if(rtvzrfltatt_items != nullptr)
    {
        children["rtvzRFltAtt-items"] = rtvzrfltatt_items;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtfvToRemoteRFltP-items" || name == "rtfvToRemoteRFltAtt-items" || name == "rsrfltpConn-items" || name == "rtvnsConnToFltInst-items" || name == "rtvzFwdRFltPAtt-items" || name == "rtvzRevRFltPAtt-items" || name == "rtvzTabooRFltAtt-items" || name == "rtvzRFltAtt-items" || name == "id" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::EntItems::EntItems()
    :
    entry_list(this, {"name"})
{

    yang_name = "ent-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::EntItems::~EntItems()
{
}

bool System::ActrlItems::FiltItems::FltList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::EntItems::EntryList>();
        c->parent = this;
        entry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : entry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::EntItems::EntryList::EntryList()
    :
    name{YType::str, "name"},
    prio{YType::uint8, "prio"},
    descr{YType::str, "descr"},
    prot{YType::uint8, "prot"},
    sfromport{YType::uint16, "sFromPort"},
    stoport{YType::uint16, "sToPort"},
    dfromport{YType::uint16, "dFromPort"},
    dtoport{YType::uint16, "dToPort"},
    tcprules{YType::str, "tcpRules"},
    applytofrag{YType::boolean, "applyToFrag"},
    ethert{YType::enumeration, "etherT"},
    arpopc{YType::enumeration, "arpOpc"},
    icmpv4t{YType::uint8, "icmpv4T"},
    icmpv6t{YType::uint8, "icmpv6T"}
{

    yang_name = "Entry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::EntItems::EntryList::~EntryList()
{
}

bool System::ActrlItems::FiltItems::FltList::EntItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| prio.is_set
	|| descr.is_set
	|| prot.is_set
	|| sfromport.is_set
	|| stoport.is_set
	|| dfromport.is_set
	|| dtoport.is_set
	|| tcprules.is_set
	|| applytofrag.is_set
	|| ethert.is_set
	|| arpopc.is_set
	|| icmpv4t.is_set
	|| icmpv6t.is_set;
}

bool System::ActrlItems::FiltItems::FltList::EntItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(prot.yfilter)
	|| ydk::is_set(sfromport.yfilter)
	|| ydk::is_set(stoport.yfilter)
	|| ydk::is_set(dfromport.yfilter)
	|| ydk::is_set(dtoport.yfilter)
	|| ydk::is_set(tcprules.yfilter)
	|| ydk::is_set(applytofrag.yfilter)
	|| ydk::is_set(ethert.yfilter)
	|| ydk::is_set(arpopc.yfilter)
	|| ydk::is_set(icmpv4t.yfilter)
	|| ydk::is_set(icmpv6t.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::EntItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::EntItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (prot.is_set || is_set(prot.yfilter)) leaf_name_data.push_back(prot.get_name_leafdata());
    if (sfromport.is_set || is_set(sfromport.yfilter)) leaf_name_data.push_back(sfromport.get_name_leafdata());
    if (stoport.is_set || is_set(stoport.yfilter)) leaf_name_data.push_back(stoport.get_name_leafdata());
    if (dfromport.is_set || is_set(dfromport.yfilter)) leaf_name_data.push_back(dfromport.get_name_leafdata());
    if (dtoport.is_set || is_set(dtoport.yfilter)) leaf_name_data.push_back(dtoport.get_name_leafdata());
    if (tcprules.is_set || is_set(tcprules.yfilter)) leaf_name_data.push_back(tcprules.get_name_leafdata());
    if (applytofrag.is_set || is_set(applytofrag.yfilter)) leaf_name_data.push_back(applytofrag.get_name_leafdata());
    if (ethert.is_set || is_set(ethert.yfilter)) leaf_name_data.push_back(ethert.get_name_leafdata());
    if (arpopc.is_set || is_set(arpopc.yfilter)) leaf_name_data.push_back(arpopc.get_name_leafdata());
    if (icmpv4t.is_set || is_set(icmpv4t.yfilter)) leaf_name_data.push_back(icmpv4t.get_name_leafdata());
    if (icmpv6t.is_set || is_set(icmpv6t.yfilter)) leaf_name_data.push_back(icmpv6t.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot")
    {
        prot = value;
        prot.value_namespace = name_space;
        prot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sFromPort")
    {
        sfromport = value;
        sfromport.value_namespace = name_space;
        sfromport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sToPort")
    {
        stoport = value;
        stoport.value_namespace = name_space;
        stoport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dFromPort")
    {
        dfromport = value;
        dfromport.value_namespace = name_space;
        dfromport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dToPort")
    {
        dtoport = value;
        dtoport.value_namespace = name_space;
        dtoport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRules")
    {
        tcprules = value;
        tcprules.value_namespace = name_space;
        tcprules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applyToFrag")
    {
        applytofrag = value;
        applytofrag.value_namespace = name_space;
        applytofrag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etherT")
    {
        ethert = value;
        ethert.value_namespace = name_space;
        ethert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpOpc")
    {
        arpopc = value;
        arpopc.value_namespace = name_space;
        arpopc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpv4T")
    {
        icmpv4t = value;
        icmpv4t.value_namespace = name_space;
        icmpv4t.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpv6T")
    {
        icmpv6t = value;
        icmpv6t.value_namespace = name_space;
        icmpv6t.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::EntItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "prot")
    {
        prot.yfilter = yfilter;
    }
    if(value_path == "sFromPort")
    {
        sfromport.yfilter = yfilter;
    }
    if(value_path == "sToPort")
    {
        stoport.yfilter = yfilter;
    }
    if(value_path == "dFromPort")
    {
        dfromport.yfilter = yfilter;
    }
    if(value_path == "dToPort")
    {
        dtoport.yfilter = yfilter;
    }
    if(value_path == "tcpRules")
    {
        tcprules.yfilter = yfilter;
    }
    if(value_path == "applyToFrag")
    {
        applytofrag.yfilter = yfilter;
    }
    if(value_path == "etherT")
    {
        ethert.yfilter = yfilter;
    }
    if(value_path == "arpOpc")
    {
        arpopc.yfilter = yfilter;
    }
    if(value_path == "icmpv4T")
    {
        icmpv4t.yfilter = yfilter;
    }
    if(value_path == "icmpv6T")
    {
        icmpv6t.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::EntItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "prio" || name == "descr" || name == "prot" || name == "sFromPort" || name == "sToPort" || name == "dFromPort" || name == "dToPort" || name == "tcpRules" || name == "applyToFrag" || name == "etherT" || name == "arpOpc" || name == "icmpv4T" || name == "icmpv6T")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtfvToRemoteRFltPItems()
    :
    rtfvtoremoterfltp_list(this, {"tdn"})
{

    yang_name = "rtfvToRemoteRFltP-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::~RtfvToRemoteRFltPItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtoremoterfltp_list.len(); index++)
    {
        if(rtfvtoremoterfltp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtoremoterfltp_list.len(); index++)
    {
        if(rtfvtoremoterfltp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToRemoteRFltP-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToRemoteRFltP-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList>();
        c->parent = this;
        rtfvtoremoterfltp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvtoremoterfltp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToRemoteRFltP-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::RtFvToRemoteRFltPList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvToRemoteRFltP-list"; yang_parent_name = "rtfvToRemoteRFltP-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::~RtFvToRemoteRFltPList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToRemoteRFltP-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtfvToRemoteRFltAttItems()
    :
    rtfvtoremoterfltatt_list(this, {"tdn"})
{

    yang_name = "rtfvToRemoteRFltAtt-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::~RtfvToRemoteRFltAttItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtoremoterfltatt_list.len(); index++)
    {
        if(rtfvtoremoterfltatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtoremoterfltatt_list.len(); index++)
    {
        if(rtfvtoremoterfltatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToRemoteRFltAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToRemoteRFltAtt-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList>();
        c->parent = this;
        rtfvtoremoterfltatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvtoremoterfltatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToRemoteRFltAtt-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::RtFvToRemoteRFltAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvToRemoteRFltAtt-list"; yang_parent_name = "rtfvToRemoteRFltAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::~RtFvToRemoteRFltAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToRemoteRFltAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::RsrfltpConnItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsrfltpConn-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::~RsrfltpConnItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrfltpConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtvnsConnToFltInstItems()
    :
    rtvnsconntofltinst_list(this, {"tdn"})
{

    yang_name = "rtvnsConnToFltInst-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::~RtvnsConnToFltInstItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtvnsconntofltinst_list.len(); index++)
    {
        if(rtvnsconntofltinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::has_operation() const
{
    for (std::size_t index=0; index<rtvnsconntofltinst_list.len(); index++)
    {
        if(rtvnsconntofltinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvnsConnToFltInst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVnsConnToFltInst-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList>();
        c->parent = this;
        rtvnsconntofltinst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtvnsconntofltinst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtVnsConnToFltInst-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::RtVnsConnToFltInstList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtVnsConnToFltInst-list"; yang_parent_name = "rtvnsConnToFltInst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::~RtVnsConnToFltInstList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtVnsConnToFltInst-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtvzFwdRFltPAttItems()
    :
    rtvzfwdrfltpatt_list(this, {"tdn"})
{

    yang_name = "rtvzFwdRFltPAtt-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::~RtvzFwdRFltPAttItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtvzfwdrfltpatt_list.len(); index++)
    {
        if(rtvzfwdrfltpatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtvzfwdrfltpatt_list.len(); index++)
    {
        if(rtvzfwdrfltpatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvzFwdRFltPAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzFwdRFltPAtt-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList>();
        c->parent = this;
        rtvzfwdrfltpatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtvzfwdrfltpatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtVzFwdRFltPAtt-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::RtVzFwdRFltPAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtVzFwdRFltPAtt-list"; yang_parent_name = "rtvzFwdRFltPAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::~RtVzFwdRFltPAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtVzFwdRFltPAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtvzRevRFltPAttItems()
    :
    rtvzrevrfltpatt_list(this, {"tdn"})
{

    yang_name = "rtvzRevRFltPAtt-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::~RtvzRevRFltPAttItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtvzrevrfltpatt_list.len(); index++)
    {
        if(rtvzrevrfltpatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtvzrevrfltpatt_list.len(); index++)
    {
        if(rtvzrevrfltpatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvzRevRFltPAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzRevRFltPAtt-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList>();
        c->parent = this;
        rtvzrevrfltpatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtvzrevrfltpatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtVzRevRFltPAtt-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::RtVzRevRFltPAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtVzRevRFltPAtt-list"; yang_parent_name = "rtvzRevRFltPAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::~RtVzRevRFltPAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtVzRevRFltPAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtvzTabooRFltAttItems()
    :
    rtvztaboorfltatt_list(this, {"tdn"})
{

    yang_name = "rtvzTabooRFltAtt-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::~RtvzTabooRFltAttItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtvztaboorfltatt_list.len(); index++)
    {
        if(rtvztaboorfltatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtvztaboorfltatt_list.len(); index++)
    {
        if(rtvztaboorfltatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvzTabooRFltAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzTabooRFltAtt-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList>();
        c->parent = this;
        rtvztaboorfltatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtvztaboorfltatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtVzTabooRFltAtt-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::RtVzTabooRFltAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtVzTabooRFltAtt-list"; yang_parent_name = "rtvzTabooRFltAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::~RtVzTabooRFltAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtVzTabooRFltAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtvzRFltAttItems()
    :
    rtvzrfltatt_list(this, {"tdn"})
{

    yang_name = "rtvzRFltAtt-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::~RtvzRFltAttItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtvzrfltatt_list.len(); index++)
    {
        if(rtvzrfltatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtvzrfltatt_list.len(); index++)
    {
        if(rtvzrfltatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvzRFltAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzRFltAtt-list")
    {
        auto c = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList>();
        c->parent = this;
        rtvzrfltatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtvzrfltatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtVzRFltAtt-list")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::RtVzRFltAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtVzRFltAtt-list"; yang_parent_name = "rtvzRFltAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::~RtVzRFltAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtVzRFltAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlItems::InstItems::InstItems()
    :
    accctrl{YType::str, "accCtrl"},
    logclrintvl{YType::uint16, "logClrIntvl"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "inst-items"; yang_parent_name = "actrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::InstItems::~InstItems()
{
}

bool System::ActrlItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return accctrl.is_set
	|| logclrintvl.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::ActrlItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accctrl.yfilter)
	|| ydk::is_set(logclrintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::ActrlItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accctrl.is_set || is_set(accctrl.yfilter)) leaf_name_data.push_back(accctrl.get_name_leafdata());
    if (logclrintvl.is_set || is_set(logclrintvl.yfilter)) leaf_name_data.push_back(logclrintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accCtrl")
    {
        accctrl = value;
        accctrl.value_namespace = name_space;
        accctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logClrIntvl")
    {
        logclrintvl = value;
        logclrintvl.value_namespace = name_space;
        logclrintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accCtrl")
    {
        accctrl.yfilter = yfilter;
    }
    if(value_path == "logClrIntvl")
    {
        logclrintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::ActrlItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accCtrl" || name == "logClrIntvl" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeItems()
    :
    scope_list(this, {"id"})
{

    yang_name = "scope-items"; yang_parent_name = "actrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::ScopeItems::~ScopeItems()
{
}

bool System::ActrlItems::ScopeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<scope_list.len(); index++)
    {
        if(scope_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::ScopeItems::has_operation() const
{
    for (std::size_t index=0; index<scope_list.len(); index++)
    {
        if(scope_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::ScopeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::ScopeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Scope-list")
    {
        auto c = std::make_shared<System::ActrlItems::ScopeItems::ScopeList>();
        c->parent = this;
        scope_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : scope_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::ScopeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::ScopeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::ScopeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Scope-list")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::ScopeList()
    :
    id{YType::uint32, "id"},
    seclbl{YType::uint16, "secLbl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rule_items(std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RuleItems>())
    , mr_items(std::make_shared<System::ActrlItems::ScopeItems::ScopeList::MrItems>())
    , sr_items(std::make_shared<System::ActrlItems::ScopeItems::ScopeList::SrItems>())
    , rstenconn_items(std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RstenConnItems>())
{
    rule_items->parent = this;
    mr_items->parent = this;
    sr_items->parent = this;
    rstenconn_items->parent = this;

    yang_name = "Scope-list"; yang_parent_name = "scope-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlItems::ScopeItems::ScopeList::~ScopeList()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| seclbl.is_set
	|| name.is_set
	|| descr.is_set
	|| (rule_items !=  nullptr && rule_items->has_data())
	|| (mr_items !=  nullptr && mr_items->has_data())
	|| (sr_items !=  nullptr && sr_items->has_data())
	|| (rstenconn_items !=  nullptr && rstenconn_items->has_data());
}

bool System::ActrlItems::ScopeItems::ScopeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(seclbl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rule_items !=  nullptr && rule_items->has_operation())
	|| (mr_items !=  nullptr && mr_items->has_operation())
	|| (sr_items !=  nullptr && sr_items->has_operation())
	|| (rstenconn_items !=  nullptr && rstenconn_items->has_operation());
}

std::string System::ActrlItems::ScopeItems::ScopeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrl-items/scope-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlItems::ScopeItems::ScopeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Scope-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (seclbl.is_set || is_set(seclbl.yfilter)) leaf_name_data.push_back(seclbl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-items")
    {
        if(rule_items == nullptr)
        {
            rule_items = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RuleItems>();
        }
        return rule_items;
    }

    if(child_yang_name == "mr-items")
    {
        if(mr_items == nullptr)
        {
            mr_items = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::MrItems>();
        }
        return mr_items;
    }

    if(child_yang_name == "sr-items")
    {
        if(sr_items == nullptr)
        {
            sr_items = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::SrItems>();
        }
        return sr_items;
    }

    if(child_yang_name == "rstenConn-items")
    {
        if(rstenconn_items == nullptr)
        {
            rstenconn_items = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RstenConnItems>();
        }
        return rstenconn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rule_items != nullptr)
    {
        children["rule-items"] = rule_items;
    }

    if(mr_items != nullptr)
    {
        children["mr-items"] = mr_items;
    }

    if(sr_items != nullptr)
    {
        children["sr-items"] = sr_items;
    }

    if(rstenconn_items != nullptr)
    {
        children["rstenConn-items"] = rstenconn_items;
    }

    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLbl")
    {
        seclbl = value;
        seclbl.value_namespace = name_space;
        seclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::ScopeItems::ScopeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "secLbl")
    {
        seclbl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ActrlItems::ScopeItems::ScopeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-items" || name == "mr-items" || name == "sr-items" || name == "rstenConn-items" || name == "id" || name == "secLbl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleItems()
    :
    rule_list(this, {"scopeid", "spctag", "dpctag", "fltid"})
{

    yang_name = "rule-items"; yang_parent_name = "Scope-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::RuleItems::~RuleItems()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::RuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::RuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::RuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::ScopeItems::ScopeList::RuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::RuleList()
    :
    scopeid{YType::uint32, "scopeId"},
    spctag{YType::uint32, "sPcTag"},
    dpctag{YType::uint32, "dPcTag"},
    fltid{YType::uint32, "fltId"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    prio{YType::uint8, "prio"},
    direction{YType::enumeration, "direction"},
    action{YType::str, "action"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"}
{

    yang_name = "Rule-list"; yang_parent_name = "rule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::~RuleList()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return scopeid.is_set
	|| spctag.is_set
	|| dpctag.is_set
	|| fltid.is_set
	|| name.is_set
	|| descr.is_set
	|| id.is_set
	|| type.is_set
	|| prio.is_set
	|| direction.is_set
	|| action.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scopeid.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(dpctag.yfilter)
	|| ydk::is_set(fltid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(scopeid, "scopeId");
    ADD_KEY_TOKEN(spctag, "sPcTag");
    ADD_KEY_TOKEN(dpctag, "dPcTag");
    ADD_KEY_TOKEN(fltid, "fltId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scopeid.is_set || is_set(scopeid.yfilter)) leaf_name_data.push_back(scopeid.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (dpctag.is_set || is_set(dpctag.yfilter)) leaf_name_data.push_back(dpctag.get_name_leafdata());
    if (fltid.is_set || is_set(fltid.yfilter)) leaf_name_data.push_back(fltid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scopeId")
    {
        scopeid = value;
        scopeid.value_namespace = name_space;
        scopeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dPcTag")
    {
        dpctag = value;
        dpctag.value_namespace = name_space;
        dpctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltId")
    {
        fltid = value;
        fltid.value_namespace = name_space;
        fltid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scopeId")
    {
        scopeid.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "dPcTag")
    {
        dpctag.yfilter = yfilter;
    }
    if(value_path == "fltId")
    {
        fltid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scopeId" || name == "sPcTag" || name == "dPcTag" || name == "fltId" || name == "name" || name == "descr" || name == "id" || name == "type" || name == "prio" || name == "direction" || name == "action" || name == "qosGrp" || name == "markDscp" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::MrItems::MrItems()
    :
    mgmtrule_list(this, {"scopeid", "spctag", "dpctag", "fltid"})
{

    yang_name = "mr-items"; yang_parent_name = "Scope-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::MrItems::~MrItems()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtrule_list.len(); index++)
    {
        if(mgmtrule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtrule_list.len(); index++)
    {
        if(mgmtrule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::MrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::MrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::MrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtRule-list")
    {
        auto c = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList>();
        c->parent = this;
        mgmtrule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::MrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtrule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::MrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::ScopeItems::ScopeList::MrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtRule-list")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::MgmtRuleList()
    :
    scopeid{YType::uint32, "scopeId"},
    spctag{YType::uint32, "sPcTag"},
    dpctag{YType::uint32, "dPcTag"},
    fltid{YType::uint32, "fltId"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    prio{YType::uint8, "prio"},
    direction{YType::enumeration, "direction"},
    action{YType::str, "action"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"}
{

    yang_name = "MgmtRule-list"; yang_parent_name = "mr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::~MgmtRuleList()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::has_data() const
{
    if (is_presence_container) return true;
    return scopeid.is_set
	|| spctag.is_set
	|| dpctag.is_set
	|| fltid.is_set
	|| name.is_set
	|| descr.is_set
	|| id.is_set
	|| type.is_set
	|| prio.is_set
	|| direction.is_set
	|| action.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scopeid.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(dpctag.yfilter)
	|| ydk::is_set(fltid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtRule-list";
    ADD_KEY_TOKEN(scopeid, "scopeId");
    ADD_KEY_TOKEN(spctag, "sPcTag");
    ADD_KEY_TOKEN(dpctag, "dPcTag");
    ADD_KEY_TOKEN(fltid, "fltId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scopeid.is_set || is_set(scopeid.yfilter)) leaf_name_data.push_back(scopeid.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (dpctag.is_set || is_set(dpctag.yfilter)) leaf_name_data.push_back(dpctag.get_name_leafdata());
    if (fltid.is_set || is_set(fltid.yfilter)) leaf_name_data.push_back(fltid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scopeId")
    {
        scopeid = value;
        scopeid.value_namespace = name_space;
        scopeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dPcTag")
    {
        dpctag = value;
        dpctag.value_namespace = name_space;
        dpctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltId")
    {
        fltid = value;
        fltid.value_namespace = name_space;
        fltid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scopeId")
    {
        scopeid.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "dPcTag")
    {
        dpctag.yfilter = yfilter;
    }
    if(value_path == "fltId")
    {
        fltid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scopeId" || name == "sPcTag" || name == "dPcTag" || name == "fltId" || name == "name" || name == "descr" || name == "id" || name == "type" || name == "prio" || name == "direction" || name == "action" || name == "qosGrp" || name == "markDscp" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::SrItems::SrItems()
    :
    snmprule_list(this, {"scopeid", "spctag", "dpctag", "fltid"})
{

    yang_name = "sr-items"; yang_parent_name = "Scope-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::SrItems::~SrItems()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmprule_list.len(); index++)
    {
        if(snmprule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::has_operation() const
{
    for (std::size_t index=0; index<snmprule_list.len(); index++)
    {
        if(snmprule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::SrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::SrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::SrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SnmpRule-list")
    {
        auto c = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList>();
        c->parent = this;
        snmprule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::SrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : snmprule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::SrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::ScopeItems::ScopeList::SrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SnmpRule-list")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::SnmpRuleList()
    :
    scopeid{YType::uint32, "scopeId"},
    spctag{YType::uint32, "sPcTag"},
    dpctag{YType::uint32, "dPcTag"},
    fltid{YType::uint32, "fltId"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    prio{YType::uint8, "prio"},
    direction{YType::enumeration, "direction"},
    action{YType::str, "action"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"}
{

    yang_name = "SnmpRule-list"; yang_parent_name = "sr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::~SnmpRuleList()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::has_data() const
{
    if (is_presence_container) return true;
    return scopeid.is_set
	|| spctag.is_set
	|| dpctag.is_set
	|| fltid.is_set
	|| name.is_set
	|| descr.is_set
	|| id.is_set
	|| type.is_set
	|| prio.is_set
	|| direction.is_set
	|| action.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scopeid.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(dpctag.yfilter)
	|| ydk::is_set(fltid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SnmpRule-list";
    ADD_KEY_TOKEN(scopeid, "scopeId");
    ADD_KEY_TOKEN(spctag, "sPcTag");
    ADD_KEY_TOKEN(dpctag, "dPcTag");
    ADD_KEY_TOKEN(fltid, "fltId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scopeid.is_set || is_set(scopeid.yfilter)) leaf_name_data.push_back(scopeid.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (dpctag.is_set || is_set(dpctag.yfilter)) leaf_name_data.push_back(dpctag.get_name_leafdata());
    if (fltid.is_set || is_set(fltid.yfilter)) leaf_name_data.push_back(fltid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scopeId")
    {
        scopeid = value;
        scopeid.value_namespace = name_space;
        scopeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dPcTag")
    {
        dpctag = value;
        dpctag.value_namespace = name_space;
        dpctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltId")
    {
        fltid = value;
        fltid.value_namespace = name_space;
        fltid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scopeId")
    {
        scopeid.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "dPcTag")
    {
        dpctag.yfilter = yfilter;
    }
    if(value_path == "fltId")
    {
        fltid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scopeId" || name == "sPcTag" || name == "dPcTag" || name == "fltId" || name == "name" || name == "descr" || name == "id" || name == "type" || name == "prio" || name == "direction" || name == "action" || name == "qosGrp" || name == "markDscp" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RstenConnItems()
    :
    rstenconn_list(this, {"tdn"})
{

    yang_name = "rstenConn-items"; yang_parent_name = "Scope-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::~RstenConnItems()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rstenconn_list.len(); index++)
    {
        if(rstenconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::has_operation() const
{
    for (std::size_t index=0; index<rstenconn_list.len(); index++)
    {
        if(rstenconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstenConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsTenConn-list")
    {
        auto c = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList>();
        c->parent = this;
        rstenconn_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rstenconn_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsTenConn-list")
        return true;
    return false;
}

System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::RsTenConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsTenConn-list"; yang_parent_name = "rstenConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::~RsTenConnList()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsTenConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActrlcapprovItems::ActrlcapprovItems()
    :
    prov_list(this, {"subj", "type"})
{

    yang_name = "actrlcapprov-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlcapprovItems::~ActrlcapprovItems()
{
}

bool System::ActrlcapprovItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActrlcapprovItems::has_operation() const
{
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActrlcapprovItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlcapprovItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcapprov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlcapprovItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlcapprovItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prov-list")
    {
        auto c = std::make_shared<System::ActrlcapprovItems::ProvList>();
        c->parent = this;
        prov_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlcapprovItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prov_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ActrlcapprovItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActrlcapprovItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActrlcapprovItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Prov-list")
        return true;
    return false;
}

System::ActrlcapprovItems::ProvList::ProvList()
    :
    subj{YType::enumeration, "subj"},
    type{YType::enumeration, "type"},
    total{YType::uint32, "total"},
    remaining{YType::uint32, "remaining"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "Prov-list"; yang_parent_name = "actrlcapprov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActrlcapprovItems::ProvList::~ProvList()
{
}

bool System::ActrlcapprovItems::ProvList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| type.is_set
	|| total.is_set
	|| remaining.is_set
	|| utilization.is_set;
}

bool System::ActrlcapprovItems::ProvList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(remaining.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string System::ActrlcapprovItems::ProvList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/actrlcapprov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActrlcapprovItems::ProvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Prov-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActrlcapprovItems::ProvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (remaining.is_set || is_set(remaining.yfilter)) leaf_name_data.push_back(remaining.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ActrlcapprovItems::ProvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ActrlcapprovItems::ProvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ActrlcapprovItems::ProvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining")
    {
        remaining = value;
        remaining.value_namespace = name_space;
        remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlcapprovItems::ProvList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "remaining")
    {
        remaining.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool System::ActrlcapprovItems::ProvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "type" || name == "total" || name == "remaining" || name == "utilization")
        return true;
    return false;
}

System::AnalyticsItems::AnalyticsItems()
    :
    hw_telemetry_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems>())
    , inst_items(std::make_shared<System::AnalyticsItems::InstItems>())
{
    hw_telemetry_items->parent = this;
    inst_items->parent = this;

    yang_name = "analytics-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::~AnalyticsItems()
{
}

bool System::AnalyticsItems::has_data() const
{
    if (is_presence_container) return true;
    return (hw_telemetry_items !=  nullptr && hw_telemetry_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AnalyticsItems::has_operation() const
{
    return is_set(yfilter)
	|| (hw_telemetry_items !=  nullptr && hw_telemetry_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AnalyticsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "analytics-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw_telemetry-items")
    {
        if(hw_telemetry_items == nullptr)
        {
            hw_telemetry_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems>();
        }
        return hw_telemetry_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AnalyticsItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hw_telemetry_items != nullptr)
    {
        children["hw_telemetry-items"] = hw_telemetry_items;
    }

    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::AnalyticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw_telemetry-items" || name == "inst-items")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::HwTelemetryItems()
    :
    streamingstats_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems>())
{
    streamingstats_items->parent = this;

    yang_name = "hw_telemetry-items"; yang_parent_name = "analytics-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::HwTelemetryItems::~HwTelemetryItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return (streamingstats_items !=  nullptr && streamingstats_items->has_data());
}

bool System::AnalyticsItems::HwTelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| (streamingstats_items !=  nullptr && streamingstats_items->has_operation());
}

std::string System::AnalyticsItems::HwTelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::HwTelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw_telemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "streamingstats-items")
    {
        if(streamingstats_items == nullptr)
        {
            streamingstats_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems>();
        }
        return streamingstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(streamingstats_items != nullptr)
    {
        children["streamingstats-items"] = streamingstats_items;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "streamingstats-items")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::StreamingstatsItems()
    :
    inst_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "streamingstats-items"; yang_parent_name = "hw_telemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::~StreamingstatsItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/hw_telemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "streamingstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstItems()
    :
    inst_list(this, {"mode"})
{

    yang_name = "inst-items"; yang_parent_name = "streamingstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::~InstItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/hw_telemetry-items/streamingstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::InstList()
    :
    mode{YType::enumeration, "mode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    recordp_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems>())
    , collector_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems>())
    , monitor_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems>())
    , fwdinst_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems>())
{
    recordp_items->parent = this;
    collector_items->parent = this;
    monitor_items->parent = this;
    fwdinst_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::~InstList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (recordp_items !=  nullptr && recordp_items->has_data())
	|| (collector_items !=  nullptr && collector_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_data());
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (recordp_items !=  nullptr && recordp_items->has_operation())
	|| (collector_items !=  nullptr && collector_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_operation());
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/hw_telemetry-items/streamingstats-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recordp-items")
    {
        if(recordp_items == nullptr)
        {
            recordp_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems>();
        }
        return recordp_items;
    }

    if(child_yang_name == "collector-items")
    {
        if(collector_items == nullptr)
        {
            collector_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems>();
        }
        return collector_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "fwdinst-items")
    {
        if(fwdinst_items == nullptr)
        {
            fwdinst_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems>();
        }
        return fwdinst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(recordp_items != nullptr)
    {
        children["recordp-items"] = recordp_items;
    }

    if(collector_items != nullptr)
    {
        children["collector-items"] = collector_items;
    }

    if(monitor_items != nullptr)
    {
        children["monitor-items"] = monitor_items;
    }

    if(fwdinst_items != nullptr)
    {
        children["fwdinst-items"] = fwdinst_items;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recordp-items" || name == "collector-items" || name == "monitor-items" || name == "fwdinst-items" || name == "mode" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordpItems()
    :
    recordp_list(this, {"name"})
{

    yang_name = "recordp-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::~RecordpItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::has_operation() const
{
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recordp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RecordP-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList>();
        c->parent = this;
        recordp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : recordp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RecordP-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::RecordPList()
    :
    name{YType::str, "name"},
    collect0{YType::str, "collect0"},
    interval{YType::uint32, "interval"},
    descr{YType::str, "descr"}
{

    yang_name = "RecordP-list"; yang_parent_name = "recordp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::~RecordPList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| collect0.is_set
	|| interval.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(collect0.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RecordP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (collect0.is_set || is_set(collect0.yfilter)) leaf_name_data.push_back(collect0.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect0")
    {
        collect0 = value;
        collect0.value_namespace = name_space;
        collect0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "collect0")
    {
        collect0.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "collect0" || name == "interval" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorItems()
    :
    collector_list(this, {"name"})
{

    yang_name = "collector-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::~CollectorItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::has_operation() const
{
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Collector-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList>();
        c->parent = this;
        collector_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : collector_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Collector-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::CollectorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "Collector-list"; yang_parent_name = "collector-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::~CollectorList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| vrfname.is_set
	|| dstaddr.is_set
	|| dstport.is_set
	|| dscp.is_set
	|| srcif.is_set
	|| srcaddr.is_set
	|| mtu.is_set;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Collector-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddr")
    {
        dstaddr = value;
        dstaddr.value_namespace = name_space;
        dstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr" || name == "mtu")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorItems()
    :
    monitor_list(this, {"name"})
{

    yang_name = "monitor-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::~MonitorItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList>();
        c->parent = this;
        monitor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : monitor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::MonitorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rsrecordpatt_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>())
    , rscollectoratt_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems>())
{
    rsrecordpatt_items->parent = this;
    rscollectoratt_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::~MonitorList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_data())
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_data());
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_operation())
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_operation());
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrecordPAtt-items")
    {
        if(rsrecordpatt_items == nullptr)
        {
            rsrecordpatt_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>();
        }
        return rsrecordpatt_items;
    }

    if(child_yang_name == "rscollectorAtt-items")
    {
        if(rscollectoratt_items == nullptr)
        {
            rscollectoratt_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems>();
        }
        return rscollectoratt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrecordpatt_items != nullptr)
    {
        children["rsrecordPAtt-items"] = rsrecordpatt_items;
    }

    if(rscollectoratt_items != nullptr)
    {
        children["rscollectorAtt-items"] = rscollectoratt_items;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrecordPAtt-items" || name == "rscollectorAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::RsrecordPAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsrecordPAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::~RsrecordPAttItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrecordPAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}


}
}

