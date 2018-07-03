
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_14.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RcvdrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::DamppathsrtItems()
    :
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems>())
    , vpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems>())
    , lblrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems>())
    , lsrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems>())
    , evpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems>())
    , mvpnrt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems>())
{
    rt_items->parent = this;
    vpnrt_items->parent = this;
    lblrt_items->parent = this;
    lsrt_items->parent = this;
    evpnrt_items->parent = this;
    mvpnrt_items->parent = this;

    yang_name = "damppathsrt-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::~DamppathsrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::has_data() const
{
    if (is_presence_container) return true;
    return (rt_items !=  nullptr && rt_items->has_data())
	|| (vpnrt_items !=  nullptr && vpnrt_items->has_data())
	|| (lblrt_items !=  nullptr && lblrt_items->has_data())
	|| (lsrt_items !=  nullptr && lsrt_items->has_data())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_data())
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::has_operation() const
{
    return is_set(yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (vpnrt_items !=  nullptr && vpnrt_items->has_operation())
	|| (lblrt_items !=  nullptr && lblrt_items->has_operation())
	|| (lsrt_items !=  nullptr && lsrt_items->has_operation())
	|| (evpnrt_items !=  nullptr && evpnrt_items->has_operation())
	|| (mvpnrt_items !=  nullptr && mvpnrt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "damppathsrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "vpnrt-items")
    {
        if(vpnrt_items == nullptr)
        {
            vpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems>();
        }
        return vpnrt_items;
    }

    if(child_yang_name == "lblrt-items")
    {
        if(lblrt_items == nullptr)
        {
            lblrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems>();
        }
        return lblrt_items;
    }

    if(child_yang_name == "lsrt-items")
    {
        if(lsrt_items == nullptr)
        {
            lsrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems>();
        }
        return lsrt_items;
    }

    if(child_yang_name == "evpnrt-items")
    {
        if(evpnrt_items == nullptr)
        {
            evpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems>();
        }
        return evpnrt_items;
    }

    if(child_yang_name == "mvpnrt-items")
    {
        if(mvpnrt_items == nullptr)
        {
            mvpnrt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems>();
        }
        return mvpnrt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    if(vpnrt_items != nullptr)
    {
        children["vpnrt-items"] = vpnrt_items;
    }

    if(lblrt_items != nullptr)
    {
        children["lblrt-items"] = lblrt_items;
    }

    if(lsrt_items != nullptr)
    {
        children["lsrt-items"] = lsrt_items;
    }

    if(evpnrt_items != nullptr)
    {
        children["evpnrt-items"] = evpnrt_items;
    }

    if(mvpnrt_items != nullptr)
    {
        children["mvpnrt-items"] = mvpnrt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "vpnrt-items" || name == "lblrt-items" || name == "lsrt-items" || name == "evpnrt-items" || name == "mvpnrt-items")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "damppathsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::~RouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::RtItems_()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::~RtItems_()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnrtItems()
    :
    vpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "vpnrt-items"; yang_parent_name = "damppathsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::~VpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpnroute_list.len(); index++)
    {
        if(vpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<vpnroute_list.len(); index++)
    {
        if(vpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpnRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList>();
        c->parent = this;
        vpnroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vpnroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::VpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "VpnRoute-list"; yang_parent_name = "vpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::~VpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "VpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblrtItems()
    :
    lblroute_list(this, {"pfx"})
{

    yang_name = "lblrt-items"; yang_parent_name = "damppathsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::~LblrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lblroute_list.len(); index++)
    {
        if(lblroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::has_operation() const
{
    for (std::size_t index=0; index<lblroute_list.len(); index++)
    {
        if(lblroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lblrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LblRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList>();
        c->parent = this;
        lblroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lblroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LblRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::LblRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rtlblafflags{YType::str, "rtLblAfFlags"},
    rtlblafver{YType::uint32, "rtLblAfVer"},
    loclbl{YType::uint32, "locLbl"},
    pfxlblholddowndelts{YType::str, "pfxLblHoldDownDelTs"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "LblRoute-list"; yang_parent_name = "lblrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::~LblRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rtlblafflags.is_set
	|| rtlblafver.is_set
	|| loclbl.is_set
	|| pfxlblholddowndelts.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rtlblafflags.yfilter)
	|| ydk::is_set(rtlblafver.yfilter)
	|| ydk::is_set(loclbl.yfilter)
	|| ydk::is_set(pfxlblholddowndelts.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LblRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rtlblafflags.is_set || is_set(rtlblafflags.yfilter)) leaf_name_data.push_back(rtlblafflags.get_name_leafdata());
    if (rtlblafver.is_set || is_set(rtlblafver.yfilter)) leaf_name_data.push_back(rtlblafver.get_name_leafdata());
    if (loclbl.is_set || is_set(loclbl.yfilter)) leaf_name_data.push_back(loclbl.get_name_leafdata());
    if (pfxlblholddowndelts.is_set || is_set(pfxlblholddowndelts.yfilter)) leaf_name_data.push_back(pfxlblholddowndelts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLblAfFlags")
    {
        rtlblafflags = value;
        rtlblafflags.value_namespace = name_space;
        rtlblafflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLblAfVer")
    {
        rtlblafver = value;
        rtlblafver.value_namespace = name_space;
        rtlblafver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locLbl")
    {
        loclbl = value;
        loclbl.value_namespace = name_space;
        loclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxLblHoldDownDelTs")
    {
        pfxlblholddowndelts = value;
        pfxlblholddowndelts.value_namespace = name_space;
        pfxlblholddowndelts.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtLblAfFlags")
    {
        rtlblafflags.yfilter = yfilter;
    }
    if(value_path == "rtLblAfVer")
    {
        rtlblafver.yfilter = yfilter;
    }
    if(value_path == "locLbl")
    {
        loclbl.yfilter = yfilter;
    }
    if(value_path == "pfxLblHoldDownDelTs")
    {
        pfxlblholddowndelts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtLblAfFlags" || name == "rtLblAfVer" || name == "locLbl" || name == "pfxLblHoldDownDelTs" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "LblRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LsrtItems()
    :
    lnkstroute_list(this, {"pfx"})
{

    yang_name = "lsrt-items"; yang_parent_name = "damppathsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::~LsrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstroute_list.len(); index++)
    {
        if(lnkstroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstroute_list.len(); index++)
    {
        if(lnkstroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList>();
        c->parent = this;
        lnkstroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::LnkStRouteList()
    :
    pfx{YType::str, "pfx"},
    nlritype{YType::enumeration, "nlriType"},
    protoid{YType::enumeration, "protoId"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "LnkStRoute-list"; yang_parent_name = "lsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::~LnkStRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| nlritype.is_set
	|| protoid.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(nlritype.yfilter)
	|| ydk::is_set(protoid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (nlritype.is_set || is_set(nlritype.yfilter)) leaf_name_data.push_back(nlritype.get_name_leafdata());
    if (protoid.is_set || is_set(protoid.yfilter)) leaf_name_data.push_back(protoid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlriType")
    {
        nlritype = value;
        nlritype.value_namespace = name_space;
        nlritype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoId")
    {
        protoid = value;
        protoid.value_namespace = name_space;
        protoid.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "nlriType")
    {
        nlritype.yfilter = yfilter;
    }
    if(value_path == "protoId")
    {
        protoid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "nlriType" || name == "protoId" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "LnkStRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnrtItems()
    :
    evpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "evpnrt-items"; yang_parent_name = "damppathsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::~EvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<evpnroute_list.len(); index++)
    {
        if(evpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvpnRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList>();
        c->parent = this;
        evpnroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpnroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::EvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "EvpnRoute-list"; yang_parent_name = "evpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::~EvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "EvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnrtItems()
    :
    mvpnroute_list(this, {"pfx", "rd"})
{

    yang_name = "mvpnrt-items"; yang_parent_name = "damppathsrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::~MvpnrtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::has_operation() const
{
    for (std::size_t index=0; index<mvpnroute_list.len(); index++)
    {
        if(mvpnroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpnrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MvpnRoute-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList>();
        c->parent = this;
        mvpnroute_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mvpnroute_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MvpnRoute-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::MvpnRouteList()
    :
    pfx{YType::str, "pfx"},
    rd{YType::str, "rd"},
    rttype{YType::enumeration, "rtType"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rtflags{YType::str, "rtFlags"},
    numpaths{YType::uint32, "numPaths"},
    bestpathid{YType::uint32, "bestPathId"}
        ,
    path_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems>())
{
    path_items->parent = this;

    yang_name = "MvpnRoute-list"; yang_parent_name = "mvpnrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::~MvpnRouteList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| rd.is_set
	|| rttype.is_set
	|| name.is_set
	|| ver.is_set
	|| rtflags.is_set
	|| numpaths.is_set
	|| bestpathid.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rtflags.yfilter)
	|| ydk::is_set(numpaths.yfilter)
	|| ydk::is_set(bestpathid.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MvpnRoute-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    ADD_KEY_TOKEN(rd, "rd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rtflags.is_set || is_set(rtflags.yfilter)) leaf_name_data.push_back(rtflags.get_name_leafdata());
    if (numpaths.is_set || is_set(numpaths.yfilter)) leaf_name_data.push_back(numpaths.get_name_leafdata());
    if (bestpathid.is_set || is_set(bestpathid.yfilter)) leaf_name_data.push_back(bestpathid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rtFlags")
    {
        rtflags = value;
        rtflags.value_namespace = name_space;
        rtflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPaths")
    {
        numpaths = value;
        numpaths.value_namespace = name_space;
        numpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathId")
    {
        bestpathid = value;
        bestpathid.value_namespace = name_space;
        bestpathid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rtFlags")
    {
        rtflags.yfilter = yfilter;
    }
    if(value_path == "numPaths")
    {
        numpaths.yfilter = yfilter;
    }
    if(value_path == "bestPathId")
    {
        bestpathid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "pfx" || name == "rd" || name == "rtType" || name == "name" || name == "ver" || name == "rtFlags" || name == "numPaths" || name == "bestPathId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathItems()
    :
    path_list(this, {"peer", "id", "nh", "importedrd", "origimportedrd"})
{

    yang_name = "path-items"; yang_parent_name = "MvpnRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::~PathItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList>();
        c->parent = this;
        path_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PathList()
    :
    peer{YType::str, "peer"},
    id{YType::uint32, "id"},
    nh{YType::str, "nh"},
    importedrd{YType::str, "importedRd"},
    origimportedrd{YType::str, "origImportedRd"},
    nhmetric{YType::uint32, "nhMetric"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    origin{YType::enumeration, "origin"},
    metric{YType::uint32, "metric"},
    localpref{YType::uint32, "localPref"},
    weight{YType::uint16, "weight"},
    aggr{YType::str, "aggr"},
    aggras{YType::str, "aggrAs"},
    unknownattrdata{YType::str, "unknownAttrData"},
    unknownattrlen{YType::uint32, "unknownAttrLen"},
    regcomm{YType::str, "regComm"},
    extcomm{YType::str, "extComm"},
    aspath{YType::str, "asPath"},
    rcvdlbl{YType::str, "rcvdLbl"},
    originatorid{YType::str, "originatorId"},
    clusterlst{YType::str, "clusterLst"},
    peerrtrid{YType::str, "peerRtrId"}
        ,
    seg_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>())
    , rcomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>())
    , ecomm_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>())
    , lnkstattr_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>())
    , pfxsid_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>())
    , pmsi_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>())
{
    seg_items->parent = this;
    rcomm_items->parent = this;
    ecomm_items->parent = this;
    lnkstattr_items->parent = this;
    pfxsid_items->parent = this;
    pmsi_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::~PathList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| id.is_set
	|| nh.is_set
	|| importedrd.is_set
	|| origimportedrd.is_set
	|| nhmetric.is_set
	|| type.is_set
	|| operst.is_set
	|| flags.is_set
	|| origin.is_set
	|| metric.is_set
	|| localpref.is_set
	|| weight.is_set
	|| aggr.is_set
	|| aggras.is_set
	|| unknownattrdata.is_set
	|| unknownattrlen.is_set
	|| regcomm.is_set
	|| extcomm.is_set
	|| aspath.is_set
	|| rcvdlbl.is_set
	|| originatorid.is_set
	|| clusterlst.is_set
	|| peerrtrid.is_set
	|| (seg_items !=  nullptr && seg_items->has_data())
	|| (rcomm_items !=  nullptr && rcomm_items->has_data())
	|| (ecomm_items !=  nullptr && ecomm_items->has_data())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_data())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data())
	|| (pmsi_items !=  nullptr && pmsi_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nh.yfilter)
	|| ydk::is_set(importedrd.yfilter)
	|| ydk::is_set(origimportedrd.yfilter)
	|| ydk::is_set(nhmetric.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(localpref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(aggr.yfilter)
	|| ydk::is_set(aggras.yfilter)
	|| ydk::is_set(unknownattrdata.yfilter)
	|| ydk::is_set(unknownattrlen.yfilter)
	|| ydk::is_set(regcomm.yfilter)
	|| ydk::is_set(extcomm.yfilter)
	|| ydk::is_set(aspath.yfilter)
	|| ydk::is_set(rcvdlbl.yfilter)
	|| ydk::is_set(originatorid.yfilter)
	|| ydk::is_set(clusterlst.yfilter)
	|| ydk::is_set(peerrtrid.yfilter)
	|| (seg_items !=  nullptr && seg_items->has_operation())
	|| (rcomm_items !=  nullptr && rcomm_items->has_operation())
	|| (ecomm_items !=  nullptr && ecomm_items->has_operation())
	|| (lnkstattr_items !=  nullptr && lnkstattr_items->has_operation())
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation())
	|| (pmsi_items !=  nullptr && pmsi_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(peer, "peer");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(nh, "nh");
    ADD_KEY_TOKEN(importedrd, "importedRd");
    ADD_KEY_TOKEN(origimportedrd, "origImportedRd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nh.is_set || is_set(nh.yfilter)) leaf_name_data.push_back(nh.get_name_leafdata());
    if (importedrd.is_set || is_set(importedrd.yfilter)) leaf_name_data.push_back(importedrd.get_name_leafdata());
    if (origimportedrd.is_set || is_set(origimportedrd.yfilter)) leaf_name_data.push_back(origimportedrd.get_name_leafdata());
    if (nhmetric.is_set || is_set(nhmetric.yfilter)) leaf_name_data.push_back(nhmetric.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (localpref.is_set || is_set(localpref.yfilter)) leaf_name_data.push_back(localpref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (aggr.is_set || is_set(aggr.yfilter)) leaf_name_data.push_back(aggr.get_name_leafdata());
    if (aggras.is_set || is_set(aggras.yfilter)) leaf_name_data.push_back(aggras.get_name_leafdata());
    if (unknownattrdata.is_set || is_set(unknownattrdata.yfilter)) leaf_name_data.push_back(unknownattrdata.get_name_leafdata());
    if (unknownattrlen.is_set || is_set(unknownattrlen.yfilter)) leaf_name_data.push_back(unknownattrlen.get_name_leafdata());
    if (regcomm.is_set || is_set(regcomm.yfilter)) leaf_name_data.push_back(regcomm.get_name_leafdata());
    if (extcomm.is_set || is_set(extcomm.yfilter)) leaf_name_data.push_back(extcomm.get_name_leafdata());
    if (aspath.is_set || is_set(aspath.yfilter)) leaf_name_data.push_back(aspath.get_name_leafdata());
    if (rcvdlbl.is_set || is_set(rcvdlbl.yfilter)) leaf_name_data.push_back(rcvdlbl.get_name_leafdata());
    if (originatorid.is_set || is_set(originatorid.yfilter)) leaf_name_data.push_back(originatorid.get_name_leafdata());
    if (clusterlst.is_set || is_set(clusterlst.yfilter)) leaf_name_data.push_back(clusterlst.get_name_leafdata());
    if (peerrtrid.is_set || is_set(peerrtrid.yfilter)) leaf_name_data.push_back(peerrtrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seg-items")
    {
        if(seg_items == nullptr)
        {
            seg_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems>();
        }
        return seg_items;
    }

    if(child_yang_name == "rcomm-items")
    {
        if(rcomm_items == nullptr)
        {
            rcomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems>();
        }
        return rcomm_items;
    }

    if(child_yang_name == "ecomm-items")
    {
        if(ecomm_items == nullptr)
        {
            ecomm_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems>();
        }
        return ecomm_items;
    }

    if(child_yang_name == "lnkstattr-items")
    {
        if(lnkstattr_items == nullptr)
        {
            lnkstattr_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems>();
        }
        return lnkstattr_items;
    }

    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    if(child_yang_name == "pmsi-items")
    {
        if(pmsi_items == nullptr)
        {
            pmsi_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems>();
        }
        return pmsi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seg_items != nullptr)
    {
        children["seg-items"] = seg_items;
    }

    if(rcomm_items != nullptr)
    {
        children["rcomm-items"] = rcomm_items;
    }

    if(ecomm_items != nullptr)
    {
        children["ecomm-items"] = ecomm_items;
    }

    if(lnkstattr_items != nullptr)
    {
        children["lnkstattr-items"] = lnkstattr_items;
    }

    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    if(pmsi_items != nullptr)
    {
        children["pmsi-items"] = pmsi_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh")
    {
        nh = value;
        nh.value_namespace = name_space;
        nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "importedRd")
    {
        importedrd = value;
        importedrd.value_namespace = name_space;
        importedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd = value;
        origimportedrd.value_namespace = name_space;
        origimportedrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhMetric")
    {
        nhmetric = value;
        nhmetric.value_namespace = name_space;
        nhmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPref")
    {
        localpref = value;
        localpref.value_namespace = name_space;
        localpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr")
    {
        aggr = value;
        aggr.value_namespace = name_space;
        aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggrAs")
    {
        aggras = value;
        aggras.value_namespace = name_space;
        aggras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata = value;
        unknownattrdata.value_namespace = name_space;
        unknownattrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen = value;
        unknownattrlen.value_namespace = name_space;
        unknownattrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regComm")
    {
        regcomm = value;
        regcomm.value_namespace = name_space;
        regcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extComm")
    {
        extcomm = value;
        extcomm.value_namespace = name_space;
        extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asPath")
    {
        aspath = value;
        aspath.value_namespace = name_space;
        aspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl = value;
        rcvdlbl.value_namespace = name_space;
        rcvdlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originatorId")
    {
        originatorid = value;
        originatorid.value_namespace = name_space;
        originatorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clusterLst")
    {
        clusterlst = value;
        clusterlst.value_namespace = name_space;
        clusterlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid = value;
        peerrtrid.value_namespace = name_space;
        peerrtrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nh")
    {
        nh.yfilter = yfilter;
    }
    if(value_path == "importedRd")
    {
        importedrd.yfilter = yfilter;
    }
    if(value_path == "origImportedRd")
    {
        origimportedrd.yfilter = yfilter;
    }
    if(value_path == "nhMetric")
    {
        nhmetric.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "localPref")
    {
        localpref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "aggr")
    {
        aggr.yfilter = yfilter;
    }
    if(value_path == "aggrAs")
    {
        aggras.yfilter = yfilter;
    }
    if(value_path == "unknownAttrData")
    {
        unknownattrdata.yfilter = yfilter;
    }
    if(value_path == "unknownAttrLen")
    {
        unknownattrlen.yfilter = yfilter;
    }
    if(value_path == "regComm")
    {
        regcomm.yfilter = yfilter;
    }
    if(value_path == "extComm")
    {
        extcomm.yfilter = yfilter;
    }
    if(value_path == "asPath")
    {
        aspath.yfilter = yfilter;
    }
    if(value_path == "rcvdLbl")
    {
        rcvdlbl.yfilter = yfilter;
    }
    if(value_path == "originatorId")
    {
        originatorid.yfilter = yfilter;
    }
    if(value_path == "clusterLst")
    {
        clusterlst.yfilter = yfilter;
    }
    if(value_path == "peerRtrId")
    {
        peerrtrid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seg-items" || name == "rcomm-items" || name == "ecomm-items" || name == "lnkstattr-items" || name == "pfxsid-items" || name == "pmsi-items" || name == "peer" || name == "id" || name == "nh" || name == "importedRd" || name == "origImportedRd" || name == "nhMetric" || name == "type" || name == "operSt" || name == "flags" || name == "origin" || name == "metric" || name == "localPref" || name == "weight" || name == "aggr" || name == "aggrAs" || name == "unknownAttrData" || name == "unknownAttrLen" || name == "regComm" || name == "extComm" || name == "asPath" || name == "rcvdLbl" || name == "originatorId" || name == "clusterLst" || name == "peerRtrId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::SegItems()
    :
    asseg_list(this, {"order"})
{

    yang_name = "seg-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::~SegItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_operation() const
{
    for (std::size_t index=0; index<asseg_list.len(); index++)
    {
        if(asseg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsSeg-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList>();
        c->parent = this;
        asseg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asseg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsSeg-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsSegList()
    :
    order{YType::uint16, "order"},
    type{YType::enumeration, "type"}
        ,
    asn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>())
{
    asn_items->parent = this;

    yang_name = "AsSeg-list"; yang_parent_name = "seg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::~AsSegList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| type.is_set
	|| (asn_items !=  nullptr && asn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (asn_items !=  nullptr && asn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsSeg-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asn-items")
    {
        if(asn_items == nullptr)
        {
            asn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems>();
        }
        return asn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asn_items != nullptr)
    {
        children["asn-items"] = asn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-items" || name == "order" || name == "type")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsnItems()
    :
    asitem_list(this, {"order"})
{

    yang_name = "asn-items"; yang_parent_name = "AsSeg-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::~AsnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_operation() const
{
    for (std::size_t index=0; index<asitem_list.len(); index++)
    {
        if(asitem_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AsItem-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList>();
        c->parent = this;
        asitem_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asitem_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AsItem-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::AsItemList()
    :
    order{YType::uint16, "order"},
    asn{YType::str, "asn"}
{

    yang_name = "AsItem-list"; yang_parent_name = "asn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::~AsItemList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| asn.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AsItem-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "asn")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RcommItems()
    :
    regcomm_list(this, {"community"})
{

    yang_name = "rcomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::~RcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_operation() const
{
    for (std::size_t index=0; index<regcomm_list.len(); index++)
    {
        if(regcomm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RegComm-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList>();
        c->parent = this;
        regcomm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : regcomm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RegComm-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::RegCommList()
    :
    community{YType::str, "community"}
{

    yang_name = "RegComm-list"; yang_parent_name = "rcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::~RegCommList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RegComm-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::EcommItems()
    :
    encap{YType::str, "encap"},
    rtrmac{YType::str, "rtrMac"}
        ,
    rt_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "ecomm-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::~EcommItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| rtrmac.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(rtrmac.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (rtrmac.is_set || is_set(rtrmac.yfilter)) leaf_name_data.push_back(rtrmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrMac")
    {
        rtrmac = value;
        rtrmac.value_namespace = name_space;
        rtrmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "rtrMac")
    {
        rtrmac.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "encap" || name == "rtrMac")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::RtItems()
    :
    extcommrt_list(this, {"community"})
{

    yang_name = "rt-items"; yang_parent_name = "ecomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::~RtItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<extcommrt_list.len(); index++)
    {
        if(extcommrt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommRt-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList>();
        c->parent = this;
        extcommrt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommrt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommRt-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::ExtCommRtList()
    :
    community{YType::str, "community"}
{

    yang_name = "ExtCommRt-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::~ExtCommRtList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommRt-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::LnkstattrItems()
    :
    attrtype{YType::enumeration, "attrType"},
    nodeattrflags{YType::str, "nodeAttrFlags"},
    lnkattrflags{YType::str, "lnkAttrFlags"},
    pfxattrflags{YType::str, "pfxAttrFlags"},
    attrlen{YType::uint16, "attrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "lnkstattr-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::~LnkstattrItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_data() const
{
    if (is_presence_container) return true;
    return attrtype.is_set
	|| nodeattrflags.is_set
	|| lnkattrflags.is_set
	|| pfxattrflags.is_set
	|| attrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attrtype.yfilter)
	|| ydk::is_set(nodeattrflags.yfilter)
	|| ydk::is_set(lnkattrflags.yfilter)
	|| ydk::is_set(pfxattrflags.yfilter)
	|| ydk::is_set(attrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lnkstattr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attrtype.is_set || is_set(attrtype.yfilter)) leaf_name_data.push_back(attrtype.get_name_leafdata());
    if (nodeattrflags.is_set || is_set(nodeattrflags.yfilter)) leaf_name_data.push_back(nodeattrflags.get_name_leafdata());
    if (lnkattrflags.is_set || is_set(lnkattrflags.yfilter)) leaf_name_data.push_back(lnkattrflags.get_name_leafdata());
    if (pfxattrflags.is_set || is_set(pfxattrflags.yfilter)) leaf_name_data.push_back(pfxattrflags.get_name_leafdata());
    if (attrlen.is_set || is_set(attrlen.yfilter)) leaf_name_data.push_back(attrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attrType")
    {
        attrtype = value;
        attrtype.value_namespace = name_space;
        attrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags = value;
        nodeattrflags.value_namespace = name_space;
        nodeattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags = value;
        lnkattrflags.value_namespace = name_space;
        lnkattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags = value;
        pfxattrflags.value_namespace = name_space;
        pfxattrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attrLen")
    {
        attrlen = value;
        attrlen.value_namespace = name_space;
        attrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attrType")
    {
        attrtype.yfilter = yfilter;
    }
    if(value_path == "nodeAttrFlags")
    {
        nodeattrflags.yfilter = yfilter;
    }
    if(value_path == "lnkAttrFlags")
    {
        lnkattrflags.yfilter = yfilter;
    }
    if(value_path == "pfxAttrFlags")
    {
        pfxattrflags.yfilter = yfilter;
    }
    if(value_path == "attrLen")
    {
        attrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "attrType" || name == "nodeAttrFlags" || name == "lnkAttrFlags" || name == "pfxAttrFlags" || name == "attrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::TlvItems()
    :
    lnkstattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "lnkstattr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<lnkstattrentry_list.len(); index++)
    {
        if(lnkstattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LnkStAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList>();
        c->parent = this;
        lnkstattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lnkstattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LnkStAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::LnkStAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "LnkStAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::~LnkStAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LnkStAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::PfxsidItems()
    :
    pfxsidattrlen{YType::uint16, "pfxSidAttrLen"}
        ,
    tlv_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>())
{
    tlv_items->parent = this;

    yang_name = "pfxsid-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::~PfxsidItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxsidattrlen.is_set
	|| (tlv_items !=  nullptr && tlv_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxsidattrlen.yfilter)
	|| (tlv_items !=  nullptr && tlv_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxsidattrlen.is_set || is_set(pfxsidattrlen.yfilter)) leaf_name_data.push_back(pfxsidattrlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-items")
    {
        if(tlv_items == nullptr)
        {
            tlv_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems>();
        }
        return tlv_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tlv_items != nullptr)
    {
        children["tlv-items"] = tlv_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen = value;
        pfxsidattrlen.value_namespace = name_space;
        pfxsidattrlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxSidAttrLen")
    {
        pfxsidattrlen.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-items" || name == "pfxSidAttrLen")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::TlvItems()
    :
    pfxsidattrentry_list(this, {"type"})
{

    yang_name = "tlv-items"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::~TlvItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_operation() const
{
    for (std::size_t index=0; index<pfxsidattrentry_list.len(); index++)
    {
        if(pfxsidattrentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxSidAttrEntry-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList>();
        c->parent = this;
        pfxsidattrentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxsidattrentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxSidAttrEntry-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::PfxSidAttrEntryList()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "PfxSidAttrEntry-list"; yang_parent_name = "tlv-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::~PfxSidAttrEntryList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxSidAttrEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::PmsiItems()
    :
    flags{YType::str, "flags"},
    tuntype{YType::enumeration, "tunType"},
    lbl{YType::uint32, "lbl"},
    tunid{YType::str, "tunId"}
{

    yang_name = "pmsi-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::~PmsiItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| tuntype.is_set
	|| lbl.is_set
	|| tunid.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tuntype.yfilter)
	|| ydk::is_set(lbl.yfilter)
	|| ydk::is_set(tunid.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tuntype.is_set || is_set(tuntype.yfilter)) leaf_name_data.push_back(tuntype.get_name_leafdata());
    if (lbl.is_set || is_set(lbl.yfilter)) leaf_name_data.push_back(lbl.get_name_leafdata());
    if (tunid.is_set || is_set(tunid.yfilter)) leaf_name_data.push_back(tunid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunType")
    {
        tuntype = value;
        tuntype.value_namespace = name_space;
        tuntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl")
    {
        lbl = value;
        lbl.value_namespace = name_space;
        lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunId")
    {
        tunid = value;
        tunid.value_namespace = name_space;
        tunid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunType")
    {
        tuntype.yfilter = yfilter;
    }
    if(value_path == "lbl")
    {
        lbl.yfilter = yfilter;
    }
    if(value_path == "tunId")
    {
        tunid.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DamppathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "tunType" || name == "lbl" || name == "tunId")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtctrlItems()
    :
    rtctrlp_list(this, {"direction"})
{

    yang_name = "rtctrl-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::~RtctrlItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtctrlp_list.len(); index++)
    {
        if(rtctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::has_operation() const
{
    for (std::size_t index=0; index<rtctrlp_list.len(); index++)
    {
        if(rtctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtCtrlP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList>();
        c->parent = this;
        rtctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtCtrlP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::RtCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "RtCtrlP-list"; yang_parent_name = "rtctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::~RtCtrlPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::RtctrlItems::RtCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "operSt" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxctrlItems()
    :
    pfxctrlp_list(this, {"direction"})
{

    yang_name = "pfxctrl-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::~PfxctrlItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxctrlp_list.len(); index++)
    {
        if(pfxctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::has_operation() const
{
    for (std::size_t index=0; index<pfxctrlp_list.len(); index++)
    {
        if(pfxctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxCtrlP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList>();
        c->parent = this;
        pfxctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxCtrlP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::PfxCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    list{YType::str, "list"}
{

    yang_name = "PfxCtrlP-list"; yang_parent_name = "pfxctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::~PfxCtrlPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set
	|| descr.is_set
	|| list.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PfxctrlItems::PfxCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name" || name == "descr" || name == "list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrctrlItems()
    :
    fltrctrlp_list(this, {"direction"})
{

    yang_name = "fltrctrl-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::~FltrctrlItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fltrctrlp_list.len(); index++)
    {
        if(fltrctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::has_operation() const
{
    for (std::size_t index=0; index<fltrctrlp_list.len(); index++)
    {
        if(fltrctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fltrctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FltrCtrlP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList>();
        c->parent = this;
        fltrctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fltrctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FltrCtrlP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::FltrCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    list{YType::str, "list"}
{

    yang_name = "FltrCtrlP-list"; yang_parent_name = "fltrctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::~FltrCtrlPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set
	|| descr.is_set
	|| list.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FltrCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::FltrctrlItems::FltrCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name" || name == "descr" || name == "list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolItems()
    :
    policyinheritrule_list(this, {"name"})
{

    yang_name = "pol-items"; yang_parent_name = "PeerAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::~PolItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policyinheritrule_list.len(); index++)
    {
        if(policyinheritrule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::has_operation() const
{
    for (std::size_t index=0; index<policyinheritrule_list.len(); index++)
    {
        if(policyinheritrule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyInheritRule-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList>();
        c->parent = this;
        policyinheritrule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policyinheritrule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyInheritRule-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::PolicyInheritRuleList()
    :
    name{YType::str, "name"},
    seq{YType::uint16, "seq"}
{

    yang_name = "PolicyInheritRule-list"; yang_parent_name = "pol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::~PolicyInheritRuleList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| seq.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyInheritRule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PeercontItems::PeerContList::AfItems::PeerAfList::PolItems::PolicyInheritRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "seq")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessioncontItems()
    :
    sessioncont_list(this, {"name"})
{

    yang_name = "sessioncont-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::~SessioncontItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessioncont_list.len(); index++)
    {
        if(sessioncont_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::has_operation() const
{
    for (std::size_t index=0; index<sessioncont_list.len(); index++)
    {
        if(sessioncont_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessioncont-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessionCont-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList>();
        c->parent = this;
        sessioncont_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sessioncont_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessionCont-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::SessionContList()
    :
    name{YType::str, "name"},
    inheritcontpeerctrl{YType::str, "inheritContPeerCtrl"},
    desc{YType::str, "desc"},
    adminst{YType::enumeration, "adminSt"},
    asn{YType::str, "asn"},
    lognbrchgs{YType::enumeration, "logNbrChgs"},
    srcif{YType::str, "srcIf"},
    password{YType::str, "password"},
    ctrl{YType::str, "ctrl"},
    ttl{YType::uint16, "ttl"},
    kaintvl{YType::uint16, "kaIntvl"},
    holdintvl{YType::uint16, "holdIntvl"},
    connmode{YType::str, "connMode"},
    sessioncontimp{YType::str, "sessionContImp"},
    privateasctrl{YType::enumeration, "privateASctrl"},
    peertype{YType::enumeration, "peerType"},
    lowmemexempt{YType::enumeration, "lowMemExempt"},
    capsuppr4byteasn{YType::enumeration, "capSuppr4ByteAsn"},
    affgrp{YType::uint16, "affGrp"},
    epe{YType::enumeration, "epe"},
    epepeerset{YType::str, "epePeerSet"},
    bmpsrvid1st{YType::enumeration, "bmpSrvId1St"},
    bmpsrvid2st{YType::enumeration, "bmpSrvId2St"}
        ,
    localasn_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems>())
{
    localasn_items->parent = this;

    yang_name = "SessionCont-list"; yang_parent_name = "sessioncont-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::~SessionContList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| inheritcontpeerctrl.is_set
	|| desc.is_set
	|| adminst.is_set
	|| asn.is_set
	|| lognbrchgs.is_set
	|| srcif.is_set
	|| password.is_set
	|| ctrl.is_set
	|| ttl.is_set
	|| kaintvl.is_set
	|| holdintvl.is_set
	|| connmode.is_set
	|| sessioncontimp.is_set
	|| privateasctrl.is_set
	|| peertype.is_set
	|| lowmemexempt.is_set
	|| capsuppr4byteasn.is_set
	|| affgrp.is_set
	|| epe.is_set
	|| epepeerset.is_set
	|| bmpsrvid1st.is_set
	|| bmpsrvid2st.is_set
	|| (localasn_items !=  nullptr && localasn_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(inheritcontpeerctrl.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(lognbrchgs.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(kaintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(connmode.yfilter)
	|| ydk::is_set(sessioncontimp.yfilter)
	|| ydk::is_set(privateasctrl.yfilter)
	|| ydk::is_set(peertype.yfilter)
	|| ydk::is_set(lowmemexempt.yfilter)
	|| ydk::is_set(capsuppr4byteasn.yfilter)
	|| ydk::is_set(affgrp.yfilter)
	|| ydk::is_set(epe.yfilter)
	|| ydk::is_set(epepeerset.yfilter)
	|| ydk::is_set(bmpsrvid1st.yfilter)
	|| ydk::is_set(bmpsrvid2st.yfilter)
	|| (localasn_items !=  nullptr && localasn_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessionCont-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (inheritcontpeerctrl.is_set || is_set(inheritcontpeerctrl.yfilter)) leaf_name_data.push_back(inheritcontpeerctrl.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (lognbrchgs.is_set || is_set(lognbrchgs.yfilter)) leaf_name_data.push_back(lognbrchgs.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (kaintvl.is_set || is_set(kaintvl.yfilter)) leaf_name_data.push_back(kaintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (connmode.is_set || is_set(connmode.yfilter)) leaf_name_data.push_back(connmode.get_name_leafdata());
    if (sessioncontimp.is_set || is_set(sessioncontimp.yfilter)) leaf_name_data.push_back(sessioncontimp.get_name_leafdata());
    if (privateasctrl.is_set || is_set(privateasctrl.yfilter)) leaf_name_data.push_back(privateasctrl.get_name_leafdata());
    if (peertype.is_set || is_set(peertype.yfilter)) leaf_name_data.push_back(peertype.get_name_leafdata());
    if (lowmemexempt.is_set || is_set(lowmemexempt.yfilter)) leaf_name_data.push_back(lowmemexempt.get_name_leafdata());
    if (capsuppr4byteasn.is_set || is_set(capsuppr4byteasn.yfilter)) leaf_name_data.push_back(capsuppr4byteasn.get_name_leafdata());
    if (affgrp.is_set || is_set(affgrp.yfilter)) leaf_name_data.push_back(affgrp.get_name_leafdata());
    if (epe.is_set || is_set(epe.yfilter)) leaf_name_data.push_back(epe.get_name_leafdata());
    if (epepeerset.is_set || is_set(epepeerset.yfilter)) leaf_name_data.push_back(epepeerset.get_name_leafdata());
    if (bmpsrvid1st.is_set || is_set(bmpsrvid1st.yfilter)) leaf_name_data.push_back(bmpsrvid1st.get_name_leafdata());
    if (bmpsrvid2st.is_set || is_set(bmpsrvid2st.yfilter)) leaf_name_data.push_back(bmpsrvid2st.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localasn-items")
    {
        if(localasn_items == nullptr)
        {
            localasn_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems>();
        }
        return localasn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(localasn_items != nullptr)
    {
        children["localasn-items"] = localasn_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inheritContPeerCtrl")
    {
        inheritcontpeerctrl = value;
        inheritcontpeerctrl.value_namespace = name_space;
        inheritcontpeerctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbrChgs")
    {
        lognbrchgs = value;
        lognbrchgs.value_namespace = name_space;
        lognbrchgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl = value;
        kaintvl.value_namespace = name_space;
        kaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connMode")
    {
        connmode = value;
        connmode.value_namespace = name_space;
        connmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionContImp")
    {
        sessioncontimp = value;
        sessioncontimp.value_namespace = name_space;
        sessioncontimp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privateASctrl")
    {
        privateasctrl = value;
        privateasctrl.value_namespace = name_space;
        privateasctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerType")
    {
        peertype = value;
        peertype.value_namespace = name_space;
        peertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowMemExempt")
    {
        lowmemexempt = value;
        lowmemexempt.value_namespace = name_space;
        lowmemexempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capSuppr4ByteAsn")
    {
        capsuppr4byteasn = value;
        capsuppr4byteasn.value_namespace = name_space;
        capsuppr4byteasn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affGrp")
    {
        affgrp = value;
        affgrp.value_namespace = name_space;
        affgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe")
    {
        epe = value;
        epe.value_namespace = name_space;
        epe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epePeerSet")
    {
        epepeerset = value;
        epepeerset.value_namespace = name_space;
        epepeerset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpSrvId1St")
    {
        bmpsrvid1st = value;
        bmpsrvid1st.value_namespace = name_space;
        bmpsrvid1st.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpSrvId2St")
    {
        bmpsrvid2st = value;
        bmpsrvid2st.value_namespace = name_space;
        bmpsrvid2st.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "inheritContPeerCtrl")
    {
        inheritcontpeerctrl.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "logNbrChgs")
    {
        lognbrchgs.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "connMode")
    {
        connmode.yfilter = yfilter;
    }
    if(value_path == "sessionContImp")
    {
        sessioncontimp.yfilter = yfilter;
    }
    if(value_path == "privateASctrl")
    {
        privateasctrl.yfilter = yfilter;
    }
    if(value_path == "peerType")
    {
        peertype.yfilter = yfilter;
    }
    if(value_path == "lowMemExempt")
    {
        lowmemexempt.yfilter = yfilter;
    }
    if(value_path == "capSuppr4ByteAsn")
    {
        capsuppr4byteasn.yfilter = yfilter;
    }
    if(value_path == "affGrp")
    {
        affgrp.yfilter = yfilter;
    }
    if(value_path == "epe")
    {
        epe.yfilter = yfilter;
    }
    if(value_path == "epePeerSet")
    {
        epepeerset.yfilter = yfilter;
    }
    if(value_path == "bmpSrvId1St")
    {
        bmpsrvid1st.yfilter = yfilter;
    }
    if(value_path == "bmpSrvId2St")
    {
        bmpsrvid2st.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localasn-items" || name == "name" || name == "inheritContPeerCtrl" || name == "desc" || name == "adminSt" || name == "asn" || name == "logNbrChgs" || name == "srcIf" || name == "password" || name == "ctrl" || name == "ttl" || name == "kaIntvl" || name == "holdIntvl" || name == "connMode" || name == "sessionContImp" || name == "privateASctrl" || name == "peerType" || name == "lowMemExempt" || name == "capSuppr4ByteAsn" || name == "affGrp" || name == "epe" || name == "epePeerSet" || name == "bmpSrvId1St" || name == "bmpSrvId2St")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::LocalasnItems()
    :
    localasn{YType::str, "localAsn"},
    asnpropagate{YType::enumeration, "asnPropagate"},
    name{YType::str, "name"}
{

    yang_name = "localasn-items"; yang_parent_name = "SessionCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::~LocalasnItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::has_data() const
{
    if (is_presence_container) return true;
    return localasn.is_set
	|| asnpropagate.is_set
	|| name.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localasn.yfilter)
	|| ydk::is_set(asnpropagate.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localasn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localasn.is_set || is_set(localasn.yfilter)) leaf_name_data.push_back(localasn.get_name_leafdata());
    if (asnpropagate.is_set || is_set(asnpropagate.yfilter)) leaf_name_data.push_back(asnpropagate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localAsn")
    {
        localasn = value;
        localasn.value_namespace = name_space;
        localasn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asnPropagate")
    {
        asnpropagate = value;
        asnpropagate.value_namespace = name_space;
        asnpropagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localAsn")
    {
        localasn.yfilter = yfilter;
    }
    if(value_path == "asnPropagate")
    {
        asnpropagate.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::SessioncontItems::SessionContList::LocalasnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localAsn" || name == "asnPropagate" || name == "name")
        return true;
    return false;
}


}
}

