
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

System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList>();
        ent_->parent = this;
        acl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"},
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
	|| upid.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data())
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::NameItems::ACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reseq_items != nullptr)
    {
        _children["reseq-items"] = reseq_items;
    }

    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::AclItems::Ipv4Items::NameItems::ACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
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
    if(name == "reseq-items" || name == "seq-items" || name == "name" || name == "upid" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems()
    :
    start{YType::uint32, "start"},
    step{YType::uint32, "step"}
{

    yang_name = "reseq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::~ReseqItems()
{
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| step.is_set;
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(step.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "step")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACE-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList>();
        ent_->parent = this;
        ace_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ace_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"},
    remark{YType::str, "remark"},
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
	|| upid.is_set
	|| remark.is_set
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
	|| ydk::is_set(upid.yfilter)
	|| ydk::is_set(remark.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udf_items != nullptr)
    {
        _children["udf-items"] = udf_items;
    }

    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
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
    if(name == "udf-items" || name == "seqNum" || name == "protocol" || name == "protocolMask" || name == "srcPrefix" || name == "srcPrefixMask" || name == "srcPrefixLength" || name == "dstPrefix" || name == "dstPrefixMask" || name == "dstPrefixLength" || name == "precedence" || name == "ttl" || name == "icmpStr" || name == "icmpType" || name == "icmpCode" || name == "tos" || name == "configStatus" || name == "upid" || name == "remark" || name == "action" || name == "srcPortOp" || name == "srcPort1" || name == "srcPort2" || name == "srcPortMask" || name == "dstPortOp" || name == "dstPort1" || name == "dstPort2" || name == "dstPortMask" || name == "logging" || name == "dscp" || name == "pktLenOp" || name == "pktLen1" || name == "pktLen2" || name == "urg" || name == "ack" || name == "psh" || name == "rst" || name == "syn" || name == "fin" || name == "est" || name == "rev" || name == "tcpFlagsMask" || name == "packets" || name == "fragment" || name == "captureSession" || name == "httpOption" || name == "vni" || name == "vlan" || name == "tcpOptionLength" || name == "timeRange" || name == "srcAddrGroup" || name == "dstAddrGroup" || name == "srcPortGroup" || name == "dstPortGroup" || name == "redirect")
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
    udf18mask{YType::uint16, "udf18Mask"},
    upid{YType::uint32, "upid"}
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
	|| udf18mask.is_set
	|| upid.is_set;
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
	|| ydk::is_set(udf18mask.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf1Name" || name == "udf1Val" || name == "udf1Mask" || name == "udf2Name" || name == "udf2Val" || name == "udf2Mask" || name == "udf3Name" || name == "udf3Val" || name == "udf3Mask" || name == "udf4Name" || name == "udf4Val" || name == "udf4Mask" || name == "udf5Name" || name == "udf5Val" || name == "udf5Mask" || name == "udf6Name" || name == "udf6Val" || name == "udf6Mask" || name == "udf7Name" || name == "udf7Val" || name == "udf7Mask" || name == "udf8Name" || name == "udf8Val" || name == "udf8Mask" || name == "udf9Name" || name == "udf9Val" || name == "udf9Mask" || name == "udf10Name" || name == "udf10Val" || name == "udf10Mask" || name == "udf11Name" || name == "udf11Val" || name == "udf11Mask" || name == "udf12Name" || name == "udf12Val" || name == "udf12Mask" || name == "udf13Name" || name == "udf13Val" || name == "udf13Mask" || name == "udf14Name" || name == "udf14Val" || name == "udf14Mask" || name == "udf15Name" || name == "udf15Val" || name == "udf15Mask" || name == "udf16Name" || name == "udf16Val" || name == "udf16Mask" || name == "udf17Name" || name == "udf17Val" || name == "udf17Mask" || name == "udf18Name" || name == "udf18Val" || name == "udf18Mask" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::ONameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrGroup-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv4Items::ONameItems::AddrGroupList>();
        ent_->parent = this;
        addrgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::ONameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addrgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::ONameItems::AddrGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "name" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrMember-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList>();
        ent_->parent = this;
        addrmember_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addrmember_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"}
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
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefixmask.yfilter)
	|| ydk::is_set(prefixlength.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "prefix" || name == "prefixMask" || name == "prefixLength" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::Ipv6Items()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (statclear_items !=  nullptr && statclear_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data())
	|| (oname_items !=  nullptr && oname_items->has_data());
}

bool System::AclItems::Ipv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statclear_items != nullptr)
    {
        _children["statClear-items"] = statclear_items;
    }

    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    if(oname_items != nullptr)
    {
        _children["oName-items"] = oname_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "policy-items" || name == "name-items" || name == "oName-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (ingress_items !=  nullptr && ingress_items->has_data())
	|| (egress_items !=  nullptr && egress_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress_items != nullptr)
    {
        _children["ingress-items"] = ingress_items;
    }

    if(egress_items != nullptr)
    {
        _children["egress-items"] = egress_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-items" || name == "egress-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IngressItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        _children["vty-items"] = vty_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    name{YType::str, "name"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        _children["portacl-items"] = portacl_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::VtyItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::EgressItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(vty_items != nullptr)
    {
        _children["vty-items"] = vty_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    name{YType::str, "name"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(portacl_items != nullptr)
    {
        _children["portacl-items"] = portacl_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::VtyItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList>();
        ent_->parent = this;
        acl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"},
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
	|| upid.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data())
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::NameItems::ACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reseq_items != nullptr)
    {
        _children["reseq-items"] = reseq_items;
    }

    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::NameItems::ACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
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
    if(name == "reseq-items" || name == "seq-items" || name == "name" || name == "upid" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems()
    :
    start{YType::uint32, "start"},
    step{YType::uint32, "step"}
{

    yang_name = "reseq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::~ReseqItems()
{
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| step.is_set;
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(step.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "step")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACE-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList>();
        ent_->parent = this;
        ace_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ace_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"},
    remark{YType::str, "remark"},
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
	|| upid.is_set
	|| remark.is_set
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
	|| ydk::is_set(upid.yfilter)
	|| ydk::is_set(remark.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
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
    if(name == "seqNum" || name == "protocol" || name == "protocolMask" || name == "srcPrefix" || name == "srcPrefixMask" || name == "srcPrefixLength" || name == "dstPrefix" || name == "dstPrefixMask" || name == "dstPrefixLength" || name == "flowLabel" || name == "icmpStr" || name == "icmpType" || name == "icmpCode" || name == "configStatus" || name == "upid" || name == "remark" || name == "action" || name == "srcPortOp" || name == "srcPort1" || name == "srcPort2" || name == "srcPortMask" || name == "dstPortOp" || name == "dstPort1" || name == "dstPort2" || name == "dstPortMask" || name == "logging" || name == "dscp" || name == "pktLenOp" || name == "pktLen1" || name == "pktLen2" || name == "urg" || name == "ack" || name == "psh" || name == "rst" || name == "syn" || name == "fin" || name == "est" || name == "rev" || name == "tcpFlagsMask" || name == "packets" || name == "fragment" || name == "captureSession" || name == "httpOption" || name == "vni" || name == "vlan" || name == "tcpOptionLength" || name == "timeRange" || name == "srcAddrGroup" || name == "dstAddrGroup" || name == "srcPortGroup" || name == "dstPortGroup" || name == "redirect")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::ONameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrGroup-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv6Items::ONameItems::AddrGroupList>();
        ent_->parent = this;
        addrgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::ONameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addrgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv6Items::ONameItems::AddrGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "name" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrMember-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList>();
        ent_->parent = this;
        addrmember_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addrmember_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    upid{YType::uint32, "upid"}
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
	|| upid.is_set;
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefixmask.yfilter)
	|| ydk::is_set(prefixlength.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "prefix" || name == "prefixMask" || name == "prefixLength" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::ActrlItems::ActrlItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aux_items != nullptr)
    {
        _children["aux-items"] = aux_items;
    }

    if(filt_items != nullptr)
    {
        _children["filt-items"] = filt_items;
    }

    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    if(scope_items != nullptr)
    {
        _children["scope-items"] = scope_items;
    }

    return _children;
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
}

bool System::ActrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aux-items" || name == "filt-items" || name == "inst-items" || name == "scope-items" || name == "name" || name == "adminSt" || name == "operSt")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope_items != nullptr)
    {
        _children["scope-items"] = scope_items;
    }

    if(rule_items != nullptr)
    {
        _children["rule-items"] = rule_items;
    }

    if(flt_items != nullptr)
    {
        _children["flt-items"] = flt_items;
    }

    if(mgmtrule_items != nullptr)
    {
        _children["mgmtrule-items"] = mgmtrule_items;
    }

    if(mgmtauxflt_items != nullptr)
    {
        _children["mgmtauxflt-items"] = mgmtauxflt_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::ScopeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxScope-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::AuxItems::ScopeItems::AuxScopeList>();
        ent_->parent = this;
        auxscope_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::ScopeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auxscope_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set;
}

bool System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::ScopeItems::AuxScopeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxRule-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::AuxItems::RuleItems::AuxRuleList>();
        ent_->parent = this;
        auxrule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auxrule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (scopeid.is_set || is_set(scopeid.yfilter)) leaf_name_data.push_back(scopeid.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::RuleItems::AuxRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(name == "id" || name == "fltid" || name == "prio" || name == "scopeId" || name == "direction" || name == "name")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::FltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxFlt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::AuxItems::FltItems::AuxFltList>();
        ent_->parent = this;
        auxflt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::FltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auxflt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ruleidarr.yfilter)
	|| ydk::is_set(ruleindex.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::FltItems::AuxFltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::FltItems::AuxFltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    return _children;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "id" || name == "ruleidArr" || name == "ruleIndex" || name == "name")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AuxEntry-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList>();
        ent_->parent = this;
        auxentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auxentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    name{YType::str, "name"}
{

    yang_name = "AuxEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::~AuxEntryList()
{
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::MgmtruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAuxRule-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList>();
        ent_->parent = this;
        mgmtauxrule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::MgmtruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtauxrule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::MgmtauxfltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAuxFlt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList>();
        ent_->parent = this;
        mgmtauxflt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::MgmtauxfltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtauxflt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Flt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList>();
        ent_->parent = this;
        flt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtfvtoremoterfltp_items != nullptr)
    {
        _children["rtfvToRemoteRFltP-items"] = rtfvtoremoterfltp_items;
    }

    if(rtfvtoremoterfltatt_items != nullptr)
    {
        _children["rtfvToRemoteRFltAtt-items"] = rtfvtoremoterfltatt_items;
    }

    if(rsrfltpconn_items != nullptr)
    {
        _children["rsrfltpConn-items"] = rsrfltpconn_items;
    }

    if(rtvnsconntofltinst_items != nullptr)
    {
        _children["rtvnsConnToFltInst-items"] = rtvnsconntofltinst_items;
    }

    if(rtvzfwdrfltpatt_items != nullptr)
    {
        _children["rtvzFwdRFltPAtt-items"] = rtvzfwdrfltpatt_items;
    }

    if(rtvzrevrfltpatt_items != nullptr)
    {
        _children["rtvzRevRFltPAtt-items"] = rtvzrevrfltpatt_items;
    }

    if(rtvztaboorfltatt_items != nullptr)
    {
        _children["rtvzTabooRFltAtt-items"] = rtvztaboorfltatt_items;
    }

    if(rtvzrfltatt_items != nullptr)
    {
        _children["rtvzRFltAtt-items"] = rtvzrfltatt_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::EntItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    descr{YType::str, "descr"},
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
	|| descr.is_set
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
	|| ydk::is_set(descr.yfilter)
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
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (applytofrag.is_set || is_set(applytofrag.yfilter)) leaf_name_data.push_back(applytofrag.get_name_leafdata());
    if (ethert.is_set || is_set(ethert.yfilter)) leaf_name_data.push_back(ethert.get_name_leafdata());
    if (arpopc.is_set || is_set(arpopc.yfilter)) leaf_name_data.push_back(arpopc.get_name_leafdata());
    if (icmpv4t.is_set || is_set(icmpv4t.yfilter)) leaf_name_data.push_back(icmpv4t.get_name_leafdata());
    if (icmpv6t.is_set || is_set(icmpv6t.yfilter)) leaf_name_data.push_back(icmpv6t.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
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
    if(name == "name" || name == "descr" || name == "applyToFrag" || name == "etherT" || name == "arpOpc" || name == "icmpv4T" || name == "icmpv6T")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToRemoteRFltP-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList>();
        ent_->parent = this;
        rtfvtoremoterfltp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvtoremoterfltp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvToRemoteRFltP-list"; yang_parent_name = "rtfvToRemoteRFltP-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::~RtFvToRemoteRFltPList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToRemoteRFltAtt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList>();
        ent_->parent = this;
        rtfvtoremoterfltatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvtoremoterfltatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvToRemoteRFltAtt-list"; yang_parent_name = "rtfvToRemoteRFltAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::~RtFvToRemoteRFltAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::RsrfltpConnItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsrfltpConn-items"; yang_parent_name = "Flt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::~RsrfltpConnItems()
{
}

bool System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RsrfltpConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVnsConnToFltInst-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList>();
        ent_->parent = this;
        rtvnsconntofltinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtvnsconntofltinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtVnsConnToFltInst-list"; yang_parent_name = "rtvnsConnToFltInst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::~RtVnsConnToFltInstList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzFwdRFltPAtt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList>();
        ent_->parent = this;
        rtvzfwdrfltpatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtvzfwdrfltpatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtVzFwdRFltPAtt-list"; yang_parent_name = "rtvzFwdRFltPAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::~RtVzFwdRFltPAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzRevRFltPAtt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList>();
        ent_->parent = this;
        rtvzrevrfltpatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtvzrevrfltpatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtVzRevRFltPAtt-list"; yang_parent_name = "rtvzRevRFltPAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::~RtVzRevRFltPAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzTabooRFltAtt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList>();
        ent_->parent = this;
        rtvztaboorfltatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtvztaboorfltatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtVzTabooRFltAtt-list"; yang_parent_name = "rtvzTabooRFltAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::~RtVzTabooRFltAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtVzRFltAtt-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList>();
        ent_->parent = this;
        rtvzrfltatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtvzrfltatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtVzRFltAtt-list"; yang_parent_name = "rtvzRFltAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::~RtVzRFltAttList()
{
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ActrlItems::InstItems::InstItems()
    :
    accctrl{YType::str, "accCtrl"},
    logclrintvl{YType::uint16, "logClrIntvl"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
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
	|| ctrl.is_set;
}

bool System::ActrlItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accctrl.yfilter)
	|| ydk::is_set(logclrintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::ActrlItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accCtrl" || name == "logClrIntvl" || name == "name" || name == "adminSt" || name == "ctrl")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Scope-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::ScopeItems::ScopeList>();
        ent_->parent = this;
        scope_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : scope_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rule_items != nullptr)
    {
        _children["rule-items"] = rule_items;
    }

    if(mr_items != nullptr)
    {
        _children["mr-items"] = mr_items;
    }

    if(sr_items != nullptr)
    {
        _children["sr-items"] = sr_items;
    }

    if(rstenconn_items != nullptr)
    {
        _children["rstenConn-items"] = rstenconn_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operst{YType::enumeration, "operSt"}
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
	|| operst.is_set;
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
	|| ydk::is_set(operst.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scopeId" || name == "sPcTag" || name == "dPcTag" || name == "fltId" || name == "name" || name == "descr" || name == "id" || name == "type" || name == "prio" || name == "direction" || name == "action" || name == "qosGrp" || name == "markDscp" || name == "operSt")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::MrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtRule-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList>();
        ent_->parent = this;
        mgmtrule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::MrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtrule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operst{YType::enumeration, "operSt"}
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
	|| operst.is_set;
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
	|| ydk::is_set(operst.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scopeId" || name == "sPcTag" || name == "dPcTag" || name == "fltId" || name == "name" || name == "descr" || name == "id" || name == "type" || name == "prio" || name == "direction" || name == "action" || name == "qosGrp" || name == "markDscp" || name == "operSt")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::SrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SnmpRule-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList>();
        ent_->parent = this;
        snmprule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::SrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmprule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operst{YType::enumeration, "operSt"}
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
	|| operst.is_set;
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
	|| ydk::is_set(operst.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scopeId" || name == "sPcTag" || name == "dPcTag" || name == "fltId" || name == "name" || name == "descr" || name == "id" || name == "type" || name == "prio" || name == "direction" || name == "action" || name == "qosGrp" || name == "markDscp" || name == "operSt")
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

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsTenConn-list")
    {
        auto ent_ = std::make_shared<System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList>();
        ent_->parent = this;
        rstenconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rstenconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RsTenConn-list"; yang_parent_name = "rstenConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::~RsTenConnList()
{
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::ActrlcapprovItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prov-list")
    {
        auto ent_ = std::make_shared<System::ActrlcapprovItems::ProvList>();
        ent_->parent = this;
        prov_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlcapprovItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prov_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::ActrlcapprovItems::ProvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActrlcapprovItems::ProvList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    inst_items(std::make_shared<System::AnalyticsItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "analytics-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::~AnalyticsItems()
{
}

bool System::AnalyticsItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AnalyticsItems::has_operation() const
{
    return is_set(yfilter)
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

std::shared_ptr<ydk::Entity> System::AnalyticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::AnalyticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstItems()
    :
    inst_list(this, {"mode"})
{

    yang_name = "inst-items"; yang_parent_name = "analytics-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::InstItems::~InstItems()
{
}

bool System::AnalyticsItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList>();
        ent_->parent = this;
        inst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::InstList()
    :
    mode{YType::enumeration, "mode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    capability_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::CapabilityItems>())
    , slot_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::SlotItems>())
    , controller_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ControllerItems>())
    , recordp_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::RecordpItems>())
    , collector_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::CollectorItems>())
    , monitor_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems>())
    , prof_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems>())
    , fwdinst_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems>())
    , policy_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems>())
{
    capability_items->parent = this;
    slot_items->parent = this;
    controller_items->parent = this;
    recordp_items->parent = this;
    collector_items->parent = this;
    monitor_items->parent = this;
    prof_items->parent = this;
    fwdinst_items->parent = this;
    policy_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::InstItems::InstList::~InstList()
{
}

bool System::AnalyticsItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (capability_items !=  nullptr && capability_items->has_data())
	|| (slot_items !=  nullptr && slot_items->has_data())
	|| (controller_items !=  nullptr && controller_items->has_data())
	|| (recordp_items !=  nullptr && recordp_items->has_data())
	|| (collector_items !=  nullptr && collector_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (prof_items !=  nullptr && prof_items->has_data())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (capability_items !=  nullptr && capability_items->has_operation())
	|| (slot_items !=  nullptr && slot_items->has_operation())
	|| (controller_items !=  nullptr && controller_items->has_operation())
	|| (recordp_items !=  nullptr && recordp_items->has_operation())
	|| (collector_items !=  nullptr && collector_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (prof_items !=  nullptr && prof_items->has_operation())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability-items")
    {
        if(capability_items == nullptr)
        {
            capability_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::CapabilityItems>();
        }
        return capability_items;
    }

    if(child_yang_name == "slot-items")
    {
        if(slot_items == nullptr)
        {
            slot_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::SlotItems>();
        }
        return slot_items;
    }

    if(child_yang_name == "controller-items")
    {
        if(controller_items == nullptr)
        {
            controller_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ControllerItems>();
        }
        return controller_items;
    }

    if(child_yang_name == "recordp-items")
    {
        if(recordp_items == nullptr)
        {
            recordp_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::RecordpItems>();
        }
        return recordp_items;
    }

    if(child_yang_name == "collector-items")
    {
        if(collector_items == nullptr)
        {
            collector_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::CollectorItems>();
        }
        return collector_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "prof-items")
    {
        if(prof_items == nullptr)
        {
            prof_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems>();
        }
        return prof_items;
    }

    if(child_yang_name == "fwdinst-items")
    {
        if(fwdinst_items == nullptr)
        {
            fwdinst_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems>();
        }
        return fwdinst_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems>();
        }
        return policy_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capability_items != nullptr)
    {
        _children["capability-items"] = capability_items;
    }

    if(slot_items != nullptr)
    {
        _children["slot-items"] = slot_items;
    }

    if(controller_items != nullptr)
    {
        _children["controller-items"] = controller_items;
    }

    if(recordp_items != nullptr)
    {
        _children["recordp-items"] = recordp_items;
    }

    if(collector_items != nullptr)
    {
        _children["collector-items"] = collector_items;
    }

    if(monitor_items != nullptr)
    {
        _children["monitor-items"] = monitor_items;
    }

    if(prof_items != nullptr)
    {
        _children["prof-items"] = prof_items;
    }

    if(fwdinst_items != nullptr)
    {
        _children["fwdinst-items"] = fwdinst_items;
    }

    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability-items" || name == "slot-items" || name == "controller-items" || name == "recordp-items" || name == "collector-items" || name == "monitor-items" || name == "prof-items" || name == "fwdinst-items" || name == "policy-items" || name == "mode" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::CapabilityItems::CapabilityItems()
    :
    fabricmode{YType::enumeration, "fabricMode"},
    buckethashwidth{YType::uint16, "bucketHashWidth"},
    numtcament{YType::uint32, "numTcamEnt"},
    numtcamentperv4{YType::uint16, "numTcamEntPerV4"},
    numtcamentperv6{YType::uint16, "numTcamEntPerV6"},
    configlatencyresfactor{YType::enumeration, "configLatencyResFactor"},
    oportsupport{YType::enumeration, "oportSupport"},
    oclasssupport{YType::enumeration, "oclassSupport"}
{

    yang_name = "capability-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::CapabilityItems::~CapabilityItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::CapabilityItems::has_data() const
{
    if (is_presence_container) return true;
    return fabricmode.is_set
	|| buckethashwidth.is_set
	|| numtcament.is_set
	|| numtcamentperv4.is_set
	|| numtcamentperv6.is_set
	|| configlatencyresfactor.is_set
	|| oportsupport.is_set
	|| oclasssupport.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::CapabilityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabricmode.yfilter)
	|| ydk::is_set(buckethashwidth.yfilter)
	|| ydk::is_set(numtcament.yfilter)
	|| ydk::is_set(numtcamentperv4.yfilter)
	|| ydk::is_set(numtcamentperv6.yfilter)
	|| ydk::is_set(configlatencyresfactor.yfilter)
	|| ydk::is_set(oportsupport.yfilter)
	|| ydk::is_set(oclasssupport.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabricmode.is_set || is_set(fabricmode.yfilter)) leaf_name_data.push_back(fabricmode.get_name_leafdata());
    if (buckethashwidth.is_set || is_set(buckethashwidth.yfilter)) leaf_name_data.push_back(buckethashwidth.get_name_leafdata());
    if (numtcament.is_set || is_set(numtcament.yfilter)) leaf_name_data.push_back(numtcament.get_name_leafdata());
    if (numtcamentperv4.is_set || is_set(numtcamentperv4.yfilter)) leaf_name_data.push_back(numtcamentperv4.get_name_leafdata());
    if (numtcamentperv6.is_set || is_set(numtcamentperv6.yfilter)) leaf_name_data.push_back(numtcamentperv6.get_name_leafdata());
    if (configlatencyresfactor.is_set || is_set(configlatencyresfactor.yfilter)) leaf_name_data.push_back(configlatencyresfactor.get_name_leafdata());
    if (oportsupport.is_set || is_set(oportsupport.yfilter)) leaf_name_data.push_back(oportsupport.get_name_leafdata());
    if (oclasssupport.is_set || is_set(oclasssupport.yfilter)) leaf_name_data.push_back(oclasssupport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::CapabilityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabricMode")
    {
        fabricmode = value;
        fabricmode.value_namespace = name_space;
        fabricmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucketHashWidth")
    {
        buckethashwidth = value;
        buckethashwidth.value_namespace = name_space;
        buckethashwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numTcamEnt")
    {
        numtcament = value;
        numtcament.value_namespace = name_space;
        numtcament.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numTcamEntPerV4")
    {
        numtcamentperv4 = value;
        numtcamentperv4.value_namespace = name_space;
        numtcamentperv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numTcamEntPerV6")
    {
        numtcamentperv6 = value;
        numtcamentperv6.value_namespace = name_space;
        numtcamentperv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configLatencyResFactor")
    {
        configlatencyresfactor = value;
        configlatencyresfactor.value_namespace = name_space;
        configlatencyresfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oportSupport")
    {
        oportsupport = value;
        oportsupport.value_namespace = name_space;
        oportsupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oclassSupport")
    {
        oclasssupport = value;
        oclasssupport.value_namespace = name_space;
        oclasssupport.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::CapabilityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabricMode")
    {
        fabricmode.yfilter = yfilter;
    }
    if(value_path == "bucketHashWidth")
    {
        buckethashwidth.yfilter = yfilter;
    }
    if(value_path == "numTcamEnt")
    {
        numtcament.yfilter = yfilter;
    }
    if(value_path == "numTcamEntPerV4")
    {
        numtcamentperv4.yfilter = yfilter;
    }
    if(value_path == "numTcamEntPerV6")
    {
        numtcamentperv6.yfilter = yfilter;
    }
    if(value_path == "configLatencyResFactor")
    {
        configlatencyresfactor.yfilter = yfilter;
    }
    if(value_path == "oportSupport")
    {
        oportsupport.yfilter = yfilter;
    }
    if(value_path == "oclassSupport")
    {
        oclasssupport.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::CapabilityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabricMode" || name == "bucketHashWidth" || name == "numTcamEnt" || name == "numTcamEntPerV4" || name == "numTcamEntPerV6" || name == "configLatencyResFactor" || name == "oportSupport" || name == "oclassSupport")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotItems()
    :
    slot_list(this, {"slotid"})
{

    yang_name = "slot-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::SlotItems::~SlotItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot_list.len(); index++)
    {
        if(slot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::has_operation() const
{
    for (std::size_t index=0; index<slot_list.len(); index++)
    {
        if(slot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::SlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::SlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::SlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Slot-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList>();
        ent_->parent = this;
        slot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::SlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Slot-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::SlotList()
    :
    slotid{YType::uint16, "slotid"}
        ,
    oclass_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems>())
{
    oclass_items->parent = this;

    yang_name = "Slot-list"; yang_parent_name = "slot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::~SlotList()
{
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::has_data() const
{
    if (is_presence_container) return true;
    return slotid.is_set
	|| (oclass_items !=  nullptr && oclass_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slotid.yfilter)
	|| (oclass_items !=  nullptr && oclass_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Slot-list";
    ADD_KEY_TOKEN(slotid, "slotid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slotid.is_set || is_set(slotid.yfilter)) leaf_name_data.push_back(slotid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oclass-items")
    {
        if(oclass_items == nullptr)
        {
            oclass_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems>();
        }
        return oclass_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oclass_items != nullptr)
    {
        _children["oclass-items"] = oclass_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slotid")
    {
        slotid = value;
        slotid.value_namespace = name_space;
        slotid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slotid")
    {
        slotid.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oclass-items" || name == "slotid")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassItems()
    :
    oclass_list(this, {"id"})
{

    yang_name = "oclass-items"; yang_parent_name = "Slot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::~OclassItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oclass_list.len(); index++)
    {
        if(oclass_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::has_operation() const
{
    for (std::size_t index=0; index<oclass_list.len(); index++)
    {
        if(oclass_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oclass-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oclass-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList>();
        ent_->parent = this;
        oclass_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oclass_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oclass-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::OclassList()
    :
    id{YType::uint16, "id"},
    prioritymapping{YType::str, "priorityMapping"}
{

    yang_name = "Oclass-list"; yang_parent_name = "oclass-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::~OclassList()
{
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| prioritymapping.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prioritymapping.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oclass-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prioritymapping.is_set || is_set(prioritymapping.yfilter)) leaf_name_data.push_back(prioritymapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityMapping")
    {
        prioritymapping = value;
        prioritymapping.value_namespace = name_space;
        prioritymapping.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priorityMapping")
    {
        prioritymapping.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priorityMapping")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerItems()
    :
    controller_list(this, {"name"})
{

    yang_name = "controller-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::~ControllerItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller_list.len(); index++)
    {
        if(controller_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::has_operation() const
{
    for (std::size_t index=0; index<controller_list.len(); index++)
    {
        if(controller_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ControllerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ControllerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ControllerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Controller-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList>();
        ent_->parent = this;
        controller_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ControllerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Controller-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::ControllerList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"}
{

    yang_name = "Controller-list"; yang_parent_name = "controller-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::~ControllerList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| vrfname.is_set
	|| dstaddr.is_set
	|| dstport.is_set
	|| dscp.is_set
	|| srcif.is_set
	|| srcaddr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(srcaddr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Controller-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordpItems()
    :
    recordp_list(this, {"name"})
{

    yang_name = "recordp-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::~RecordpItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::has_operation() const
{
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::RecordpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recordp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::RecordpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::RecordpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RecordP-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList>();
        ent_->parent = this;
        recordp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::RecordpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : recordp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RecordP-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::RecordPList()
    :
    name{YType::str, "name"},
    match{YType::str, "match"},
    collect{YType::str, "collect"},
    descr{YType::str, "descr"}
{

    yang_name = "RecordP-list"; yang_parent_name = "recordp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::~RecordPList()
{
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match.is_set
	|| collect.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(collect.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RecordP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (collect.is_set || is_set(collect.yfilter)) leaf_name_data.push_back(collect.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect")
    {
        collect = value;
        collect.value_namespace = name_space;
        collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "collect")
    {
        collect.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match" || name == "collect" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorItems()
    :
    collector_list(this, {"name"})
{

    yang_name = "collector-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::~CollectorItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::has_operation() const
{
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::CollectorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::CollectorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::CollectorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Collector-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList>();
        ent_->parent = this;
        collector_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::CollectorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : collector_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Collector-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::CollectorList()
    :
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"},
    descr{YType::str, "descr"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"}
{

    yang_name = "Collector-list"; yang_parent_name = "collector-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::~CollectorList()
{
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ver.is_set
	|| descr.is_set
	|| vrfname.is_set
	|| dstaddr.is_set
	|| dstport.is_set
	|| dscp.is_set
	|| srcif.is_set
	|| srcaddr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(srcaddr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Collector-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
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
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
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
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ver" || name == "descr" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorItems()
    :
    monitor_list(this, {"name"})
{

    yang_name = "monitor-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::~MonitorItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList>();
        ent_->parent = this;
        monitor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::MonitorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    collectorbucket_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems>())
    , rsrecordpatt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>())
{
    collectorbucket_items->parent = this;
    rsrecordpatt_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::~MonitorList()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (collectorbucket_items !=  nullptr && collectorbucket_items->has_data())
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (collectorbucket_items !=  nullptr && collectorbucket_items->has_operation())
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collectorbucket-items")
    {
        if(collectorbucket_items == nullptr)
        {
            collectorbucket_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems>();
        }
        return collectorbucket_items;
    }

    if(child_yang_name == "rsrecordPAtt-items")
    {
        if(rsrecordpatt_items == nullptr)
        {
            rsrecordpatt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>();
        }
        return rsrecordpatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(collectorbucket_items != nullptr)
    {
        _children["collectorbucket-items"] = collectorbucket_items;
    }

    if(rsrecordpatt_items != nullptr)
    {
        _children["rsrecordPAtt-items"] = rsrecordpatt_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collectorbucket-items" || name == "rsrecordPAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorbucketItems()
    :
    collectorbucket_list(this, {"id"})
{

    yang_name = "collectorbucket-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::~CollectorbucketItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collectorbucket_list.len(); index++)
    {
        if(collectorbucket_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::has_operation() const
{
    for (std::size_t index=0; index<collectorbucket_list.len(); index++)
    {
        if(collectorbucket_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collectorbucket-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CollectorBucket-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList>();
        ent_->parent = this;
        collectorbucket_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : collectorbucket_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CollectorBucket-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::CollectorBucketList()
    :
    id{YType::uint8, "id"},
    hashlo{YType::uint32, "hashLo"},
    hashhi{YType::uint32, "hashHi"},
    descr{YType::str, "descr"}
        ,
    rscollectoratt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems>())
{
    rscollectoratt_items->parent = this;

    yang_name = "CollectorBucket-list"; yang_parent_name = "collectorbucket-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::~CollectorBucketList()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| hashlo.is_set
	|| hashhi.is_set
	|| descr.is_set
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hashlo.yfilter)
	|| ydk::is_set(hashhi.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CollectorBucket-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hashlo.is_set || is_set(hashlo.yfilter)) leaf_name_data.push_back(hashlo.get_name_leafdata());
    if (hashhi.is_set || is_set(hashhi.yfilter)) leaf_name_data.push_back(hashhi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rscollectorAtt-items")
    {
        if(rscollectoratt_items == nullptr)
        {
            rscollectoratt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems>();
        }
        return rscollectoratt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rscollectoratt_items != nullptr)
    {
        _children["rscollectorAtt-items"] = rscollectoratt_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashLo")
    {
        hashlo = value;
        hashlo.value_namespace = name_space;
        hashlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashHi")
    {
        hashhi = value;
        hashhi.value_namespace = name_space;
        hashhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hashLo")
    {
        hashlo.yfilter = yfilter;
    }
    if(value_path == "hashHi")
    {
        hashhi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rscollectorAtt-items" || name == "id" || name == "hashLo" || name == "hashHi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RscollectorAttItems()
    :
    rscollectoratt_list(this, {"tdn"})
{

    yang_name = "rscollectorAtt-items"; yang_parent_name = "CollectorBucket-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::~RscollectorAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscollectorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCollectorAtt-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList>();
        ent_->parent = this;
        rscollectoratt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rscollectoratt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCollectorAtt-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::RsCollectorAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsCollectorAtt-list"; yang_parent_name = "rscollectorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::~RsCollectorAttList()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCollectorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::RsrecordPAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsrecordPAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::~RsrecordPAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrecordPAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfItems()
    :
    profile_list(this, {"name"})
{

    yang_name = "prof-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::~ProfItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile_list.len(); index++)
    {
        if(profile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::has_operation() const
{
    for (std::size_t index=0; index<profile_list.len(); index++)
    {
        if(profile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Profile-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList>();
        ent_->parent = this;
        profile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Profile-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::ProfileList()
    :
    name{YType::str, "name"},
    collectintvl{YType::uint32, "collectIntvl"},
    srcport{YType::uint32, "srcPort"},
    ippktidshift{YType::uint8, "ipPktIdShift"},
    burstintvlshift{YType::uint8, "burstIntvlShift"},
    mtu{YType::uint16, "mtu"},
    seqnumguessthreshlo{YType::uint32, "seqNumGuessThreshLo"},
    seqnumguessthreshhi{YType::uint32, "seqNumGuessThreshHi"},
    descr{YType::str, "descr"}
        ,
    payloadlenbin_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems>())
    , tcpopthdrlenbin_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems>())
    , rcvwindowszbin_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems>())
{
    payloadlenbin_items->parent = this;
    tcpopthdrlenbin_items->parent = this;
    rcvwindowszbin_items->parent = this;

    yang_name = "Profile-list"; yang_parent_name = "prof-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::~ProfileList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| collectintvl.is_set
	|| srcport.is_set
	|| ippktidshift.is_set
	|| burstintvlshift.is_set
	|| mtu.is_set
	|| seqnumguessthreshlo.is_set
	|| seqnumguessthreshhi.is_set
	|| descr.is_set
	|| (payloadlenbin_items !=  nullptr && payloadlenbin_items->has_data())
	|| (tcpopthdrlenbin_items !=  nullptr && tcpopthdrlenbin_items->has_data())
	|| (rcvwindowszbin_items !=  nullptr && rcvwindowszbin_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(collectintvl.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(ippktidshift.yfilter)
	|| ydk::is_set(burstintvlshift.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(seqnumguessthreshlo.yfilter)
	|| ydk::is_set(seqnumguessthreshhi.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (payloadlenbin_items !=  nullptr && payloadlenbin_items->has_operation())
	|| (tcpopthdrlenbin_items !=  nullptr && tcpopthdrlenbin_items->has_operation())
	|| (rcvwindowszbin_items !=  nullptr && rcvwindowszbin_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Profile-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (collectintvl.is_set || is_set(collectintvl.yfilter)) leaf_name_data.push_back(collectintvl.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (ippktidshift.is_set || is_set(ippktidshift.yfilter)) leaf_name_data.push_back(ippktidshift.get_name_leafdata());
    if (burstintvlshift.is_set || is_set(burstintvlshift.yfilter)) leaf_name_data.push_back(burstintvlshift.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (seqnumguessthreshlo.is_set || is_set(seqnumguessthreshlo.yfilter)) leaf_name_data.push_back(seqnumguessthreshlo.get_name_leafdata());
    if (seqnumguessthreshhi.is_set || is_set(seqnumguessthreshhi.yfilter)) leaf_name_data.push_back(seqnumguessthreshhi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "payloadlenbin-items")
    {
        if(payloadlenbin_items == nullptr)
        {
            payloadlenbin_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems>();
        }
        return payloadlenbin_items;
    }

    if(child_yang_name == "tcpopthdrlenbin-items")
    {
        if(tcpopthdrlenbin_items == nullptr)
        {
            tcpopthdrlenbin_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems>();
        }
        return tcpopthdrlenbin_items;
    }

    if(child_yang_name == "rcvwindowszbin-items")
    {
        if(rcvwindowszbin_items == nullptr)
        {
            rcvwindowszbin_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems>();
        }
        return rcvwindowszbin_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(payloadlenbin_items != nullptr)
    {
        _children["payloadlenbin-items"] = payloadlenbin_items;
    }

    if(tcpopthdrlenbin_items != nullptr)
    {
        _children["tcpopthdrlenbin-items"] = tcpopthdrlenbin_items;
    }

    if(rcvwindowszbin_items != nullptr)
    {
        _children["rcvwindowszbin-items"] = rcvwindowszbin_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collectIntvl")
    {
        collectintvl = value;
        collectintvl.value_namespace = name_space;
        collectintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipPktIdShift")
    {
        ippktidshift = value;
        ippktidshift.value_namespace = name_space;
        ippktidshift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstIntvlShift")
    {
        burstintvlshift = value;
        burstintvlshift.value_namespace = name_space;
        burstintvlshift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNumGuessThreshLo")
    {
        seqnumguessthreshlo = value;
        seqnumguessthreshlo.value_namespace = name_space;
        seqnumguessthreshlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNumGuessThreshHi")
    {
        seqnumguessthreshhi = value;
        seqnumguessthreshhi.value_namespace = name_space;
        seqnumguessthreshhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "collectIntvl")
    {
        collectintvl.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "ipPktIdShift")
    {
        ippktidshift.yfilter = yfilter;
    }
    if(value_path == "burstIntvlShift")
    {
        burstintvlshift.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "seqNumGuessThreshLo")
    {
        seqnumguessthreshlo.yfilter = yfilter;
    }
    if(value_path == "seqNumGuessThreshHi")
    {
        seqnumguessthreshhi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payloadlenbin-items" || name == "tcpopthdrlenbin-items" || name == "rcvwindowszbin-items" || name == "name" || name == "collectIntvl" || name == "srcPort" || name == "ipPktIdShift" || name == "burstIntvlShift" || name == "mtu" || name == "seqNumGuessThreshLo" || name == "seqNumGuessThreshHi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadlenbinItems()
    :
    payloadlenbin_list(this, {"id"})
{

    yang_name = "payloadlenbin-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::~PayloadlenbinItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<payloadlenbin_list.len(); index++)
    {
        if(payloadlenbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::has_operation() const
{
    for (std::size_t index=0; index<payloadlenbin_list.len(); index++)
    {
        if(payloadlenbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payloadlenbin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PayloadLenBin-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList>();
        ent_->parent = this;
        payloadlenbin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : payloadlenbin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PayloadLenBin-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::PayloadLenBinList()
    :
    id{YType::uint8, "id"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"},
    descr{YType::str, "descr"}
{

    yang_name = "PayloadLenBin-list"; yang_parent_name = "payloadlenbin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::~PayloadLenBinList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lo.is_set
	|| hi.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PayloadLenBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lo" || name == "hi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TcpopthdrlenbinItems()
    :
    tcpopthdrlenbin_list(this, {"id"})
{

    yang_name = "tcpopthdrlenbin-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::~TcpopthdrlenbinItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcpopthdrlenbin_list.len(); index++)
    {
        if(tcpopthdrlenbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::has_operation() const
{
    for (std::size_t index=0; index<tcpopthdrlenbin_list.len(); index++)
    {
        if(tcpopthdrlenbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpopthdrlenbin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TCPOptHdrLenBin-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList>();
        ent_->parent = this;
        tcpopthdrlenbin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcpopthdrlenbin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TCPOptHdrLenBin-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::TCPOptHdrLenBinList()
    :
    id{YType::uint8, "id"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"},
    descr{YType::str, "descr"}
{

    yang_name = "TCPOptHdrLenBin-list"; yang_parent_name = "tcpopthdrlenbin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::~TCPOptHdrLenBinList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lo.is_set
	|| hi.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCPOptHdrLenBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lo" || name == "hi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvwindowszbinItems()
    :
    rcvwindowszbin_list(this, {"id"})
{

    yang_name = "rcvwindowszbin-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::~RcvwindowszbinItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rcvwindowszbin_list.len(); index++)
    {
        if(rcvwindowszbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::has_operation() const
{
    for (std::size_t index=0; index<rcvwindowszbin_list.len(); index++)
    {
        if(rcvwindowszbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcvwindowszbin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RcvWindowSzBin-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList>();
        ent_->parent = this;
        rcvwindowszbin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rcvwindowszbin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RcvWindowSzBin-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::RcvWindowSzBinList()
    :
    id{YType::uint8, "id"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"},
    descr{YType::str, "descr"}
{

    yang_name = "RcvWindowSzBin-list"; yang_parent_name = "rcvwindowszbin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::~RcvWindowSzBinList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lo.is_set
	|| hi.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RcvWindowSzBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lo" || name == "hi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdinstItems()
    :
    fwdinsttarget_list(this, {"id"})
{

    yang_name = "fwdinst-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::~FwdinstItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::has_operation() const
{
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdinst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwdInstTarget-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList>();
        ent_->parent = this;
        fwdinsttarget_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwdinsttarget_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwdInstTarget-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::FwdInstTargetList()
    :
    id{YType::uint32, "id"},
    collectorid{YType::uint32, "collectorId"},
    defpolicy{YType::enumeration, "DefPolicy"},
    ipv4hit{YType::uint32, "ipv4Hit"},
    ipv6hit{YType::uint32, "ipv6Hit"},
    cehit{YType::uint32, "ceHit"},
    ipv4create{YType::uint32, "ipv4Create"},
    ipv6create{YType::uint32, "ipv6Create"},
    cecreate{YType::uint32, "ceCreate"},
    exportcount{YType::uint32, "exportCount"},
    skipcount{YType::uint32, "skipCount"},
    flttype{YType::enumeration, "fltType"},
    dir{YType::enumeration, "dir"}
        ,
    rsprofatt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems>())
    , rspolicyatt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems>())
    , dbgstatistics_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems>())
{
    rsprofatt_items->parent = this;
    rspolicyatt_items->parent = this;
    dbgstatistics_items->parent = this;

    yang_name = "FwdInstTarget-list"; yang_parent_name = "fwdinst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::~FwdInstTargetList()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| collectorid.is_set
	|| defpolicy.is_set
	|| ipv4hit.is_set
	|| ipv6hit.is_set
	|| cehit.is_set
	|| ipv4create.is_set
	|| ipv6create.is_set
	|| cecreate.is_set
	|| exportcount.is_set
	|| skipcount.is_set
	|| flttype.is_set
	|| dir.is_set
	|| (rsprofatt_items !=  nullptr && rsprofatt_items->has_data())
	|| (rspolicyatt_items !=  nullptr && rspolicyatt_items->has_data())
	|| (dbgstatistics_items !=  nullptr && dbgstatistics_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(collectorid.yfilter)
	|| ydk::is_set(defpolicy.yfilter)
	|| ydk::is_set(ipv4hit.yfilter)
	|| ydk::is_set(ipv6hit.yfilter)
	|| ydk::is_set(cehit.yfilter)
	|| ydk::is_set(ipv4create.yfilter)
	|| ydk::is_set(ipv6create.yfilter)
	|| ydk::is_set(cecreate.yfilter)
	|| ydk::is_set(exportcount.yfilter)
	|| ydk::is_set(skipcount.yfilter)
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| (rsprofatt_items !=  nullptr && rsprofatt_items->has_operation())
	|| (rspolicyatt_items !=  nullptr && rspolicyatt_items->has_operation())
	|| (dbgstatistics_items !=  nullptr && dbgstatistics_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FwdInstTarget-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (collectorid.is_set || is_set(collectorid.yfilter)) leaf_name_data.push_back(collectorid.get_name_leafdata());
    if (defpolicy.is_set || is_set(defpolicy.yfilter)) leaf_name_data.push_back(defpolicy.get_name_leafdata());
    if (ipv4hit.is_set || is_set(ipv4hit.yfilter)) leaf_name_data.push_back(ipv4hit.get_name_leafdata());
    if (ipv6hit.is_set || is_set(ipv6hit.yfilter)) leaf_name_data.push_back(ipv6hit.get_name_leafdata());
    if (cehit.is_set || is_set(cehit.yfilter)) leaf_name_data.push_back(cehit.get_name_leafdata());
    if (ipv4create.is_set || is_set(ipv4create.yfilter)) leaf_name_data.push_back(ipv4create.get_name_leafdata());
    if (ipv6create.is_set || is_set(ipv6create.yfilter)) leaf_name_data.push_back(ipv6create.get_name_leafdata());
    if (cecreate.is_set || is_set(cecreate.yfilter)) leaf_name_data.push_back(cecreate.get_name_leafdata());
    if (exportcount.is_set || is_set(exportcount.yfilter)) leaf_name_data.push_back(exportcount.get_name_leafdata());
    if (skipcount.is_set || is_set(skipcount.yfilter)) leaf_name_data.push_back(skipcount.get_name_leafdata());
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsprofAtt-items")
    {
        if(rsprofatt_items == nullptr)
        {
            rsprofatt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems>();
        }
        return rsprofatt_items;
    }

    if(child_yang_name == "rspolicyAtt-items")
    {
        if(rspolicyatt_items == nullptr)
        {
            rspolicyatt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems>();
        }
        return rspolicyatt_items;
    }

    if(child_yang_name == "dbgStatistics-items")
    {
        if(dbgstatistics_items == nullptr)
        {
            dbgstatistics_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems>();
        }
        return dbgstatistics_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsprofatt_items != nullptr)
    {
        _children["rsprofAtt-items"] = rsprofatt_items;
    }

    if(rspolicyatt_items != nullptr)
    {
        _children["rspolicyAtt-items"] = rspolicyatt_items;
    }

    if(dbgstatistics_items != nullptr)
    {
        _children["dbgStatistics-items"] = dbgstatistics_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collectorId")
    {
        collectorid = value;
        collectorid.value_namespace = name_space;
        collectorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DefPolicy")
    {
        defpolicy = value;
        defpolicy.value_namespace = name_space;
        defpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Hit")
    {
        ipv4hit = value;
        ipv4hit.value_namespace = name_space;
        ipv4hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Hit")
    {
        ipv6hit = value;
        ipv6hit.value_namespace = name_space;
        ipv6hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceHit")
    {
        cehit = value;
        cehit.value_namespace = name_space;
        cehit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Create")
    {
        ipv4create = value;
        ipv4create.value_namespace = name_space;
        ipv4create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Create")
    {
        ipv6create = value;
        ipv6create.value_namespace = name_space;
        ipv6create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceCreate")
    {
        cecreate = value;
        cecreate.value_namespace = name_space;
        cecreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportCount")
    {
        exportcount = value;
        exportcount.value_namespace = name_space;
        exportcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipCount")
    {
        skipcount = value;
        skipcount.value_namespace = name_space;
        skipcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "collectorId")
    {
        collectorid.yfilter = yfilter;
    }
    if(value_path == "DefPolicy")
    {
        defpolicy.yfilter = yfilter;
    }
    if(value_path == "ipv4Hit")
    {
        ipv4hit.yfilter = yfilter;
    }
    if(value_path == "ipv6Hit")
    {
        ipv6hit.yfilter = yfilter;
    }
    if(value_path == "ceHit")
    {
        cehit.yfilter = yfilter;
    }
    if(value_path == "ipv4Create")
    {
        ipv4create.yfilter = yfilter;
    }
    if(value_path == "ipv6Create")
    {
        ipv6create.yfilter = yfilter;
    }
    if(value_path == "ceCreate")
    {
        cecreate.yfilter = yfilter;
    }
    if(value_path == "exportCount")
    {
        exportcount.yfilter = yfilter;
    }
    if(value_path == "skipCount")
    {
        skipcount.yfilter = yfilter;
    }
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsprofAtt-items" || name == "rspolicyAtt-items" || name == "dbgStatistics-items" || name == "id" || name == "collectorId" || name == "DefPolicy" || name == "ipv4Hit" || name == "ipv6Hit" || name == "ceHit" || name == "ipv4Create" || name == "ipv6Create" || name == "ceCreate" || name == "exportCount" || name == "skipCount" || name == "fltType" || name == "dir")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::RsprofAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsprofAtt-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::~RsprofAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsprofAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::RspolicyAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyAtt-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::~RspolicyAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::DbgStatisticsItems()
    :
    flowcreatece{YType::uint64, "flowCreateCe"},
    flowcreateipv4{YType::uint64, "flowCreateIPv4"},
    flowcreateipv6{YType::uint64, "flowCreateIPv6"},
    flowhitce{YType::uint64, "flowHitCe"},
    flowhitipv4{YType::uint64, "flowHitIPv4"},
    flowhitipv6{YType::uint64, "flowHitIPv6"},
    packetsseen{YType::uint64, "packetsSeen"},
    export_{YType::uint64, "export"},
    skipcollect{YType::uint64, "skipCollect"},
    lastcollectts{YType::uint64, "lastCollectTs"}
{

    yang_name = "dbgStatistics-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::~DbgStatisticsItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::has_data() const
{
    if (is_presence_container) return true;
    return flowcreatece.is_set
	|| flowcreateipv4.is_set
	|| flowcreateipv6.is_set
	|| flowhitce.is_set
	|| flowhitipv4.is_set
	|| flowhitipv6.is_set
	|| packetsseen.is_set
	|| export_.is_set
	|| skipcollect.is_set
	|| lastcollectts.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flowcreatece.yfilter)
	|| ydk::is_set(flowcreateipv4.yfilter)
	|| ydk::is_set(flowcreateipv6.yfilter)
	|| ydk::is_set(flowhitce.yfilter)
	|| ydk::is_set(flowhitipv4.yfilter)
	|| ydk::is_set(flowhitipv6.yfilter)
	|| ydk::is_set(packetsseen.yfilter)
	|| ydk::is_set(export_.yfilter)
	|| ydk::is_set(skipcollect.yfilter)
	|| ydk::is_set(lastcollectts.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgStatistics-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flowcreatece.is_set || is_set(flowcreatece.yfilter)) leaf_name_data.push_back(flowcreatece.get_name_leafdata());
    if (flowcreateipv4.is_set || is_set(flowcreateipv4.yfilter)) leaf_name_data.push_back(flowcreateipv4.get_name_leafdata());
    if (flowcreateipv6.is_set || is_set(flowcreateipv6.yfilter)) leaf_name_data.push_back(flowcreateipv6.get_name_leafdata());
    if (flowhitce.is_set || is_set(flowhitce.yfilter)) leaf_name_data.push_back(flowhitce.get_name_leafdata());
    if (flowhitipv4.is_set || is_set(flowhitipv4.yfilter)) leaf_name_data.push_back(flowhitipv4.get_name_leafdata());
    if (flowhitipv6.is_set || is_set(flowhitipv6.yfilter)) leaf_name_data.push_back(flowhitipv6.get_name_leafdata());
    if (packetsseen.is_set || is_set(packetsseen.yfilter)) leaf_name_data.push_back(packetsseen.get_name_leafdata());
    if (export_.is_set || is_set(export_.yfilter)) leaf_name_data.push_back(export_.get_name_leafdata());
    if (skipcollect.is_set || is_set(skipcollect.yfilter)) leaf_name_data.push_back(skipcollect.get_name_leafdata());
    if (lastcollectts.is_set || is_set(lastcollectts.yfilter)) leaf_name_data.push_back(lastcollectts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flowCreateCe")
    {
        flowcreatece = value;
        flowcreatece.value_namespace = name_space;
        flowcreatece.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowCreateIPv4")
    {
        flowcreateipv4 = value;
        flowcreateipv4.value_namespace = name_space;
        flowcreateipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowCreateIPv6")
    {
        flowcreateipv6 = value;
        flowcreateipv6.value_namespace = name_space;
        flowcreateipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowHitCe")
    {
        flowhitce = value;
        flowhitce.value_namespace = name_space;
        flowhitce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowHitIPv4")
    {
        flowhitipv4 = value;
        flowhitipv4.value_namespace = name_space;
        flowhitipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowHitIPv6")
    {
        flowhitipv6 = value;
        flowhitipv6.value_namespace = name_space;
        flowhitipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetsSeen")
    {
        packetsseen = value;
        packetsseen.value_namespace = name_space;
        packetsseen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export")
    {
        export_ = value;
        export_.value_namespace = name_space;
        export_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipCollect")
    {
        skipcollect = value;
        skipcollect.value_namespace = name_space;
        skipcollect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastCollectTs")
    {
        lastcollectts = value;
        lastcollectts.value_namespace = name_space;
        lastcollectts.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flowCreateCe")
    {
        flowcreatece.yfilter = yfilter;
    }
    if(value_path == "flowCreateIPv4")
    {
        flowcreateipv4.yfilter = yfilter;
    }
    if(value_path == "flowCreateIPv6")
    {
        flowcreateipv6.yfilter = yfilter;
    }
    if(value_path == "flowHitCe")
    {
        flowhitce.yfilter = yfilter;
    }
    if(value_path == "flowHitIPv4")
    {
        flowhitipv4.yfilter = yfilter;
    }
    if(value_path == "flowHitIPv6")
    {
        flowhitipv6.yfilter = yfilter;
    }
    if(value_path == "packetsSeen")
    {
        packetsseen.yfilter = yfilter;
    }
    if(value_path == "export")
    {
        export_.yfilter = yfilter;
    }
    if(value_path == "skipCollect")
    {
        skipcollect.yfilter = yfilter;
    }
    if(value_path == "lastCollectTs")
    {
        lastcollectts.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowCreateCe" || name == "flowCreateIPv4" || name == "flowCreateIPv6" || name == "flowHitCe" || name == "flowHitIPv4" || name == "flowHitIPv6" || name == "packetsSeen" || name == "export" || name == "skipCollect" || name == "lastCollectTs")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyItems()
    :
    policy_list(this, {"name"})
{

    yang_name = "policy-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::~PolicyItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Policy-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList>();
        ent_->parent = this;
        policy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Policy-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::PolicyList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    acl_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems>())
{
    acl_items->parent = this;

    yang_name = "Policy-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::~PolicyList()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Policy-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::AclItems()
    :
    matchacl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "Policy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::~AclItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchacl_list.len(); index++)
    {
        if(matchacl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<matchacl_list.len(); index++)
    {
        if(matchacl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchAcl-list")
    {
        auto ent_ = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList>();
        ent_->parent = this;
        matchacl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchacl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchAcl-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::MatchAclList()
    :
    name{YType::str, "name"},
    aclname{YType::str, "aclName"},
    flttype{YType::enumeration, "fltType"},
    descr{YType::str, "descr"}
{

    yang_name = "MatchAcl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::~MatchAclList()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| aclname.is_set
	|| flttype.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchAcl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclName")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "aclName")
    {
        aclname.yfilter = yfilter;
    }
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "aclName" || name == "fltType" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::HwtelemetryItems()
    :
    fte_items(std::make_shared<System::HwtelemetryItems::FteItems>())
    , inbandtelemetry_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems>())
    , netflow_items(std::make_shared<System::HwtelemetryItems::NetflowItems>())
    , sflow_items(std::make_shared<System::HwtelemetryItems::SflowItems>())
{
    fte_items->parent = this;
    inbandtelemetry_items->parent = this;
    netflow_items->parent = this;
    sflow_items->parent = this;

    yang_name = "hwtelemetry-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::~HwtelemetryItems()
{
}

bool System::HwtelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return (fte_items !=  nullptr && fte_items->has_data())
	|| (inbandtelemetry_items !=  nullptr && inbandtelemetry_items->has_data())
	|| (netflow_items !=  nullptr && netflow_items->has_data())
	|| (sflow_items !=  nullptr && sflow_items->has_data());
}

bool System::HwtelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| (fte_items !=  nullptr && fte_items->has_operation())
	|| (inbandtelemetry_items !=  nullptr && inbandtelemetry_items->has_operation())
	|| (netflow_items !=  nullptr && netflow_items->has_operation())
	|| (sflow_items !=  nullptr && sflow_items->has_operation());
}

std::string System::HwtelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwtelemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fte-items")
    {
        if(fte_items == nullptr)
        {
            fte_items = std::make_shared<System::HwtelemetryItems::FteItems>();
        }
        return fte_items;
    }

    if(child_yang_name == "inbandtelemetry-items")
    {
        if(inbandtelemetry_items == nullptr)
        {
            inbandtelemetry_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems>();
        }
        return inbandtelemetry_items;
    }

    if(child_yang_name == "netflow-items")
    {
        if(netflow_items == nullptr)
        {
            netflow_items = std::make_shared<System::HwtelemetryItems::NetflowItems>();
        }
        return netflow_items;
    }

    if(child_yang_name == "sflow-items")
    {
        if(sflow_items == nullptr)
        {
            sflow_items = std::make_shared<System::HwtelemetryItems::SflowItems>();
        }
        return sflow_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fte_items != nullptr)
    {
        _children["fte-items"] = fte_items;
    }

    if(inbandtelemetry_items != nullptr)
    {
        _children["inbandtelemetry-items"] = inbandtelemetry_items;
    }

    if(netflow_items != nullptr)
    {
        _children["netflow-items"] = netflow_items;
    }

    if(sflow_items != nullptr)
    {
        _children["sflow-items"] = sflow_items;
    }

    return _children;
}

void System::HwtelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fte-items" || name == "inbandtelemetry-items" || name == "netflow-items" || name == "sflow-items")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::FteItems()
    :
    enable{YType::boolean, "enable"}
{

    yang_name = "fte-items"; yang_parent_name = "hwtelemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::FteItems::~FteItems()
{
}

bool System::HwtelemetryItems::FteItems::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool System::HwtelemetryItems::FteItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string System::HwtelemetryItems::FteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::FteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::FteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::FteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::FteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::FteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::FteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InbandtelemetryItems()
    :
    inst_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "inbandtelemetry-items"; yang_parent_name = "hwtelemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::InbandtelemetryItems::~InbandtelemetryItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::HwtelemetryItems::InbandtelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::HwtelemetryItems::InbandtelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::InbandtelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbandtelemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstItems()
    :
    inst_list(this, {"mode"})
{

    yang_name = "inst-items"; yang_parent_name = "inbandtelemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::~InstItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/inbandtelemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList>();
        ent_->parent = this;
        inst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::InstList()
    :
    mode{YType::enumeration, "mode"},
    profile{YType::enumeration, "profile"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    watchlist_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems>())
    , droplist_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems>())
    , recordp_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems>())
    , collector_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems>())
    , flowprof_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems>())
    , queueprof_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems>())
    , monitor_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems>())
    , fwdinst_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems>())
{
    watchlist_items->parent = this;
    droplist_items->parent = this;
    recordp_items->parent = this;
    collector_items->parent = this;
    flowprof_items->parent = this;
    queueprof_items->parent = this;
    monitor_items->parent = this;
    fwdinst_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::~InstList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| profile.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (watchlist_items !=  nullptr && watchlist_items->has_data())
	|| (droplist_items !=  nullptr && droplist_items->has_data())
	|| (recordp_items !=  nullptr && recordp_items->has_data())
	|| (collector_items !=  nullptr && collector_items->has_data())
	|| (flowprof_items !=  nullptr && flowprof_items->has_data())
	|| (queueprof_items !=  nullptr && queueprof_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_data());
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (watchlist_items !=  nullptr && watchlist_items->has_operation())
	|| (droplist_items !=  nullptr && droplist_items->has_operation())
	|| (recordp_items !=  nullptr && recordp_items->has_operation())
	|| (collector_items !=  nullptr && collector_items->has_operation())
	|| (flowprof_items !=  nullptr && flowprof_items->has_operation())
	|| (queueprof_items !=  nullptr && queueprof_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_operation());
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/inbandtelemetry-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watchlist-items")
    {
        if(watchlist_items == nullptr)
        {
            watchlist_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems>();
        }
        return watchlist_items;
    }

    if(child_yang_name == "droplist-items")
    {
        if(droplist_items == nullptr)
        {
            droplist_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems>();
        }
        return droplist_items;
    }

    if(child_yang_name == "recordp-items")
    {
        if(recordp_items == nullptr)
        {
            recordp_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems>();
        }
        return recordp_items;
    }

    if(child_yang_name == "collector-items")
    {
        if(collector_items == nullptr)
        {
            collector_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems>();
        }
        return collector_items;
    }

    if(child_yang_name == "flowprof-items")
    {
        if(flowprof_items == nullptr)
        {
            flowprof_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems>();
        }
        return flowprof_items;
    }

    if(child_yang_name == "queueprof-items")
    {
        if(queueprof_items == nullptr)
        {
            queueprof_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems>();
        }
        return queueprof_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "fwdinst-items")
    {
        if(fwdinst_items == nullptr)
        {
            fwdinst_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems>();
        }
        return fwdinst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(watchlist_items != nullptr)
    {
        _children["watchlist-items"] = watchlist_items;
    }

    if(droplist_items != nullptr)
    {
        _children["droplist-items"] = droplist_items;
    }

    if(recordp_items != nullptr)
    {
        _children["recordp-items"] = recordp_items;
    }

    if(collector_items != nullptr)
    {
        _children["collector-items"] = collector_items;
    }

    if(flowprof_items != nullptr)
    {
        _children["flowprof-items"] = flowprof_items;
    }

    if(queueprof_items != nullptr)
    {
        _children["queueprof-items"] = queueprof_items;
    }

    if(monitor_items != nullptr)
    {
        _children["monitor-items"] = monitor_items;
    }

    if(fwdinst_items != nullptr)
    {
        _children["fwdinst-items"] = fwdinst_items;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
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

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
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

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchlist-items" || name == "droplist-items" || name == "recordp-items" || name == "collector-items" || name == "flowprof-items" || name == "queueprof-items" || name == "monitor-items" || name == "fwdinst-items" || name == "mode" || name == "profile" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistItems()
    :
    watchlistacl_list(this, {"name"})
{

    yang_name = "watchlist-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::~WatchlistItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<watchlistacl_list.len(); index++)
    {
        if(watchlistacl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::has_operation() const
{
    for (std::size_t index=0; index<watchlistacl_list.len(); index++)
    {
        if(watchlistacl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watchlist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "WatchlistAcl-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList>();
        ent_->parent = this;
        watchlistacl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : watchlistacl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "WatchlistAcl-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::WatchlistAclList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    peracestatistics{YType::uint8, "perACEStatistics"},
    configstatus{YType::uint32, "configStatus"}
        ,
    ace_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems>())
{
    ace_items->parent = this;

    yang_name = "WatchlistAcl-list"; yang_parent_name = "watchlist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::~WatchlistAclList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (ace_items !=  nullptr && ace_items->has_data());
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (ace_items !=  nullptr && ace_items->has_operation());
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "WatchlistAcl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-items")
    {
        if(ace_items == nullptr)
        {
            ace_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems>();
        }
        return ace_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_items != nullptr)
    {
        _children["ace-items"] = ace_items;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
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

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-items" || name == "name" || name == "descr" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::AceItems()
    :
    watchlistace_list(this, {"seqnum"})
{

    yang_name = "ace-items"; yang_parent_name = "WatchlistAcl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::~AceItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<watchlistace_list.len(); index++)
    {
        if(watchlistace_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::has_operation() const
{
    for (std::size_t index=0; index<watchlistace_list.len(); index++)
    {
        if(watchlistace_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "WatchlistAce-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList>();
        ent_->parent = this;
        watchlistace_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : watchlistace_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "WatchlistAce-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::WatchlistAceList()
    :
    seqnum{YType::uint32, "seqNum"},
    descr{YType::str, "descr"},
    remark{YType::str, "remark"},
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
    redirect{YType::str, "redirect"},
    flttype{YType::enumeration, "fltType"},
    protocol{YType::uint8, "protocol"},
    protocolmask{YType::uint8, "protocolMask"},
    srcprefix{YType::str, "srcPrefix"},
    srcprefixmask{YType::str, "srcPrefixMask"},
    srcprefixlength{YType::uint8, "srcPrefixLength"},
    dstprefix{YType::str, "dstPrefix"},
    dstprefixmask{YType::str, "dstPrefixMask"},
    dstprefixlength{YType::uint8, "dstPrefixLength"}
{

    yang_name = "WatchlistAce-list"; yang_parent_name = "ace-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::~WatchlistAceList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| descr.is_set
	|| remark.is_set
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
	|| flttype.is_set
	|| protocol.is_set
	|| protocolmask.is_set
	|| srcprefix.is_set
	|| srcprefixmask.is_set
	|| srcprefixlength.is_set
	|| dstprefix.is_set
	|| dstprefixmask.is_set
	|| dstprefixlength.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(remark.yfilter)
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
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(protocolmask.yfilter)
	|| ydk::is_set(srcprefix.yfilter)
	|| ydk::is_set(srcprefixmask.yfilter)
	|| ydk::is_set(srcprefixlength.yfilter)
	|| ydk::is_set(dstprefix.yfilter)
	|| ydk::is_set(dstprefixmask.yfilter)
	|| ydk::is_set(dstprefixlength.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "WatchlistAce-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
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
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (protocolmask.is_set || is_set(protocolmask.yfilter)) leaf_name_data.push_back(protocolmask.get_name_leafdata());
    if (srcprefix.is_set || is_set(srcprefix.yfilter)) leaf_name_data.push_back(srcprefix.get_name_leafdata());
    if (srcprefixmask.is_set || is_set(srcprefixmask.yfilter)) leaf_name_data.push_back(srcprefixmask.get_name_leafdata());
    if (srcprefixlength.is_set || is_set(srcprefixlength.yfilter)) leaf_name_data.push_back(srcprefixlength.get_name_leafdata());
    if (dstprefix.is_set || is_set(dstprefix.yfilter)) leaf_name_data.push_back(dstprefix.get_name_leafdata());
    if (dstprefixmask.is_set || is_set(dstprefixmask.yfilter)) leaf_name_data.push_back(dstprefixmask.get_name_leafdata());
    if (dstprefixlength.is_set || is_set(dstprefixlength.yfilter)) leaf_name_data.push_back(dstprefixlength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
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
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
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
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
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
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "descr" || name == "remark" || name == "action" || name == "srcPortOp" || name == "srcPort1" || name == "srcPort2" || name == "srcPortMask" || name == "dstPortOp" || name == "dstPort1" || name == "dstPort2" || name == "dstPortMask" || name == "logging" || name == "dscp" || name == "pktLenOp" || name == "pktLen1" || name == "pktLen2" || name == "urg" || name == "ack" || name == "psh" || name == "rst" || name == "syn" || name == "fin" || name == "est" || name == "rev" || name == "tcpFlagsMask" || name == "packets" || name == "fragment" || name == "captureSession" || name == "httpOption" || name == "vni" || name == "vlan" || name == "tcpOptionLength" || name == "timeRange" || name == "srcAddrGroup" || name == "dstAddrGroup" || name == "srcPortGroup" || name == "dstPortGroup" || name == "redirect" || name == "fltType" || name == "protocol" || name == "protocolMask" || name == "srcPrefix" || name == "srcPrefixMask" || name == "srcPrefixLength" || name == "dstPrefix" || name == "dstPrefixMask" || name == "dstPrefixLength")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistItems()
    :
    droplistacl_list(this, {"name"})
{

    yang_name = "droplist-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::~DroplistItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<droplistacl_list.len(); index++)
    {
        if(droplistacl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::has_operation() const
{
    for (std::size_t index=0; index<droplistacl_list.len(); index++)
    {
        if(droplistacl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "droplist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DroplistAcl-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList>();
        ent_->parent = this;
        droplistacl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : droplistacl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DroplistAcl-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::DroplistAclList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    peracestatistics{YType::uint8, "perACEStatistics"},
    configstatus{YType::uint32, "configStatus"}
        ,
    ace_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems>())
{
    ace_items->parent = this;

    yang_name = "DroplistAcl-list"; yang_parent_name = "droplist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::~DroplistAclList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| peracestatistics.is_set
	|| configstatus.is_set
	|| (ace_items !=  nullptr && ace_items->has_data());
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (ace_items !=  nullptr && ace_items->has_operation());
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DroplistAcl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-items")
    {
        if(ace_items == nullptr)
        {
            ace_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems>();
        }
        return ace_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_items != nullptr)
    {
        _children["ace-items"] = ace_items;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
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

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-items" || name == "name" || name == "descr" || name == "perACEStatistics" || name == "configStatus")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::AceItems()
    :
    droplistace_list(this, {"seqnum"})
{

    yang_name = "ace-items"; yang_parent_name = "DroplistAcl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::~AceItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<droplistace_list.len(); index++)
    {
        if(droplistace_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::has_operation() const
{
    for (std::size_t index=0; index<droplistace_list.len(); index++)
    {
        if(droplistace_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DroplistAce-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList>();
        ent_->parent = this;
        droplistace_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : droplistace_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DroplistAce-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::DroplistAceList()
    :
    seqnum{YType::uint32, "seqNum"},
    descr{YType::str, "descr"},
    remark{YType::str, "remark"},
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
    redirect{YType::str, "redirect"},
    flttype{YType::enumeration, "fltType"},
    protocol{YType::uint8, "protocol"},
    protocolmask{YType::uint8, "protocolMask"},
    srcprefix{YType::str, "srcPrefix"},
    srcprefixmask{YType::str, "srcPrefixMask"},
    srcprefixlength{YType::uint8, "srcPrefixLength"},
    dstprefix{YType::str, "dstPrefix"},
    dstprefixmask{YType::str, "dstPrefixMask"},
    dstprefixlength{YType::uint8, "dstPrefixLength"}
{

    yang_name = "DroplistAce-list"; yang_parent_name = "ace-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::~DroplistAceList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| descr.is_set
	|| remark.is_set
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
	|| flttype.is_set
	|| protocol.is_set
	|| protocolmask.is_set
	|| srcprefix.is_set
	|| srcprefixmask.is_set
	|| srcprefixlength.is_set
	|| dstprefix.is_set
	|| dstprefixmask.is_set
	|| dstprefixlength.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(remark.yfilter)
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
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(protocolmask.yfilter)
	|| ydk::is_set(srcprefix.yfilter)
	|| ydk::is_set(srcprefixmask.yfilter)
	|| ydk::is_set(srcprefixlength.yfilter)
	|| ydk::is_set(dstprefix.yfilter)
	|| ydk::is_set(dstprefixmask.yfilter)
	|| ydk::is_set(dstprefixlength.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DroplistAce-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
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
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (protocolmask.is_set || is_set(protocolmask.yfilter)) leaf_name_data.push_back(protocolmask.get_name_leafdata());
    if (srcprefix.is_set || is_set(srcprefix.yfilter)) leaf_name_data.push_back(srcprefix.get_name_leafdata());
    if (srcprefixmask.is_set || is_set(srcprefixmask.yfilter)) leaf_name_data.push_back(srcprefixmask.get_name_leafdata());
    if (srcprefixlength.is_set || is_set(srcprefixlength.yfilter)) leaf_name_data.push_back(srcprefixlength.get_name_leafdata());
    if (dstprefix.is_set || is_set(dstprefix.yfilter)) leaf_name_data.push_back(dstprefix.get_name_leafdata());
    if (dstprefixmask.is_set || is_set(dstprefixmask.yfilter)) leaf_name_data.push_back(dstprefixmask.get_name_leafdata());
    if (dstprefixlength.is_set || is_set(dstprefixlength.yfilter)) leaf_name_data.push_back(dstprefixlength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
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
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
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
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
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
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "descr" || name == "remark" || name == "action" || name == "srcPortOp" || name == "srcPort1" || name == "srcPort2" || name == "srcPortMask" || name == "dstPortOp" || name == "dstPort1" || name == "dstPort2" || name == "dstPortMask" || name == "logging" || name == "dscp" || name == "pktLenOp" || name == "pktLen1" || name == "pktLen2" || name == "urg" || name == "ack" || name == "psh" || name == "rst" || name == "syn" || name == "fin" || name == "est" || name == "rev" || name == "tcpFlagsMask" || name == "packets" || name == "fragment" || name == "captureSession" || name == "httpOption" || name == "vni" || name == "vlan" || name == "tcpOptionLength" || name == "timeRange" || name == "srcAddrGroup" || name == "dstAddrGroup" || name == "srcPortGroup" || name == "dstPortGroup" || name == "redirect" || name == "fltType" || name == "protocol" || name == "protocolMask" || name == "srcPrefix" || name == "srcPrefixMask" || name == "srcPrefixLength" || name == "dstPrefix" || name == "dstPrefixMask" || name == "dstPrefixLength")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordpItems()
    :
    recordp_list(this, {"name"})
{

    yang_name = "recordp-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::~RecordpItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::has_operation() const
{
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recordp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RecordP-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList>();
        ent_->parent = this;
        recordp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : recordp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RecordP-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::RecordPList()
    :
    name{YType::str, "name"},
    collect0{YType::str, "collect0"},
    descr{YType::str, "descr"}
{

    yang_name = "RecordP-list"; yang_parent_name = "recordp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::~RecordPList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| collect0.is_set
	|| descr.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(collect0.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RecordP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (collect0.is_set || is_set(collect0.yfilter)) leaf_name_data.push_back(collect0.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "collect0")
    {
        collect0.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "collect0" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorItems()
    :
    collector_list(this, {"name"})
{

    yang_name = "collector-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::~CollectorItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::has_operation() const
{
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Collector-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList>();
        ent_->parent = this;
        collector_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : collector_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Collector-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::CollectorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"},
    sequencenumber{YType::uint32, "sequenceNumber"}
{

    yang_name = "Collector-list"; yang_parent_name = "collector-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::~CollectorList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::has_data() const
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
	|| sequencenumber.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::has_operation() const
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
	|| ydk::is_set(sequencenumber.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Collector-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::get_name_leaf_data() const
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
    if (sequencenumber.is_set || is_set(sequencenumber.yfilter)) leaf_name_data.push_back(sequencenumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sequenceNumber")
    {
        sequencenumber = value;
        sequencenumber.value_namespace = name_space;
        sequencenumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "sequenceNumber")
    {
        sequencenumber.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr" || name == "sequenceNumber")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowprofItems()
    :
    flowprofile_list(this, {"name"})
{

    yang_name = "flowprof-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::~FlowprofItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowprofile_list.len(); index++)
    {
        if(flowprofile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::has_operation() const
{
    for (std::size_t index=0; index<flowprofile_list.len(); index++)
    {
        if(flowprofile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowProfile-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList>();
        ent_->parent = this;
        flowprofile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flowprofile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowProfile-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::FlowProfileList()
    :
    name{YType::str, "name"},
    dscp{YType::uint16, "dscp"},
    dscpmask{YType::uint16, "dscpMask"},
    age{YType::uint16, "age"},
    latencyquant{YType::uint16, "latencyQuant"},
    descr{YType::str, "descr"}
{

    yang_name = "FlowProfile-list"; yang_parent_name = "flowprof-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::~FlowProfileList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| dscp.is_set
	|| dscpmask.is_set
	|| age.is_set
	|| latencyquant.is_set
	|| descr.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dscpmask.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(latencyquant.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowProfile-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dscpmask.is_set || is_set(dscpmask.yfilter)) leaf_name_data.push_back(dscpmask.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (latencyquant.is_set || is_set(latencyquant.yfilter)) leaf_name_data.push_back(latencyquant.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscpMask")
    {
        dscpmask = value;
        dscpmask.value_namespace = name_space;
        dscpmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyQuant")
    {
        latencyquant = value;
        latencyquant.value_namespace = name_space;
        latencyquant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "dscpMask")
    {
        dscpmask.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "latencyQuant")
    {
        latencyquant.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "dscp" || name == "dscpMask" || name == "age" || name == "latencyQuant" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueprofItems()
    :
    queueprofile_list(this, {"name"})
{

    yang_name = "queueprof-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::~QueueprofItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queueprofile_list.len(); index++)
    {
        if(queueprofile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::has_operation() const
{
    for (std::size_t index=0; index<queueprofile_list.len(); index++)
    {
        if(queueprofile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queueprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueueProfile-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList>();
        ent_->parent = this;
        queueprofile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queueprofile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueueProfile-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::QueueProfileList()
    :
    name{YType::str, "name"},
    depth{YType::uint32, "depth"},
    latency{YType::uint32, "latency"},
    breach{YType::uint16, "breach"},
    taildrop{YType::boolean, "tailDrop"},
    descr{YType::str, "descr"}
{

    yang_name = "QueueProfile-list"; yang_parent_name = "queueprof-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::~QueueProfileList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| depth.is_set
	|| latency.is_set
	|| breach.is_set
	|| taildrop.is_set
	|| descr.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(latency.yfilter)
	|| ydk::is_set(breach.yfilter)
	|| ydk::is_set(taildrop.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueueProfile-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (latency.is_set || is_set(latency.yfilter)) leaf_name_data.push_back(latency.get_name_leafdata());
    if (breach.is_set || is_set(breach.yfilter)) leaf_name_data.push_back(breach.get_name_leafdata());
    if (taildrop.is_set || is_set(taildrop.yfilter)) leaf_name_data.push_back(taildrop.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency")
    {
        latency = value;
        latency.value_namespace = name_space;
        latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "breach")
    {
        breach = value;
        breach.value_namespace = name_space;
        breach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tailDrop")
    {
        taildrop = value;
        taildrop.value_namespace = name_space;
        taildrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "latency")
    {
        latency.yfilter = yfilter;
    }
    if(value_path == "breach")
    {
        breach.yfilter = yfilter;
    }
    if(value_path == "tailDrop")
    {
        taildrop.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "depth" || name == "latency" || name == "breach" || name == "tailDrop" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorItems()
    :
    monitor_list(this, {"name"})
{

    yang_name = "monitor-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::~MonitorItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList>();
        ent_->parent = this;
        monitor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::MonitorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rsrecordpatt_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>())
    , rscollectoratt_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems>())
    , rswatchlistatt_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems>())
    , rsdroplistatt_items(std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems>())
{
    rsrecordpatt_items->parent = this;
    rscollectoratt_items->parent = this;
    rswatchlistatt_items->parent = this;
    rsdroplistatt_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::~MonitorList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_data())
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_data())
	|| (rswatchlistatt_items !=  nullptr && rswatchlistatt_items->has_data())
	|| (rsdroplistatt_items !=  nullptr && rsdroplistatt_items->has_data());
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_operation())
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_operation())
	|| (rswatchlistatt_items !=  nullptr && rswatchlistatt_items->has_operation())
	|| (rsdroplistatt_items !=  nullptr && rsdroplistatt_items->has_operation());
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrecordPAtt-items")
    {
        if(rsrecordpatt_items == nullptr)
        {
            rsrecordpatt_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>();
        }
        return rsrecordpatt_items;
    }

    if(child_yang_name == "rscollectorAtt-items")
    {
        if(rscollectoratt_items == nullptr)
        {
            rscollectoratt_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems>();
        }
        return rscollectoratt_items;
    }

    if(child_yang_name == "rswatchlistAtt-items")
    {
        if(rswatchlistatt_items == nullptr)
        {
            rswatchlistatt_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems>();
        }
        return rswatchlistatt_items;
    }

    if(child_yang_name == "rsdroplistAtt-items")
    {
        if(rsdroplistatt_items == nullptr)
        {
            rsdroplistatt_items = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems>();
        }
        return rsdroplistatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsrecordpatt_items != nullptr)
    {
        _children["rsrecordPAtt-items"] = rsrecordpatt_items;
    }

    if(rscollectoratt_items != nullptr)
    {
        _children["rscollectorAtt-items"] = rscollectoratt_items;
    }

    if(rswatchlistatt_items != nullptr)
    {
        _children["rswatchlistAtt-items"] = rswatchlistatt_items;
    }

    if(rsdroplistatt_items != nullptr)
    {
        _children["rsdroplistAtt-items"] = rsdroplistatt_items;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrecordPAtt-items" || name == "rscollectorAtt-items" || name == "rswatchlistAtt-items" || name == "rsdroplistAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::RsrecordPAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsrecordPAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::~RsrecordPAttItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrecordPAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RscollectorAttItems()
    :
    rscollectoratt_list(this, {"tdn"})
{

    yang_name = "rscollectorAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::~RscollectorAttItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscollectorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCollectorAtt-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList>();
        ent_->parent = this;
        rscollectoratt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rscollectoratt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCollectorAtt-list")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::RsCollectorAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsCollectorAtt-list"; yang_parent_name = "rscollectorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::~RsCollectorAttList()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCollectorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::RswatchlistAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rswatchlistAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::~RswatchlistAttItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rswatchlistAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::RsdroplistAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsdroplistAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::~RsdroplistAttItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdroplistAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::FwdinstItems()
    :
    fwdinsttarget_list(this, {"id"})
{

    yang_name = "fwdinst-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::~FwdinstItems()
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::has_operation() const
{
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdinst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwdInstTarget-list")
    {
        auto ent_ = std::make_shared<System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::FwdInstTargetList>();
        ent_->parent = this;
        fwdinsttarget_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwdinsttarget_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwdInstTarget-list")
        return true;
    return false;
}


}
}

