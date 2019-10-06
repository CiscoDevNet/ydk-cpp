
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_49.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::PingexectnItems()
    :
    exectn_list(this, {"tenant", "name", "srcip", "dstip"})
{

    yang_name = "pingexectn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::~PingexectnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::has_operation() const
{
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingexectn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList>();
        ent_->parent = this;
        exectn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exectn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::ExecTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ExecTn-list"; yang_parent_name = "pingexectn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::~ExecTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "srcNodeId" || name == "vrf" || name == "payloadSz" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::PingrsltfabItems()
    :
    rsltfab_list(this, {"name", "srcnodeid", "dstnodeid", "startts"})
{

    yang_name = "pingrsltfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::~PingrsltfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::has_operation() const
{
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingrsltfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList>();
        ent_->parent = this;
        rsltfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsltfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::RsltFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    tenant{YType::str, "tenant"},
    payloadsz{YType::uint16, "payloadSz"}
{

    yang_name = "RsltFab-list"; yang_parent_name = "pingrsltfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::~RsltFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| tenant.is_set
	|| payloadsz.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(payloadsz.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "tenant" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::PingrslttnItems()
    :
    rslttn_list(this, {"tenant", "name", "srcip", "dstip", "startts"})
{

    yang_name = "pingrslttn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::~PingrslttnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::has_operation() const
{
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingrslttn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList>();
        ent_->parent = this;
        rslttn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslttn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::RsltTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"}
{

    yang_name = "RsltTn-list"; yang_parent_name = "pingrslttn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::~RsltTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "srcNodeId" || name == "vrf" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::TrexecfabItems()
    :
    execfab_list(this, {"name", "srcnodeid", "dstnodeid"})
{

    yang_name = "trexecfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::~TrexecfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<execfab_list.len(); index++)
    {
        if(execfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::has_operation() const
{
    for (std::size_t index=0; index<execfab_list.len(); index++)
    {
        if(execfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trexecfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList>();
        ent_->parent = this;
        execfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : execfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::ExecFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    payloadsz{YType::uint16, "payloadSz"},
    tenant{YType::str, "tenant"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"},
    maxpaths{YType::uint16, "maxPaths"},
    maxhops{YType::uint8, "maxHops"}
{

    yang_name = "ExecFab-list"; yang_parent_name = "trexecfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::~ExecFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| payloadsz.is_set
	|| tenant.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set
	|| maxpaths.is_set
	|| maxhops.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxpaths.yfilter)
	|| ydk::is_set(maxhops.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxpaths.is_set || is_set(maxpaths.yfilter)) leaf_name_data.push_back(maxpaths.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPaths")
    {
        maxpaths = value;
        maxpaths.value_namespace = name_space;
        maxpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxPaths")
    {
        maxpaths.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "payloadSz" || name == "tenant" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt" || name == "maxPaths" || name == "maxHops")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::TrexectnItems()
    :
    exectn_list(this, {"tenant", "name", "srcip", "dstip"})
{

    yang_name = "trexectn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::~TrexectnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::has_operation() const
{
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trexectn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList>();
        ent_->parent = this;
        exectn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exectn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::ExecTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    gwmac{YType::str, "gwMac"},
    usegwmac{YType::boolean, "useGwMac"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"},
    maxpaths{YType::uint16, "maxPaths"},
    maxhops{YType::uint8, "maxHops"}
{

    yang_name = "ExecTn-list"; yang_parent_name = "trexectn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::~ExecTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| gwmac.is_set
	|| usegwmac.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set
	|| maxpaths.is_set
	|| maxhops.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(gwmac.yfilter)
	|| ydk::is_set(usegwmac.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxpaths.yfilter)
	|| ydk::is_set(maxhops.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (gwmac.is_set || is_set(gwmac.yfilter)) leaf_name_data.push_back(gwmac.get_name_leafdata());
    if (usegwmac.is_set || is_set(usegwmac.yfilter)) leaf_name_data.push_back(usegwmac.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxpaths.is_set || is_set(maxpaths.yfilter)) leaf_name_data.push_back(maxpaths.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gwMac")
    {
        gwmac = value;
        gwmac.value_namespace = name_space;
        gwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useGwMac")
    {
        usegwmac = value;
        usegwmac.value_namespace = name_space;
        usegwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPaths")
    {
        maxpaths = value;
        maxpaths.value_namespace = name_space;
        maxpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "gwMac")
    {
        gwmac.yfilter = yfilter;
    }
    if(value_path == "useGwMac")
    {
        usegwmac.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxPaths")
    {
        maxpaths.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "gwMac" || name == "useGwMac" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "srcNodeId" || name == "vrf" || name == "payloadSz" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt" || name == "maxPaths" || name == "maxHops")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::TrrsltfabItems()
    :
    rsltfab_list(this, {"name", "srcnodeid", "dstnodeid", "startts"})
{

    yang_name = "trrsltfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::~TrrsltfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::has_operation() const
{
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trrsltfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList>();
        ent_->parent = this;
        rsltfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsltfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::RsltFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    tenant{YType::str, "tenant"},
    payloadsz{YType::uint16, "payloadSz"}
        ,
    pgrp_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems>())
{
    pgrp_items->parent = this;

    yang_name = "RsltFab-list"; yang_parent_name = "trrsltfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::~RsltFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| tenant.is_set
	|| payloadsz.is_set
	|| (pgrp_items !=  nullptr && pgrp_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| (pgrp_items !=  nullptr && pgrp_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pgrp-items")
    {
        if(pgrp_items == nullptr)
        {
            pgrp_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems>();
        }
        return pgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pgrp_items != nullptr)
    {
        _children["pgrp-items"] = pgrp_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pgrp-items" || name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "tenant" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PgrpItems()
    :
    pathgrp_list(this, {"id"})
{

    yang_name = "pgrp-items"; yang_parent_name = "RsltFab-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::~PgrpItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::has_operation() const
{
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathGrp-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList>();
        ent_->parent = this;
        pathgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathGrp-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathGrpList()
    :
    id{YType::uint8, "id"}
        ,
    path_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems>())
{
    path_items->parent = this;

    yang_name = "PathGrp-list"; yang_parent_name = "pgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::~PathGrpList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathItems()
    :
    path_list(this, {"id"})
{

    yang_name = "path-items"; yang_parent_name = "PathGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::~PathItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::PathList()
    :
    id{YType::uint8, "id"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"}
        ,
    node_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>())
{
    node_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::~PathList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| flags.is_set
	|| (node_items !=  nullptr && node_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>();
        }
        return node_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "id" || name == "type" || name == "flags")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeItems()
    :
    node_list(this, {"order"})
{

    yang_name = "node-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::~NodeItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Node-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList>();
        ent_->parent = this;
        node_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Node-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::NodeList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"}
{

    yang_name = "Node-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::~NodeList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Node-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::TrrslttnItems()
    :
    rslttn_list(this, {"tenant", "name", "srcip", "dstip", "startts"})
{

    yang_name = "trrslttn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::~TrrslttnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::has_operation() const
{
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trrslttn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList>();
        ent_->parent = this;
        rslttn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslttn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::RsltTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"}
        ,
    pgrp_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems>())
{
    pgrp_items->parent = this;

    yang_name = "RsltTn-list"; yang_parent_name = "trrslttn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::~RsltTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set
	|| (pgrp_items !=  nullptr && pgrp_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| (pgrp_items !=  nullptr && pgrp_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pgrp-items")
    {
        if(pgrp_items == nullptr)
        {
            pgrp_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems>();
        }
        return pgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pgrp_items != nullptr)
    {
        _children["pgrp-items"] = pgrp_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pgrp-items" || name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "srcNodeId" || name == "vrf" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PgrpItems()
    :
    pathgrp_list(this, {"id"})
{

    yang_name = "pgrp-items"; yang_parent_name = "RsltTn-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::~PgrpItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::has_operation() const
{
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathGrp-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList>();
        ent_->parent = this;
        pathgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathGrp-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathGrpList()
    :
    id{YType::uint8, "id"}
        ,
    path_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems>())
{
    path_items->parent = this;

    yang_name = "PathGrp-list"; yang_parent_name = "pgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::~PathGrpList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathItems()
    :
    path_list(this, {"id"})
{

    yang_name = "path-items"; yang_parent_name = "PathGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::~PathItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::PathList()
    :
    id{YType::uint8, "id"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"}
        ,
    node_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>())
{
    node_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::~PathList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| flags.is_set
	|| (node_items !=  nullptr && node_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>();
        }
        return node_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "id" || name == "type" || name == "flags")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeItems()
    :
    node_list(this, {"order"})
{

    yang_name = "node-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::~NodeItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Node-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList>();
        ent_->parent = this;
        node_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Node-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::NodeList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"}
{

    yang_name = "Node-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::~NodeList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Node-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::ImginsttaskrsltItems()
    :
    rslt_list(this, {"type", "startts"})
{

    yang_name = "imginsttaskrslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::~ImginsttaskrsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::has_operation() const
{
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imginsttaskrslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList>();
        ent_->parent = this;
        rslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::RsltList()
    :
    type{YType::enumeration, "type"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Rslt-list"; yang_parent_name = "imginsttaskrslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::~RsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| startts.is_set
	|| descr.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rslt-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "startTs" || name == "descr" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::TrkipItems()
    :
    ipepexec_list(this, {"addr", "vrf"})
{

    yang_name = "trkip-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::~TrkipItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipepexec_list.len(); index++)
    {
        if(ipepexec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::has_operation() const
{
    for (std::size_t index=0; index<ipepexec_list.len(); index++)
    {
        if(ipepexec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trkip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEpExec-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList>();
        ent_->parent = this;
        ipepexec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipepexec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEpExec-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IpEpExecList()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"}
        ,
    iprslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems>())
{
    iprslt_items->parent = this;

    yang_name = "IpEpExec-list"; yang_parent_name = "trkip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::~IpEpExecList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vrf.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| (iprslt_items !=  nullptr && iprslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (iprslt_items !=  nullptr && iprslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEpExec-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iprslt-items")
    {
        if(iprslt_items == nullptr)
        {
            iprslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems>();
        }
        return iprslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iprslt_items != nullptr)
    {
        _children["iprslt-items"] = iprslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iprslt-items" || name == "addr" || name == "vrf" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IprsltItems()
    :
    ipeprslt_list(this, {"addr", "vrf"})
{

    yang_name = "iprslt-items"; yang_parent_name = "IpEpExec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::~IprsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::has_operation() const
{
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList>();
        ent_->parent = this;
        ipeprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipeprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::IpEpRsltList()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsipeprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>())
{
    rsipeprslttoipepatt_items->parent = this;

    yang_name = "IpEpRslt-list"; yang_parent_name = "iprslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::~IpEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vrf.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsipEpRslttoIpEpAtt-items")
    {
        if(rsipeprslttoipepatt_items == nullptr)
        {
            rsipeprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>();
        }
        return rsipeprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsipeprslttoipepatt_items != nullptr)
    {
        _children["rsipEpRslttoIpEpAtt-items"] = rsipeprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsipEpRslttoIpEpAtt-items" || name == "addr" || name == "vrf" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::RsipEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsipEpRslttoIpEpAtt-items"; yang_parent_name = "IpEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::~RsipEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsipEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::TrkmacItems()
    :
    macepexec_list(this, {"addr", "encap"})
{

    yang_name = "trkmac-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::~TrkmacItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macepexec_list.len(); index++)
    {
        if(macepexec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::has_operation() const
{
    for (std::size_t index=0; index<macepexec_list.len(); index++)
    {
        if(macepexec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trkmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEpExec-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList>();
        ent_->parent = this;
        macepexec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macepexec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEpExec-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacEpExecList()
    :
    addr{YType::str, "addr"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"}
        ,
    macrslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems>())
{
    macrslt_items->parent = this;

    yang_name = "MacEpExec-list"; yang_parent_name = "trkmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::~MacEpExecList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encap.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| (macrslt_items !=  nullptr && macrslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (macrslt_items !=  nullptr && macrslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEpExec-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macrslt-items")
    {
        if(macrslt_items == nullptr)
        {
            macrslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems>();
        }
        return macrslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macrslt_items != nullptr)
    {
        _children["macrslt-items"] = macrslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macrslt-items" || name == "addr" || name == "encap" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacrsltItems()
    :
    maceprslt_list(this, {"addr", "encap"})
{

    yang_name = "macrslt-items"; yang_parent_name = "MacEpExec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::~MacrsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::has_operation() const
{
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macrslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList>();
        ent_->parent = this;
        maceprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : maceprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::MacEpRsltList()
    :
    addr{YType::str, "addr"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsmaceprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>())
{
    rsmaceprslttoipepatt_items->parent = this;

    yang_name = "MacEpRslt-list"; yang_parent_name = "macrslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::~MacEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encap.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpRslttoIpEpAtt-items")
    {
        if(rsmaceprslttoipepatt_items == nullptr)
        {
            rsmaceprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>();
        }
        return rsmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceprslttoipepatt_items != nullptr)
    {
        _children["rsmacEpRslttoIpEpAtt-items"] = rsmaceprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpRslttoIpEpAtt-items" || name == "addr" || name == "encap" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsmacEpRslttoIpEpAttItems()
    :
    rsmaceprslttoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpRslttoIpEpAtt-items"; yang_parent_name = "MacEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::~RsmacEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpRslttoIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList>();
        ent_->parent = this;
        rsmaceprslttoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceprslttoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpRslttoIpEpAtt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::RsMacEpRslttoIpEpAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsMacEpRslttoIpEpAtt-list"; yang_parent_name = "rsmacEpRslttoIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::~RsMacEpRslttoIpEpAttList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpRslttoIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IprsltItems()
    :
    ipeprslt_list(this, {"addr", "vrf"})
{

    yang_name = "iprslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::~IprsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::has_operation() const
{
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList>();
        ent_->parent = this;
        ipeprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipeprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::IpEpRsltList()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsipeprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>())
{
    rsipeprslttoipepatt_items->parent = this;

    yang_name = "IpEpRslt-list"; yang_parent_name = "iprslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::~IpEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vrf.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsipEpRslttoIpEpAtt-items")
    {
        if(rsipeprslttoipepatt_items == nullptr)
        {
            rsipeprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>();
        }
        return rsipeprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsipeprslttoipepatt_items != nullptr)
    {
        _children["rsipEpRslttoIpEpAtt-items"] = rsipeprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsipEpRslttoIpEpAtt-items" || name == "addr" || name == "vrf" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::RsipEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsipEpRslttoIpEpAtt-items"; yang_parent_name = "IpEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::~RsipEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsipEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacrsltItems()
    :
    maceprslt_list(this, {"addr", "encap"})
{

    yang_name = "macrslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::~MacrsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::has_operation() const
{
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macrslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList>();
        ent_->parent = this;
        maceprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : maceprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::MacEpRsltList()
    :
    addr{YType::str, "addr"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsmaceprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>())
{
    rsmaceprslttoipepatt_items->parent = this;

    yang_name = "MacEpRslt-list"; yang_parent_name = "macrslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::~MacEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encap.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpRslttoIpEpAtt-items")
    {
        if(rsmaceprslttoipepatt_items == nullptr)
        {
            rsmaceprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>();
        }
        return rsmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceprslttoipepatt_items != nullptr)
    {
        _children["rsmacEpRslttoIpEpAtt-items"] = rsmaceprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpRslttoIpEpAtt-items" || name == "addr" || name == "encap" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsmacEpRslttoIpEpAttItems()
    :
    rsmaceprslttoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpRslttoIpEpAtt-items"; yang_parent_name = "MacEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::~RsmacEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpRslttoIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList>();
        ent_->parent = this;
        rsmaceprslttoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceprslttoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpRslttoIpEpAtt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::RsMacEpRslttoIpEpAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsMacEpRslttoIpEpAtt-list"; yang_parent_name = "rsmacEpRslttoIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::~RsMacEpRslttoIpEpAttList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpRslttoIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingnversltItems()
    :
    pingnverslt_list(this, {"sessionid"})
{

    yang_name = "pingnverslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnversltItems::~PingnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PingNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList>();
        ent_->parent = this;
        pingnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pingnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PingNveRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::PingNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    replyip{YType::str, "replyIp"},
    replyipv6{YType::str, "replyIpv6"},
    nodename{YType::str, "nodeName"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    sport{YType::uint16, "sPort"},
    packetsz{YType::uint16, "packetSz"},
    sentpkts{YType::uint32, "sentPkts"},
    notsentpkts{YType::uint32, "notSentPkts"},
    rcvdpkts{YType::uint32, "rcvdPkts"},
    minrtt{YType::uint32, "minRtt"},
    avgrtt{YType::uint32, "avgRtt"},
    maxrtt{YType::uint32, "maxRtt"},
    totalrtt{YType::uint32, "totalRtt"}
{

    yang_name = "PingNveRslt-list"; yang_parent_name = "pingnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::~PingNveRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| replyip.is_set
	|| replyipv6.is_set
	|| nodename.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| sport.is_set
	|| packetsz.is_set
	|| sentpkts.is_set
	|| notsentpkts.is_set
	|| rcvdpkts.is_set
	|| minrtt.is_set
	|| avgrtt.is_set
	|| maxrtt.is_set
	|| totalrtt.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(replyip.yfilter)
	|| ydk::is_set(replyipv6.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(packetsz.yfilter)
	|| ydk::is_set(sentpkts.yfilter)
	|| ydk::is_set(notsentpkts.yfilter)
	|| ydk::is_set(rcvdpkts.yfilter)
	|| ydk::is_set(minrtt.yfilter)
	|| ydk::is_set(avgrtt.yfilter)
	|| ydk::is_set(maxrtt.yfilter)
	|| ydk::is_set(totalrtt.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PingNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (replyip.is_set || is_set(replyip.yfilter)) leaf_name_data.push_back(replyip.get_name_leafdata());
    if (replyipv6.is_set || is_set(replyipv6.yfilter)) leaf_name_data.push_back(replyipv6.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (packetsz.is_set || is_set(packetsz.yfilter)) leaf_name_data.push_back(packetsz.get_name_leafdata());
    if (sentpkts.is_set || is_set(sentpkts.yfilter)) leaf_name_data.push_back(sentpkts.get_name_leafdata());
    if (notsentpkts.is_set || is_set(notsentpkts.yfilter)) leaf_name_data.push_back(notsentpkts.get_name_leafdata());
    if (rcvdpkts.is_set || is_set(rcvdpkts.yfilter)) leaf_name_data.push_back(rcvdpkts.get_name_leafdata());
    if (minrtt.is_set || is_set(minrtt.yfilter)) leaf_name_data.push_back(minrtt.get_name_leafdata());
    if (avgrtt.is_set || is_set(avgrtt.yfilter)) leaf_name_data.push_back(avgrtt.get_name_leafdata());
    if (maxrtt.is_set || is_set(maxrtt.yfilter)) leaf_name_data.push_back(maxrtt.get_name_leafdata());
    if (totalrtt.is_set || is_set(totalrtt.yfilter)) leaf_name_data.push_back(totalrtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replyIp")
    {
        replyip = value;
        replyip.value_namespace = name_space;
        replyip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replyIpv6")
    {
        replyipv6 = value;
        replyipv6.value_namespace = name_space;
        replyipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeName")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPort")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetSz")
    {
        packetsz = value;
        packetsz.value_namespace = name_space;
        packetsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentPkts")
    {
        sentpkts = value;
        sentpkts.value_namespace = name_space;
        sentpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notSentPkts")
    {
        notsentpkts = value;
        notsentpkts.value_namespace = name_space;
        notsentpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPkts")
    {
        rcvdpkts = value;
        rcvdpkts.value_namespace = name_space;
        rcvdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRtt")
    {
        minrtt = value;
        minrtt.value_namespace = name_space;
        minrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgRtt")
    {
        avgrtt = value;
        avgrtt.value_namespace = name_space;
        avgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRtt")
    {
        maxrtt = value;
        maxrtt.value_namespace = name_space;
        maxrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalRtt")
    {
        totalrtt = value;
        totalrtt.value_namespace = name_space;
        totalrtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "replyIp")
    {
        replyip.yfilter = yfilter;
    }
    if(value_path == "replyIpv6")
    {
        replyipv6.yfilter = yfilter;
    }
    if(value_path == "nodeName")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "sPort")
    {
        sport.yfilter = yfilter;
    }
    if(value_path == "packetSz")
    {
        packetsz.yfilter = yfilter;
    }
    if(value_path == "sentPkts")
    {
        sentpkts.yfilter = yfilter;
    }
    if(value_path == "notSentPkts")
    {
        notsentpkts.yfilter = yfilter;
    }
    if(value_path == "rcvdPkts")
    {
        rcvdpkts.yfilter = yfilter;
    }
    if(value_path == "minRtt")
    {
        minrtt.yfilter = yfilter;
    }
    if(value_path == "avgRtt")
    {
        avgrtt.yfilter = yfilter;
    }
    if(value_path == "maxRtt")
    {
        maxrtt.yfilter = yfilter;
    }
    if(value_path == "totalRtt")
    {
        totalrtt.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessionId" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "replyIp" || name == "replyIpv6" || name == "nodeName" || name == "errorCode" || name == "failReason" || name == "sPort" || name == "packetSz" || name == "sentPkts" || name == "notSentPkts" || name == "rcvdPkts" || name == "minRtt" || name == "avgRtt" || name == "maxRtt" || name == "totalRtt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TracertnveItems()
    :
    tracertnve_list(this, {"session"})
{

    yang_name = "tracertnve-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::~TracertnveItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracertnve_list.len(); index++)
    {
        if(tracertnve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::has_operation() const
{
    for (std::size_t index=0; index<tracertnve_list.len(); index++)
    {
        if(tracertnve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracertnve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TraceRtNve-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList>();
        ent_->parent = this;
        tracertnve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracertnve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TraceRtNve-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TraceRtNveList()
    :
    session{YType::str, "session"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    profileid{YType::uint16, "profileId"},
    dstip{YType::str, "dstIp"},
    dstipv6{YType::str, "dstIpv6"},
    dstmac{YType::str, "dstMAC"},
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"},
    dot1q{YType::uint16, "dot1q"},
    srcport{YType::uint16, "srcPort"},
    dstport{YType::uint16, "dstPort"},
    maxttl{YType::uint8, "maxTtl"},
    vrf{YType::str, "vrf"},
    vni{YType::uint32, "vni"},
    timeout{YType::uint8, "timeout"},
    egressif{YType::str, "egressIf"},
    macsrcif{YType::str, "macsrcif"},
    verifyhost{YType::boolean, "verifyHost"},
    sessionid{YType::uint32, "sessionId"},
    payload_dot1q{YType::uint16, "payload_dot1q"},
    payload_srcip{YType::str, "payload_srcip"},
    payload_srcipv6{YType::str, "payload_srcipv6"},
    payload_srcmac{YType::str, "payload_srcmac"},
    payload_dstip{YType::str, "payload_dstip"},
    payload_dstipv6{YType::str, "payload_dstipv6"},
    payload_dstmac{YType::str, "payload_dstmac"},
    payload_srcport{YType::uint16, "payload_srcport"},
    payload_dstport{YType::uint16, "payload_dstport"},
    payload_protocol{YType::uint16, "payload_protocol"},
    payload_srcif{YType::str, "payload_srcif"}
        ,
    trnverslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems>())
{
    trnverslt_items->parent = this;

    yang_name = "TraceRtNve-list"; yang_parent_name = "tracertnve-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::~TraceRtNveList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| profileid.is_set
	|| dstip.is_set
	|| dstipv6.is_set
	|| dstmac.is_set
	|| srcip.is_set
	|| srcipv6.is_set
	|| dot1q.is_set
	|| srcport.is_set
	|| dstport.is_set
	|| maxttl.is_set
	|| vrf.is_set
	|| vni.is_set
	|| timeout.is_set
	|| egressif.is_set
	|| macsrcif.is_set
	|| verifyhost.is_set
	|| sessionid.is_set
	|| payload_dot1q.is_set
	|| payload_srcip.is_set
	|| payload_srcipv6.is_set
	|| payload_srcmac.is_set
	|| payload_dstip.is_set
	|| payload_dstipv6.is_set
	|| payload_dstmac.is_set
	|| payload_srcport.is_set
	|| payload_dstport.is_set
	|| payload_protocol.is_set
	|| payload_srcif.is_set
	|| (trnverslt_items !=  nullptr && trnverslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(profileid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(dstipv6.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(maxttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(macsrcif.yfilter)
	|| ydk::is_set(verifyhost.yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(payload_dot1q.yfilter)
	|| ydk::is_set(payload_srcip.yfilter)
	|| ydk::is_set(payload_srcipv6.yfilter)
	|| ydk::is_set(payload_srcmac.yfilter)
	|| ydk::is_set(payload_dstip.yfilter)
	|| ydk::is_set(payload_dstipv6.yfilter)
	|| ydk::is_set(payload_dstmac.yfilter)
	|| ydk::is_set(payload_srcport.yfilter)
	|| ydk::is_set(payload_dstport.yfilter)
	|| ydk::is_set(payload_protocol.yfilter)
	|| ydk::is_set(payload_srcif.yfilter)
	|| (trnverslt_items !=  nullptr && trnverslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TraceRtNve-list";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (profileid.is_set || is_set(profileid.yfilter)) leaf_name_data.push_back(profileid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (dstipv6.is_set || is_set(dstipv6.yfilter)) leaf_name_data.push_back(dstipv6.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (maxttl.is_set || is_set(maxttl.yfilter)) leaf_name_data.push_back(maxttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (macsrcif.is_set || is_set(macsrcif.yfilter)) leaf_name_data.push_back(macsrcif.get_name_leafdata());
    if (verifyhost.is_set || is_set(verifyhost.yfilter)) leaf_name_data.push_back(verifyhost.get_name_leafdata());
    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (payload_dot1q.is_set || is_set(payload_dot1q.yfilter)) leaf_name_data.push_back(payload_dot1q.get_name_leafdata());
    if (payload_srcip.is_set || is_set(payload_srcip.yfilter)) leaf_name_data.push_back(payload_srcip.get_name_leafdata());
    if (payload_srcipv6.is_set || is_set(payload_srcipv6.yfilter)) leaf_name_data.push_back(payload_srcipv6.get_name_leafdata());
    if (payload_srcmac.is_set || is_set(payload_srcmac.yfilter)) leaf_name_data.push_back(payload_srcmac.get_name_leafdata());
    if (payload_dstip.is_set || is_set(payload_dstip.yfilter)) leaf_name_data.push_back(payload_dstip.get_name_leafdata());
    if (payload_dstipv6.is_set || is_set(payload_dstipv6.yfilter)) leaf_name_data.push_back(payload_dstipv6.get_name_leafdata());
    if (payload_dstmac.is_set || is_set(payload_dstmac.yfilter)) leaf_name_data.push_back(payload_dstmac.get_name_leafdata());
    if (payload_srcport.is_set || is_set(payload_srcport.yfilter)) leaf_name_data.push_back(payload_srcport.get_name_leafdata());
    if (payload_dstport.is_set || is_set(payload_dstport.yfilter)) leaf_name_data.push_back(payload_dstport.get_name_leafdata());
    if (payload_protocol.is_set || is_set(payload_protocol.yfilter)) leaf_name_data.push_back(payload_protocol.get_name_leafdata());
    if (payload_srcif.is_set || is_set(payload_srcif.yfilter)) leaf_name_data.push_back(payload_srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trnverslt-items")
    {
        if(trnverslt_items == nullptr)
        {
            trnverslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems>();
        }
        return trnverslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trnverslt_items != nullptr)
    {
        _children["trnverslt-items"] = trnverslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileId")
    {
        profileid = value;
        profileid.value_namespace = name_space;
        profileid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6 = value;
        dstipv6.value_namespace = name_space;
        dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMAC")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTtl")
    {
        maxttl = value;
        maxttl.value_namespace = name_space;
        maxttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsrcif")
    {
        macsrcif = value;
        macsrcif.value_namespace = name_space;
        macsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyHost")
    {
        verifyhost = value;
        verifyhost.value_namespace = name_space;
        verifyhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q = value;
        payload_dot1q.value_namespace = name_space;
        payload_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip = value;
        payload_srcip.value_namespace = name_space;
        payload_srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6 = value;
        payload_srcipv6.value_namespace = name_space;
        payload_srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac = value;
        payload_srcmac.value_namespace = name_space;
        payload_srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip = value;
        payload_dstip.value_namespace = name_space;
        payload_dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6 = value;
        payload_dstipv6.value_namespace = name_space;
        payload_dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac = value;
        payload_dstmac.value_namespace = name_space;
        payload_dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport = value;
        payload_srcport.value_namespace = name_space;
        payload_srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport = value;
        payload_dstport.value_namespace = name_space;
        payload_dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol = value;
        payload_protocol.value_namespace = name_space;
        payload_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif = value;
        payload_srcif.value_namespace = name_space;
        payload_srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "profileId")
    {
        profileid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6.yfilter = yfilter;
    }
    if(value_path == "dstMAC")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "maxTtl")
    {
        maxttl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "macsrcif")
    {
        macsrcif.yfilter = yfilter;
    }
    if(value_path == "verifyHost")
    {
        verifyhost.yfilter = yfilter;
    }
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q.yfilter = yfilter;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip.yfilter = yfilter;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6.yfilter = yfilter;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac.yfilter = yfilter;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip.yfilter = yfilter;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6.yfilter = yfilter;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac.yfilter = yfilter;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport.yfilter = yfilter;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport.yfilter = yfilter;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol.yfilter = yfilter;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trnverslt-items" || name == "session" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "profileId" || name == "dstIp" || name == "dstIpv6" || name == "dstMAC" || name == "srcIp" || name == "srcIpv6" || name == "dot1q" || name == "srcPort" || name == "dstPort" || name == "maxTtl" || name == "vrf" || name == "vni" || name == "timeout" || name == "egressIf" || name == "macsrcif" || name == "verifyHost" || name == "sessionId" || name == "payload_dot1q" || name == "payload_srcip" || name == "payload_srcipv6" || name == "payload_srcmac" || name == "payload_dstip" || name == "payload_dstipv6" || name == "payload_dstmac" || name == "payload_srcport" || name == "payload_dstport" || name == "payload_protocol" || name == "payload_srcif")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TrnversltItems()
    :
    tracertnverslt_list(this, {"sessionid"})
{

    yang_name = "trnverslt-items"; yang_parent_name = "TraceRtNve-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::~TrnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracertnverslt_list.len(); index++)
    {
        if(tracertnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::has_operation() const
{
    for (std::size_t index=0; index<tracertnverslt_list.len(); index++)
    {
        if(tracertnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TraceRtNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList>();
        ent_->parent = this;
        tracertnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracertnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TraceRtNveRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::TraceRtNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    dstip{YType::str, "dstIp"},
    maxhops{YType::uint8, "maxHops"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    pathtr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems>())
{
    pathtr_items->parent = this;

    yang_name = "TraceRtNveRslt-list"; yang_parent_name = "trnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::~TraceRtNveRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| dstip.is_set
	|| maxhops.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (pathtr_items !=  nullptr && pathtr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pathtr_items !=  nullptr && pathtr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TraceRtNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pathtr-items")
    {
        if(pathtr_items == nullptr)
        {
            pathtr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems>();
        }
        return pathtr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pathtr_items != nullptr)
    {
        _children["pathtr-items"] = pathtr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathtr-items" || name == "sessionId" || name == "dstIp" || name == "maxHops" || name == "errorCode" || name == "failReason" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathtrItems()
    :
    pathtr_list(this, {"id"})
{

    yang_name = "pathtr-items"; yang_parent_name = "TraceRtNveRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::~PathtrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtr_list.len(); index++)
    {
        if(pathtr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_operation() const
{
    for (std::size_t index=0; index<pathtr_list.len(); index++)
    {
        if(pathtr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathtr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList>();
        ent_->parent = this;
        pathtr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::PathTrList()
    :
    id{YType::uint8, "id"}
        ,
    nodetr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems>())
{
    nodetr_items->parent = this;

    yang_name = "PathTr-list"; yang_parent_name = "pathtr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::~PathTrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nodetr_items !=  nullptr && nodetr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nodetr_items !=  nullptr && nodetr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodetr-items")
    {
        if(nodetr_items == nullptr)
        {
            nodetr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems>();
        }
        return nodetr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodetr_items != nullptr)
    {
        _children["nodetr-items"] = nodetr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodetr-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodetrItems()
    :
    nodetr_list(this, {"order"})
{

    yang_name = "nodetr-items"; yang_parent_name = "PathTr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::~NodetrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodetr_list.len(); index++)
    {
        if(nodetr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_operation() const
{
    for (std::size_t index=0; index<nodetr_list.len(); index++)
    {
        if(nodetr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodetr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeTr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList>();
        ent_->parent = this;
        nodetr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodetr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeTr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::NodeTrList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"},
    v6addr{YType::str, "v6addr"},
    elapsedtime{YType::str, "elapsedTime"}
{

    yang_name = "NodeTr-list"; yang_parent_name = "nodetr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::~NodeTrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set
	|| v6addr.is_set
	|| elapsedtime.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(elapsedtime.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeTr-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (elapsedtime.is_set || is_set(elapsedtime.yfilter)) leaf_name_data.push_back(elapsedtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime = value;
        elapsedtime.value_namespace = name_space;
        elapsedtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "v6addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr" || name == "v6addr" || name == "elapsedTime")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathtracenveItems()
    :
    pathtracenve_list(this, {"session"})
{

    yang_name = "pathtracenve-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::~PathtracenveItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtracenve_list.len(); index++)
    {
        if(pathtracenve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::has_operation() const
{
    for (std::size_t index=0; index<pathtracenve_list.len(); index++)
    {
        if(pathtracenve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathtracenve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTraceNve-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList>();
        ent_->parent = this;
        pathtracenve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtracenve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTraceNve-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PathTraceNveList()
    :
    session{YType::str, "session"},
    reqstats{YType::boolean, "reqStats"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    profileid{YType::uint16, "profileId"},
    dstip{YType::str, "dstIp"},
    dstipv6{YType::str, "dstIpv6"},
    dstmac{YType::str, "dstMAC"},
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"},
    dot1q{YType::uint16, "dot1q"},
    srcport{YType::uint16, "srcPort"},
    dstport{YType::uint16, "dstPort"},
    maxttl{YType::uint8, "maxTtl"},
    vrf{YType::str, "vrf"},
    vni{YType::uint32, "vni"},
    timeout{YType::uint8, "timeout"},
    egressif{YType::str, "egressIf"},
    macsrcif{YType::str, "macsrcif"},
    verifyhost{YType::boolean, "verifyHost"},
    sessionid{YType::uint32, "sessionId"},
    payload_dot1q{YType::uint16, "payload_dot1q"},
    payload_srcip{YType::str, "payload_srcip"},
    payload_srcipv6{YType::str, "payload_srcipv6"},
    payload_srcmac{YType::str, "payload_srcmac"},
    payload_dstip{YType::str, "payload_dstip"},
    payload_dstipv6{YType::str, "payload_dstipv6"},
    payload_dstmac{YType::str, "payload_dstmac"},
    payload_srcport{YType::uint16, "payload_srcport"},
    payload_dstport{YType::uint16, "payload_dstport"},
    payload_protocol{YType::uint16, "payload_protocol"},
    payload_srcif{YType::str, "payload_srcif"}
        ,
    ptrnverslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems>())
{
    ptrnverslt_items->parent = this;

    yang_name = "PathTraceNve-list"; yang_parent_name = "pathtracenve-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::~PathTraceNveList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| reqstats.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| profileid.is_set
	|| dstip.is_set
	|| dstipv6.is_set
	|| dstmac.is_set
	|| srcip.is_set
	|| srcipv6.is_set
	|| dot1q.is_set
	|| srcport.is_set
	|| dstport.is_set
	|| maxttl.is_set
	|| vrf.is_set
	|| vni.is_set
	|| timeout.is_set
	|| egressif.is_set
	|| macsrcif.is_set
	|| verifyhost.is_set
	|| sessionid.is_set
	|| payload_dot1q.is_set
	|| payload_srcip.is_set
	|| payload_srcipv6.is_set
	|| payload_srcmac.is_set
	|| payload_dstip.is_set
	|| payload_dstipv6.is_set
	|| payload_dstmac.is_set
	|| payload_srcport.is_set
	|| payload_dstport.is_set
	|| payload_protocol.is_set
	|| payload_srcif.is_set
	|| (ptrnverslt_items !=  nullptr && ptrnverslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(reqstats.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(profileid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(dstipv6.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(maxttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(macsrcif.yfilter)
	|| ydk::is_set(verifyhost.yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(payload_dot1q.yfilter)
	|| ydk::is_set(payload_srcip.yfilter)
	|| ydk::is_set(payload_srcipv6.yfilter)
	|| ydk::is_set(payload_srcmac.yfilter)
	|| ydk::is_set(payload_dstip.yfilter)
	|| ydk::is_set(payload_dstipv6.yfilter)
	|| ydk::is_set(payload_dstmac.yfilter)
	|| ydk::is_set(payload_srcport.yfilter)
	|| ydk::is_set(payload_dstport.yfilter)
	|| ydk::is_set(payload_protocol.yfilter)
	|| ydk::is_set(payload_srcif.yfilter)
	|| (ptrnverslt_items !=  nullptr && ptrnverslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTraceNve-list";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (reqstats.is_set || is_set(reqstats.yfilter)) leaf_name_data.push_back(reqstats.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (profileid.is_set || is_set(profileid.yfilter)) leaf_name_data.push_back(profileid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (dstipv6.is_set || is_set(dstipv6.yfilter)) leaf_name_data.push_back(dstipv6.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (maxttl.is_set || is_set(maxttl.yfilter)) leaf_name_data.push_back(maxttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (macsrcif.is_set || is_set(macsrcif.yfilter)) leaf_name_data.push_back(macsrcif.get_name_leafdata());
    if (verifyhost.is_set || is_set(verifyhost.yfilter)) leaf_name_data.push_back(verifyhost.get_name_leafdata());
    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (payload_dot1q.is_set || is_set(payload_dot1q.yfilter)) leaf_name_data.push_back(payload_dot1q.get_name_leafdata());
    if (payload_srcip.is_set || is_set(payload_srcip.yfilter)) leaf_name_data.push_back(payload_srcip.get_name_leafdata());
    if (payload_srcipv6.is_set || is_set(payload_srcipv6.yfilter)) leaf_name_data.push_back(payload_srcipv6.get_name_leafdata());
    if (payload_srcmac.is_set || is_set(payload_srcmac.yfilter)) leaf_name_data.push_back(payload_srcmac.get_name_leafdata());
    if (payload_dstip.is_set || is_set(payload_dstip.yfilter)) leaf_name_data.push_back(payload_dstip.get_name_leafdata());
    if (payload_dstipv6.is_set || is_set(payload_dstipv6.yfilter)) leaf_name_data.push_back(payload_dstipv6.get_name_leafdata());
    if (payload_dstmac.is_set || is_set(payload_dstmac.yfilter)) leaf_name_data.push_back(payload_dstmac.get_name_leafdata());
    if (payload_srcport.is_set || is_set(payload_srcport.yfilter)) leaf_name_data.push_back(payload_srcport.get_name_leafdata());
    if (payload_dstport.is_set || is_set(payload_dstport.yfilter)) leaf_name_data.push_back(payload_dstport.get_name_leafdata());
    if (payload_protocol.is_set || is_set(payload_protocol.yfilter)) leaf_name_data.push_back(payload_protocol.get_name_leafdata());
    if (payload_srcif.is_set || is_set(payload_srcif.yfilter)) leaf_name_data.push_back(payload_srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptrnverslt-items")
    {
        if(ptrnverslt_items == nullptr)
        {
            ptrnverslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems>();
        }
        return ptrnverslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ptrnverslt_items != nullptr)
    {
        _children["ptrnverslt-items"] = ptrnverslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqStats")
    {
        reqstats = value;
        reqstats.value_namespace = name_space;
        reqstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileId")
    {
        profileid = value;
        profileid.value_namespace = name_space;
        profileid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6 = value;
        dstipv6.value_namespace = name_space;
        dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMAC")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTtl")
    {
        maxttl = value;
        maxttl.value_namespace = name_space;
        maxttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsrcif")
    {
        macsrcif = value;
        macsrcif.value_namespace = name_space;
        macsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyHost")
    {
        verifyhost = value;
        verifyhost.value_namespace = name_space;
        verifyhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q = value;
        payload_dot1q.value_namespace = name_space;
        payload_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip = value;
        payload_srcip.value_namespace = name_space;
        payload_srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6 = value;
        payload_srcipv6.value_namespace = name_space;
        payload_srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac = value;
        payload_srcmac.value_namespace = name_space;
        payload_srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip = value;
        payload_dstip.value_namespace = name_space;
        payload_dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6 = value;
        payload_dstipv6.value_namespace = name_space;
        payload_dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac = value;
        payload_dstmac.value_namespace = name_space;
        payload_dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport = value;
        payload_srcport.value_namespace = name_space;
        payload_srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport = value;
        payload_dstport.value_namespace = name_space;
        payload_dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol = value;
        payload_protocol.value_namespace = name_space;
        payload_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif = value;
        payload_srcif.value_namespace = name_space;
        payload_srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "reqStats")
    {
        reqstats.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "profileId")
    {
        profileid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6.yfilter = yfilter;
    }
    if(value_path == "dstMAC")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "maxTtl")
    {
        maxttl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "macsrcif")
    {
        macsrcif.yfilter = yfilter;
    }
    if(value_path == "verifyHost")
    {
        verifyhost.yfilter = yfilter;
    }
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q.yfilter = yfilter;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip.yfilter = yfilter;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6.yfilter = yfilter;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac.yfilter = yfilter;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip.yfilter = yfilter;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6.yfilter = yfilter;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac.yfilter = yfilter;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport.yfilter = yfilter;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport.yfilter = yfilter;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol.yfilter = yfilter;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptrnverslt-items" || name == "session" || name == "reqStats" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "profileId" || name == "dstIp" || name == "dstIpv6" || name == "dstMAC" || name == "srcIp" || name == "srcIpv6" || name == "dot1q" || name == "srcPort" || name == "dstPort" || name == "maxTtl" || name == "vrf" || name == "vni" || name == "timeout" || name == "egressIf" || name == "macsrcif" || name == "verifyHost" || name == "sessionId" || name == "payload_dot1q" || name == "payload_srcip" || name == "payload_srcipv6" || name == "payload_srcmac" || name == "payload_dstip" || name == "payload_dstipv6" || name == "payload_dstmac" || name == "payload_srcport" || name == "payload_dstport" || name == "payload_protocol" || name == "payload_srcif")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PtrnversltItems()
    :
    pathtracenverslt_list(this, {"sessionid"})
{

    yang_name = "ptrnverslt-items"; yang_parent_name = "PathTraceNve-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::~PtrnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtracenverslt_list.len(); index++)
    {
        if(pathtracenverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pathtracenverslt_list.len(); index++)
    {
        if(pathtracenverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptrnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTraceNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList>();
        ent_->parent = this;
        pathtracenverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtracenverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTraceNveRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathTraceNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    dstip{YType::str, "dstIp"},
    maxhops{YType::uint8, "maxHops"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    pathptr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems>())
{
    pathptr_items->parent = this;

    yang_name = "PathTraceNveRslt-list"; yang_parent_name = "ptrnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::~PathTraceNveRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| dstip.is_set
	|| maxhops.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (pathptr_items !=  nullptr && pathptr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pathptr_items !=  nullptr && pathptr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTraceNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pathptr-items")
    {
        if(pathptr_items == nullptr)
        {
            pathptr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems>();
        }
        return pathptr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pathptr_items != nullptr)
    {
        _children["pathptr-items"] = pathptr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathptr-items" || name == "sessionId" || name == "dstIp" || name == "maxHops" || name == "errorCode" || name == "failReason" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathptrItems()
    :
    pathptr_list(this, {"id"})
{

    yang_name = "pathptr-items"; yang_parent_name = "PathTraceNveRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::~PathptrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathptr_list.len(); index++)
    {
        if(pathptr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_operation() const
{
    for (std::size_t index=0; index<pathptr_list.len(); index++)
    {
        if(pathptr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathptr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathPtr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList>();
        ent_->parent = this;
        pathptr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathptr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathPtr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::PathPtrList()
    :
    id{YType::uint8, "id"}
        ,
    nodeptr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems>())
{
    nodeptr_items->parent = this;

    yang_name = "PathPtr-list"; yang_parent_name = "pathptr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::~PathPtrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nodeptr_items !=  nullptr && nodeptr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nodeptr_items !=  nullptr && nodeptr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathPtr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodeptr-items")
    {
        if(nodeptr_items == nullptr)
        {
            nodeptr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems>();
        }
        return nodeptr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodeptr_items != nullptr)
    {
        _children["nodeptr-items"] = nodeptr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodeptr-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodeptrItems()
    :
    nodeptr_list(this, {"order"})
{

    yang_name = "nodeptr-items"; yang_parent_name = "PathPtr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::~NodeptrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeptr_list.len(); index++)
    {
        if(nodeptr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_operation() const
{
    for (std::size_t index=0; index<nodeptr_list.len(); index++)
    {
        if(nodeptr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodeptr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodePtr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList>();
        ent_->parent = this;
        nodeptr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeptr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodePtr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::NodePtrList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"},
    v6addr{YType::str, "v6addr"},
    nodename{YType::str, "nodeName"},
    elapsedtime{YType::str, "elapsedTime"},
    ingressif{YType::str, "ingressIf"},
    ingressifstate{YType::str, "ingressIfState"},
    rxlen{YType::uint64, "rxLen"},
    rxbytes{YType::uint64, "rxBytes"},
    rxpktrate{YType::uint64, "rxPktRate"},
    rxbyterate{YType::uint64, "rxByteRate"},
    rxload{YType::uint64, "rxLoad"},
    rxucast{YType::uint64, "rxUcast"},
    rxmcast{YType::uint64, "rxMcast"},
    rxbcast{YType::uint64, "rxBcast"},
    rxdiscards{YType::uint64, "rxDiscards"},
    rxerrors{YType::uint64, "rxErrors"},
    rxunknown{YType::uint64, "rxUnknown"},
    rxbandwidth{YType::uint32, "rxBandwidth"},
    egressif{YType::str, "egressIf"},
    egressifstate{YType::str, "egressIfState"},
    txlen{YType::uint64, "txLen"},
    txbytes{YType::uint64, "txBytes"},
    txpktrate{YType::uint64, "txPktRate"},
    txbyterate{YType::uint64, "txByteRate"},
    txload{YType::uint64, "txLoad"},
    txucast{YType::uint64, "txUcast"},
    txmcast{YType::uint64, "txMcast"},
    txbcast{YType::uint64, "txBcast"},
    txdiscards{YType::uint64, "txDiscards"},
    txerrors{YType::uint64, "txErrors"},
    txbandwidth{YType::uint32, "txBandwidth"}
{

    yang_name = "NodePtr-list"; yang_parent_name = "nodeptr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::~NodePtrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set
	|| v6addr.is_set
	|| nodename.is_set
	|| elapsedtime.is_set
	|| ingressif.is_set
	|| ingressifstate.is_set
	|| rxlen.is_set
	|| rxbytes.is_set
	|| rxpktrate.is_set
	|| rxbyterate.is_set
	|| rxload.is_set
	|| rxucast.is_set
	|| rxmcast.is_set
	|| rxbcast.is_set
	|| rxdiscards.is_set
	|| rxerrors.is_set
	|| rxunknown.is_set
	|| rxbandwidth.is_set
	|| egressif.is_set
	|| egressifstate.is_set
	|| txlen.is_set
	|| txbytes.is_set
	|| txpktrate.is_set
	|| txbyterate.is_set
	|| txload.is_set
	|| txucast.is_set
	|| txmcast.is_set
	|| txbcast.is_set
	|| txdiscards.is_set
	|| txerrors.is_set
	|| txbandwidth.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(elapsedtime.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(ingressifstate.yfilter)
	|| ydk::is_set(rxlen.yfilter)
	|| ydk::is_set(rxbytes.yfilter)
	|| ydk::is_set(rxpktrate.yfilter)
	|| ydk::is_set(rxbyterate.yfilter)
	|| ydk::is_set(rxload.yfilter)
	|| ydk::is_set(rxucast.yfilter)
	|| ydk::is_set(rxmcast.yfilter)
	|| ydk::is_set(rxbcast.yfilter)
	|| ydk::is_set(rxdiscards.yfilter)
	|| ydk::is_set(rxerrors.yfilter)
	|| ydk::is_set(rxunknown.yfilter)
	|| ydk::is_set(rxbandwidth.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(egressifstate.yfilter)
	|| ydk::is_set(txlen.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(txpktrate.yfilter)
	|| ydk::is_set(txbyterate.yfilter)
	|| ydk::is_set(txload.yfilter)
	|| ydk::is_set(txucast.yfilter)
	|| ydk::is_set(txmcast.yfilter)
	|| ydk::is_set(txbcast.yfilter)
	|| ydk::is_set(txdiscards.yfilter)
	|| ydk::is_set(txerrors.yfilter)
	|| ydk::is_set(txbandwidth.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodePtr-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (elapsedtime.is_set || is_set(elapsedtime.yfilter)) leaf_name_data.push_back(elapsedtime.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (ingressifstate.is_set || is_set(ingressifstate.yfilter)) leaf_name_data.push_back(ingressifstate.get_name_leafdata());
    if (rxlen.is_set || is_set(rxlen.yfilter)) leaf_name_data.push_back(rxlen.get_name_leafdata());
    if (rxbytes.is_set || is_set(rxbytes.yfilter)) leaf_name_data.push_back(rxbytes.get_name_leafdata());
    if (rxpktrate.is_set || is_set(rxpktrate.yfilter)) leaf_name_data.push_back(rxpktrate.get_name_leafdata());
    if (rxbyterate.is_set || is_set(rxbyterate.yfilter)) leaf_name_data.push_back(rxbyterate.get_name_leafdata());
    if (rxload.is_set || is_set(rxload.yfilter)) leaf_name_data.push_back(rxload.get_name_leafdata());
    if (rxucast.is_set || is_set(rxucast.yfilter)) leaf_name_data.push_back(rxucast.get_name_leafdata());
    if (rxmcast.is_set || is_set(rxmcast.yfilter)) leaf_name_data.push_back(rxmcast.get_name_leafdata());
    if (rxbcast.is_set || is_set(rxbcast.yfilter)) leaf_name_data.push_back(rxbcast.get_name_leafdata());
    if (rxdiscards.is_set || is_set(rxdiscards.yfilter)) leaf_name_data.push_back(rxdiscards.get_name_leafdata());
    if (rxerrors.is_set || is_set(rxerrors.yfilter)) leaf_name_data.push_back(rxerrors.get_name_leafdata());
    if (rxunknown.is_set || is_set(rxunknown.yfilter)) leaf_name_data.push_back(rxunknown.get_name_leafdata());
    if (rxbandwidth.is_set || is_set(rxbandwidth.yfilter)) leaf_name_data.push_back(rxbandwidth.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (egressifstate.is_set || is_set(egressifstate.yfilter)) leaf_name_data.push_back(egressifstate.get_name_leafdata());
    if (txlen.is_set || is_set(txlen.yfilter)) leaf_name_data.push_back(txlen.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (txpktrate.is_set || is_set(txpktrate.yfilter)) leaf_name_data.push_back(txpktrate.get_name_leafdata());
    if (txbyterate.is_set || is_set(txbyterate.yfilter)) leaf_name_data.push_back(txbyterate.get_name_leafdata());
    if (txload.is_set || is_set(txload.yfilter)) leaf_name_data.push_back(txload.get_name_leafdata());
    if (txucast.is_set || is_set(txucast.yfilter)) leaf_name_data.push_back(txucast.get_name_leafdata());
    if (txmcast.is_set || is_set(txmcast.yfilter)) leaf_name_data.push_back(txmcast.get_name_leafdata());
    if (txbcast.is_set || is_set(txbcast.yfilter)) leaf_name_data.push_back(txbcast.get_name_leafdata());
    if (txdiscards.is_set || is_set(txdiscards.yfilter)) leaf_name_data.push_back(txdiscards.get_name_leafdata());
    if (txerrors.is_set || is_set(txerrors.yfilter)) leaf_name_data.push_back(txerrors.get_name_leafdata());
    if (txbandwidth.is_set || is_set(txbandwidth.yfilter)) leaf_name_data.push_back(txbandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeName")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime = value;
        elapsedtime.value_namespace = name_space;
        elapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIf")
    {
        ingressif = value;
        ingressif.value_namespace = name_space;
        ingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIfState")
    {
        ingressifstate = value;
        ingressifstate.value_namespace = name_space;
        ingressifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxLen")
    {
        rxlen = value;
        rxlen.value_namespace = name_space;
        rxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBytes")
    {
        rxbytes = value;
        rxbytes.value_namespace = name_space;
        rxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPktRate")
    {
        rxpktrate = value;
        rxpktrate.value_namespace = name_space;
        rxpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxByteRate")
    {
        rxbyterate = value;
        rxbyterate.value_namespace = name_space;
        rxbyterate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxLoad")
    {
        rxload = value;
        rxload.value_namespace = name_space;
        rxload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcast")
    {
        rxucast = value;
        rxucast.value_namespace = name_space;
        rxucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcast")
    {
        rxmcast = value;
        rxmcast.value_namespace = name_space;
        rxmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBcast")
    {
        rxbcast = value;
        rxbcast.value_namespace = name_space;
        rxbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxDiscards")
    {
        rxdiscards = value;
        rxdiscards.value_namespace = name_space;
        rxdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxErrors")
    {
        rxerrors = value;
        rxerrors.value_namespace = name_space;
        rxerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUnknown")
    {
        rxunknown = value;
        rxunknown.value_namespace = name_space;
        rxunknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBandwidth")
    {
        rxbandwidth = value;
        rxbandwidth.value_namespace = name_space;
        rxbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIfState")
    {
        egressifstate = value;
        egressifstate.value_namespace = name_space;
        egressifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txLen")
    {
        txlen = value;
        txlen.value_namespace = name_space;
        txlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPktRate")
    {
        txpktrate = value;
        txpktrate.value_namespace = name_space;
        txpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txByteRate")
    {
        txbyterate = value;
        txbyterate.value_namespace = name_space;
        txbyterate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txLoad")
    {
        txload = value;
        txload.value_namespace = name_space;
        txload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcast")
    {
        txucast = value;
        txucast.value_namespace = name_space;
        txucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcast")
    {
        txmcast = value;
        txmcast.value_namespace = name_space;
        txmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBcast")
    {
        txbcast = value;
        txbcast.value_namespace = name_space;
        txbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txDiscards")
    {
        txdiscards = value;
        txdiscards.value_namespace = name_space;
        txdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txErrors")
    {
        txerrors = value;
        txerrors.value_namespace = name_space;
        txerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBandwidth")
    {
        txbandwidth = value;
        txbandwidth.value_namespace = name_space;
        txbandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "v6addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "nodeName")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime.yfilter = yfilter;
    }
    if(value_path == "ingressIf")
    {
        ingressif.yfilter = yfilter;
    }
    if(value_path == "ingressIfState")
    {
        ingressifstate.yfilter = yfilter;
    }
    if(value_path == "rxLen")
    {
        rxlen.yfilter = yfilter;
    }
    if(value_path == "rxBytes")
    {
        rxbytes.yfilter = yfilter;
    }
    if(value_path == "rxPktRate")
    {
        rxpktrate.yfilter = yfilter;
    }
    if(value_path == "rxByteRate")
    {
        rxbyterate.yfilter = yfilter;
    }
    if(value_path == "rxLoad")
    {
        rxload.yfilter = yfilter;
    }
    if(value_path == "rxUcast")
    {
        rxucast.yfilter = yfilter;
    }
    if(value_path == "rxMcast")
    {
        rxmcast.yfilter = yfilter;
    }
    if(value_path == "rxBcast")
    {
        rxbcast.yfilter = yfilter;
    }
    if(value_path == "rxDiscards")
    {
        rxdiscards.yfilter = yfilter;
    }
    if(value_path == "rxErrors")
    {
        rxerrors.yfilter = yfilter;
    }
    if(value_path == "rxUnknown")
    {
        rxunknown.yfilter = yfilter;
    }
    if(value_path == "rxBandwidth")
    {
        rxbandwidth.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "egressIfState")
    {
        egressifstate.yfilter = yfilter;
    }
    if(value_path == "txLen")
    {
        txlen.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "txPktRate")
    {
        txpktrate.yfilter = yfilter;
    }
    if(value_path == "txByteRate")
    {
        txbyterate.yfilter = yfilter;
    }
    if(value_path == "txLoad")
    {
        txload.yfilter = yfilter;
    }
    if(value_path == "txUcast")
    {
        txucast.yfilter = yfilter;
    }
    if(value_path == "txMcast")
    {
        txmcast.yfilter = yfilter;
    }
    if(value_path == "txBcast")
    {
        txbcast.yfilter = yfilter;
    }
    if(value_path == "txDiscards")
    {
        txdiscards.yfilter = yfilter;
    }
    if(value_path == "txErrors")
    {
        txerrors.yfilter = yfilter;
    }
    if(value_path == "txBandwidth")
    {
        txbandwidth.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr" || name == "v6addr" || name == "nodeName" || name == "elapsedTime" || name == "ingressIf" || name == "ingressIfState" || name == "rxLen" || name == "rxBytes" || name == "rxPktRate" || name == "rxByteRate" || name == "rxLoad" || name == "rxUcast" || name == "rxMcast" || name == "rxBcast" || name == "rxDiscards" || name == "rxErrors" || name == "rxUnknown" || name == "rxBandwidth" || name == "egressIf" || name == "egressIfState" || name == "txLen" || name == "txBytes" || name == "txPktRate" || name == "txByteRate" || name == "txLoad" || name == "txUcast" || name == "txMcast" || name == "txBcast" || name == "txDiscards" || name == "txErrors" || name == "txBandwidth")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TrnversltItems()
    :
    tracertnverslt_list(this, {"sessionid"})
{

    yang_name = "trnverslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::~TrnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracertnverslt_list.len(); index++)
    {
        if(tracertnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::has_operation() const
{
    for (std::size_t index=0; index<tracertnverslt_list.len(); index++)
    {
        if(tracertnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TraceRtNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList>();
        ent_->parent = this;
        tracertnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracertnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TraceRtNveRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::TraceRtNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    dstip{YType::str, "dstIp"},
    maxhops{YType::uint8, "maxHops"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    pathtr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems>())
{
    pathtr_items->parent = this;

    yang_name = "TraceRtNveRslt-list"; yang_parent_name = "trnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::~TraceRtNveRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| dstip.is_set
	|| maxhops.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (pathtr_items !=  nullptr && pathtr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pathtr_items !=  nullptr && pathtr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TraceRtNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pathtr-items")
    {
        if(pathtr_items == nullptr)
        {
            pathtr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems>();
        }
        return pathtr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pathtr_items != nullptr)
    {
        _children["pathtr-items"] = pathtr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathtr-items" || name == "sessionId" || name == "dstIp" || name == "maxHops" || name == "errorCode" || name == "failReason" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathtrItems()
    :
    pathtr_list(this, {"id"})
{

    yang_name = "pathtr-items"; yang_parent_name = "TraceRtNveRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::~PathtrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtr_list.len(); index++)
    {
        if(pathtr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_operation() const
{
    for (std::size_t index=0; index<pathtr_list.len(); index++)
    {
        if(pathtr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathtr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList>();
        ent_->parent = this;
        pathtr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::PathTrList()
    :
    id{YType::uint8, "id"}
        ,
    nodetr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems>())
{
    nodetr_items->parent = this;

    yang_name = "PathTr-list"; yang_parent_name = "pathtr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::~PathTrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nodetr_items !=  nullptr && nodetr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nodetr_items !=  nullptr && nodetr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodetr-items")
    {
        if(nodetr_items == nullptr)
        {
            nodetr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems>();
        }
        return nodetr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodetr_items != nullptr)
    {
        _children["nodetr-items"] = nodetr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodetr-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodetrItems()
    :
    nodetr_list(this, {"order"})
{

    yang_name = "nodetr-items"; yang_parent_name = "PathTr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::~NodetrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodetr_list.len(); index++)
    {
        if(nodetr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_operation() const
{
    for (std::size_t index=0; index<nodetr_list.len(); index++)
    {
        if(nodetr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodetr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeTr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList>();
        ent_->parent = this;
        nodetr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodetr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeTr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::NodeTrList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"},
    v6addr{YType::str, "v6addr"},
    elapsedtime{YType::str, "elapsedTime"}
{

    yang_name = "NodeTr-list"; yang_parent_name = "nodetr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::~NodeTrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set
	|| v6addr.is_set
	|| elapsedtime.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(elapsedtime.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeTr-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (elapsedtime.is_set || is_set(elapsedtime.yfilter)) leaf_name_data.push_back(elapsedtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime = value;
        elapsedtime.value_namespace = name_space;
        elapsedtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "v6addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr" || name == "v6addr" || name == "elapsedTime")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PtrnversltItems()
    :
    pathtracenverslt_list(this, {"sessionid"})
{

    yang_name = "ptrnverslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::~PtrnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtracenverslt_list.len(); index++)
    {
        if(pathtracenverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pathtracenverslt_list.len(); index++)
    {
        if(pathtracenverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptrnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTraceNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList>();
        ent_->parent = this;
        pathtracenverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtracenverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTraceNveRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathTraceNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    dstip{YType::str, "dstIp"},
    maxhops{YType::uint8, "maxHops"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    pathptr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems>())
{
    pathptr_items->parent = this;

    yang_name = "PathTraceNveRslt-list"; yang_parent_name = "ptrnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::~PathTraceNveRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| dstip.is_set
	|| maxhops.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (pathptr_items !=  nullptr && pathptr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pathptr_items !=  nullptr && pathptr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTraceNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pathptr-items")
    {
        if(pathptr_items == nullptr)
        {
            pathptr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems>();
        }
        return pathptr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pathptr_items != nullptr)
    {
        _children["pathptr-items"] = pathptr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathptr-items" || name == "sessionId" || name == "dstIp" || name == "maxHops" || name == "errorCode" || name == "failReason" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathptrItems()
    :
    pathptr_list(this, {"id"})
{

    yang_name = "pathptr-items"; yang_parent_name = "PathTraceNveRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::~PathptrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathptr_list.len(); index++)
    {
        if(pathptr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_operation() const
{
    for (std::size_t index=0; index<pathptr_list.len(); index++)
    {
        if(pathptr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathptr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathPtr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList>();
        ent_->parent = this;
        pathptr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathptr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathPtr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::PathPtrList()
    :
    id{YType::uint8, "id"}
        ,
    nodeptr_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems>())
{
    nodeptr_items->parent = this;

    yang_name = "PathPtr-list"; yang_parent_name = "pathptr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::~PathPtrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nodeptr_items !=  nullptr && nodeptr_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nodeptr_items !=  nullptr && nodeptr_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathPtr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodeptr-items")
    {
        if(nodeptr_items == nullptr)
        {
            nodeptr_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems>();
        }
        return nodeptr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodeptr_items != nullptr)
    {
        _children["nodeptr-items"] = nodeptr_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodeptr-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodeptrItems()
    :
    nodeptr_list(this, {"order"})
{

    yang_name = "nodeptr-items"; yang_parent_name = "PathPtr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::~NodeptrItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeptr_list.len(); index++)
    {
        if(nodeptr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_operation() const
{
    for (std::size_t index=0; index<nodeptr_list.len(); index++)
    {
        if(nodeptr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodeptr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodePtr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList>();
        ent_->parent = this;
        nodeptr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeptr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodePtr-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::NodePtrList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"},
    v6addr{YType::str, "v6addr"},
    nodename{YType::str, "nodeName"},
    elapsedtime{YType::str, "elapsedTime"},
    ingressif{YType::str, "ingressIf"},
    ingressifstate{YType::str, "ingressIfState"},
    rxlen{YType::uint64, "rxLen"},
    rxbytes{YType::uint64, "rxBytes"},
    rxpktrate{YType::uint64, "rxPktRate"},
    rxbyterate{YType::uint64, "rxByteRate"},
    rxload{YType::uint64, "rxLoad"},
    rxucast{YType::uint64, "rxUcast"},
    rxmcast{YType::uint64, "rxMcast"},
    rxbcast{YType::uint64, "rxBcast"},
    rxdiscards{YType::uint64, "rxDiscards"},
    rxerrors{YType::uint64, "rxErrors"},
    rxunknown{YType::uint64, "rxUnknown"},
    rxbandwidth{YType::uint32, "rxBandwidth"},
    egressif{YType::str, "egressIf"},
    egressifstate{YType::str, "egressIfState"},
    txlen{YType::uint64, "txLen"},
    txbytes{YType::uint64, "txBytes"},
    txpktrate{YType::uint64, "txPktRate"},
    txbyterate{YType::uint64, "txByteRate"},
    txload{YType::uint64, "txLoad"},
    txucast{YType::uint64, "txUcast"},
    txmcast{YType::uint64, "txMcast"},
    txbcast{YType::uint64, "txBcast"},
    txdiscards{YType::uint64, "txDiscards"},
    txerrors{YType::uint64, "txErrors"},
    txbandwidth{YType::uint32, "txBandwidth"}
{

    yang_name = "NodePtr-list"; yang_parent_name = "nodeptr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::~NodePtrList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set
	|| v6addr.is_set
	|| nodename.is_set
	|| elapsedtime.is_set
	|| ingressif.is_set
	|| ingressifstate.is_set
	|| rxlen.is_set
	|| rxbytes.is_set
	|| rxpktrate.is_set
	|| rxbyterate.is_set
	|| rxload.is_set
	|| rxucast.is_set
	|| rxmcast.is_set
	|| rxbcast.is_set
	|| rxdiscards.is_set
	|| rxerrors.is_set
	|| rxunknown.is_set
	|| rxbandwidth.is_set
	|| egressif.is_set
	|| egressifstate.is_set
	|| txlen.is_set
	|| txbytes.is_set
	|| txpktrate.is_set
	|| txbyterate.is_set
	|| txload.is_set
	|| txucast.is_set
	|| txmcast.is_set
	|| txbcast.is_set
	|| txdiscards.is_set
	|| txerrors.is_set
	|| txbandwidth.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(elapsedtime.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(ingressifstate.yfilter)
	|| ydk::is_set(rxlen.yfilter)
	|| ydk::is_set(rxbytes.yfilter)
	|| ydk::is_set(rxpktrate.yfilter)
	|| ydk::is_set(rxbyterate.yfilter)
	|| ydk::is_set(rxload.yfilter)
	|| ydk::is_set(rxucast.yfilter)
	|| ydk::is_set(rxmcast.yfilter)
	|| ydk::is_set(rxbcast.yfilter)
	|| ydk::is_set(rxdiscards.yfilter)
	|| ydk::is_set(rxerrors.yfilter)
	|| ydk::is_set(rxunknown.yfilter)
	|| ydk::is_set(rxbandwidth.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(egressifstate.yfilter)
	|| ydk::is_set(txlen.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(txpktrate.yfilter)
	|| ydk::is_set(txbyterate.yfilter)
	|| ydk::is_set(txload.yfilter)
	|| ydk::is_set(txucast.yfilter)
	|| ydk::is_set(txmcast.yfilter)
	|| ydk::is_set(txbcast.yfilter)
	|| ydk::is_set(txdiscards.yfilter)
	|| ydk::is_set(txerrors.yfilter)
	|| ydk::is_set(txbandwidth.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodePtr-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (elapsedtime.is_set || is_set(elapsedtime.yfilter)) leaf_name_data.push_back(elapsedtime.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (ingressifstate.is_set || is_set(ingressifstate.yfilter)) leaf_name_data.push_back(ingressifstate.get_name_leafdata());
    if (rxlen.is_set || is_set(rxlen.yfilter)) leaf_name_data.push_back(rxlen.get_name_leafdata());
    if (rxbytes.is_set || is_set(rxbytes.yfilter)) leaf_name_data.push_back(rxbytes.get_name_leafdata());
    if (rxpktrate.is_set || is_set(rxpktrate.yfilter)) leaf_name_data.push_back(rxpktrate.get_name_leafdata());
    if (rxbyterate.is_set || is_set(rxbyterate.yfilter)) leaf_name_data.push_back(rxbyterate.get_name_leafdata());
    if (rxload.is_set || is_set(rxload.yfilter)) leaf_name_data.push_back(rxload.get_name_leafdata());
    if (rxucast.is_set || is_set(rxucast.yfilter)) leaf_name_data.push_back(rxucast.get_name_leafdata());
    if (rxmcast.is_set || is_set(rxmcast.yfilter)) leaf_name_data.push_back(rxmcast.get_name_leafdata());
    if (rxbcast.is_set || is_set(rxbcast.yfilter)) leaf_name_data.push_back(rxbcast.get_name_leafdata());
    if (rxdiscards.is_set || is_set(rxdiscards.yfilter)) leaf_name_data.push_back(rxdiscards.get_name_leafdata());
    if (rxerrors.is_set || is_set(rxerrors.yfilter)) leaf_name_data.push_back(rxerrors.get_name_leafdata());
    if (rxunknown.is_set || is_set(rxunknown.yfilter)) leaf_name_data.push_back(rxunknown.get_name_leafdata());
    if (rxbandwidth.is_set || is_set(rxbandwidth.yfilter)) leaf_name_data.push_back(rxbandwidth.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (egressifstate.is_set || is_set(egressifstate.yfilter)) leaf_name_data.push_back(egressifstate.get_name_leafdata());
    if (txlen.is_set || is_set(txlen.yfilter)) leaf_name_data.push_back(txlen.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (txpktrate.is_set || is_set(txpktrate.yfilter)) leaf_name_data.push_back(txpktrate.get_name_leafdata());
    if (txbyterate.is_set || is_set(txbyterate.yfilter)) leaf_name_data.push_back(txbyterate.get_name_leafdata());
    if (txload.is_set || is_set(txload.yfilter)) leaf_name_data.push_back(txload.get_name_leafdata());
    if (txucast.is_set || is_set(txucast.yfilter)) leaf_name_data.push_back(txucast.get_name_leafdata());
    if (txmcast.is_set || is_set(txmcast.yfilter)) leaf_name_data.push_back(txmcast.get_name_leafdata());
    if (txbcast.is_set || is_set(txbcast.yfilter)) leaf_name_data.push_back(txbcast.get_name_leafdata());
    if (txdiscards.is_set || is_set(txdiscards.yfilter)) leaf_name_data.push_back(txdiscards.get_name_leafdata());
    if (txerrors.is_set || is_set(txerrors.yfilter)) leaf_name_data.push_back(txerrors.get_name_leafdata());
    if (txbandwidth.is_set || is_set(txbandwidth.yfilter)) leaf_name_data.push_back(txbandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeName")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime = value;
        elapsedtime.value_namespace = name_space;
        elapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIf")
    {
        ingressif = value;
        ingressif.value_namespace = name_space;
        ingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIfState")
    {
        ingressifstate = value;
        ingressifstate.value_namespace = name_space;
        ingressifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxLen")
    {
        rxlen = value;
        rxlen.value_namespace = name_space;
        rxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBytes")
    {
        rxbytes = value;
        rxbytes.value_namespace = name_space;
        rxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPktRate")
    {
        rxpktrate = value;
        rxpktrate.value_namespace = name_space;
        rxpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxByteRate")
    {
        rxbyterate = value;
        rxbyterate.value_namespace = name_space;
        rxbyterate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxLoad")
    {
        rxload = value;
        rxload.value_namespace = name_space;
        rxload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcast")
    {
        rxucast = value;
        rxucast.value_namespace = name_space;
        rxucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcast")
    {
        rxmcast = value;
        rxmcast.value_namespace = name_space;
        rxmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBcast")
    {
        rxbcast = value;
        rxbcast.value_namespace = name_space;
        rxbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxDiscards")
    {
        rxdiscards = value;
        rxdiscards.value_namespace = name_space;
        rxdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxErrors")
    {
        rxerrors = value;
        rxerrors.value_namespace = name_space;
        rxerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUnknown")
    {
        rxunknown = value;
        rxunknown.value_namespace = name_space;
        rxunknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBandwidth")
    {
        rxbandwidth = value;
        rxbandwidth.value_namespace = name_space;
        rxbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIfState")
    {
        egressifstate = value;
        egressifstate.value_namespace = name_space;
        egressifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txLen")
    {
        txlen = value;
        txlen.value_namespace = name_space;
        txlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPktRate")
    {
        txpktrate = value;
        txpktrate.value_namespace = name_space;
        txpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txByteRate")
    {
        txbyterate = value;
        txbyterate.value_namespace = name_space;
        txbyterate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txLoad")
    {
        txload = value;
        txload.value_namespace = name_space;
        txload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcast")
    {
        txucast = value;
        txucast.value_namespace = name_space;
        txucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcast")
    {
        txmcast = value;
        txmcast.value_namespace = name_space;
        txmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBcast")
    {
        txbcast = value;
        txbcast.value_namespace = name_space;
        txbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txDiscards")
    {
        txdiscards = value;
        txdiscards.value_namespace = name_space;
        txdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txErrors")
    {
        txerrors = value;
        txerrors.value_namespace = name_space;
        txerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBandwidth")
    {
        txbandwidth = value;
        txbandwidth.value_namespace = name_space;
        txbandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "v6addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "nodeName")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime.yfilter = yfilter;
    }
    if(value_path == "ingressIf")
    {
        ingressif.yfilter = yfilter;
    }
    if(value_path == "ingressIfState")
    {
        ingressifstate.yfilter = yfilter;
    }
    if(value_path == "rxLen")
    {
        rxlen.yfilter = yfilter;
    }
    if(value_path == "rxBytes")
    {
        rxbytes.yfilter = yfilter;
    }
    if(value_path == "rxPktRate")
    {
        rxpktrate.yfilter = yfilter;
    }
    if(value_path == "rxByteRate")
    {
        rxbyterate.yfilter = yfilter;
    }
    if(value_path == "rxLoad")
    {
        rxload.yfilter = yfilter;
    }
    if(value_path == "rxUcast")
    {
        rxucast.yfilter = yfilter;
    }
    if(value_path == "rxMcast")
    {
        rxmcast.yfilter = yfilter;
    }
    if(value_path == "rxBcast")
    {
        rxbcast.yfilter = yfilter;
    }
    if(value_path == "rxDiscards")
    {
        rxdiscards.yfilter = yfilter;
    }
    if(value_path == "rxErrors")
    {
        rxerrors.yfilter = yfilter;
    }
    if(value_path == "rxUnknown")
    {
        rxunknown.yfilter = yfilter;
    }
    if(value_path == "rxBandwidth")
    {
        rxbandwidth.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "egressIfState")
    {
        egressifstate.yfilter = yfilter;
    }
    if(value_path == "txLen")
    {
        txlen.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "txPktRate")
    {
        txpktrate.yfilter = yfilter;
    }
    if(value_path == "txByteRate")
    {
        txbyterate.yfilter = yfilter;
    }
    if(value_path == "txLoad")
    {
        txload.yfilter = yfilter;
    }
    if(value_path == "txUcast")
    {
        txucast.yfilter = yfilter;
    }
    if(value_path == "txMcast")
    {
        txmcast.yfilter = yfilter;
    }
    if(value_path == "txBcast")
    {
        txbcast.yfilter = yfilter;
    }
    if(value_path == "txDiscards")
    {
        txdiscards.yfilter = yfilter;
    }
    if(value_path == "txErrors")
    {
        txerrors.yfilter = yfilter;
    }
    if(value_path == "txBandwidth")
    {
        txbandwidth.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr" || name == "v6addr" || name == "nodeName" || name == "elapsedTime" || name == "ingressIf" || name == "ingressIfState" || name == "rxLen" || name == "rxBytes" || name == "rxPktRate" || name == "rxByteRate" || name == "rxLoad" || name == "rxUcast" || name == "rxMcast" || name == "rxBcast" || name == "rxDiscards" || name == "rxErrors" || name == "rxUnknown" || name == "rxBandwidth" || name == "egressIf" || name == "egressIfState" || name == "txLen" || name == "txBytes" || name == "txPktRate" || name == "txByteRate" || name == "txLoad" || name == "txUcast" || name == "txMcast" || name == "txBcast" || name == "txDiscards" || name == "txErrors" || name == "txBandwidth")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::RslSubjToDomainRefItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rslSubjToDomainRef-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::~RslSubjToDomainRefItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslSubjToDomainRef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RtdbgexpTsSrcItems::RtdbgexpTsSrcItems()
    :
    rtdbgexptssrc_list(this, {"tdn"})
{

    yang_name = "rtdbgexpTsSrc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RtdbgexpTsSrcItems::~RtdbgexpTsSrcItems()
{
}

bool System::RtdbgexpTsSrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdbgexptssrc_list.len(); index++)
    {
        if(rtdbgexptssrc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RtdbgexpTsSrcItems::has_operation() const
{
    for (std::size_t index=0; index<rtdbgexptssrc_list.len(); index++)
    {
        if(rtdbgexptssrc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RtdbgexpTsSrcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RtdbgexpTsSrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtdbgexpTsSrc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RtdbgexpTsSrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RtdbgexpTsSrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtDbgexpTsSrc-list")
    {
        auto ent_ = std::make_shared<System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList>();
        ent_->parent = this;
        rtdbgexptssrc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RtdbgexpTsSrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtdbgexptssrc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RtdbgexpTsSrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RtdbgexpTsSrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RtdbgexpTsSrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtDbgexpTsSrc-list")
        return true;
    return false;
}

System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::RtDbgexpTsSrcList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtDbgexpTsSrc-list"; yang_parent_name = "rtdbgexpTsSrc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::~RtDbgexpTsSrcList()
{
}

bool System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rtdbgexpTsSrc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtDbgexpTsSrc-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RttraceroutepTrSrcItems::RttraceroutepTrSrcItems()
    :
    rttracerouteptrsrc_list(this, {"tdn"})
{

    yang_name = "rttraceroutepTrSrc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RttraceroutepTrSrcItems::~RttraceroutepTrSrcItems()
{
}

bool System::RttraceroutepTrSrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttracerouteptrsrc_list.len(); index++)
    {
        if(rttracerouteptrsrc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RttraceroutepTrSrcItems::has_operation() const
{
    for (std::size_t index=0; index<rttracerouteptrsrc_list.len(); index++)
    {
        if(rttracerouteptrsrc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RttraceroutepTrSrcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RttraceroutepTrSrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttraceroutepTrSrc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RttraceroutepTrSrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RttraceroutepTrSrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtTraceroutepTrSrc-list")
    {
        auto ent_ = std::make_shared<System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList>();
        ent_->parent = this;
        rttracerouteptrsrc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RttraceroutepTrSrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttracerouteptrsrc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RttraceroutepTrSrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RttraceroutepTrSrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RttraceroutepTrSrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtTraceroutepTrSrc-list")
        return true;
    return false;
}

System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::RtTraceroutepTrSrcList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtTraceroutepTrSrc-list"; yang_parent_name = "rttraceroutepTrSrc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::~RtTraceroutepTrSrcList()
{
}

bool System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rttraceroutepTrSrc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtTraceroutepTrSrc-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RttraceroutepTrDstItems::RttraceroutepTrDstItems()
    :
    rttracerouteptrdst_list(this, {"tdn"})
{

    yang_name = "rttraceroutepTrDst-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RttraceroutepTrDstItems::~RttraceroutepTrDstItems()
{
}

bool System::RttraceroutepTrDstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttracerouteptrdst_list.len(); index++)
    {
        if(rttracerouteptrdst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RttraceroutepTrDstItems::has_operation() const
{
    for (std::size_t index=0; index<rttracerouteptrdst_list.len(); index++)
    {
        if(rttracerouteptrdst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RttraceroutepTrDstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RttraceroutepTrDstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttraceroutepTrDst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RttraceroutepTrDstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RttraceroutepTrDstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtTraceroutepTrDst-list")
    {
        auto ent_ = std::make_shared<System::RttraceroutepTrDstItems::RtTraceroutepTrDstList>();
        ent_->parent = this;
        rttracerouteptrdst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RttraceroutepTrDstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttracerouteptrdst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RttraceroutepTrDstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RttraceroutepTrDstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RttraceroutepTrDstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtTraceroutepTrDst-list")
        return true;
    return false;
}

System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::RtTraceroutepTrDstList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtTraceroutepTrDst-list"; yang_parent_name = "rttraceroutepTrDst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::~RtTraceroutepTrDstList()
{
}

bool System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rttraceroutepTrDst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtTraceroutepTrDst-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RttraceroutepTrDstItems::RtTraceroutepTrDstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::RtmaintFwinstlsrcItems::RtmaintFwinstlsrcItems()
    :
    rtmaintfwinstlsrc_list(this, {"tdn"})
{

    yang_name = "rtmaintFwinstlsrc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RtmaintFwinstlsrcItems::~RtmaintFwinstlsrcItems()
{
}

bool System::RtmaintFwinstlsrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtmaintfwinstlsrc_list.len(); index++)
    {
        if(rtmaintfwinstlsrc_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RtmaintFwinstlsrcItems::has_operation() const
{
    for (std::size_t index=0; index<rtmaintfwinstlsrc_list.len(); index++)
    {
        if(rtmaintfwinstlsrc_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RtmaintFwinstlsrcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RtmaintFwinstlsrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmaintFwinstlsrc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RtmaintFwinstlsrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RtmaintFwinstlsrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtMaintFwinstlsrc-list")
    {
        auto ent_ = std::make_shared<System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList>();
        ent_->parent = this;
        rtmaintfwinstlsrc_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RtmaintFwinstlsrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtmaintfwinstlsrc_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RtmaintFwinstlsrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RtmaintFwinstlsrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RtmaintFwinstlsrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtMaintFwinstlsrc-list")
        return true;
    return false;
}

System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::RtMaintFwinstlsrcList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtMaintFwinstlsrc-list"; yang_parent_name = "rtmaintFwinstlsrc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::~RtMaintFwinstlsrcList()
{
}

bool System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rtmaintFwinstlsrc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtMaintFwinstlsrc-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

Cli::Cli()
    :
    input(std::make_shared<Cli::Input>())
    , output(std::make_shared<Cli::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "cli"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Cli::~Cli()
{
}

bool Cli::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Cli::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Cli::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Cli::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Cli::clone_ptr() const
{
    return std::make_shared<Cli>();
}

std::string Cli::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Cli::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Cli::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Cli::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Cli::Input::Input()
    :
    mode{YType::enumeration, "mode"},
    cmdline{YType::str, "cmdline"}
{

    yang_name = "input"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false; 
}

Cli::Input::~Input()
{
}

bool Cli::Input::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| cmdline.is_set;
}

bool Cli::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(cmdline.yfilter);
}

std::string Cli::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:cli/" << get_segment_path();
    return path_buffer.str();
}

std::string Cli::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cli::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (cmdline.is_set || is_set(cmdline.yfilter)) leaf_name_data.push_back(cmdline.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cli::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cli::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cli::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdline")
    {
        cmdline = value;
        cmdline.value_namespace = name_space;
        cmdline.value_namespace_prefix = name_space_prefix;
    }
}

void Cli::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "cmdline")
    {
        cmdline.yfilter = yfilter;
    }
}

bool Cli::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "cmdline")
        return true;
    return false;
}

Cli::Output::Output()
    :
    message{YType::str, "message"},
    data{YType::str, "data"}
{

    yang_name = "output"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false; 
}

Cli::Output::~Output()
{
}

bool Cli::Output::has_data() const
{
    if (is_presence_container) return true;
    return message.is_set
	|| data.is_set;
}

bool Cli::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Cli::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:cli/" << get_segment_path();
    return path_buffer.str();
}

std::string Cli::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cli::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cli::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cli::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cli::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Cli::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Cli::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "data")
        return true;
    return false;
}

InstallAllNxos::InstallAllNxos()
    :
    input(std::make_shared<InstallAllNxos::Input>())
{
    input->parent = this;

    yang_name = "install_all_nxos"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallAllNxos::~InstallAllNxos()
{
}

bool InstallAllNxos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallAllNxos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallAllNxos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_all_nxos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAllNxos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAllNxos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallAllNxos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAllNxos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallAllNxos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallAllNxos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallAllNxos::clone_ptr() const
{
    return std::make_shared<InstallAllNxos>();
}

std::string InstallAllNxos::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallAllNxos::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallAllNxos::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallAllNxos::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallAllNxos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallAllNxos::Input::Input()
    :
    nxos{YType::str, "nxos"},
    no_reload{YType::empty, "no-reload"},
    noswitchover{YType::empty, "noswitchover"},
    bios{YType::empty, "bios"},
    no_save{YType::empty, "no-save"},
    bios_force{YType::empty, "bios-force"},
    non_interruptive{YType::empty, "non-interruptive"}
{

    yang_name = "input"; yang_parent_name = "install_all_nxos"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallAllNxos::Input::~Input()
{
}

bool InstallAllNxos::Input::has_data() const
{
    if (is_presence_container) return true;
    return nxos.is_set
	|| no_reload.is_set
	|| noswitchover.is_set
	|| bios.is_set
	|| no_save.is_set
	|| bios_force.is_set
	|| non_interruptive.is_set;
}

bool InstallAllNxos::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nxos.yfilter)
	|| ydk::is_set(no_reload.yfilter)
	|| ydk::is_set(noswitchover.yfilter)
	|| ydk::is_set(bios.yfilter)
	|| ydk::is_set(no_save.yfilter)
	|| ydk::is_set(bios_force.yfilter)
	|| ydk::is_set(non_interruptive.yfilter);
}

std::string InstallAllNxos::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_all_nxos/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallAllNxos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAllNxos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nxos.is_set || is_set(nxos.yfilter)) leaf_name_data.push_back(nxos.get_name_leafdata());
    if (no_reload.is_set || is_set(no_reload.yfilter)) leaf_name_data.push_back(no_reload.get_name_leafdata());
    if (noswitchover.is_set || is_set(noswitchover.yfilter)) leaf_name_data.push_back(noswitchover.get_name_leafdata());
    if (bios.is_set || is_set(bios.yfilter)) leaf_name_data.push_back(bios.get_name_leafdata());
    if (no_save.is_set || is_set(no_save.yfilter)) leaf_name_data.push_back(no_save.get_name_leafdata());
    if (bios_force.is_set || is_set(bios_force.yfilter)) leaf_name_data.push_back(bios_force.get_name_leafdata());
    if (non_interruptive.is_set || is_set(non_interruptive.yfilter)) leaf_name_data.push_back(non_interruptive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAllNxos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAllNxos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallAllNxos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nxos")
    {
        nxos = value;
        nxos.value_namespace = name_space;
        nxos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-reload")
    {
        no_reload = value;
        no_reload.value_namespace = name_space;
        no_reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noswitchover")
    {
        noswitchover = value;
        noswitchover.value_namespace = name_space;
        noswitchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bios")
    {
        bios = value;
        bios.value_namespace = name_space;
        bios.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-save")
    {
        no_save = value;
        no_save.value_namespace = name_space;
        no_save.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bios-force")
    {
        bios_force = value;
        bios_force.value_namespace = name_space;
        bios_force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-interruptive")
    {
        non_interruptive = value;
        non_interruptive.value_namespace = name_space;
        non_interruptive.value_namespace_prefix = name_space_prefix;
    }
}

void InstallAllNxos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nxos")
    {
        nxos.yfilter = yfilter;
    }
    if(value_path == "no-reload")
    {
        no_reload.yfilter = yfilter;
    }
    if(value_path == "noswitchover")
    {
        noswitchover.yfilter = yfilter;
    }
    if(value_path == "bios")
    {
        bios.yfilter = yfilter;
    }
    if(value_path == "no-save")
    {
        no_save.yfilter = yfilter;
    }
    if(value_path == "bios-force")
    {
        bios_force.yfilter = yfilter;
    }
    if(value_path == "non-interruptive")
    {
        non_interruptive.yfilter = yfilter;
    }
}

bool InstallAllNxos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nxos" || name == "no-reload" || name == "noswitchover" || name == "bios" || name == "no-save" || name == "bios-force" || name == "non-interruptive")
        return true;
    return false;
}

InstallForceAllNxos::InstallForceAllNxos()
    :
    input(std::make_shared<InstallForceAllNxos::Input>())
{
    input->parent = this;

    yang_name = "install_force_all_nxos"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallForceAllNxos::~InstallForceAllNxos()
{
}

bool InstallForceAllNxos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallForceAllNxos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallForceAllNxos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_force_all_nxos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallForceAllNxos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallForceAllNxos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallForceAllNxos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallForceAllNxos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallForceAllNxos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallForceAllNxos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallForceAllNxos::clone_ptr() const
{
    return std::make_shared<InstallForceAllNxos>();
}

std::string InstallForceAllNxos::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallForceAllNxos::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallForceAllNxos::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallForceAllNxos::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallForceAllNxos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallForceAllNxos::Input::Input()
    :
    nxos{YType::str, "nxos"},
    no_reload{YType::empty, "no-reload"},
    noswitchover{YType::empty, "noswitchover"},
    bios{YType::empty, "bios"},
    no_save{YType::empty, "no-save"},
    bios_force{YType::empty, "bios-force"},
    non_interruptive{YType::empty, "non-interruptive"}
{

    yang_name = "input"; yang_parent_name = "install_force_all_nxos"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallForceAllNxos::Input::~Input()
{
}

bool InstallForceAllNxos::Input::has_data() const
{
    if (is_presence_container) return true;
    return nxos.is_set
	|| no_reload.is_set
	|| noswitchover.is_set
	|| bios.is_set
	|| no_save.is_set
	|| bios_force.is_set
	|| non_interruptive.is_set;
}

bool InstallForceAllNxos::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nxos.yfilter)
	|| ydk::is_set(no_reload.yfilter)
	|| ydk::is_set(noswitchover.yfilter)
	|| ydk::is_set(bios.yfilter)
	|| ydk::is_set(no_save.yfilter)
	|| ydk::is_set(bios_force.yfilter)
	|| ydk::is_set(non_interruptive.yfilter);
}

std::string InstallForceAllNxos::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_force_all_nxos/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallForceAllNxos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallForceAllNxos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nxos.is_set || is_set(nxos.yfilter)) leaf_name_data.push_back(nxos.get_name_leafdata());
    if (no_reload.is_set || is_set(no_reload.yfilter)) leaf_name_data.push_back(no_reload.get_name_leafdata());
    if (noswitchover.is_set || is_set(noswitchover.yfilter)) leaf_name_data.push_back(noswitchover.get_name_leafdata());
    if (bios.is_set || is_set(bios.yfilter)) leaf_name_data.push_back(bios.get_name_leafdata());
    if (no_save.is_set || is_set(no_save.yfilter)) leaf_name_data.push_back(no_save.get_name_leafdata());
    if (bios_force.is_set || is_set(bios_force.yfilter)) leaf_name_data.push_back(bios_force.get_name_leafdata());
    if (non_interruptive.is_set || is_set(non_interruptive.yfilter)) leaf_name_data.push_back(non_interruptive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallForceAllNxos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallForceAllNxos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallForceAllNxos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nxos")
    {
        nxos = value;
        nxos.value_namespace = name_space;
        nxos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-reload")
    {
        no_reload = value;
        no_reload.value_namespace = name_space;
        no_reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noswitchover")
    {
        noswitchover = value;
        noswitchover.value_namespace = name_space;
        noswitchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bios")
    {
        bios = value;
        bios.value_namespace = name_space;
        bios.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-save")
    {
        no_save = value;
        no_save.value_namespace = name_space;
        no_save.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bios-force")
    {
        bios_force = value;
        bios_force.value_namespace = name_space;
        bios_force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-interruptive")
    {
        non_interruptive = value;
        non_interruptive.value_namespace = name_space;
        non_interruptive.value_namespace_prefix = name_space_prefix;
    }
}

void InstallForceAllNxos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nxos")
    {
        nxos.yfilter = yfilter;
    }
    if(value_path == "no-reload")
    {
        no_reload.yfilter = yfilter;
    }
    if(value_path == "noswitchover")
    {
        noswitchover.yfilter = yfilter;
    }
    if(value_path == "bios")
    {
        bios.yfilter = yfilter;
    }
    if(value_path == "no-save")
    {
        no_save.yfilter = yfilter;
    }
    if(value_path == "bios-force")
    {
        bios_force.yfilter = yfilter;
    }
    if(value_path == "non-interruptive")
    {
        non_interruptive.yfilter = yfilter;
    }
}

bool InstallForceAllNxos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nxos" || name == "no-reload" || name == "noswitchover" || name == "bios" || name == "no-save" || name == "bios-force" || name == "non-interruptive")
        return true;
    return false;
}

InstallAdd::InstallAdd()
    :
    input(std::make_shared<InstallAdd::Input>())
{
    input->parent = this;

    yang_name = "install_add"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallAdd::~InstallAdd()
{
}

bool InstallAdd::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallAdd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_add";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallAdd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallAdd::clone_ptr() const
{
    return std::make_shared<InstallAdd>();
}

std::string InstallAdd::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallAdd::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallAdd::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallAdd::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallAdd::Input::Input()
    :
    add{YType::str, "add"},
    vrf{YType::str, "vrf"},
    upgrade{YType::empty, "upgrade"},
    downgrade{YType::empty, "downgrade"},
    initial{YType::empty, "initial"},
    forced{YType::empty, "forced"}
{

    yang_name = "input"; yang_parent_name = "install_add"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallAdd::Input::~Input()
{
}

bool InstallAdd::Input::has_data() const
{
    if (is_presence_container) return true;
    return add.is_set
	|| vrf.is_set
	|| upgrade.is_set
	|| downgrade.is_set
	|| initial.is_set
	|| forced.is_set;
}

bool InstallAdd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(upgrade.yfilter)
	|| ydk::is_set(downgrade.yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string InstallAdd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_add/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallAdd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallAdd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (upgrade.is_set || is_set(upgrade.yfilter)) leaf_name_data.push_back(upgrade.get_name_leafdata());
    if (downgrade.is_set || is_set(downgrade.yfilter)) leaf_name_data.push_back(downgrade.get_name_leafdata());
    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallAdd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallAdd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallAdd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgrade")
    {
        upgrade = value;
        upgrade.value_namespace = name_space;
        upgrade.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downgrade")
    {
        downgrade = value;
        downgrade.value_namespace = name_space;
        downgrade.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void InstallAdd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "upgrade")
    {
        upgrade.yfilter = yfilter;
    }
    if(value_path == "downgrade")
    {
        downgrade.yfilter = yfilter;
    }
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool InstallAdd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "vrf" || name == "upgrade" || name == "downgrade" || name == "initial" || name == "forced")
        return true;
    return false;
}

InstallActivate::InstallActivate()
    :
    input(std::make_shared<InstallActivate::Input>())
{
    input->parent = this;

    yang_name = "install_activate"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallActivate::~InstallActivate()
{
}

bool InstallActivate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallActivate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallActivate::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallActivate::clone_ptr() const
{
    return std::make_shared<InstallActivate>();
}

std::string InstallActivate::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallActivate::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallActivate::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallActivate::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallActivate::Input::Input()
    :
    activate{YType::str, "activate"},
    forced{YType::empty, "forced"}
{

    yang_name = "input"; yang_parent_name = "install_activate"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallActivate::Input::~Input()
{
}

bool InstallActivate::Input::has_data() const
{
    if (is_presence_container) return true;
    return activate.is_set
	|| forced.is_set;
}

bool InstallActivate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string InstallActivate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_activate/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallActivate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallActivate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallActivate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallActivate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallActivate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void InstallActivate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool InstallActivate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activate" || name == "forced")
        return true;
    return false;
}

InstallDeactivate::InstallDeactivate()
    :
    input(std::make_shared<InstallDeactivate::Input>())
{
    input->parent = this;

    yang_name = "install_deactivate"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallDeactivate::~InstallDeactivate()
{
}

bool InstallDeactivate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallDeactivate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallDeactivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_deactivate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallDeactivate::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallDeactivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallDeactivate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallDeactivate::clone_ptr() const
{
    return std::make_shared<InstallDeactivate>();
}

std::string InstallDeactivate::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallDeactivate::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallDeactivate::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallDeactivate::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallDeactivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallDeactivate::Input::Input()
    :
    deactivate{YType::str, "deactivate"},
    forced{YType::empty, "forced"}
{

    yang_name = "input"; yang_parent_name = "install_deactivate"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallDeactivate::Input::~Input()
{
}

bool InstallDeactivate::Input::has_data() const
{
    if (is_presence_container) return true;
    return deactivate.is_set
	|| forced.is_set;
}

bool InstallDeactivate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deactivate.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string InstallDeactivate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_deactivate/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallDeactivate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallDeactivate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivate.is_set || is_set(deactivate.yfilter)) leaf_name_data.push_back(deactivate.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallDeactivate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallDeactivate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallDeactivate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deactivate")
    {
        deactivate = value;
        deactivate.value_namespace = name_space;
        deactivate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void InstallDeactivate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deactivate")
    {
        deactivate.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool InstallDeactivate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deactivate" || name == "forced")
        return true;
    return false;
}

InstallCommit::InstallCommit()
    :
    input(std::make_shared<InstallCommit::Input>())
{
    input->parent = this;

    yang_name = "install_commit"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallCommit::~InstallCommit()
{
}

bool InstallCommit::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallCommit::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallCommit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_commit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallCommit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallCommit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallCommit::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallCommit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallCommit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallCommit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallCommit::clone_ptr() const
{
    return std::make_shared<InstallCommit>();
}

std::string InstallCommit::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallCommit::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallCommit::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallCommit::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallCommit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallCommit::Input::Input()
    :
    commit{YType::str, "commit"}
{

    yang_name = "input"; yang_parent_name = "install_commit"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallCommit::Input::~Input()
{
}

bool InstallCommit::Input::has_data() const
{
    if (is_presence_container) return true;
    return commit.is_set;
}

bool InstallCommit::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commit.yfilter);
}

std::string InstallCommit::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_commit/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallCommit::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallCommit::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commit.is_set || is_set(commit.yfilter)) leaf_name_data.push_back(commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallCommit::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallCommit::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallCommit::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commit")
    {
        commit = value;
        commit.value_namespace = name_space;
        commit.value_namespace_prefix = name_space_prefix;
    }
}

void InstallCommit::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commit")
    {
        commit.yfilter = yfilter;
    }
}

bool InstallCommit::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit")
        return true;
    return false;
}

InstallRemove::InstallRemove()
    :
    input(std::make_shared<InstallRemove::Input>())
{
    input->parent = this;

    yang_name = "install_remove"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

InstallRemove::~InstallRemove()
{
}

bool InstallRemove::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool InstallRemove::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InstallRemove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_remove";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InstallRemove::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InstallRemove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InstallRemove::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InstallRemove::clone_ptr() const
{
    return std::make_shared<InstallRemove>();
}

std::string InstallRemove::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string InstallRemove::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function InstallRemove::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InstallRemove::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool InstallRemove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InstallRemove::Input::Input()
    :
    remove{YType::str, "remove"},
    inactive{YType::empty, "inactive"},
    forced{YType::empty, "forced"}
{

    yang_name = "input"; yang_parent_name = "install_remove"; is_top_level_class = false; has_list_ancestor = false; 
}

InstallRemove::Input::~Input()
{
}

bool InstallRemove::Input::has_data() const
{
    if (is_presence_container) return true;
    return remove.is_set
	|| inactive.is_set
	|| forced.is_set;
}

bool InstallRemove::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remove.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string InstallRemove::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:install_remove/" << get_segment_path();
    return path_buffer.str();
}

std::string InstallRemove::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InstallRemove::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InstallRemove::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InstallRemove::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InstallRemove::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void InstallRemove::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool InstallRemove::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remove" || name == "inactive" || name == "forced")
        return true;
    return false;
}

Copy::Copy()
    :
    input(std::make_shared<Copy::Input>())
{
    input->parent = this;

    yang_name = "copy"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Copy::~Copy()
{
}

bool Copy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Copy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Copy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Copy::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void Copy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Copy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Copy::clone_ptr() const
{
    return std::make_shared<Copy>();
}

std::string Copy::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Copy::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Copy::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Copy::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Copy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Copy::Input::Input()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    recursive{YType::empty, "recursive"},
    vrf{YType::str, "vrf"}
{

    yang_name = "input"; yang_parent_name = "copy"; is_top_level_class = false; has_list_ancestor = false; 
}

Copy::Input::~Input()
{
}

bool Copy::Input::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set
	|| recursive.is_set
	|| vrf.is_set;
}

bool Copy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(recursive.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Copy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy/" << get_segment_path();
    return path_buffer.str();
}

std::string Copy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (recursive.is_set || is_set(recursive.yfilter)) leaf_name_data.push_back(recursive.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Copy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive")
    {
        recursive = value;
        recursive.value_namespace = name_space;
        recursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Copy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "recursive")
    {
        recursive.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Copy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "recursive" || name == "vrf")
        return true;
    return false;
}

CopySrcLocal::CopySrcLocal()
    :
    input(std::make_shared<CopySrcLocal::Input>())
{
    input->parent = this;

    yang_name = "copy_src_local"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopySrcLocal::~CopySrcLocal()
{
}

bool CopySrcLocal::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopySrcLocal::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopySrcLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopySrcLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopySrcLocal::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopySrcLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void CopySrcLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopySrcLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CopySrcLocal::clone_ptr() const
{
    return std::make_shared<CopySrcLocal>();
}

std::string CopySrcLocal::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopySrcLocal::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopySrcLocal::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopySrcLocal::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopySrcLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopySrcLocal::Input::Input()
    :
    src_local{YType::str, "src_local"},
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    dest_local{YType::str, "dest_local"},
    running_config{YType::empty, "running-config"},
    echo_commands{YType::empty, "echo-commands"},
    stop_at_first_failure{YType::empty, "stop-at-first-failure"},
    startup_config{YType::empty, "startup-config"},
    scheduled_config{YType::empty, "scheduled-config"}
{

    yang_name = "input"; yang_parent_name = "copy_src_local"; is_top_level_class = false; has_list_ancestor = false; 
}

CopySrcLocal::Input::~Input()
{
}

bool CopySrcLocal::Input::has_data() const
{
    if (is_presence_container) return true;
    return src_local.is_set
	|| dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| dest_local.is_set
	|| running_config.is_set
	|| echo_commands.is_set
	|| stop_at_first_failure.is_set
	|| startup_config.is_set
	|| scheduled_config.is_set;
}

bool CopySrcLocal::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_local.yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dest_local.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(echo_commands.yfilter)
	|| ydk::is_set(stop_at_first_failure.yfilter)
	|| ydk::is_set(startup_config.yfilter)
	|| ydk::is_set(scheduled_config.yfilter);
}

std::string CopySrcLocal::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_local/" << get_segment_path();
    return path_buffer.str();
}

std::string CopySrcLocal::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcLocal::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_local.is_set || is_set(src_local.yfilter)) leaf_name_data.push_back(src_local.get_name_leafdata());
    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (dest_local.is_set || is_set(dest_local.yfilter)) leaf_name_data.push_back(dest_local.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (echo_commands.is_set || is_set(echo_commands.yfilter)) leaf_name_data.push_back(echo_commands.get_name_leafdata());
    if (stop_at_first_failure.is_set || is_set(stop_at_first_failure.yfilter)) leaf_name_data.push_back(stop_at_first_failure.get_name_leafdata());
    if (startup_config.is_set || is_set(startup_config.yfilter)) leaf_name_data.push_back(startup_config.get_name_leafdata());
    if (scheduled_config.is_set || is_set(scheduled_config.yfilter)) leaf_name_data.push_back(scheduled_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopySrcLocal::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopySrcLocal::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CopySrcLocal::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src_local")
    {
        src_local = value;
        src_local.value_namespace = name_space;
        src_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local")
    {
        dest_local = value;
        dest_local.value_namespace = name_space;
        dest_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-commands")
    {
        echo_commands = value;
        echo_commands.value_namespace = name_space;
        echo_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure = value;
        stop_at_first_failure.value_namespace = name_space;
        stop_at_first_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-config")
    {
        startup_config = value;
        startup_config.value_namespace = name_space;
        startup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scheduled-config")
    {
        scheduled_config = value;
        scheduled_config.value_namespace = name_space;
        scheduled_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopySrcLocal::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src_local")
    {
        src_local.yfilter = yfilter;
    }
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dest_local")
    {
        dest_local.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "echo-commands")
    {
        echo_commands.yfilter = yfilter;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure.yfilter = yfilter;
    }
    if(value_path == "startup-config")
    {
        startup_config.yfilter = yfilter;
    }
    if(value_path == "scheduled-config")
    {
        scheduled_config.yfilter = yfilter;
    }
}

bool CopySrcLocal::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src_local" || name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "dest_local" || name == "running-config" || name == "echo-commands" || name == "stop-at-first-failure" || name == "startup-config" || name == "scheduled-config")
        return true;
    return false;
}

CopySrcRemote::CopySrcRemote()
    :
    input(std::make_shared<CopySrcRemote::Input>())
{
    input->parent = this;

    yang_name = "copy_src_remote"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopySrcRemote::~CopySrcRemote()
{
}

bool CopySrcRemote::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopySrcRemote::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopySrcRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcRemote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopySrcRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopySrcRemote::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopySrcRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void CopySrcRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopySrcRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CopySrcRemote::clone_ptr() const
{
    return std::make_shared<CopySrcRemote>();
}

std::string CopySrcRemote::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopySrcRemote::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopySrcRemote::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopySrcRemote::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopySrcRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopySrcRemote::Input::Input()
    :
    src_remote{YType::str, "src_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    dest_local{YType::str, "dest_local"},
    running_config{YType::empty, "running-config"},
    echo_commands{YType::empty, "echo-commands"},
    stop_at_first_failure{YType::empty, "stop-at-first-failure"},
    startup_config{YType::empty, "startup-config"}
{

    yang_name = "input"; yang_parent_name = "copy_src_remote"; is_top_level_class = false; has_list_ancestor = false; 
}

CopySrcRemote::Input::~Input()
{
}

bool CopySrcRemote::Input::has_data() const
{
    if (is_presence_container) return true;
    return src_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| dest_local.is_set
	|| running_config.is_set
	|| echo_commands.is_set
	|| stop_at_first_failure.is_set
	|| startup_config.is_set;
}

bool CopySrcRemote::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dest_local.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(echo_commands.yfilter)
	|| ydk::is_set(stop_at_first_failure.yfilter)
	|| ydk::is_set(startup_config.yfilter);
}

std::string CopySrcRemote::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_remote/" << get_segment_path();
    return path_buffer.str();
}

std::string CopySrcRemote::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcRemote::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_remote.is_set || is_set(src_remote.yfilter)) leaf_name_data.push_back(src_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (dest_local.is_set || is_set(dest_local.yfilter)) leaf_name_data.push_back(dest_local.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (echo_commands.is_set || is_set(echo_commands.yfilter)) leaf_name_data.push_back(echo_commands.get_name_leafdata());
    if (stop_at_first_failure.is_set || is_set(stop_at_first_failure.yfilter)) leaf_name_data.push_back(stop_at_first_failure.get_name_leafdata());
    if (startup_config.is_set || is_set(startup_config.yfilter)) leaf_name_data.push_back(startup_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopySrcRemote::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopySrcRemote::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CopySrcRemote::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src_remote")
    {
        src_remote = value;
        src_remote.value_namespace = name_space;
        src_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local")
    {
        dest_local = value;
        dest_local.value_namespace = name_space;
        dest_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-commands")
    {
        echo_commands = value;
        echo_commands.value_namespace = name_space;
        echo_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure = value;
        stop_at_first_failure.value_namespace = name_space;
        stop_at_first_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-config")
    {
        startup_config = value;
        startup_config.value_namespace = name_space;
        startup_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopySrcRemote::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src_remote")
    {
        src_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dest_local")
    {
        dest_local.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "echo-commands")
    {
        echo_commands.yfilter = yfilter;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure.yfilter = yfilter;
    }
    if(value_path == "startup-config")
    {
        startup_config.yfilter = yfilter;
    }
}

bool CopySrcRemote::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src_remote" || name == "source-interface" || name == "vrf" || name == "dest_local" || name == "running-config" || name == "echo-commands" || name == "stop-at-first-failure" || name == "startup-config")
        return true;
    return false;
}

CopySrcCore::CopySrcCore()
    :
    input(std::make_shared<CopySrcCore::Input>())
{
    input->parent = this;

    yang_name = "copy_src_core"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopySrcCore::~CopySrcCore()
{
}

bool CopySrcCore::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopySrcCore::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopySrcCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopySrcCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopySrcCore::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopySrcCore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void CopySrcCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopySrcCore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CopySrcCore::clone_ptr() const
{
    return std::make_shared<CopySrcCore>();
}

std::string CopySrcCore::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopySrcCore::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopySrcCore::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopySrcCore::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopySrcCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopySrcCore::Input::Input()
    :
    src_core{YType::str, "src_core"},
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    dest_local_core{YType::str, "dest_local_core"}
{

    yang_name = "input"; yang_parent_name = "copy_src_core"; is_top_level_class = false; has_list_ancestor = false; 
}

CopySrcCore::Input::~Input()
{
}

bool CopySrcCore::Input::has_data() const
{
    if (is_presence_container) return true;
    return src_core.is_set
	|| dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| dest_local_core.is_set;
}

bool CopySrcCore::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_core.yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dest_local_core.yfilter);
}

std::string CopySrcCore::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_core/" << get_segment_path();
    return path_buffer.str();
}

std::string CopySrcCore::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcCore::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_core.is_set || is_set(src_core.yfilter)) leaf_name_data.push_back(src_core.get_name_leafdata());
    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (dest_local_core.is_set || is_set(dest_local_core.yfilter)) leaf_name_data.push_back(dest_local_core.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopySrcCore::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopySrcCore::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CopySrcCore::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src_core")
    {
        src_core = value;
        src_core.value_namespace = name_space;
        src_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local_core")
    {
        dest_local_core = value;
        dest_local_core.value_namespace = name_space;
        dest_local_core.value_namespace_prefix = name_space_prefix;
    }
}

void CopySrcCore::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src_core")
    {
        src_core.yfilter = yfilter;
    }
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dest_local_core")
    {
        dest_local_core.yfilter = yfilter;
    }
}

bool CopySrcCore::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src_core" || name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "dest_local_core")
        return true;
    return false;
}

CopyRunningConfigSrc::CopyRunningConfigSrc()
    :
    input(std::make_shared<CopyRunningConfigSrc::Input>())
{
    input->parent = this;

    yang_name = "copy_running_config_src"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopyRunningConfigSrc::~CopyRunningConfigSrc()
{
}

bool CopyRunningConfigSrc::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopyRunningConfigSrc::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyRunningConfigSrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_running_config_src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyRunningConfigSrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopyRunningConfigSrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyRunningConfigSrc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopyRunningConfigSrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void CopyRunningConfigSrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyRunningConfigSrc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CopyRunningConfigSrc::clone_ptr() const
{
    return std::make_shared<CopyRunningConfigSrc>();
}

std::string CopyRunningConfigSrc::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopyRunningConfigSrc::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopyRunningConfigSrc::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyRunningConfigSrc::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopyRunningConfigSrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyRunningConfigSrc::Input::Input()
    :
    vdc_all{YType::empty, "vdc-all"},
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    startup_config{YType::empty, "startup-config"},
    fabric{YType::empty, "fabric"},
    dest_local_config{YType::empty, "dest_local_config"}
{

    yang_name = "input"; yang_parent_name = "copy_running_config_src"; is_top_level_class = false; has_list_ancestor = false; 
}

CopyRunningConfigSrc::Input::~Input()
{
}

bool CopyRunningConfigSrc::Input::has_data() const
{
    if (is_presence_container) return true;
    return vdc_all.is_set
	|| dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| startup_config.is_set
	|| fabric.is_set
	|| dest_local_config.is_set;
}

bool CopyRunningConfigSrc::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vdc_all.yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(startup_config.yfilter)
	|| ydk::is_set(fabric.yfilter)
	|| ydk::is_set(dest_local_config.yfilter);
}

std::string CopyRunningConfigSrc::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_running_config_src/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyRunningConfigSrc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyRunningConfigSrc::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vdc_all.is_set || is_set(vdc_all.yfilter)) leaf_name_data.push_back(vdc_all.get_name_leafdata());
    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (startup_config.is_set || is_set(startup_config.yfilter)) leaf_name_data.push_back(startup_config.get_name_leafdata());
    if (fabric.is_set || is_set(fabric.yfilter)) leaf_name_data.push_back(fabric.get_name_leafdata());
    if (dest_local_config.is_set || is_set(dest_local_config.yfilter)) leaf_name_data.push_back(dest_local_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopyRunningConfigSrc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopyRunningConfigSrc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CopyRunningConfigSrc::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vdc-all")
    {
        vdc_all = value;
        vdc_all.value_namespace = name_space;
        vdc_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-config")
    {
        startup_config = value;
        startup_config.value_namespace = name_space;
        startup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric")
    {
        fabric = value;
        fabric.value_namespace = name_space;
        fabric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config = value;
        dest_local_config.value_namespace = name_space;
        dest_local_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopyRunningConfigSrc::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vdc-all")
    {
        vdc_all.yfilter = yfilter;
    }
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "startup-config")
    {
        startup_config.yfilter = yfilter;
    }
    if(value_path == "fabric")
    {
        fabric.yfilter = yfilter;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config.yfilter = yfilter;
    }
}

bool CopyRunningConfigSrc::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vdc-all" || name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "startup-config" || name == "fabric" || name == "dest_local_config")
        return true;
    return false;
}

CopyStartupConfigSrc::CopyStartupConfigSrc()
    :
    input(std::make_shared<CopyStartupConfigSrc::Input>())
{
    input->parent = this;

    yang_name = "copy_startup_config_src"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopyStartupConfigSrc::~CopyStartupConfigSrc()
{
}

bool CopyStartupConfigSrc::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopyStartupConfigSrc::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyStartupConfigSrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_startup_config_src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyStartupConfigSrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopyStartupConfigSrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyStartupConfigSrc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopyStartupConfigSrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void CopyStartupConfigSrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyStartupConfigSrc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CopyStartupConfigSrc::clone_ptr() const
{
    return std::make_shared<CopyStartupConfigSrc>();
}

std::string CopyStartupConfigSrc::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopyStartupConfigSrc::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopyStartupConfigSrc::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyStartupConfigSrc::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopyStartupConfigSrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyStartupConfigSrc::Input::Input()
    :
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    running_config{YType::empty, "running-config"},
    echo_commands{YType::empty, "echo-commands"},
    stop_at_first_failure{YType::empty, "stop-at-first-failure"},
    dest_local_config{YType::empty, "dest_local_config"}
{

    yang_name = "input"; yang_parent_name = "copy_startup_config_src"; is_top_level_class = false; has_list_ancestor = false; 
}

CopyStartupConfigSrc::Input::~Input()
{
}

bool CopyStartupConfigSrc::Input::has_data() const
{
    if (is_presence_container) return true;
    return dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| running_config.is_set
	|| echo_commands.is_set
	|| stop_at_first_failure.is_set
	|| dest_local_config.is_set;
}

bool CopyStartupConfigSrc::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(echo_commands.yfilter)
	|| ydk::is_set(stop_at_first_failure.yfilter)
	|| ydk::is_set(dest_local_config.yfilter);
}

std::string CopyStartupConfigSrc::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_startup_config_src/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyStartupConfigSrc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyStartupConfigSrc::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (echo_commands.is_set || is_set(echo_commands.yfilter)) leaf_name_data.push_back(echo_commands.get_name_leafdata());
    if (stop_at_first_failure.is_set || is_set(stop_at_first_failure.yfilter)) leaf_name_data.push_back(stop_at_first_failure.get_name_leafdata());
    if (dest_local_config.is_set || is_set(dest_local_config.yfilter)) leaf_name_data.push_back(dest_local_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopyStartupConfigSrc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopyStartupConfigSrc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CopyStartupConfigSrc::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-commands")
    {
        echo_commands = value;
        echo_commands.value_namespace = name_space;
        echo_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure = value;
        stop_at_first_failure.value_namespace = name_space;
        stop_at_first_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config = value;
        dest_local_config.value_namespace = name_space;
        dest_local_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopyStartupConfigSrc::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "echo-commands")
    {
        echo_commands.yfilter = yfilter;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure.yfilter = yfilter;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config.yfilter = yfilter;
    }
}

bool CopyStartupConfigSrc::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "running-config" || name == "echo-commands" || name == "stop-at-first-failure" || name == "dest_local_config")
        return true;
    return false;
}

CopyLicenses::CopyLicenses()
    :
    input(std::make_shared<CopyLicenses::Input>())
{
    input->parent = this;

    yang_name = "copy_licenses"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopyLicenses::~CopyLicenses()
{
}

bool CopyLicenses::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopyLicenses::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyLicenses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_licenses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyLicenses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopyLicenses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyLicenses::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopyLicenses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void CopyLicenses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyLicenses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CopyLicenses::clone_ptr() const
{
    return std::make_shared<CopyLicenses>();
}

std::string CopyLicenses::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopyLicenses::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopyLicenses::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyLicenses::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopyLicenses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyLicenses::Input::Input()
    :
    licenses{YType::str, "licenses"}
{

    yang_name = "input"; yang_parent_name = "copy_licenses"; is_top_level_class = false; has_list_ancestor = false; 
}

CopyLicenses::Input::~Input()
{
}

bool CopyLicenses::Input::has_data() const
{
    if (is_presence_container) return true;
    return licenses.is_set;
}

bool CopyLicenses::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(licenses.yfilter);
}

std::string CopyLicenses::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_licenses/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyLicenses::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyLicenses::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (licenses.is_set || is_set(licenses.yfilter)) leaf_name_data.push_back(licenses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CopyLicenses::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CopyLicenses::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CopyLicenses::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "licenses")
    {
        licenses = value;
        licenses.value_namespace = name_space;
        licenses.value_namespace_prefix = name_space_prefix;
    }
}

void CopyLicenses::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "licenses")
    {
        licenses.yfilter = yfilter;
    }
}

bool CopyLicenses::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "licenses")
        return true;
    return false;
}

Delete::Delete()
    :
    input(std::make_shared<Delete::Input>())
{
    input->parent = this;

    yang_name = "delete"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Delete::~Delete()
{
}

bool Delete::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Delete::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Delete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Delete::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void Delete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Delete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Delete::clone_ptr() const
{
    return std::make_shared<Delete>();
}

std::string Delete::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Delete::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Delete::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Delete::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Delete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Delete::Input::Input()
    :
    target{YType::str, "target"}
{

    yang_name = "input"; yang_parent_name = "delete"; is_top_level_class = false; has_list_ancestor = false; 
}

Delete::Input::~Input()
{
}

bool Delete::Input::has_data() const
{
    if (is_presence_container) return true;
    return target.is_set;
}

bool Delete::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target.yfilter);
}

std::string Delete::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete/" << get_segment_path();
    return path_buffer.str();
}

std::string Delete::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target.is_set || is_set(target.yfilter)) leaf_name_data.push_back(target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Delete::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target")
    {
        target = value;
        target.value_namespace = name_space;
        target.value_namespace_prefix = name_space_prefix;
    }
}

void Delete::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target")
    {
        target.yfilter = yfilter;
    }
}

bool Delete::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

DeleteCaCertificate::DeleteCaCertificate()
{

    yang_name = "delete_ca_certificate"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

DeleteCaCertificate::~DeleteCaCertificate()
{
}

bool DeleteCaCertificate::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool DeleteCaCertificate::has_operation() const
{
    return is_set(yfilter);
}

std::string DeleteCaCertificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete_ca_certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteCaCertificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DeleteCaCertificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DeleteCaCertificate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DeleteCaCertificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteCaCertificate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DeleteCaCertificate::clone_ptr() const
{
    return std::make_shared<DeleteCaCertificate>();
}

std::string DeleteCaCertificate::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string DeleteCaCertificate::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function DeleteCaCertificate::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteCaCertificate::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool DeleteCaCertificate::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

DeleteCrl::DeleteCrl()
{

    yang_name = "delete_crl"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

DeleteCrl::~DeleteCrl()
{
}

bool DeleteCrl::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool DeleteCrl::has_operation() const
{
    return is_set(yfilter);
}

std::string DeleteCrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete_crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteCrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DeleteCrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DeleteCrl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DeleteCrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteCrl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DeleteCrl::clone_ptr() const
{
    return std::make_shared<DeleteCrl>();
}

std::string DeleteCrl::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string DeleteCrl::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function DeleteCrl::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteCrl::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool DeleteCrl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

BootNxos::BootNxos()
    :
    input(std::make_shared<BootNxos::Input>())
{
    input->parent = this;

    yang_name = "boot_nxos"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

BootNxos::~BootNxos()
{
}

bool BootNxos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool BootNxos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string BootNxos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:boot_nxos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootNxos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootNxos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<BootNxos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootNxos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void BootNxos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BootNxos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BootNxos::clone_ptr() const
{
    return std::make_shared<BootNxos>();
}

std::string BootNxos::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string BootNxos::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function BootNxos::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BootNxos::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool BootNxos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

BootNxos::Input::Input()
    :
    image{YType::str, "image"}
{

    yang_name = "input"; yang_parent_name = "boot_nxos"; is_top_level_class = false; has_list_ancestor = false; 
}

BootNxos::Input::~Input()
{
}

bool BootNxos::Input::has_data() const
{
    if (is_presence_container) return true;
    return image.is_set;
}

bool BootNxos::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(image.yfilter);
}

std::string BootNxos::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:boot_nxos/" << get_segment_path();
    return path_buffer.str();
}

std::string BootNxos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootNxos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (image.is_set || is_set(image.yfilter)) leaf_name_data.push_back(image.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootNxos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootNxos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BootNxos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "image")
    {
        image = value;
        image.value_namespace = name_space;
        image.value_namespace_prefix = name_space_prefix;
    }
}

void BootNxos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "image")
    {
        image.yfilter = yfilter;
    }
}

bool BootNxos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "image")
        return true;
    return false;
}

Reload::Reload()
{

    yang_name = "reload"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Reload::~Reload()
{
}

bool Reload::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Reload::has_operation() const
{
    return is_set(yfilter);
}

std::string Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Reload::clone_ptr() const
{
    return std::make_shared<Reload>();
}

std::string Reload::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Reload::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Reload::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Reload::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Dir::Dir()
    :
    input(std::make_shared<Dir::Input>())
    , output(std::make_shared<Dir::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "dir"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Dir::~Dir()
{
}

bool Dir::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Dir::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Dir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:dir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Dir::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Dir::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Dir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dir::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Dir::clone_ptr() const
{
    return std::make_shared<Dir>();
}

std::string Dir::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Dir::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Dir::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dir::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Dir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Dir::Input::Input()
    :
    filemask{YType::str, "filemask"}
{

    yang_name = "input"; yang_parent_name = "dir"; is_top_level_class = false; has_list_ancestor = false; 
}

Dir::Input::~Input()
{
}

bool Dir::Input::has_data() const
{
    if (is_presence_container) return true;
    return filemask.is_set;
}

bool Dir::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filemask.yfilter);
}

std::string Dir::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:dir/" << get_segment_path();
    return path_buffer.str();
}

std::string Dir::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dir::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filemask.is_set || is_set(filemask.yfilter)) leaf_name_data.push_back(filemask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dir::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dir::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dir::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filemask")
    {
        filemask = value;
        filemask.value_namespace = name_space;
        filemask.value_namespace_prefix = name_space_prefix;
    }
}

void Dir::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filemask")
    {
        filemask.yfilter = yfilter;
    }
}

bool Dir::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filemask")
        return true;
    return false;
}

Dir::Output::Output()
    :
    data{YType::str, "data"}
{

    yang_name = "output"; yang_parent_name = "dir"; is_top_level_class = false; has_list_ancestor = false; 
}

Dir::Output::~Output()
{
}

bool Dir::Output::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Dir::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Dir::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:dir/" << get_segment_path();
    return path_buffer.str();
}

std::string Dir::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dir::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Dir::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Dir::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Dir::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Dir::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Dir::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}


}
}

