
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_34.hpp"
#include "Cisco_NX_OS_device_35.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::NwRangeList()
    :
    vnirangemin{YType::uint32, "vniRangeMin"},
    vnirangemax{YType::uint32, "vniRangeMax"},
    ismcastrange{YType::boolean, "isMcastRange"},
    suppressarp{YType::boolean, "suppressARP"},
    mcastgroup{YType::str, "mcastGroup"},
    associatevrfflag{YType::boolean, "associateVrfFlag"},
    islegacymode{YType::boolean, "isLegacyMode"},
    multisiteingrepl{YType::enumeration, "multisiteIngRepl"},
    cfgsrc{YType::uint16, "cfgSrc"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    ingrepl_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems>())
{
    ingrepl_items->parent = this;

    yang_name = "NwRange-list"; yang_parent_name = "vnis-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::~NwRangeList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::has_data() const
{
    if (is_presence_container) return true;
    return vnirangemin.is_set
	|| vnirangemax.is_set
	|| ismcastrange.is_set
	|| suppressarp.is_set
	|| mcastgroup.is_set
	|| associatevrfflag.is_set
	|| islegacymode.is_set
	|| multisiteingrepl.is_set
	|| cfgsrc.is_set
	|| propfaultbitmap.is_set
	|| (ingrepl_items !=  nullptr && ingrepl_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnirangemin.yfilter)
	|| ydk::is_set(vnirangemax.yfilter)
	|| ydk::is_set(ismcastrange.yfilter)
	|| ydk::is_set(suppressarp.yfilter)
	|| ydk::is_set(mcastgroup.yfilter)
	|| ydk::is_set(associatevrfflag.yfilter)
	|| ydk::is_set(islegacymode.yfilter)
	|| ydk::is_set(multisiteingrepl.yfilter)
	|| ydk::is_set(cfgsrc.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (ingrepl_items !=  nullptr && ingrepl_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NwRange-list";
    ADD_KEY_TOKEN(vnirangemin, "vniRangeMin");
    ADD_KEY_TOKEN(vnirangemax, "vniRangeMax");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnirangemin.is_set || is_set(vnirangemin.yfilter)) leaf_name_data.push_back(vnirangemin.get_name_leafdata());
    if (vnirangemax.is_set || is_set(vnirangemax.yfilter)) leaf_name_data.push_back(vnirangemax.get_name_leafdata());
    if (ismcastrange.is_set || is_set(ismcastrange.yfilter)) leaf_name_data.push_back(ismcastrange.get_name_leafdata());
    if (suppressarp.is_set || is_set(suppressarp.yfilter)) leaf_name_data.push_back(suppressarp.get_name_leafdata());
    if (mcastgroup.is_set || is_set(mcastgroup.yfilter)) leaf_name_data.push_back(mcastgroup.get_name_leafdata());
    if (associatevrfflag.is_set || is_set(associatevrfflag.yfilter)) leaf_name_data.push_back(associatevrfflag.get_name_leafdata());
    if (islegacymode.is_set || is_set(islegacymode.yfilter)) leaf_name_data.push_back(islegacymode.get_name_leafdata());
    if (multisiteingrepl.is_set || is_set(multisiteingrepl.yfilter)) leaf_name_data.push_back(multisiteingrepl.get_name_leafdata());
    if (cfgsrc.is_set || is_set(cfgsrc.yfilter)) leaf_name_data.push_back(cfgsrc.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IngRepl-items")
    {
        if(ingrepl_items == nullptr)
        {
            ingrepl_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems>();
        }
        return ingrepl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ingrepl_items != nullptr)
    {
        children["IngRepl-items"] = ingrepl_items;
    }

    return children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vniRangeMin")
    {
        vnirangemin = value;
        vnirangemin.value_namespace = name_space;
        vnirangemin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniRangeMax")
    {
        vnirangemax = value;
        vnirangemax.value_namespace = name_space;
        vnirangemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isMcastRange")
    {
        ismcastrange = value;
        ismcastrange.value_namespace = name_space;
        ismcastrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressARP")
    {
        suppressarp = value;
        suppressarp.value_namespace = name_space;
        suppressarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastGroup")
    {
        mcastgroup = value;
        mcastgroup.value_namespace = name_space;
        mcastgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associateVrfFlag")
    {
        associatevrfflag = value;
        associatevrfflag.value_namespace = name_space;
        associatevrfflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isLegacyMode")
    {
        islegacymode = value;
        islegacymode.value_namespace = name_space;
        islegacymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multisiteIngRepl")
    {
        multisiteingrepl = value;
        multisiteingrepl.value_namespace = name_space;
        multisiteingrepl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc = value;
        cfgsrc.value_namespace = name_space;
        cfgsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vniRangeMin")
    {
        vnirangemin.yfilter = yfilter;
    }
    if(value_path == "vniRangeMax")
    {
        vnirangemax.yfilter = yfilter;
    }
    if(value_path == "isMcastRange")
    {
        ismcastrange.yfilter = yfilter;
    }
    if(value_path == "suppressARP")
    {
        suppressarp.yfilter = yfilter;
    }
    if(value_path == "mcastGroup")
    {
        mcastgroup.yfilter = yfilter;
    }
    if(value_path == "associateVrfFlag")
    {
        associatevrfflag.yfilter = yfilter;
    }
    if(value_path == "isLegacyMode")
    {
        islegacymode.yfilter = yfilter;
    }
    if(value_path == "multisiteIngRepl")
    {
        multisiteingrepl.yfilter = yfilter;
    }
    if(value_path == "cfgSrc")
    {
        cfgsrc.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IngRepl-items" || name == "vniRangeMin" || name == "vniRangeMax" || name == "isMcastRange" || name == "suppressARP" || name == "mcastGroup" || name == "associateVrfFlag" || name == "isLegacyMode" || name == "multisiteIngRepl" || name == "cfgSrc" || name == "propFaultBitmap")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::IngReplItems()
    :
    proto{YType::uint16, "proto"},
    replmode{YType::enumeration, "replMode"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    config_st_ir_peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems>())
{
    config_st_ir_peer_items->parent = this;

    yang_name = "IngRepl-items"; yang_parent_name = "NwRange-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::~IngReplItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| replmode.is_set
	|| propfaultbitmap.is_set
	|| (config_st_ir_peer_items !=  nullptr && config_st_ir_peer_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(replmode.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (config_st_ir_peer_items !=  nullptr && config_st_ir_peer_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IngRepl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (replmode.is_set || is_set(replmode.yfilter)) leaf_name_data.push_back(replmode.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config_st_ir_peer-items")
    {
        if(config_st_ir_peer_items == nullptr)
        {
            config_st_ir_peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems>();
        }
        return config_st_ir_peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_st_ir_peer_items != nullptr)
    {
        children["config_st_ir_peer-items"] = config_st_ir_peer_items;
    }

    return children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replMode")
    {
        replmode = value;
        replmode.value_namespace = name_space;
        replmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "replMode")
    {
        replmode.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config_st_ir_peer-items" || name == "proto" || name == "replMode" || name == "propFaultBitmap")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIrPeerItems()
    :
    configstirpeer_list(this, {"ip"})
{

    yang_name = "config_st_ir_peer-items"; yang_parent_name = "IngRepl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::~ConfigStIrPeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configstirpeer_list.len(); index++)
    {
        if(configstirpeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::has_operation() const
{
    for (std::size_t index=0; index<configstirpeer_list.len(); index++)
    {
        if(configstirpeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config_st_ir_peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConfigStIRPeer-list")
    {
        auto c = std::make_shared<System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList>();
        c->parent = this;
        configstirpeer_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : configstirpeer_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConfigStIRPeer-list")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::ConfigStIRPeerList()
    :
    ip{YType::str, "ip"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "ConfigStIRPeer-list"; yang_parent_name = "config_st_ir_peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::~ConfigStIRPeerList()
{
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| propfaultbitmap.is_set;
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConfigStIRPeer-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "propFaultBitmap")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerTrackItems()
    :
    innerdestmac{YType::str, "innerDestMac"},
    remotepeerip{YType::str, "remotePeerIP"},
    innerdestip{YType::str, "innerDestIP"}
        ,
    peer_items(std::make_shared<System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems>())
{
    peer_items->parent = this;

    yang_name = "peer_track-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeerTrackItems::~PeerTrackItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeerTrackItems::has_data() const
{
    if (is_presence_container) return true;
    return innerdestmac.is_set
	|| remotepeerip.is_set
	|| innerdestip.is_set
	|| (peer_items !=  nullptr && peer_items->has_data());
}

bool System::EpsItems::EpIdItems::EpList::PeerTrackItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(innerdestmac.yfilter)
	|| ydk::is_set(remotepeerip.yfilter)
	|| ydk::is_set(innerdestip.yfilter)
	|| (peer_items !=  nullptr && peer_items->has_operation());
}

std::string System::EpsItems::EpIdItems::EpList::PeerTrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer_track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeerTrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (innerdestmac.is_set || is_set(innerdestmac.yfilter)) leaf_name_data.push_back(innerdestmac.get_name_leafdata());
    if (remotepeerip.is_set || is_set(remotepeerip.yfilter)) leaf_name_data.push_back(remotepeerip.get_name_leafdata());
    if (innerdestip.is_set || is_set(innerdestip.yfilter)) leaf_name_data.push_back(innerdestip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::PeerTrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-items")
    {
        if(peer_items == nullptr)
        {
            peer_items = std::make_shared<System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems>();
        }
        return peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::PeerTrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_items != nullptr)
    {
        children["peer-items"] = peer_items;
    }

    return children;
}

void System::EpsItems::EpIdItems::EpList::PeerTrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "innerDestMac")
    {
        innerdestmac = value;
        innerdestmac.value_namespace = name_space;
        innerdestmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotePeerIP")
    {
        remotepeerip = value;
        remotepeerip.value_namespace = name_space;
        remotepeerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "innerDestIP")
    {
        innerdestip = value;
        innerdestip.value_namespace = name_space;
        innerdestip.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeerTrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "innerDestMac")
    {
        innerdestmac.yfilter = yfilter;
    }
    if(value_path == "remotePeerIP")
    {
        remotepeerip.yfilter = yfilter;
    }
    if(value_path == "innerDestIP")
    {
        innerdestip.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeerTrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-items" || name == "innerDestMac" || name == "remotePeerIP" || name == "innerDestIP")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::PeerItems()
    :
    ip{YType::str, "ip"}
{

    yang_name = "peer-items"; yang_parent_name = "peer_track-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::~PeerItems()
{
}

bool System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::PeerTrackItems::PeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::CntrsItems::CntrsItems()
    :
    txucastpkts{YType::uint64, "txUcastpkts"},
    txucastbytes{YType::uint64, "txUcastbytes"},
    txmcastpkts{YType::uint64, "txMcastpkts"},
    txmcastbytes{YType::uint64, "txMcastbytes"},
    rxucastpkts{YType::uint64, "rxUcastpkts"},
    rxucastbytes{YType::uint64, "rxUcastbytes"},
    rxmcastpkts{YType::uint64, "rxMcastpkts"},
    rxmcastbytes{YType::uint64, "rxMcastbytes"}
{

    yang_name = "cntrs-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::CntrsItems::~CntrsItems()
{
}

bool System::EpsItems::EpIdItems::EpList::CntrsItems::has_data() const
{
    if (is_presence_container) return true;
    return txucastpkts.is_set
	|| txucastbytes.is_set
	|| txmcastpkts.is_set
	|| txmcastbytes.is_set
	|| rxucastpkts.is_set
	|| rxucastbytes.is_set
	|| rxmcastpkts.is_set
	|| rxmcastbytes.is_set;
}

bool System::EpsItems::EpIdItems::EpList::CntrsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txucastpkts.yfilter)
	|| ydk::is_set(txucastbytes.yfilter)
	|| ydk::is_set(txmcastpkts.yfilter)
	|| ydk::is_set(txmcastbytes.yfilter)
	|| ydk::is_set(rxucastpkts.yfilter)
	|| ydk::is_set(rxucastbytes.yfilter)
	|| ydk::is_set(rxmcastpkts.yfilter)
	|| ydk::is_set(rxmcastbytes.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::CntrsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntrs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::CntrsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txucastpkts.is_set || is_set(txucastpkts.yfilter)) leaf_name_data.push_back(txucastpkts.get_name_leafdata());
    if (txucastbytes.is_set || is_set(txucastbytes.yfilter)) leaf_name_data.push_back(txucastbytes.get_name_leafdata());
    if (txmcastpkts.is_set || is_set(txmcastpkts.yfilter)) leaf_name_data.push_back(txmcastpkts.get_name_leafdata());
    if (txmcastbytes.is_set || is_set(txmcastbytes.yfilter)) leaf_name_data.push_back(txmcastbytes.get_name_leafdata());
    if (rxucastpkts.is_set || is_set(rxucastpkts.yfilter)) leaf_name_data.push_back(rxucastpkts.get_name_leafdata());
    if (rxucastbytes.is_set || is_set(rxucastbytes.yfilter)) leaf_name_data.push_back(rxucastbytes.get_name_leafdata());
    if (rxmcastpkts.is_set || is_set(rxmcastpkts.yfilter)) leaf_name_data.push_back(rxmcastpkts.get_name_leafdata());
    if (rxmcastbytes.is_set || is_set(rxmcastbytes.yfilter)) leaf_name_data.push_back(rxmcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::CntrsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::CntrsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EpsItems::EpIdItems::EpList::CntrsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts = value;
        txucastpkts.value_namespace = name_space;
        txucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes = value;
        txucastbytes.value_namespace = name_space;
        txucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts = value;
        txmcastpkts.value_namespace = name_space;
        txmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes = value;
        txmcastbytes.value_namespace = name_space;
        txmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts = value;
        rxucastpkts.value_namespace = name_space;
        rxucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes = value;
        rxucastbytes.value_namespace = name_space;
        rxucastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts = value;
        rxmcastpkts.value_namespace = name_space;
        rxmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes = value;
        rxmcastbytes.value_namespace = name_space;
        rxmcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EpIdItems::EpList::CntrsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txUcastpkts")
    {
        txucastpkts.yfilter = yfilter;
    }
    if(value_path == "txUcastbytes")
    {
        txucastbytes.yfilter = yfilter;
    }
    if(value_path == "txMcastpkts")
    {
        txmcastpkts.yfilter = yfilter;
    }
    if(value_path == "txMcastbytes")
    {
        txmcastbytes.yfilter = yfilter;
    }
    if(value_path == "rxUcastpkts")
    {
        rxucastpkts.yfilter = yfilter;
    }
    if(value_path == "rxUcastbytes")
    {
        rxucastbytes.yfilter = yfilter;
    }
    if(value_path == "rxMcastpkts")
    {
        rxmcastpkts.yfilter = yfilter;
    }
    if(value_path == "rxMcastbytes")
    {
        rxmcastbytes.yfilter = yfilter;
    }
}

bool System::EpsItems::EpIdItems::EpList::CntrsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txUcastpkts" || name == "txUcastbytes" || name == "txMcastpkts" || name == "txMcastbytes" || name == "rxUcastpkts" || name == "rxUcastbytes" || name == "rxMcastpkts" || name == "rxMcastbytes")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::RsoperSourceInterfaceItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsoperSourceInterface-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::~RsoperSourceInterfaceItems()
{
}

bool System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsoperSourceInterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxItems()
    :
    ctx_list(this, {"encap"})
{

    yang_name = "ctx-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtxItems::~CtxItems()
{
}

bool System::CtxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::has_operation() const
{
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ctx-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList>();
        c->parent = this;
        ctx_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ctx_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ctx-list")
        return true;
    return false;
}

System::CtxItems::CtxList::CtxList()
    :
    encap{YType::str, "encap"},
    pcenfpref{YType::enumeration, "pcEnfPref"},
    type{YType::enumeration, "type"},
    pctag{YType::uint32, "pcTag"},
    mgmtpctag{YType::uint32, "mgmtPcTag"},
    name{YType::str, "name"},
    resourceid{YType::uint16, "resourceId"},
    id{YType::uint16, "id"},
    descr{YType::str, "descr"},
    scope{YType::uint32, "scope"},
    ctrlrid{YType::uint32, "ctrlrId"},
    seclbl{YType::uint16, "secLbl"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    operstqual{YType::enumeration, "operStQual"},
    oldoperstqual{YType::enumeration, "oldOperStQual"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    pending{YType::boolean, "pending"},
    v4tibvalid{YType::boolean, "v4TibValid"},
    v4tibid{YType::uint32, "v4TibId"},
    v4tibname{YType::str, "v4TibName"},
    v4tibpending{YType::boolean, "v4TibPending"},
    v4tiboperstate{YType::enumeration, "v4TibOperState"},
    v4tiboperstqual{YType::enumeration, "v4TibOperStQual"},
    v4tiboldoperstqual{YType::enumeration, "v4TibOldOperStQual"},
    v6tibvalid{YType::boolean, "v6TibValid"},
    v6tibid{YType::uint32, "v6TibId"},
    v6tibname{YType::str, "v6TibName"},
    v6tibpending{YType::boolean, "v6TibPending"},
    v6tiboperstate{YType::enumeration, "v6TibOperState"},
    v6tiboperstqual{YType::enumeration, "v6TibOperStQual"},
    v6tiboldoperstqual{YType::enumeration, "v6TibOldOperStQual"},
    createts{YType::str, "createTs"},
    lastchgdts{YType::str, "lastChgdTs"},
    bgprd{YType::str, "bgpRd"},
    bgprddisp{YType::str, "bgpRdDisp"},
    prtclbmp{YType::uint32, "prtclBmp"},
    oui{YType::uint32, "oui"},
    vpnid{YType::uint32, "vpnId"}
        ,
    epret_items(std::make_shared<System::CtxItems::CtxList::EpretItems>())
    , pfx_items(std::make_shared<System::CtxItems::CtxList::PfxItems>())
    , db_items(std::make_shared<System::CtxItems::CtxList::DbItems>())
    , mgmt_items(std::make_shared<System::CtxItems::CtxList::MgmtItems>())
    , rttenconn_items(std::make_shared<System::CtxItems::CtxList::RttenConnItems>())
    , rsctxtoepp_items(std::make_shared<System::CtxItems::CtxList::RsctxToEpPItems>())
{
    epret_items->parent = this;
    pfx_items->parent = this;
    db_items->parent = this;
    mgmt_items->parent = this;
    rttenconn_items->parent = this;
    rsctxtoepp_items->parent = this;

    yang_name = "Ctx-list"; yang_parent_name = "ctx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CtxItems::CtxList::~CtxList()
{
}

bool System::CtxItems::CtxList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| pcenfpref.is_set
	|| type.is_set
	|| pctag.is_set
	|| mgmtpctag.is_set
	|| name.is_set
	|| resourceid.is_set
	|| id.is_set
	|| descr.is_set
	|| scope.is_set
	|| ctrlrid.is_set
	|| seclbl.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| operstqual.is_set
	|| oldoperstqual.is_set
	|| gsdbctx.is_set
	|| pending.is_set
	|| v4tibvalid.is_set
	|| v4tibid.is_set
	|| v4tibname.is_set
	|| v4tibpending.is_set
	|| v4tiboperstate.is_set
	|| v4tiboperstqual.is_set
	|| v4tiboldoperstqual.is_set
	|| v6tibvalid.is_set
	|| v6tibid.is_set
	|| v6tibname.is_set
	|| v6tibpending.is_set
	|| v6tiboperstate.is_set
	|| v6tiboperstqual.is_set
	|| v6tiboldoperstqual.is_set
	|| createts.is_set
	|| lastchgdts.is_set
	|| bgprd.is_set
	|| bgprddisp.is_set
	|| prtclbmp.is_set
	|| oui.is_set
	|| vpnid.is_set
	|| (epret_items !=  nullptr && epret_items->has_data())
	|| (pfx_items !=  nullptr && pfx_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (rttenconn_items !=  nullptr && rttenconn_items->has_data())
	|| (rsctxtoepp_items !=  nullptr && rsctxtoepp_items->has_data());
}

bool System::CtxItems::CtxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(pcenfpref.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(mgmtpctag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(resourceid.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(seclbl.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(oldoperstqual.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(v4tibvalid.yfilter)
	|| ydk::is_set(v4tibid.yfilter)
	|| ydk::is_set(v4tibname.yfilter)
	|| ydk::is_set(v4tibpending.yfilter)
	|| ydk::is_set(v4tiboperstate.yfilter)
	|| ydk::is_set(v4tiboperstqual.yfilter)
	|| ydk::is_set(v4tiboldoperstqual.yfilter)
	|| ydk::is_set(v6tibvalid.yfilter)
	|| ydk::is_set(v6tibid.yfilter)
	|| ydk::is_set(v6tibname.yfilter)
	|| ydk::is_set(v6tibpending.yfilter)
	|| ydk::is_set(v6tiboperstate.yfilter)
	|| ydk::is_set(v6tiboperstqual.yfilter)
	|| ydk::is_set(v6tiboldoperstqual.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lastchgdts.yfilter)
	|| ydk::is_set(bgprd.yfilter)
	|| ydk::is_set(bgprddisp.yfilter)
	|| ydk::is_set(prtclbmp.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (epret_items !=  nullptr && epret_items->has_operation())
	|| (pfx_items !=  nullptr && pfx_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (rttenconn_items !=  nullptr && rttenconn_items->has_operation())
	|| (rsctxtoepp_items !=  nullptr && rsctxtoepp_items->has_operation());
}

std::string System::CtxItems::CtxList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ctx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CtxItems::CtxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ctx-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (pcenfpref.is_set || is_set(pcenfpref.yfilter)) leaf_name_data.push_back(pcenfpref.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (mgmtpctag.is_set || is_set(mgmtpctag.yfilter)) leaf_name_data.push_back(mgmtpctag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (resourceid.is_set || is_set(resourceid.yfilter)) leaf_name_data.push_back(resourceid.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (seclbl.is_set || is_set(seclbl.yfilter)) leaf_name_data.push_back(seclbl.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (oldoperstqual.is_set || is_set(oldoperstqual.yfilter)) leaf_name_data.push_back(oldoperstqual.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (v4tibvalid.is_set || is_set(v4tibvalid.yfilter)) leaf_name_data.push_back(v4tibvalid.get_name_leafdata());
    if (v4tibid.is_set || is_set(v4tibid.yfilter)) leaf_name_data.push_back(v4tibid.get_name_leafdata());
    if (v4tibname.is_set || is_set(v4tibname.yfilter)) leaf_name_data.push_back(v4tibname.get_name_leafdata());
    if (v4tibpending.is_set || is_set(v4tibpending.yfilter)) leaf_name_data.push_back(v4tibpending.get_name_leafdata());
    if (v4tiboperstate.is_set || is_set(v4tiboperstate.yfilter)) leaf_name_data.push_back(v4tiboperstate.get_name_leafdata());
    if (v4tiboperstqual.is_set || is_set(v4tiboperstqual.yfilter)) leaf_name_data.push_back(v4tiboperstqual.get_name_leafdata());
    if (v4tiboldoperstqual.is_set || is_set(v4tiboldoperstqual.yfilter)) leaf_name_data.push_back(v4tiboldoperstqual.get_name_leafdata());
    if (v6tibvalid.is_set || is_set(v6tibvalid.yfilter)) leaf_name_data.push_back(v6tibvalid.get_name_leafdata());
    if (v6tibid.is_set || is_set(v6tibid.yfilter)) leaf_name_data.push_back(v6tibid.get_name_leafdata());
    if (v6tibname.is_set || is_set(v6tibname.yfilter)) leaf_name_data.push_back(v6tibname.get_name_leafdata());
    if (v6tibpending.is_set || is_set(v6tibpending.yfilter)) leaf_name_data.push_back(v6tibpending.get_name_leafdata());
    if (v6tiboperstate.is_set || is_set(v6tiboperstate.yfilter)) leaf_name_data.push_back(v6tiboperstate.get_name_leafdata());
    if (v6tiboperstqual.is_set || is_set(v6tiboperstqual.yfilter)) leaf_name_data.push_back(v6tiboperstqual.get_name_leafdata());
    if (v6tiboldoperstqual.is_set || is_set(v6tiboldoperstqual.yfilter)) leaf_name_data.push_back(v6tiboldoperstqual.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lastchgdts.is_set || is_set(lastchgdts.yfilter)) leaf_name_data.push_back(lastchgdts.get_name_leafdata());
    if (bgprd.is_set || is_set(bgprd.yfilter)) leaf_name_data.push_back(bgprd.get_name_leafdata());
    if (bgprddisp.is_set || is_set(bgprddisp.yfilter)) leaf_name_data.push_back(bgprddisp.get_name_leafdata());
    if (prtclbmp.is_set || is_set(prtclbmp.yfilter)) leaf_name_data.push_back(prtclbmp.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epret-items")
    {
        if(epret_items == nullptr)
        {
            epret_items = std::make_shared<System::CtxItems::CtxList::EpretItems>();
        }
        return epret_items;
    }

    if(child_yang_name == "pfx-items")
    {
        if(pfx_items == nullptr)
        {
            pfx_items = std::make_shared<System::CtxItems::CtxList::PfxItems>();
        }
        return pfx_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::CtxItems::CtxList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::CtxItems::CtxList::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "rttenConn-items")
    {
        if(rttenconn_items == nullptr)
        {
            rttenconn_items = std::make_shared<System::CtxItems::CtxList::RttenConnItems>();
        }
        return rttenconn_items;
    }

    if(child_yang_name == "rsctxToEpP-items")
    {
        if(rsctxtoepp_items == nullptr)
        {
            rsctxtoepp_items = std::make_shared<System::CtxItems::CtxList::RsctxToEpPItems>();
        }
        return rsctxtoepp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epret_items != nullptr)
    {
        children["epret-items"] = epret_items;
    }

    if(pfx_items != nullptr)
    {
        children["pfx-items"] = pfx_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(mgmt_items != nullptr)
    {
        children["mgmt-items"] = mgmt_items;
    }

    if(rttenconn_items != nullptr)
    {
        children["rttenConn-items"] = rttenconn_items;
    }

    if(rsctxtoepp_items != nullptr)
    {
        children["rsctxToEpP-items"] = rsctxtoepp_items;
    }

    return children;
}

void System::CtxItems::CtxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcEnfPref")
    {
        pcenfpref = value;
        pcenfpref.value_namespace = name_space;
        pcenfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtPcTag")
    {
        mgmtpctag = value;
        mgmtpctag.value_namespace = name_space;
        mgmtpctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resourceId")
    {
        resourceid = value;
        resourceid.value_namespace = name_space;
        resourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLbl")
    {
        seclbl = value;
        seclbl.value_namespace = name_space;
        seclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual = value;
        oldoperstqual.value_namespace = name_space;
        oldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid = value;
        v4tibvalid.value_namespace = name_space;
        v4tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibId")
    {
        v4tibid = value;
        v4tibid.value_namespace = name_space;
        v4tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibName")
    {
        v4tibname = value;
        v4tibname.value_namespace = name_space;
        v4tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending = value;
        v4tibpending.value_namespace = name_space;
        v4tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate = value;
        v4tiboperstate.value_namespace = name_space;
        v4tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual = value;
        v4tiboperstqual.value_namespace = name_space;
        v4tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual = value;
        v4tiboldoperstqual.value_namespace = name_space;
        v4tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid = value;
        v6tibvalid.value_namespace = name_space;
        v6tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibId")
    {
        v6tibid = value;
        v6tibid.value_namespace = name_space;
        v6tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibName")
    {
        v6tibname = value;
        v6tibname.value_namespace = name_space;
        v6tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending = value;
        v6tibpending.value_namespace = name_space;
        v6tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate = value;
        v6tiboperstate.value_namespace = name_space;
        v6tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual = value;
        v6tiboperstqual.value_namespace = name_space;
        v6tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual = value;
        v6tiboldoperstqual.value_namespace = name_space;
        v6tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts = value;
        lastchgdts.value_namespace = name_space;
        lastchgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRd")
    {
        bgprd = value;
        bgprd.value_namespace = name_space;
        bgprd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp = value;
        bgprddisp.value_namespace = name_space;
        bgprddisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp = value;
        prtclbmp.value_namespace = name_space;
        prtclbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnId")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "pcEnfPref")
    {
        pcenfpref.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "mgmtPcTag")
    {
        mgmtpctag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "resourceId")
    {
        resourceid.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "secLbl")
    {
        seclbl.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid.yfilter = yfilter;
    }
    if(value_path == "v4TibId")
    {
        v4tibid.yfilter = yfilter;
    }
    if(value_path == "v4TibName")
    {
        v4tibname.yfilter = yfilter;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending.yfilter = yfilter;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid.yfilter = yfilter;
    }
    if(value_path == "v6TibId")
    {
        v6tibid.yfilter = yfilter;
    }
    if(value_path == "v6TibName")
    {
        v6tibname.yfilter = yfilter;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending.yfilter = yfilter;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts.yfilter = yfilter;
    }
    if(value_path == "bgpRd")
    {
        bgprd.yfilter = yfilter;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp.yfilter = yfilter;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "vpnId")
    {
        vpnid.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epret-items" || name == "pfx-items" || name == "db-items" || name == "mgmt-items" || name == "rttenConn-items" || name == "rsctxToEpP-items" || name == "encap" || name == "pcEnfPref" || name == "type" || name == "pcTag" || name == "mgmtPcTag" || name == "name" || name == "resourceId" || name == "id" || name == "descr" || name == "scope" || name == "ctrlrId" || name == "secLbl" || name == "adminState" || name == "operState" || name == "operStQual" || name == "oldOperStQual" || name == "gsdbCtx" || name == "pending" || name == "v4TibValid" || name == "v4TibId" || name == "v4TibName" || name == "v4TibPending" || name == "v4TibOperState" || name == "v4TibOperStQual" || name == "v4TibOldOperStQual" || name == "v6TibValid" || name == "v6TibId" || name == "v6TibName" || name == "v6TibPending" || name == "v6TibOperState" || name == "v6TibOperStQual" || name == "v6TibOldOperStQual" || name == "createTs" || name == "lastChgdTs" || name == "bgpRd" || name == "bgpRdDisp" || name == "prtclBmp" || name == "oui" || name == "vpnId")
        return true;
    return false;
}

System::CtxItems::CtxList::EpretItems::EpretItems()
    :
    localepageintvl{YType::uint16, "localEpAgeIntvl"},
    remoteepageintvl{YType::uint16, "remoteEpAgeIntvl"},
    bounceageintvl{YType::uint16, "bounceAgeIntvl"},
    bouncetrig{YType::str, "bounceTrig"},
    movefreq{YType::uint16, "moveFreq"},
    holdintvl{YType::uint16, "holdIntvl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "epret-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::EpretItems::~EpretItems()
{
}

bool System::CtxItems::CtxList::EpretItems::has_data() const
{
    if (is_presence_container) return true;
    return localepageintvl.is_set
	|| remoteepageintvl.is_set
	|| bounceageintvl.is_set
	|| bouncetrig.is_set
	|| movefreq.is_set
	|| holdintvl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::CtxItems::CtxList::EpretItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localepageintvl.yfilter)
	|| ydk::is_set(remoteepageintvl.yfilter)
	|| ydk::is_set(bounceageintvl.yfilter)
	|| ydk::is_set(bouncetrig.yfilter)
	|| ydk::is_set(movefreq.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CtxItems::CtxList::EpretItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epret-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::EpretItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localepageintvl.is_set || is_set(localepageintvl.yfilter)) leaf_name_data.push_back(localepageintvl.get_name_leafdata());
    if (remoteepageintvl.is_set || is_set(remoteepageintvl.yfilter)) leaf_name_data.push_back(remoteepageintvl.get_name_leafdata());
    if (bounceageintvl.is_set || is_set(bounceageintvl.yfilter)) leaf_name_data.push_back(bounceageintvl.get_name_leafdata());
    if (bouncetrig.is_set || is_set(bouncetrig.yfilter)) leaf_name_data.push_back(bouncetrig.get_name_leafdata());
    if (movefreq.is_set || is_set(movefreq.yfilter)) leaf_name_data.push_back(movefreq.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::EpretItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::EpretItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::EpretItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localEpAgeIntvl")
    {
        localepageintvl = value;
        localepageintvl.value_namespace = name_space;
        localepageintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteEpAgeIntvl")
    {
        remoteepageintvl = value;
        remoteepageintvl.value_namespace = name_space;
        remoteepageintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bounceAgeIntvl")
    {
        bounceageintvl = value;
        bounceageintvl.value_namespace = name_space;
        bounceageintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bounceTrig")
    {
        bouncetrig = value;
        bouncetrig.value_namespace = name_space;
        bouncetrig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moveFreq")
    {
        movefreq = value;
        movefreq.value_namespace = name_space;
        movefreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
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

void System::CtxItems::CtxList::EpretItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localEpAgeIntvl")
    {
        localepageintvl.yfilter = yfilter;
    }
    if(value_path == "remoteEpAgeIntvl")
    {
        remoteepageintvl.yfilter = yfilter;
    }
    if(value_path == "bounceAgeIntvl")
    {
        bounceageintvl.yfilter = yfilter;
    }
    if(value_path == "bounceTrig")
    {
        bouncetrig.yfilter = yfilter;
    }
    if(value_path == "moveFreq")
    {
        movefreq.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
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

bool System::CtxItems::CtxList::EpretItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localEpAgeIntvl" || name == "remoteEpAgeIntvl" || name == "bounceAgeIntvl" || name == "bounceTrig" || name == "moveFreq" || name == "holdIntvl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::CtxItems::CtxList::PfxItems::PfxItems()
    :
    pfxentry_list(this, {"addr"})
{

    yang_name = "pfx-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::PfxItems::~PfxItems()
{
}

bool System::CtxItems::CtxList::PfxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxentry_list.len(); index++)
    {
        if(pfxentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::PfxItems::has_operation() const
{
    for (std::size_t index=0; index<pfxentry_list.len(); index++)
    {
        if(pfxentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::PfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::PfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::PfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxEntry-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::PfxItems::PfxEntryList>();
        c->parent = this;
        pfxentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::PfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::PfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::PfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::PfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxEntry-list")
        return true;
    return false;
}

System::CtxItems::CtxList::PfxItems::PfxEntryList::PfxEntryList()
    :
    addr{YType::str, "addr"},
    pctag{YType::uint32, "pcTag"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "PfxEntry-list"; yang_parent_name = "pfx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::PfxItems::PfxEntryList::~PfxEntryList()
{
}

bool System::CtxItems::CtxList::PfxItems::PfxEntryList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| pctag.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::CtxItems::CtxList::PfxItems::PfxEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CtxItems::CtxList::PfxItems::PfxEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxEntry-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::PfxItems::PfxEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::PfxItems::PfxEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::PfxItems::PfxEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::PfxItems::PfxEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
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

void System::CtxItems::CtxList::PfxItems::PfxEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
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

bool System::CtxItems::CtxList::PfxItems::PfxEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "pcTag" || name == "operSt" || name == "operStQual" || name == "name" || name == "descr")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::~DbItems()
{
}

bool System::CtxItems::CtxList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::~DbList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::CtxItems::CtxList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::CtxItems::CtxList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmaceptoipepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::MgmtItems()
    :
    rtdmgmtif_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::~MgmtItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtdMgmtIf-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList>();
        c->parent = this;
        rtdmgmtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtdmgmtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtdMgmtIf-list")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtdMgmtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtpseudoif_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>())
    , rsrtdmgmtconf_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>())
    , rtvrfmbr_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>())
{
    rtpseudoif_items->parent = this;
    rsrtdmgmtconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "RtdMgmtIf-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::~RtdMgmtIfList()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtdMgmtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rsrtdMgmtConf-items")
    {
        if(rsrtdmgmtconf_items == nullptr)
        {
            rsrtdmgmtconf_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>();
        }
        return rsrtdmgmtconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtpseudoif_items != nullptr)
    {
        children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rsrtdmgmtconf_items != nullptr)
    {
        children["rsrtdMgmtConf-items"] = rsrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpseudoIf-items" || name == "rsrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::RsrtdMgmtConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsrtdMgmtConf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::~RsrtdMgmtConfItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtdMgmtConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::RttenConnItems::RttenConnItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rttenConn-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::RttenConnItems::~RttenConnItems()
{
}

bool System::CtxItems::CtxList::RttenConnItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CtxItems::CtxList::RttenConnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CtxItems::CtxList::RttenConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttenConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::RttenConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::RttenConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::RttenConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::RttenConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CtxItems::CtxList::RttenConnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CtxItems::CtxList::RttenConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CtxItems::CtxList::RsctxToEpPItems::RsctxToEpPItems()
    :
    rsctxtoepp_list(this, {"tdn"})
{

    yang_name = "rsctxToEpP-items"; yang_parent_name = "Ctx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::RsctxToEpPItems::~RsctxToEpPItems()
{
}

bool System::CtxItems::CtxList::RsctxToEpPItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsctxtoepp_list.len(); index++)
    {
        if(rsctxtoepp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CtxItems::CtxList::RsctxToEpPItems::has_operation() const
{
    for (std::size_t index=0; index<rsctxtoepp_list.len(); index++)
    {
        if(rsctxtoepp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CtxItems::CtxList::RsctxToEpPItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsctxToEpP-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::RsctxToEpPItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::RsctxToEpPItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCtxToEpP-list")
    {
        auto c = std::make_shared<System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList>();
        c->parent = this;
        rsctxtoepp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::RsctxToEpPItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsctxtoepp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CtxItems::CtxList::RsctxToEpPItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CtxItems::CtxList::RsctxToEpPItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CtxItems::CtxList::RsctxToEpPItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCtxToEpP-list")
        return true;
    return false;
}

System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::RsCtxToEpPList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsCtxToEpP-list"; yang_parent_name = "rsctxToEpP-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::~RsCtxToEpPList()
{
}

bool System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCtxToEpP-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstItems::~InstItems()
{
}

bool System::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::get_children() const
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

void System::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    resourceid{YType::uint16, "resourceId"},
    id{YType::uint16, "id"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    scope{YType::uint32, "scope"},
    ctrlrid{YType::uint32, "ctrlrId"},
    seclbl{YType::uint16, "secLbl"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    operstqual{YType::enumeration, "operStQual"},
    oldoperstqual{YType::enumeration, "oldOperStQual"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    pending{YType::boolean, "pending"},
    v4tibvalid{YType::boolean, "v4TibValid"},
    v4tibid{YType::uint32, "v4TibId"},
    v4tibname{YType::str, "v4TibName"},
    v4tibpending{YType::boolean, "v4TibPending"},
    v4tiboperstate{YType::enumeration, "v4TibOperState"},
    v4tiboperstqual{YType::enumeration, "v4TibOperStQual"},
    v4tiboldoperstqual{YType::enumeration, "v4TibOldOperStQual"},
    v6tibvalid{YType::boolean, "v6TibValid"},
    v6tibid{YType::uint32, "v6TibId"},
    v6tibname{YType::str, "v6TibName"},
    v6tibpending{YType::boolean, "v6TibPending"},
    v6tiboperstate{YType::enumeration, "v6TibOperState"},
    v6tiboperstqual{YType::enumeration, "v6TibOperStQual"},
    v6tiboldoperstqual{YType::enumeration, "v6TibOldOperStQual"},
    createts{YType::str, "createTs"},
    lastchgdts{YType::str, "lastChgdTs"},
    bgprd{YType::str, "bgpRd"},
    bgprddisp{YType::str, "bgpRdDisp"},
    prtclbmp{YType::uint32, "prtclBmp"},
    oui{YType::uint32, "oui"},
    vpnid{YType::uint32, "vpnId"}
        ,
    tree_items(std::make_shared<System::InstItems::InstList::TreeItems>())
    , dom_items(std::make_shared<System::InstItems::InstList::DomItems>())
    , db_items(std::make_shared<System::InstItems::InstList::DbItems>())
    , shchp_items(std::make_shared<System::InstItems::InstList::ShchpItems>())
    , mgmt_items(std::make_shared<System::InstItems::InstList::MgmtItems>())
    , rsvrfmbr_items(std::make_shared<System::InstItems::InstList::RsvrfMbrItems>())
{
    tree_items->parent = this;
    dom_items->parent = this;
    db_items->parent = this;
    shchp_items->parent = this;
    mgmt_items->parent = this;
    rsvrfmbr_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstItems::InstList::~InstList()
{
}

bool System::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| resourceid.is_set
	|| id.is_set
	|| encap.is_set
	|| descr.is_set
	|| scope.is_set
	|| ctrlrid.is_set
	|| seclbl.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| operstqual.is_set
	|| oldoperstqual.is_set
	|| gsdbctx.is_set
	|| pending.is_set
	|| v4tibvalid.is_set
	|| v4tibid.is_set
	|| v4tibname.is_set
	|| v4tibpending.is_set
	|| v4tiboperstate.is_set
	|| v4tiboperstqual.is_set
	|| v4tiboldoperstqual.is_set
	|| v6tibvalid.is_set
	|| v6tibid.is_set
	|| v6tibname.is_set
	|| v6tibpending.is_set
	|| v6tiboperstate.is_set
	|| v6tiboperstqual.is_set
	|| v6tiboldoperstqual.is_set
	|| createts.is_set
	|| lastchgdts.is_set
	|| bgprd.is_set
	|| bgprddisp.is_set
	|| prtclbmp.is_set
	|| oui.is_set
	|| vpnid.is_set
	|| (tree_items !=  nullptr && tree_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (shchp_items !=  nullptr && shchp_items->has_data())
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (rsvrfmbr_items !=  nullptr && rsvrfmbr_items->has_data());
}

bool System::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(resourceid.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(seclbl.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(oldoperstqual.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(v4tibvalid.yfilter)
	|| ydk::is_set(v4tibid.yfilter)
	|| ydk::is_set(v4tibname.yfilter)
	|| ydk::is_set(v4tibpending.yfilter)
	|| ydk::is_set(v4tiboperstate.yfilter)
	|| ydk::is_set(v4tiboperstqual.yfilter)
	|| ydk::is_set(v4tiboldoperstqual.yfilter)
	|| ydk::is_set(v6tibvalid.yfilter)
	|| ydk::is_set(v6tibid.yfilter)
	|| ydk::is_set(v6tibname.yfilter)
	|| ydk::is_set(v6tibpending.yfilter)
	|| ydk::is_set(v6tiboperstate.yfilter)
	|| ydk::is_set(v6tiboperstqual.yfilter)
	|| ydk::is_set(v6tiboldoperstqual.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lastchgdts.yfilter)
	|| ydk::is_set(bgprd.yfilter)
	|| ydk::is_set(bgprddisp.yfilter)
	|| ydk::is_set(prtclbmp.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (tree_items !=  nullptr && tree_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (shchp_items !=  nullptr && shchp_items->has_operation())
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (rsvrfmbr_items !=  nullptr && rsvrfmbr_items->has_operation());
}

std::string System::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (resourceid.is_set || is_set(resourceid.yfilter)) leaf_name_data.push_back(resourceid.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (seclbl.is_set || is_set(seclbl.yfilter)) leaf_name_data.push_back(seclbl.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (oldoperstqual.is_set || is_set(oldoperstqual.yfilter)) leaf_name_data.push_back(oldoperstqual.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (v4tibvalid.is_set || is_set(v4tibvalid.yfilter)) leaf_name_data.push_back(v4tibvalid.get_name_leafdata());
    if (v4tibid.is_set || is_set(v4tibid.yfilter)) leaf_name_data.push_back(v4tibid.get_name_leafdata());
    if (v4tibname.is_set || is_set(v4tibname.yfilter)) leaf_name_data.push_back(v4tibname.get_name_leafdata());
    if (v4tibpending.is_set || is_set(v4tibpending.yfilter)) leaf_name_data.push_back(v4tibpending.get_name_leafdata());
    if (v4tiboperstate.is_set || is_set(v4tiboperstate.yfilter)) leaf_name_data.push_back(v4tiboperstate.get_name_leafdata());
    if (v4tiboperstqual.is_set || is_set(v4tiboperstqual.yfilter)) leaf_name_data.push_back(v4tiboperstqual.get_name_leafdata());
    if (v4tiboldoperstqual.is_set || is_set(v4tiboldoperstqual.yfilter)) leaf_name_data.push_back(v4tiboldoperstqual.get_name_leafdata());
    if (v6tibvalid.is_set || is_set(v6tibvalid.yfilter)) leaf_name_data.push_back(v6tibvalid.get_name_leafdata());
    if (v6tibid.is_set || is_set(v6tibid.yfilter)) leaf_name_data.push_back(v6tibid.get_name_leafdata());
    if (v6tibname.is_set || is_set(v6tibname.yfilter)) leaf_name_data.push_back(v6tibname.get_name_leafdata());
    if (v6tibpending.is_set || is_set(v6tibpending.yfilter)) leaf_name_data.push_back(v6tibpending.get_name_leafdata());
    if (v6tiboperstate.is_set || is_set(v6tiboperstate.yfilter)) leaf_name_data.push_back(v6tiboperstate.get_name_leafdata());
    if (v6tiboperstqual.is_set || is_set(v6tiboperstqual.yfilter)) leaf_name_data.push_back(v6tiboperstqual.get_name_leafdata());
    if (v6tiboldoperstqual.is_set || is_set(v6tiboldoperstqual.yfilter)) leaf_name_data.push_back(v6tiboldoperstqual.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lastchgdts.is_set || is_set(lastchgdts.yfilter)) leaf_name_data.push_back(lastchgdts.get_name_leafdata());
    if (bgprd.is_set || is_set(bgprd.yfilter)) leaf_name_data.push_back(bgprd.get_name_leafdata());
    if (bgprddisp.is_set || is_set(bgprddisp.yfilter)) leaf_name_data.push_back(bgprddisp.get_name_leafdata());
    if (prtclbmp.is_set || is_set(prtclbmp.yfilter)) leaf_name_data.push_back(prtclbmp.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tree-items")
    {
        if(tree_items == nullptr)
        {
            tree_items = std::make_shared<System::InstItems::InstList::TreeItems>();
        }
        return tree_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::InstItems::InstList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "shchp-items")
    {
        if(shchp_items == nullptr)
        {
            shchp_items = std::make_shared<System::InstItems::InstList::ShchpItems>();
        }
        return shchp_items;
    }

    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::InstItems::InstList::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "rsvrfMbr-items")
    {
        if(rsvrfmbr_items == nullptr)
        {
            rsvrfmbr_items = std::make_shared<System::InstItems::InstList::RsvrfMbrItems>();
        }
        return rsvrfmbr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tree_items != nullptr)
    {
        children["tree-items"] = tree_items;
    }

    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(shchp_items != nullptr)
    {
        children["shchp-items"] = shchp_items;
    }

    if(mgmt_items != nullptr)
    {
        children["mgmt-items"] = mgmt_items;
    }

    if(rsvrfmbr_items != nullptr)
    {
        children["rsvrfMbr-items"] = rsvrfmbr_items;
    }

    return children;
}

void System::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resourceId")
    {
        resourceid = value;
        resourceid.value_namespace = name_space;
        resourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLbl")
    {
        seclbl = value;
        seclbl.value_namespace = name_space;
        seclbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual = value;
        oldoperstqual.value_namespace = name_space;
        oldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid = value;
        v4tibvalid.value_namespace = name_space;
        v4tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibId")
    {
        v4tibid = value;
        v4tibid.value_namespace = name_space;
        v4tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibName")
    {
        v4tibname = value;
        v4tibname.value_namespace = name_space;
        v4tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending = value;
        v4tibpending.value_namespace = name_space;
        v4tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate = value;
        v4tiboperstate.value_namespace = name_space;
        v4tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual = value;
        v4tiboperstqual.value_namespace = name_space;
        v4tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual = value;
        v4tiboldoperstqual.value_namespace = name_space;
        v4tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid = value;
        v6tibvalid.value_namespace = name_space;
        v6tibvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibId")
    {
        v6tibid = value;
        v6tibid.value_namespace = name_space;
        v6tibid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibName")
    {
        v6tibname = value;
        v6tibname.value_namespace = name_space;
        v6tibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending = value;
        v6tibpending.value_namespace = name_space;
        v6tibpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate = value;
        v6tiboperstate.value_namespace = name_space;
        v6tiboperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual = value;
        v6tiboperstqual.value_namespace = name_space;
        v6tiboperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual = value;
        v6tiboldoperstqual.value_namespace = name_space;
        v6tiboldoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts = value;
        lastchgdts.value_namespace = name_space;
        lastchgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRd")
    {
        bgprd = value;
        bgprd.value_namespace = name_space;
        bgprd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp = value;
        bgprddisp.value_namespace = name_space;
        bgprddisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp = value;
        prtclbmp.value_namespace = name_space;
        prtclbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnId")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "resourceId")
    {
        resourceid.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "secLbl")
    {
        seclbl.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "oldOperStQual")
    {
        oldoperstqual.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "v4TibValid")
    {
        v4tibvalid.yfilter = yfilter;
    }
    if(value_path == "v4TibId")
    {
        v4tibid.yfilter = yfilter;
    }
    if(value_path == "v4TibName")
    {
        v4tibname.yfilter = yfilter;
    }
    if(value_path == "v4TibPending")
    {
        v4tibpending.yfilter = yfilter;
    }
    if(value_path == "v4TibOperState")
    {
        v4tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v4TibOperStQual")
    {
        v4tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v4TibOldOperStQual")
    {
        v4tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibValid")
    {
        v6tibvalid.yfilter = yfilter;
    }
    if(value_path == "v6TibId")
    {
        v6tibid.yfilter = yfilter;
    }
    if(value_path == "v6TibName")
    {
        v6tibname.yfilter = yfilter;
    }
    if(value_path == "v6TibPending")
    {
        v6tibpending.yfilter = yfilter;
    }
    if(value_path == "v6TibOperState")
    {
        v6tiboperstate.yfilter = yfilter;
    }
    if(value_path == "v6TibOperStQual")
    {
        v6tiboperstqual.yfilter = yfilter;
    }
    if(value_path == "v6TibOldOperStQual")
    {
        v6tiboldoperstqual.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "lastChgdTs")
    {
        lastchgdts.yfilter = yfilter;
    }
    if(value_path == "bgpRd")
    {
        bgprd.yfilter = yfilter;
    }
    if(value_path == "bgpRdDisp")
    {
        bgprddisp.yfilter = yfilter;
    }
    if(value_path == "prtclBmp")
    {
        prtclbmp.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "vpnId")
    {
        vpnid.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tree-items" || name == "dom-items" || name == "db-items" || name == "shchp-items" || name == "mgmt-items" || name == "rsvrfMbr-items" || name == "name" || name == "resourceId" || name == "id" || name == "encap" || name == "descr" || name == "scope" || name == "ctrlrId" || name == "secLbl" || name == "adminState" || name == "operState" || name == "operStQual" || name == "oldOperStQual" || name == "gsdbCtx" || name == "pending" || name == "v4TibValid" || name == "v4TibId" || name == "v4TibName" || name == "v4TibPending" || name == "v4TibOperState" || name == "v4TibOperStQual" || name == "v4TibOldOperStQual" || name == "v6TibValid" || name == "v6TibId" || name == "v6TibName" || name == "v6TibPending" || name == "v6TibOperState" || name == "v6TibOperStQual" || name == "v6TibOldOperStQual" || name == "createTs" || name == "lastChgdTs" || name == "bgpRd" || name == "bgpRdDisp" || name == "prtclBmp" || name == "oui" || name == "vpnId")
        return true;
    return false;
}

System::InstItems::InstList::TreeItems::TreeItems()
    :
    tree_list(this, {"id"})
{

    yang_name = "tree-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::TreeItems::~TreeItems()
{
}

bool System::InstItems::InstList::TreeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tree_list.len(); index++)
    {
        if(tree_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::TreeItems::has_operation() const
{
    for (std::size_t index=0; index<tree_list.len(); index++)
    {
        if(tree_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::TreeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tree-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::TreeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::TreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tree-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::TreeItems::TreeList>();
        c->parent = this;
        tree_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::TreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tree_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::TreeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::TreeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::TreeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tree-list")
        return true;
    return false;
}

System::InstItems::InstList::TreeItems::TreeList::TreeList()
    :
    id{YType::uint8, "id"},
    root{YType::str, "root"},
    adminst{YType::enumeration, "adminSt"},
    name{YType::str, "name"}
{

    yang_name = "Tree-list"; yang_parent_name = "tree-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::TreeItems::TreeList::~TreeList()
{
}

bool System::InstItems::InstList::TreeItems::TreeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| root.is_set
	|| adminst.is_set
	|| name.is_set;
}

bool System::InstItems::InstList::TreeItems::TreeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(root.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::InstItems::InstList::TreeItems::TreeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tree-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::TreeItems::TreeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::TreeItems::TreeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::TreeItems::TreeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::TreeItems::TreeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::TreeItems::TreeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::TreeItems::TreeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "root" || name == "adminSt" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    rd{YType::str, "rd"},
    operrd{YType::str, "operRd"}
        ,
    af_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems>())
{
    af_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rd.is_set
	|| operrd.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(operrd.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (operrd.is_set || is_set(operrd.yfilter)) leaf_name_data.push_back(operrd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRd")
    {
        operrd = value;
        operrd.value_namespace = name_space;
        operrd.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "operRd")
    {
        operrd.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "rd" || name == "operRd")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::AfItems()
    :
    domaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::~AfItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList>();
        c->parent = this;
        domaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DomAfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ctrl_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems>())
{
    ctrl_items->parent = this;

    yang_name = "DomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::~DomAfList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ctrl_items != nullptr)
    {
        children["ctrl-items"] = ctrl_items;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::CtrlItems()
    :
    afctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::~CtrlItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AfCtrl-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList>();
        c->parent = this;
        afctrl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : afctrl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AfCtrl-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::AfCtrlList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rttp_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "AfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::~AfCtrlList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "AfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::~RttpItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"},
    operrttauto{YType::str, "operRttAuto"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>())
    , rtctrlmap_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems>())
    , rtctrldefmap_items(std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems>())
{
    ent_items->parent = this;
    rtctrlmap_items->parent = this;
    rtctrldefmap_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::~RttPList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| cfgsrcctrlr.is_set
	|| operrttauto.is_set
	|| name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_data())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_data());
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_operation())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_operation());
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtctrlmap-items")
    {
        if(rtctrlmap_items == nullptr)
        {
            rtctrlmap_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems>();
        }
        return rtctrlmap_items;
    }

    if(child_yang_name == "rtctrldefmap-items")
    {
        if(rtctrldefmap_items == nullptr)
        {
            rtctrldefmap_items = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems>();
        }
        return rtctrldefmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    if(rtctrlmap_items != nullptr)
    {
        children["rtctrlmap-items"] = rtctrlmap_items;
    }

    if(rtctrldefmap_items != nullptr)
    {
        children["rtctrldefmap-items"] = rtctrldefmap_items;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
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

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
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

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtctrlmap-items" || name == "rtctrldefmap-items" || name == "type" || name == "cfgSrcCtrlr" || name == "operRttAuto" || name == "name" || name == "descr")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| cfgsrcctrlr.is_set;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "cfgSrcCtrlr")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::RtctrlmapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrlmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::~RtctrlmapItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrlmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::RtctrldefmapItems()
    :
    pfxlimit{YType::uint32, "pfxLimit"},
    allowvpn{YType::boolean, "allowVpn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrldefmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::~RtctrldefmapItems()
{
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxlimit.is_set
	|| allowvpn.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlimit.yfilter)
	|| ydk::is_set(allowvpn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrldefmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlimit.is_set || is_set(pfxlimit.yfilter)) leaf_name_data.push_back(pfxlimit.get_name_leafdata());
    if (allowvpn.is_set || is_set(allowvpn.yfilter)) leaf_name_data.push_back(allowvpn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit = value;
        pfxlimit.value_namespace = name_space;
        pfxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowVpn")
    {
        allowvpn = value;
        allowvpn.value_namespace = name_space;
        allowvpn.value_namespace_prefix = name_space_prefix;
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

void System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit.yfilter = yfilter;
    }
    if(value_path == "allowVpn")
    {
        allowvpn.yfilter = yfilter;
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

bool System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxLimit" || name == "allowVpn" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::~DbItems()
{
}

bool System::InstItems::InstList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::~DbList()
{
}

bool System::InstItems::InstList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::InstItems::InstList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::InstItems::InstList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    return children;
}

void System::InstItems::InstList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmaceptoipepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::ShchpItems::ShchpItems()
    :
    shardchp_list(this, {"af"})
{

    yang_name = "shchp-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::ShchpItems::~ShchpItems()
{
}

bool System::InstItems::InstList::ShchpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<shardchp_list.len(); index++)
    {
        if(shardchp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::ShchpItems::has_operation() const
{
    for (std::size_t index=0; index<shardchp_list.len(); index++)
    {
        if(shardchp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::ShchpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shchp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::ShchpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::ShchpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ShardChP-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::ShchpItems::ShardChPList>();
        c->parent = this;
        shardchp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::ShchpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : shardchp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::ShchpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::ShchpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::ShchpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ShardChP-list")
        return true;
    return false;
}

System::InstItems::InstList::ShchpItems::ShardChPList::ShardChPList()
    :
    af{YType::enumeration, "af"},
    node{YType::str, "node"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "ShardChP-list"; yang_parent_name = "shchp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::ShchpItems::ShardChPList::~ShardChPList()
{
}

bool System::InstItems::InstList::ShchpItems::ShardChPList::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| node.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::InstItems::InstList::ShchpItems::ShardChPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::InstItems::InstList::ShchpItems::ShardChPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ShardChP-list";
    ADD_KEY_TOKEN(af, "af");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::ShchpItems::ShardChPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::ShchpItems::ShardChPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::ShchpItems::ShardChPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::ShchpItems::ShardChPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
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

void System::InstItems::InstList::ShchpItems::ShardChPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
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

bool System::InstItems::InstList::ShchpItems::ShardChPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "node" || name == "name" || name == "descr")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::MgmtItems()
    :
    rtdmgmtif_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::~MgmtItems()
{
}

bool System::InstItems::InstList::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<rtdmgmtif_list.len(); index++)
    {
        if(rtdmgmtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtdMgmtIf-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList>();
        c->parent = this;
        rtdmgmtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtdmgmtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtdMgmtIf-list")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtdMgmtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtpseudoif_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>())
    , rsrtdmgmtconf_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>())
    , rtvrfmbr_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>())
{
    rtpseudoif_items->parent = this;
    rsrtdmgmtconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "RtdMgmtIf-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::~RtdMgmtIfList()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rsrtdmgmtconf_items !=  nullptr && rsrtdmgmtconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtdMgmtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rsrtdMgmtConf-items")
    {
        if(rsrtdmgmtconf_items == nullptr)
        {
            rsrtdmgmtconf_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems>();
        }
        return rsrtdmgmtconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtpseudoif_items != nullptr)
    {
        children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rsrtdmgmtconf_items != nullptr)
    {
        children["rsrtdMgmtConf-items"] = rsrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpseudoIf-items" || name == "rsrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::RsrtdMgmtConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsrtdMgmtConf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::~RsrtdMgmtConfItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrtdMgmtConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RtdMgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InstItems::InstList::RsvrfMbrItems::RsvrfMbrItems()
    :
    rsvrfmbr_list(this, {"tdn"})
{

    yang_name = "rsvrfMbr-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::RsvrfMbrItems::~RsvrfMbrItems()
{
}

bool System::InstItems::InstList::RsvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvrfmbr_list.len(); index++)
    {
        if(rsvrfmbr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstItems::InstList::RsvrfMbrItems::has_operation() const
{
    for (std::size_t index=0; index<rsvrfmbr_list.len(); index++)
    {
        if(rsvrfmbr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstItems::InstList::RsvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::RsvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::RsvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVrfMbr-list")
    {
        auto c = std::make_shared<System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList>();
        c->parent = this;
        rsvrfmbr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::RsvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvrfmbr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::InstItems::InstList::RsvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstItems::InstList::RsvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstItems::InstList::RsvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVrfMbr-list")
        return true;
    return false;
}

System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::RsVrfMbrList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVrfMbr-list"; yang_parent_name = "rsvrfMbr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::~RsVrfMbrList()
{
}

bool System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVrfMbr-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::L3capprovItems::L3capprovItems()
    :
    prov_list(this, {"subj", "type"})
{

    yang_name = "l3capprov-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3capprovItems::~L3capprovItems()
{
}

bool System::L3capprovItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L3capprovItems::has_operation() const
{
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L3capprovItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3capprovItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3capprov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3capprovItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3capprovItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prov-list")
    {
        auto c = std::make_shared<System::L3capprovItems::ProvList>();
        c->parent = this;
        prov_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3capprovItems::get_children() const
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

void System::L3capprovItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L3capprovItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L3capprovItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Prov-list")
        return true;
    return false;
}

System::L3capprovItems::ProvList::ProvList()
    :
    subj{YType::enumeration, "subj"},
    type{YType::enumeration, "type"},
    total{YType::uint32, "total"},
    remaining{YType::uint32, "remaining"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "Prov-list"; yang_parent_name = "l3capprov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3capprovItems::ProvList::~ProvList()
{
}

bool System::L3capprovItems::ProvList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| type.is_set
	|| total.is_set
	|| remaining.is_set
	|| utilization.is_set;
}

bool System::L3capprovItems::ProvList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(remaining.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string System::L3capprovItems::ProvList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3capprov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3capprovItems::ProvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Prov-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3capprovItems::ProvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (remaining.is_set || is_set(remaining.yfilter)) leaf_name_data.push_back(remaining.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3capprovItems::ProvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3capprovItems::ProvList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::L3capprovItems::ProvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::L3capprovItems::ProvList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::L3capprovItems::ProvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "type" || name == "total" || name == "remaining" || name == "utilization")
        return true;
    return false;
}

System::L3vmItems::L3vmItems()
    :
    vrfmemberchangeretainl3cfg{YType::boolean, "vrfmemberchangeretainl3cfg"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::L3vmItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "l3vm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::~L3vmItems()
{
}

bool System::L3vmItems::has_data() const
{
    if (is_presence_container) return true;
    return vrfmemberchangeretainl3cfg.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::L3vmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfmemberchangeretainl3cfg.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::L3vmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfmemberchangeretainl3cfg.is_set || is_set(vrfmemberchangeretainl3cfg.yfilter)) leaf_name_data.push_back(vrfmemberchangeretainl3cfg.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3vmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::L3vmItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3vmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::L3vmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfmemberchangeretainl3cfg")
    {
        vrfmemberchangeretainl3cfg = value;
        vrfmemberchangeretainl3cfg.value_namespace = name_space;
        vrfmemberchangeretainl3cfg.value_namespace_prefix = name_space_prefix;
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

void System::L3vmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfmemberchangeretainl3cfg")
    {
        vrfmemberchangeretainl3cfg.yfilter = yfilter;
    }
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

bool System::L3vmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "vrfmemberchangeretainl3cfg" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::L3vmItems::InstItems::InstItems()
    :
    vrfallocid{YType::uint32, "vrfAllocId"},
    tblallocid{YType::uint32, "tblAllocId"},
    featureset{YType::uint32, "featureSet"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dommbr_items(std::make_shared<System::L3vmItems::InstItems::DommbrItems>())
    , tbl_items(std::make_shared<System::L3vmItems::InstItems::TblItems>())
{
    dommbr_items->parent = this;
    tbl_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "l3vm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::~InstItems()
{
}

bool System::L3vmItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return vrfallocid.is_set
	|| tblallocid.is_set
	|| featureset.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dommbr_items !=  nullptr && dommbr_items->has_data())
	|| (tbl_items !=  nullptr && tbl_items->has_data());
}

bool System::L3vmItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfallocid.yfilter)
	|| ydk::is_set(tblallocid.yfilter)
	|| ydk::is_set(featureset.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dommbr_items !=  nullptr && dommbr_items->has_operation())
	|| (tbl_items !=  nullptr && tbl_items->has_operation());
}

std::string System::L3vmItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfallocid.is_set || is_set(vrfallocid.yfilter)) leaf_name_data.push_back(vrfallocid.get_name_leafdata());
    if (tblallocid.is_set || is_set(tblallocid.yfilter)) leaf_name_data.push_back(tblallocid.get_name_leafdata());
    if (featureset.is_set || is_set(featureset.yfilter)) leaf_name_data.push_back(featureset.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3vmItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dommbr-items")
    {
        if(dommbr_items == nullptr)
        {
            dommbr_items = std::make_shared<System::L3vmItems::InstItems::DommbrItems>();
        }
        return dommbr_items;
    }

    if(child_yang_name == "tbl-items")
    {
        if(tbl_items == nullptr)
        {
            tbl_items = std::make_shared<System::L3vmItems::InstItems::TblItems>();
        }
        return tbl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3vmItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dommbr_items != nullptr)
    {
        children["dommbr-items"] = dommbr_items;
    }

    if(tbl_items != nullptr)
    {
        children["tbl-items"] = tbl_items;
    }

    return children;
}

void System::L3vmItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfAllocId")
    {
        vrfallocid = value;
        vrfallocid.value_namespace = name_space;
        vrfallocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblAllocId")
    {
        tblallocid = value;
        tblallocid.value_namespace = name_space;
        tblallocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "featureSet")
    {
        featureset = value;
        featureset.value_namespace = name_space;
        featureset.value_namespace_prefix = name_space_prefix;
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

void System::L3vmItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfAllocId")
    {
        vrfallocid.yfilter = yfilter;
    }
    if(value_path == "tblAllocId")
    {
        tblallocid.yfilter = yfilter;
    }
    if(value_path == "featureSet")
    {
        featureset.yfilter = yfilter;
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

bool System::L3vmItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dommbr-items" || name == "tbl-items" || name == "vrfAllocId" || name == "tblAllocId" || name == "featureSet" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::L3vmItems::InstItems::DommbrItems::DommbrItems()
    :
    dommbrif_list(this, {"id"})
{

    yang_name = "dommbr-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::DommbrItems::~DommbrItems()
{
}

bool System::L3vmItems::InstItems::DommbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dommbrif_list.len(); index++)
    {
        if(dommbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L3vmItems::InstItems::DommbrItems::has_operation() const
{
    for (std::size_t index=0; index<dommbrif_list.len(); index++)
    {
        if(dommbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L3vmItems::InstItems::DommbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::DommbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dommbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::DommbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3vmItems::InstItems::DommbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomMbrIf-list")
    {
        auto c = std::make_shared<System::L3vmItems::InstItems::DommbrItems::DomMbrIfList>();
        c->parent = this;
        dommbrif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3vmItems::InstItems::DommbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dommbrif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::L3vmItems::InstItems::DommbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L3vmItems::InstItems::DommbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L3vmItems::InstItems::DommbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomMbrIf-list")
        return true;
    return false;
}

System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::DomMbrIfList()
    :
    id{YType::str, "id"},
    iod{YType::uint32, "iod"},
    vrfid{YType::uint16, "vrfId"},
    oldvrfid{YType::uint16, "oldVrfId"},
    vrfname{YType::str, "vrfName"},
    oldvrfname{YType::str, "oldVrfName"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    gsdbctxtype{YType::enumeration, "gsdbCtxType"},
    bgpextcommval{YType::uint8, "bgpExtCommVal"},
    name{YType::str, "name"}
{

    yang_name = "DomMbrIf-list"; yang_parent_name = "dommbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::~DomMbrIfList()
{
}

bool System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| iod.is_set
	|| vrfid.is_set
	|| oldvrfid.is_set
	|| vrfname.is_set
	|| oldvrfname.is_set
	|| gsdbctx.is_set
	|| gsdbctxtype.is_set
	|| bgpextcommval.is_set
	|| name.is_set;
}

bool System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(oldvrfid.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(oldvrfname.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(gsdbctxtype.yfilter)
	|| ydk::is_set(bgpextcommval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/dommbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (oldvrfid.is_set || is_set(oldvrfid.yfilter)) leaf_name_data.push_back(oldvrfid.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (oldvrfname.is_set || is_set(oldvrfname.yfilter)) leaf_name_data.push_back(oldvrfname.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (gsdbctxtype.is_set || is_set(gsdbctxtype.yfilter)) leaf_name_data.push_back(gsdbctxtype.get_name_leafdata());
    if (bgpextcommval.is_set || is_set(bgpextcommval.yfilter)) leaf_name_data.push_back(bgpextcommval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfId")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldVrfId")
    {
        oldvrfid = value;
        oldvrfid.value_namespace = name_space;
        oldvrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldVrfName")
    {
        oldvrfname = value;
        oldvrfname.value_namespace = name_space;
        oldvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtxType")
    {
        gsdbctxtype = value;
        gsdbctxtype.value_namespace = name_space;
        gsdbctxtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpExtCommVal")
    {
        bgpextcommval = value;
        bgpextcommval.value_namespace = name_space;
        bgpextcommval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "vrfId")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "oldVrfId")
    {
        oldvrfid.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "oldVrfName")
    {
        oldvrfname.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "gsdbCtxType")
    {
        gsdbctxtype.yfilter = yfilter;
    }
    if(value_path == "bgpExtCommVal")
    {
        bgpextcommval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::L3vmItems::InstItems::DommbrItems::DomMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "iod" || name == "vrfId" || name == "oldVrfId" || name == "vrfName" || name == "oldVrfName" || name == "gsdbCtx" || name == "gsdbCtxType" || name == "bgpExtCommVal" || name == "name")
        return true;
    return false;
}

System::L3vmItems::InstItems::TblItems::TblItems()
    :
    tbl_list(this, {"id"})
{

    yang_name = "tbl-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::TblItems::~TblItems()
{
}

bool System::L3vmItems::InstItems::TblItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tbl_list.len(); index++)
    {
        if(tbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L3vmItems::InstItems::TblItems::has_operation() const
{
    for (std::size_t index=0; index<tbl_list.len(); index++)
    {
        if(tbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L3vmItems::InstItems::TblItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::TblItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tbl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::TblItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3vmItems::InstItems::TblItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tbl-list")
    {
        auto c = std::make_shared<System::L3vmItems::InstItems::TblItems::TblList>();
        c->parent = this;
        tbl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3vmItems::InstItems::TblItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tbl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::L3vmItems::InstItems::TblItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L3vmItems::InstItems::TblItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L3vmItems::InstItems::TblItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tbl-list")
        return true;
    return false;
}

System::L3vmItems::InstItems::TblItems::TblList::TblList()
    :
    id{YType::uint32, "id"},
    gsdbctx{YType::uint32, "gsdbCtx"},
    rtlmtmax{YType::uint32, "rtLmtMax"},
    rtlmtwarn{YType::uint32, "rtLmtWarn"},
    rtlmtwarnonly{YType::boolean, "rtLmtWarnOnly"},
    rtlmtwarnpct{YType::uint8, "rtLmtWarnPct"},
    rtlmtreinstpct{YType::uint8, "rtLmtReinstPct"}
{

    yang_name = "Tbl-list"; yang_parent_name = "tbl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L3vmItems::InstItems::TblItems::TblList::~TblList()
{
}

bool System::L3vmItems::InstItems::TblItems::TblList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| gsdbctx.is_set
	|| rtlmtmax.is_set
	|| rtlmtwarn.is_set
	|| rtlmtwarnonly.is_set
	|| rtlmtwarnpct.is_set
	|| rtlmtreinstpct.is_set;
}

bool System::L3vmItems::InstItems::TblItems::TblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(gsdbctx.yfilter)
	|| ydk::is_set(rtlmtmax.yfilter)
	|| ydk::is_set(rtlmtwarn.yfilter)
	|| ydk::is_set(rtlmtwarnonly.yfilter)
	|| ydk::is_set(rtlmtwarnpct.yfilter)
	|| ydk::is_set(rtlmtreinstpct.yfilter);
}

std::string System::L3vmItems::InstItems::TblItems::TblList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l3vm-items/inst-items/tbl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L3vmItems::InstItems::TblItems::TblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tbl-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L3vmItems::InstItems::TblItems::TblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (gsdbctx.is_set || is_set(gsdbctx.yfilter)) leaf_name_data.push_back(gsdbctx.get_name_leafdata());
    if (rtlmtmax.is_set || is_set(rtlmtmax.yfilter)) leaf_name_data.push_back(rtlmtmax.get_name_leafdata());
    if (rtlmtwarn.is_set || is_set(rtlmtwarn.yfilter)) leaf_name_data.push_back(rtlmtwarn.get_name_leafdata());
    if (rtlmtwarnonly.is_set || is_set(rtlmtwarnonly.yfilter)) leaf_name_data.push_back(rtlmtwarnonly.get_name_leafdata());
    if (rtlmtwarnpct.is_set || is_set(rtlmtwarnpct.yfilter)) leaf_name_data.push_back(rtlmtwarnpct.get_name_leafdata());
    if (rtlmtreinstpct.is_set || is_set(rtlmtreinstpct.yfilter)) leaf_name_data.push_back(rtlmtreinstpct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::L3vmItems::InstItems::TblItems::TblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::L3vmItems::InstItems::TblItems::TblList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::L3vmItems::InstItems::TblItems::TblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx = value;
        gsdbctx.value_namespace = name_space;
        gsdbctx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtMax")
    {
        rtlmtmax = value;
        rtlmtmax.value_namespace = name_space;
        rtlmtmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtWarn")
    {
        rtlmtwarn = value;
        rtlmtwarn.value_namespace = name_space;
        rtlmtwarn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtWarnOnly")
    {
        rtlmtwarnonly = value;
        rtlmtwarnonly.value_namespace = name_space;
        rtlmtwarnonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtWarnPct")
    {
        rtlmtwarnpct = value;
        rtlmtwarnpct.value_namespace = name_space;
        rtlmtwarnpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtLmtReinstPct")
    {
        rtlmtreinstpct = value;
        rtlmtreinstpct.value_namespace = name_space;
        rtlmtreinstpct.value_namespace_prefix = name_space_prefix;
    }
}

void System::L3vmItems::InstItems::TblItems::TblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "gsdbCtx")
    {
        gsdbctx.yfilter = yfilter;
    }
    if(value_path == "rtLmtMax")
    {
        rtlmtmax.yfilter = yfilter;
    }
    if(value_path == "rtLmtWarn")
    {
        rtlmtwarn.yfilter = yfilter;
    }
    if(value_path == "rtLmtWarnOnly")
    {
        rtlmtwarnonly.yfilter = yfilter;
    }
    if(value_path == "rtLmtWarnPct")
    {
        rtlmtwarnpct.yfilter = yfilter;
    }
    if(value_path == "rtLmtReinstPct")
    {
        rtlmtreinstpct.yfilter = yfilter;
    }
}

bool System::L3vmItems::InstItems::TblItems::TblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "gsdbCtx" || name == "rtLmtMax" || name == "rtLmtWarn" || name == "rtLmtWarnOnly" || name == "rtLmtWarnPct" || name == "rtLmtReinstPct")
        return true;
    return false;
}

System::UribItems::UribItems()
    :
    uribdmeversion{YType::uint32, "uribDmeVersion"}
        ,
    client4_items(std::make_shared<System::UribItems::Client4Items>())
    , internal4_items(std::make_shared<System::UribItems::Internal4Items>())
    , internalvrf4_items(std::make_shared<System::UribItems::Internalvrf4Items>())
    , table4_items(std::make_shared<System::UribItems::Table4Items>())
{
    client4_items->parent = this;
    internal4_items->parent = this;
    internalvrf4_items->parent = this;
    table4_items->parent = this;

    yang_name = "urib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::~UribItems()
{
}

bool System::UribItems::has_data() const
{
    if (is_presence_container) return true;
    return uribdmeversion.is_set
	|| (client4_items !=  nullptr && client4_items->has_data())
	|| (internal4_items !=  nullptr && internal4_items->has_data())
	|| (internalvrf4_items !=  nullptr && internalvrf4_items->has_data())
	|| (table4_items !=  nullptr && table4_items->has_data());
}

bool System::UribItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uribdmeversion.yfilter)
	|| (client4_items !=  nullptr && client4_items->has_operation())
	|| (internal4_items !=  nullptr && internal4_items->has_operation())
	|| (internalvrf4_items !=  nullptr && internalvrf4_items->has_operation())
	|| (table4_items !=  nullptr && table4_items->has_operation());
}

std::string System::UribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "urib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uribdmeversion.is_set || is_set(uribdmeversion.yfilter)) leaf_name_data.push_back(uribdmeversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client4-items")
    {
        if(client4_items == nullptr)
        {
            client4_items = std::make_shared<System::UribItems::Client4Items>();
        }
        return client4_items;
    }

    if(child_yang_name == "internal4-items")
    {
        if(internal4_items == nullptr)
        {
            internal4_items = std::make_shared<System::UribItems::Internal4Items>();
        }
        return internal4_items;
    }

    if(child_yang_name == "internalvrf4-items")
    {
        if(internalvrf4_items == nullptr)
        {
            internalvrf4_items = std::make_shared<System::UribItems::Internalvrf4Items>();
        }
        return internalvrf4_items;
    }

    if(child_yang_name == "table4-items")
    {
        if(table4_items == nullptr)
        {
            table4_items = std::make_shared<System::UribItems::Table4Items>();
        }
        return table4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client4_items != nullptr)
    {
        children["client4-items"] = client4_items;
    }

    if(internal4_items != nullptr)
    {
        children["internal4-items"] = internal4_items;
    }

    if(internalvrf4_items != nullptr)
    {
        children["internalvrf4-items"] = internalvrf4_items;
    }

    if(table4_items != nullptr)
    {
        children["table4-items"] = table4_items;
    }

    return children;
}

void System::UribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uribDmeVersion")
    {
        uribdmeversion = value;
        uribdmeversion.value_namespace = name_space;
        uribdmeversion.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uribDmeVersion")
    {
        uribdmeversion.yfilter = yfilter;
    }
}

bool System::UribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client4-items" || name == "internal4-items" || name == "internalvrf4-items" || name == "table4-items" || name == "uribDmeVersion")
        return true;
    return false;
}

System::UribItems::Client4Items::Client4Items()
    :
    client4_list(this, {"name"})
{

    yang_name = "client4-items"; yang_parent_name = "urib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Client4Items::~Client4Items()
{
}

bool System::UribItems::Client4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client4_list.len(); index++)
    {
        if(client4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Client4Items::has_operation() const
{
    for (std::size_t index=0; index<client4_list.len(); index++)
    {
        if(client4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Client4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Client4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Client4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Client4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Client4-list")
    {
        auto c = std::make_shared<System::UribItems::Client4Items::Client4List>();
        c->parent = this;
        client4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Client4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Client4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Client4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Client4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Client4-list")
        return true;
    return false;
}

System::UribItems::Client4Items::Client4List::Client4List()
    :
    name{YType::str, "name"},
    index_{YType::uint64, "index"},
    epid{YType::uint32, "epid"},
    mtssap{YType::int32, "mtsSap"},
    mrumisses{YType::uint32, "mruMisses"},
    mruhits{YType::uint32, "mruHits"},
    staletime{YType::uint32, "staleTime"},
    staletimerremaining{YType::str, "staleTimerRemaining"}
        ,
    message4_items(std::make_shared<System::UribItems::Client4Items::Client4List::Message4Items>())
    , clientvrf4_items(std::make_shared<System::UribItems::Client4Items::Client4List::Clientvrf4Items>())
{
    message4_items->parent = this;
    clientvrf4_items->parent = this;

    yang_name = "Client4-list"; yang_parent_name = "client4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Client4Items::Client4List::~Client4List()
{
}

bool System::UribItems::Client4Items::Client4List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| index_.is_set
	|| epid.is_set
	|| mtssap.is_set
	|| mrumisses.is_set
	|| mruhits.is_set
	|| staletime.is_set
	|| staletimerremaining.is_set
	|| (message4_items !=  nullptr && message4_items->has_data())
	|| (clientvrf4_items !=  nullptr && clientvrf4_items->has_data());
}

bool System::UribItems::Client4Items::Client4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(epid.yfilter)
	|| ydk::is_set(mtssap.yfilter)
	|| ydk::is_set(mrumisses.yfilter)
	|| ydk::is_set(mruhits.yfilter)
	|| ydk::is_set(staletime.yfilter)
	|| ydk::is_set(staletimerremaining.yfilter)
	|| (message4_items !=  nullptr && message4_items->has_operation())
	|| (clientvrf4_items !=  nullptr && clientvrf4_items->has_operation());
}

std::string System::UribItems::Client4Items::Client4List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/client4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Client4Items::Client4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Client4-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Client4Items::Client4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (epid.is_set || is_set(epid.yfilter)) leaf_name_data.push_back(epid.get_name_leafdata());
    if (mtssap.is_set || is_set(mtssap.yfilter)) leaf_name_data.push_back(mtssap.get_name_leafdata());
    if (mrumisses.is_set || is_set(mrumisses.yfilter)) leaf_name_data.push_back(mrumisses.get_name_leafdata());
    if (mruhits.is_set || is_set(mruhits.yfilter)) leaf_name_data.push_back(mruhits.get_name_leafdata());
    if (staletime.is_set || is_set(staletime.yfilter)) leaf_name_data.push_back(staletime.get_name_leafdata());
    if (staletimerremaining.is_set || is_set(staletimerremaining.yfilter)) leaf_name_data.push_back(staletimerremaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Client4Items::Client4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message4-items")
    {
        if(message4_items == nullptr)
        {
            message4_items = std::make_shared<System::UribItems::Client4Items::Client4List::Message4Items>();
        }
        return message4_items;
    }

    if(child_yang_name == "clientvrf4-items")
    {
        if(clientvrf4_items == nullptr)
        {
            clientvrf4_items = std::make_shared<System::UribItems::Client4Items::Client4List::Clientvrf4Items>();
        }
        return clientvrf4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Client4Items::Client4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(message4_items != nullptr)
    {
        children["message4-items"] = message4_items;
    }

    if(clientvrf4_items != nullptr)
    {
        children["clientvrf4-items"] = clientvrf4_items;
    }

    return children;
}

void System::UribItems::Client4Items::Client4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epid")
    {
        epid = value;
        epid.value_namespace = name_space;
        epid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtsSap")
    {
        mtssap = value;
        mtssap.value_namespace = name_space;
        mtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mruMisses")
    {
        mrumisses = value;
        mrumisses.value_namespace = name_space;
        mrumisses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mruHits")
    {
        mruhits = value;
        mruhits.value_namespace = name_space;
        mruhits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTime")
    {
        staletime = value;
        staletime.value_namespace = name_space;
        staletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTimerRemaining")
    {
        staletimerremaining = value;
        staletimerremaining.value_namespace = name_space;
        staletimerremaining.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Client4Items::Client4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "epid")
    {
        epid.yfilter = yfilter;
    }
    if(value_path == "mtsSap")
    {
        mtssap.yfilter = yfilter;
    }
    if(value_path == "mruMisses")
    {
        mrumisses.yfilter = yfilter;
    }
    if(value_path == "mruHits")
    {
        mruhits.yfilter = yfilter;
    }
    if(value_path == "staleTime")
    {
        staletime.yfilter = yfilter;
    }
    if(value_path == "staleTimerRemaining")
    {
        staletimerremaining.yfilter = yfilter;
    }
}

bool System::UribItems::Client4Items::Client4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message4-items" || name == "clientvrf4-items" || name == "name" || name == "index" || name == "epid" || name == "mtsSap" || name == "mruMisses" || name == "mruHits" || name == "staleTime" || name == "staleTimerRemaining")
        return true;
    return false;
}

System::UribItems::Client4Items::Client4List::Message4Items::Message4Items()
    :
    rregister{YType::uint32, "rRegister"},
    sregisterack{YType::uint32, "sRegisterAck"},
    rderegister{YType::uint32, "rDeregister"},
    raddroute{YType::uint32, "rAddRoute"},
    saddrouteack{YType::uint32, "sAddRouteAck"},
    rdeleteroute{YType::uint32, "rDeleteRoute"},
    sdeleterouteack{YType::uint32, "sDeleteRouteAck"},
    snotifyroute{YType::uint32, "sNotifyRoute"},
    rnotifyrouteack{YType::uint32, "rNotifyRouteAck"},
    raddoneroute{YType::uint32, "rAddOneRoute"},
    rdeleteoneroute{YType::uint32, "rDeleteOneRoute"},
    rdeleteallroute{YType::uint32, "rDeleteAllRoute"},
    raddrnh{YType::uint32, "rAddRnh"},
    saddrnhack{YType::uint32, "sAddRnhAck"},
    rdeleternh{YType::uint32, "rDeleteRnh"},
    sdeleternhack{YType::uint32, "sDeleteRnhAck"},
    rdeleteallrnh{YType::uint32, "rDeleteAllRnh"},
    snotifyrnh{YType::uint32, "sNotifyRnh"},
    rnotifyrnhack{YType::uint32, "rNotifyRnhAck"},
    rnotifyrequest{YType::uint32, "rNotifyRequest"},
    rdenotifyrequest{YType::uint32, "rDenotifyRequest"},
    sredistnotify{YType::uint32, "sRedistNotify"},
    sredistdenotify{YType::uint32, "sRedistDenotify"},
    rnotifypibconvrequest{YType::uint32, "rNotifyPibConvRequest"},
    rnotifypibconv{YType::uint32, "rNotifyPibConv"},
    snotifypibconv{YType::uint32, "sNotifyPibConv"},
    rnotifypibconvall{YType::uint32, "rNotifyPibConvAll"},
    rmodifyroute{YType::uint32, "rModifyRoute"},
    smodifyrouteack{YType::uint32, "sModifyRouteAck"},
    srepopulateroute{YType::uint32, "sRepopulateRoute"},
    rpibsetstaletime{YType::uint32, "rPibSetStaleTime"},
    rsetagedrouteinterval{YType::uint32, "rSetAgedRouteInterval"},
    sreinitrepopulateroute{YType::uint32, "sReinitRepopulateRoute"}
{

    yang_name = "message4-items"; yang_parent_name = "Client4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Client4Items::Client4List::Message4Items::~Message4Items()
{
}

bool System::UribItems::Client4Items::Client4List::Message4Items::has_data() const
{
    if (is_presence_container) return true;
    return rregister.is_set
	|| sregisterack.is_set
	|| rderegister.is_set
	|| raddroute.is_set
	|| saddrouteack.is_set
	|| rdeleteroute.is_set
	|| sdeleterouteack.is_set
	|| snotifyroute.is_set
	|| rnotifyrouteack.is_set
	|| raddoneroute.is_set
	|| rdeleteoneroute.is_set
	|| rdeleteallroute.is_set
	|| raddrnh.is_set
	|| saddrnhack.is_set
	|| rdeleternh.is_set
	|| sdeleternhack.is_set
	|| rdeleteallrnh.is_set
	|| snotifyrnh.is_set
	|| rnotifyrnhack.is_set
	|| rnotifyrequest.is_set
	|| rdenotifyrequest.is_set
	|| sredistnotify.is_set
	|| sredistdenotify.is_set
	|| rnotifypibconvrequest.is_set
	|| rnotifypibconv.is_set
	|| snotifypibconv.is_set
	|| rnotifypibconvall.is_set
	|| rmodifyroute.is_set
	|| smodifyrouteack.is_set
	|| srepopulateroute.is_set
	|| rpibsetstaletime.is_set
	|| rsetagedrouteinterval.is_set
	|| sreinitrepopulateroute.is_set;
}

bool System::UribItems::Client4Items::Client4List::Message4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rregister.yfilter)
	|| ydk::is_set(sregisterack.yfilter)
	|| ydk::is_set(rderegister.yfilter)
	|| ydk::is_set(raddroute.yfilter)
	|| ydk::is_set(saddrouteack.yfilter)
	|| ydk::is_set(rdeleteroute.yfilter)
	|| ydk::is_set(sdeleterouteack.yfilter)
	|| ydk::is_set(snotifyroute.yfilter)
	|| ydk::is_set(rnotifyrouteack.yfilter)
	|| ydk::is_set(raddoneroute.yfilter)
	|| ydk::is_set(rdeleteoneroute.yfilter)
	|| ydk::is_set(rdeleteallroute.yfilter)
	|| ydk::is_set(raddrnh.yfilter)
	|| ydk::is_set(saddrnhack.yfilter)
	|| ydk::is_set(rdeleternh.yfilter)
	|| ydk::is_set(sdeleternhack.yfilter)
	|| ydk::is_set(rdeleteallrnh.yfilter)
	|| ydk::is_set(snotifyrnh.yfilter)
	|| ydk::is_set(rnotifyrnhack.yfilter)
	|| ydk::is_set(rnotifyrequest.yfilter)
	|| ydk::is_set(rdenotifyrequest.yfilter)
	|| ydk::is_set(sredistnotify.yfilter)
	|| ydk::is_set(sredistdenotify.yfilter)
	|| ydk::is_set(rnotifypibconvrequest.yfilter)
	|| ydk::is_set(rnotifypibconv.yfilter)
	|| ydk::is_set(snotifypibconv.yfilter)
	|| ydk::is_set(rnotifypibconvall.yfilter)
	|| ydk::is_set(rmodifyroute.yfilter)
	|| ydk::is_set(smodifyrouteack.yfilter)
	|| ydk::is_set(srepopulateroute.yfilter)
	|| ydk::is_set(rpibsetstaletime.yfilter)
	|| ydk::is_set(rsetagedrouteinterval.yfilter)
	|| ydk::is_set(sreinitrepopulateroute.yfilter);
}

std::string System::UribItems::Client4Items::Client4List::Message4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Client4Items::Client4List::Message4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rregister.is_set || is_set(rregister.yfilter)) leaf_name_data.push_back(rregister.get_name_leafdata());
    if (sregisterack.is_set || is_set(sregisterack.yfilter)) leaf_name_data.push_back(sregisterack.get_name_leafdata());
    if (rderegister.is_set || is_set(rderegister.yfilter)) leaf_name_data.push_back(rderegister.get_name_leafdata());
    if (raddroute.is_set || is_set(raddroute.yfilter)) leaf_name_data.push_back(raddroute.get_name_leafdata());
    if (saddrouteack.is_set || is_set(saddrouteack.yfilter)) leaf_name_data.push_back(saddrouteack.get_name_leafdata());
    if (rdeleteroute.is_set || is_set(rdeleteroute.yfilter)) leaf_name_data.push_back(rdeleteroute.get_name_leafdata());
    if (sdeleterouteack.is_set || is_set(sdeleterouteack.yfilter)) leaf_name_data.push_back(sdeleterouteack.get_name_leafdata());
    if (snotifyroute.is_set || is_set(snotifyroute.yfilter)) leaf_name_data.push_back(snotifyroute.get_name_leafdata());
    if (rnotifyrouteack.is_set || is_set(rnotifyrouteack.yfilter)) leaf_name_data.push_back(rnotifyrouteack.get_name_leafdata());
    if (raddoneroute.is_set || is_set(raddoneroute.yfilter)) leaf_name_data.push_back(raddoneroute.get_name_leafdata());
    if (rdeleteoneroute.is_set || is_set(rdeleteoneroute.yfilter)) leaf_name_data.push_back(rdeleteoneroute.get_name_leafdata());
    if (rdeleteallroute.is_set || is_set(rdeleteallroute.yfilter)) leaf_name_data.push_back(rdeleteallroute.get_name_leafdata());
    if (raddrnh.is_set || is_set(raddrnh.yfilter)) leaf_name_data.push_back(raddrnh.get_name_leafdata());
    if (saddrnhack.is_set || is_set(saddrnhack.yfilter)) leaf_name_data.push_back(saddrnhack.get_name_leafdata());
    if (rdeleternh.is_set || is_set(rdeleternh.yfilter)) leaf_name_data.push_back(rdeleternh.get_name_leafdata());
    if (sdeleternhack.is_set || is_set(sdeleternhack.yfilter)) leaf_name_data.push_back(sdeleternhack.get_name_leafdata());
    if (rdeleteallrnh.is_set || is_set(rdeleteallrnh.yfilter)) leaf_name_data.push_back(rdeleteallrnh.get_name_leafdata());
    if (snotifyrnh.is_set || is_set(snotifyrnh.yfilter)) leaf_name_data.push_back(snotifyrnh.get_name_leafdata());
    if (rnotifyrnhack.is_set || is_set(rnotifyrnhack.yfilter)) leaf_name_data.push_back(rnotifyrnhack.get_name_leafdata());
    if (rnotifyrequest.is_set || is_set(rnotifyrequest.yfilter)) leaf_name_data.push_back(rnotifyrequest.get_name_leafdata());
    if (rdenotifyrequest.is_set || is_set(rdenotifyrequest.yfilter)) leaf_name_data.push_back(rdenotifyrequest.get_name_leafdata());
    if (sredistnotify.is_set || is_set(sredistnotify.yfilter)) leaf_name_data.push_back(sredistnotify.get_name_leafdata());
    if (sredistdenotify.is_set || is_set(sredistdenotify.yfilter)) leaf_name_data.push_back(sredistdenotify.get_name_leafdata());
    if (rnotifypibconvrequest.is_set || is_set(rnotifypibconvrequest.yfilter)) leaf_name_data.push_back(rnotifypibconvrequest.get_name_leafdata());
    if (rnotifypibconv.is_set || is_set(rnotifypibconv.yfilter)) leaf_name_data.push_back(rnotifypibconv.get_name_leafdata());
    if (snotifypibconv.is_set || is_set(snotifypibconv.yfilter)) leaf_name_data.push_back(snotifypibconv.get_name_leafdata());
    if (rnotifypibconvall.is_set || is_set(rnotifypibconvall.yfilter)) leaf_name_data.push_back(rnotifypibconvall.get_name_leafdata());
    if (rmodifyroute.is_set || is_set(rmodifyroute.yfilter)) leaf_name_data.push_back(rmodifyroute.get_name_leafdata());
    if (smodifyrouteack.is_set || is_set(smodifyrouteack.yfilter)) leaf_name_data.push_back(smodifyrouteack.get_name_leafdata());
    if (srepopulateroute.is_set || is_set(srepopulateroute.yfilter)) leaf_name_data.push_back(srepopulateroute.get_name_leafdata());
    if (rpibsetstaletime.is_set || is_set(rpibsetstaletime.yfilter)) leaf_name_data.push_back(rpibsetstaletime.get_name_leafdata());
    if (rsetagedrouteinterval.is_set || is_set(rsetagedrouteinterval.yfilter)) leaf_name_data.push_back(rsetagedrouteinterval.get_name_leafdata());
    if (sreinitrepopulateroute.is_set || is_set(sreinitrepopulateroute.yfilter)) leaf_name_data.push_back(sreinitrepopulateroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Client4Items::Client4List::Message4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Client4Items::Client4List::Message4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Client4Items::Client4List::Message4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rRegister")
    {
        rregister = value;
        rregister.value_namespace = name_space;
        rregister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sRegisterAck")
    {
        sregisterack = value;
        sregisterack.value_namespace = name_space;
        sregisterack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeregister")
    {
        rderegister = value;
        rderegister.value_namespace = name_space;
        rderegister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rAddRoute")
    {
        raddroute = value;
        raddroute.value_namespace = name_space;
        raddroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sAddRouteAck")
    {
        saddrouteack = value;
        saddrouteack.value_namespace = name_space;
        saddrouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteRoute")
    {
        rdeleteroute = value;
        rdeleteroute.value_namespace = name_space;
        rdeleteroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sDeleteRouteAck")
    {
        sdeleterouteack = value;
        sdeleterouteack.value_namespace = name_space;
        sdeleterouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sNotifyRoute")
    {
        snotifyroute = value;
        snotifyroute.value_namespace = name_space;
        snotifyroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyRouteAck")
    {
        rnotifyrouteack = value;
        rnotifyrouteack.value_namespace = name_space;
        rnotifyrouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rAddOneRoute")
    {
        raddoneroute = value;
        raddoneroute.value_namespace = name_space;
        raddoneroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteOneRoute")
    {
        rdeleteoneroute = value;
        rdeleteoneroute.value_namespace = name_space;
        rdeleteoneroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteAllRoute")
    {
        rdeleteallroute = value;
        rdeleteallroute.value_namespace = name_space;
        rdeleteallroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rAddRnh")
    {
        raddrnh = value;
        raddrnh.value_namespace = name_space;
        raddrnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sAddRnhAck")
    {
        saddrnhack = value;
        saddrnhack.value_namespace = name_space;
        saddrnhack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteRnh")
    {
        rdeleternh = value;
        rdeleternh.value_namespace = name_space;
        rdeleternh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sDeleteRnhAck")
    {
        sdeleternhack = value;
        sdeleternhack.value_namespace = name_space;
        sdeleternhack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteAllRnh")
    {
        rdeleteallrnh = value;
        rdeleteallrnh.value_namespace = name_space;
        rdeleteallrnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sNotifyRnh")
    {
        snotifyrnh = value;
        snotifyrnh.value_namespace = name_space;
        snotifyrnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyRnhAck")
    {
        rnotifyrnhack = value;
        rnotifyrnhack.value_namespace = name_space;
        rnotifyrnhack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyRequest")
    {
        rnotifyrequest = value;
        rnotifyrequest.value_namespace = name_space;
        rnotifyrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDenotifyRequest")
    {
        rdenotifyrequest = value;
        rdenotifyrequest.value_namespace = name_space;
        rdenotifyrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sRedistNotify")
    {
        sredistnotify = value;
        sredistnotify.value_namespace = name_space;
        sredistnotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sRedistDenotify")
    {
        sredistdenotify = value;
        sredistdenotify.value_namespace = name_space;
        sredistdenotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyPibConvRequest")
    {
        rnotifypibconvrequest = value;
        rnotifypibconvrequest.value_namespace = name_space;
        rnotifypibconvrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyPibConv")
    {
        rnotifypibconv = value;
        rnotifypibconv.value_namespace = name_space;
        rnotifypibconv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sNotifyPibConv")
    {
        snotifypibconv = value;
        snotifypibconv.value_namespace = name_space;
        snotifypibconv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyPibConvAll")
    {
        rnotifypibconvall = value;
        rnotifypibconvall.value_namespace = name_space;
        rnotifypibconvall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rModifyRoute")
    {
        rmodifyroute = value;
        rmodifyroute.value_namespace = name_space;
        rmodifyroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sModifyRouteAck")
    {
        smodifyrouteack = value;
        smodifyrouteack.value_namespace = name_space;
        smodifyrouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sRepopulateRoute")
    {
        srepopulateroute = value;
        srepopulateroute.value_namespace = name_space;
        srepopulateroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rPibSetStaleTime")
    {
        rpibsetstaletime = value;
        rpibsetstaletime.value_namespace = name_space;
        rpibsetstaletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSetAgedRouteInterval")
    {
        rsetagedrouteinterval = value;
        rsetagedrouteinterval.value_namespace = name_space;
        rsetagedrouteinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sReinitRepopulateRoute")
    {
        sreinitrepopulateroute = value;
        sreinitrepopulateroute.value_namespace = name_space;
        sreinitrepopulateroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Client4Items::Client4List::Message4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rRegister")
    {
        rregister.yfilter = yfilter;
    }
    if(value_path == "sRegisterAck")
    {
        sregisterack.yfilter = yfilter;
    }
    if(value_path == "rDeregister")
    {
        rderegister.yfilter = yfilter;
    }
    if(value_path == "rAddRoute")
    {
        raddroute.yfilter = yfilter;
    }
    if(value_path == "sAddRouteAck")
    {
        saddrouteack.yfilter = yfilter;
    }
    if(value_path == "rDeleteRoute")
    {
        rdeleteroute.yfilter = yfilter;
    }
    if(value_path == "sDeleteRouteAck")
    {
        sdeleterouteack.yfilter = yfilter;
    }
    if(value_path == "sNotifyRoute")
    {
        snotifyroute.yfilter = yfilter;
    }
    if(value_path == "rNotifyRouteAck")
    {
        rnotifyrouteack.yfilter = yfilter;
    }
    if(value_path == "rAddOneRoute")
    {
        raddoneroute.yfilter = yfilter;
    }
    if(value_path == "rDeleteOneRoute")
    {
        rdeleteoneroute.yfilter = yfilter;
    }
    if(value_path == "rDeleteAllRoute")
    {
        rdeleteallroute.yfilter = yfilter;
    }
    if(value_path == "rAddRnh")
    {
        raddrnh.yfilter = yfilter;
    }
    if(value_path == "sAddRnhAck")
    {
        saddrnhack.yfilter = yfilter;
    }
    if(value_path == "rDeleteRnh")
    {
        rdeleternh.yfilter = yfilter;
    }
    if(value_path == "sDeleteRnhAck")
    {
        sdeleternhack.yfilter = yfilter;
    }
    if(value_path == "rDeleteAllRnh")
    {
        rdeleteallrnh.yfilter = yfilter;
    }
    if(value_path == "sNotifyRnh")
    {
        snotifyrnh.yfilter = yfilter;
    }
    if(value_path == "rNotifyRnhAck")
    {
        rnotifyrnhack.yfilter = yfilter;
    }
    if(value_path == "rNotifyRequest")
    {
        rnotifyrequest.yfilter = yfilter;
    }
    if(value_path == "rDenotifyRequest")
    {
        rdenotifyrequest.yfilter = yfilter;
    }
    if(value_path == "sRedistNotify")
    {
        sredistnotify.yfilter = yfilter;
    }
    if(value_path == "sRedistDenotify")
    {
        sredistdenotify.yfilter = yfilter;
    }
    if(value_path == "rNotifyPibConvRequest")
    {
        rnotifypibconvrequest.yfilter = yfilter;
    }
    if(value_path == "rNotifyPibConv")
    {
        rnotifypibconv.yfilter = yfilter;
    }
    if(value_path == "sNotifyPibConv")
    {
        snotifypibconv.yfilter = yfilter;
    }
    if(value_path == "rNotifyPibConvAll")
    {
        rnotifypibconvall.yfilter = yfilter;
    }
    if(value_path == "rModifyRoute")
    {
        rmodifyroute.yfilter = yfilter;
    }
    if(value_path == "sModifyRouteAck")
    {
        smodifyrouteack.yfilter = yfilter;
    }
    if(value_path == "sRepopulateRoute")
    {
        srepopulateroute.yfilter = yfilter;
    }
    if(value_path == "rPibSetStaleTime")
    {
        rpibsetstaletime.yfilter = yfilter;
    }
    if(value_path == "rSetAgedRouteInterval")
    {
        rsetagedrouteinterval.yfilter = yfilter;
    }
    if(value_path == "sReinitRepopulateRoute")
    {
        sreinitrepopulateroute.yfilter = yfilter;
    }
}

bool System::UribItems::Client4Items::Client4List::Message4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rRegister" || name == "sRegisterAck" || name == "rDeregister" || name == "rAddRoute" || name == "sAddRouteAck" || name == "rDeleteRoute" || name == "sDeleteRouteAck" || name == "sNotifyRoute" || name == "rNotifyRouteAck" || name == "rAddOneRoute" || name == "rDeleteOneRoute" || name == "rDeleteAllRoute" || name == "rAddRnh" || name == "sAddRnhAck" || name == "rDeleteRnh" || name == "sDeleteRnhAck" || name == "rDeleteAllRnh" || name == "sNotifyRnh" || name == "rNotifyRnhAck" || name == "rNotifyRequest" || name == "rDenotifyRequest" || name == "sRedistNotify" || name == "sRedistDenotify" || name == "rNotifyPibConvRequest" || name == "rNotifyPibConv" || name == "sNotifyPibConv" || name == "rNotifyPibConvAll" || name == "rModifyRoute" || name == "sModifyRouteAck" || name == "sRepopulateRoute" || name == "rPibSetStaleTime" || name == "rSetAgedRouteInterval" || name == "sReinitRepopulateRoute")
        return true;
    return false;
}

System::UribItems::Client4Items::Client4List::Clientvrf4Items::Clientvrf4Items()
    :
    clientvrf4_list(this, {"vrfname"})
{

    yang_name = "clientvrf4-items"; yang_parent_name = "Client4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Client4Items::Client4List::Clientvrf4Items::~Clientvrf4Items()
{
}

bool System::UribItems::Client4Items::Client4List::Clientvrf4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientvrf4_list.len(); index++)
    {
        if(clientvrf4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Client4Items::Client4List::Clientvrf4Items::has_operation() const
{
    for (std::size_t index=0; index<clientvrf4_list.len(); index++)
    {
        if(clientvrf4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Client4Items::Client4List::Clientvrf4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clientvrf4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Client4Items::Client4List::Clientvrf4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Client4Items::Client4List::Clientvrf4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientVrf4-list")
    {
        auto c = std::make_shared<System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List>();
        c->parent = this;
        clientvrf4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Client4Items::Client4List::Clientvrf4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clientvrf4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Client4Items::Client4List::Clientvrf4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Client4Items::Client4List::Clientvrf4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Client4Items::Client4List::Clientvrf4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientVrf4-list")
        return true;
    return false;
}

System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::ClientVrf4List()
    :
    vrfname{YType::str, "vrfName"},
    flags{YType::str, "flags"},
    convergencesubscribedmask{YType::uint64, "convergenceSubscribedMask"},
    routecount{YType::uint32, "routeCount"},
    recursivenexthopcount{YType::uint32, "recursiveNextHopCount"},
    bestpathcount{YType::uint32, "bestPathCount"},
    backuppathcount{YType::uint32, "backupPathCount"},
    routechangesubscribed{YType::uint64, "routeChangeSubscribed"},
    convergencenotifymask{YType::uint64, "convergenceNotifyMask"},
    labelcount{YType::uint32, "labelCount"}
{

    yang_name = "ClientVrf4-list"; yang_parent_name = "clientvrf4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::~ClientVrf4List()
{
}

bool System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| flags.is_set
	|| convergencesubscribedmask.is_set
	|| routecount.is_set
	|| recursivenexthopcount.is_set
	|| bestpathcount.is_set
	|| backuppathcount.is_set
	|| routechangesubscribed.is_set
	|| convergencenotifymask.is_set
	|| labelcount.is_set;
}

bool System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(convergencesubscribedmask.yfilter)
	|| ydk::is_set(routecount.yfilter)
	|| ydk::is_set(recursivenexthopcount.yfilter)
	|| ydk::is_set(bestpathcount.yfilter)
	|| ydk::is_set(backuppathcount.yfilter)
	|| ydk::is_set(routechangesubscribed.yfilter)
	|| ydk::is_set(convergencenotifymask.yfilter)
	|| ydk::is_set(labelcount.yfilter);
}

std::string System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientVrf4-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (convergencesubscribedmask.is_set || is_set(convergencesubscribedmask.yfilter)) leaf_name_data.push_back(convergencesubscribedmask.get_name_leafdata());
    if (routecount.is_set || is_set(routecount.yfilter)) leaf_name_data.push_back(routecount.get_name_leafdata());
    if (recursivenexthopcount.is_set || is_set(recursivenexthopcount.yfilter)) leaf_name_data.push_back(recursivenexthopcount.get_name_leafdata());
    if (bestpathcount.is_set || is_set(bestpathcount.yfilter)) leaf_name_data.push_back(bestpathcount.get_name_leafdata());
    if (backuppathcount.is_set || is_set(backuppathcount.yfilter)) leaf_name_data.push_back(backuppathcount.get_name_leafdata());
    if (routechangesubscribed.is_set || is_set(routechangesubscribed.yfilter)) leaf_name_data.push_back(routechangesubscribed.get_name_leafdata());
    if (convergencenotifymask.is_set || is_set(convergencenotifymask.yfilter)) leaf_name_data.push_back(convergencenotifymask.get_name_leafdata());
    if (labelcount.is_set || is_set(labelcount.yfilter)) leaf_name_data.push_back(labelcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convergenceSubscribedMask")
    {
        convergencesubscribedmask = value;
        convergencesubscribedmask.value_namespace = name_space;
        convergencesubscribedmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeCount")
    {
        routecount = value;
        routecount.value_namespace = name_space;
        routecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNextHopCount")
    {
        recursivenexthopcount = value;
        recursivenexthopcount.value_namespace = name_space;
        recursivenexthopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathCount")
    {
        bestpathcount = value;
        bestpathcount.value_namespace = name_space;
        bestpathcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backupPathCount")
    {
        backuppathcount = value;
        backuppathcount.value_namespace = name_space;
        backuppathcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeChangeSubscribed")
    {
        routechangesubscribed = value;
        routechangesubscribed.value_namespace = name_space;
        routechangesubscribed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convergenceNotifyMask")
    {
        convergencenotifymask = value;
        convergencenotifymask.value_namespace = name_space;
        convergencenotifymask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelCount")
    {
        labelcount = value;
        labelcount.value_namespace = name_space;
        labelcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "convergenceSubscribedMask")
    {
        convergencesubscribedmask.yfilter = yfilter;
    }
    if(value_path == "routeCount")
    {
        routecount.yfilter = yfilter;
    }
    if(value_path == "recursiveNextHopCount")
    {
        recursivenexthopcount.yfilter = yfilter;
    }
    if(value_path == "bestPathCount")
    {
        bestpathcount.yfilter = yfilter;
    }
    if(value_path == "backupPathCount")
    {
        backuppathcount.yfilter = yfilter;
    }
    if(value_path == "routeChangeSubscribed")
    {
        routechangesubscribed.yfilter = yfilter;
    }
    if(value_path == "convergenceNotifyMask")
    {
        convergencenotifymask.yfilter = yfilter;
    }
    if(value_path == "labelCount")
    {
        labelcount.yfilter = yfilter;
    }
}

bool System::UribItems::Client4Items::Client4List::Clientvrf4Items::ClientVrf4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfName" || name == "flags" || name == "convergenceSubscribedMask" || name == "routeCount" || name == "recursiveNextHopCount" || name == "bestPathCount" || name == "backupPathCount" || name == "routeChangeSubscribed" || name == "convergenceNotifyMask" || name == "labelCount")
        return true;
    return false;
}

System::UribItems::Internal4Items::Internal4Items()
    :
    cleanrestart{YType::boolean, "cleanRestart"},
    servrpm{YType::enumeration, "servRpm"},
    servlisp{YType::enumeration, "servLisp"},
    regrpm{YType::boolean, "regRpm"},
    reglisp{YType::boolean, "regLisp"},
    mplsvpnmibtrapthresh{YType::uint32, "mplsVpnMibTrapThresh"},
    ufdmrtemsgversion{YType::uint32, "ufdmRteMsgVersion"},
    supstate{YType::str, "supState"},
    pssuri{YType::str, "pssUri"},
    servclisstate{YType::enumeration, "servClisState"},
    servl3vmstate{YType::enumeration, "servL3vmState"},
    servufdmstate{YType::enumeration, "servUfdmState"},
    regclis{YType::boolean, "regClis"},
    regl3vm{YType::boolean, "regL3vm"},
    regufdm{YType::boolean, "regUfdm"},
    shmmin{YType::uint32, "shmMin"},
    shmsize{YType::uint32, "shmSize"},
    dbgfiltervrfname{YType::str, "dbgFilterVrfName"},
    dbgfiltervrftableid{YType::uint32, "dbgFilterVrfTableId"},
    dbgfilterclientname{YType::str, "dbgFilterClientName"},
    dbgfilterclientidx{YType::uint32, "dbgFilterClientIdx"},
    dbgfilterprefixlist{YType::str, "dbgFilterPrefixList"},
    performancemode{YType::boolean, "performanceMode"}
{

    yang_name = "internal4-items"; yang_parent_name = "urib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Internal4Items::~Internal4Items()
{
}

bool System::UribItems::Internal4Items::has_data() const
{
    if (is_presence_container) return true;
    return cleanrestart.is_set
	|| servrpm.is_set
	|| servlisp.is_set
	|| regrpm.is_set
	|| reglisp.is_set
	|| mplsvpnmibtrapthresh.is_set
	|| ufdmrtemsgversion.is_set
	|| supstate.is_set
	|| pssuri.is_set
	|| servclisstate.is_set
	|| servl3vmstate.is_set
	|| servufdmstate.is_set
	|| regclis.is_set
	|| regl3vm.is_set
	|| regufdm.is_set
	|| shmmin.is_set
	|| shmsize.is_set
	|| dbgfiltervrfname.is_set
	|| dbgfiltervrftableid.is_set
	|| dbgfilterclientname.is_set
	|| dbgfilterclientidx.is_set
	|| dbgfilterprefixlist.is_set
	|| performancemode.is_set;
}

bool System::UribItems::Internal4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanrestart.yfilter)
	|| ydk::is_set(servrpm.yfilter)
	|| ydk::is_set(servlisp.yfilter)
	|| ydk::is_set(regrpm.yfilter)
	|| ydk::is_set(reglisp.yfilter)
	|| ydk::is_set(mplsvpnmibtrapthresh.yfilter)
	|| ydk::is_set(ufdmrtemsgversion.yfilter)
	|| ydk::is_set(supstate.yfilter)
	|| ydk::is_set(pssuri.yfilter)
	|| ydk::is_set(servclisstate.yfilter)
	|| ydk::is_set(servl3vmstate.yfilter)
	|| ydk::is_set(servufdmstate.yfilter)
	|| ydk::is_set(regclis.yfilter)
	|| ydk::is_set(regl3vm.yfilter)
	|| ydk::is_set(regufdm.yfilter)
	|| ydk::is_set(shmmin.yfilter)
	|| ydk::is_set(shmsize.yfilter)
	|| ydk::is_set(dbgfiltervrfname.yfilter)
	|| ydk::is_set(dbgfiltervrftableid.yfilter)
	|| ydk::is_set(dbgfilterclientname.yfilter)
	|| ydk::is_set(dbgfilterclientidx.yfilter)
	|| ydk::is_set(dbgfilterprefixlist.yfilter)
	|| ydk::is_set(performancemode.yfilter);
}

std::string System::UribItems::Internal4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Internal4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Internal4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanrestart.is_set || is_set(cleanrestart.yfilter)) leaf_name_data.push_back(cleanrestart.get_name_leafdata());
    if (servrpm.is_set || is_set(servrpm.yfilter)) leaf_name_data.push_back(servrpm.get_name_leafdata());
    if (servlisp.is_set || is_set(servlisp.yfilter)) leaf_name_data.push_back(servlisp.get_name_leafdata());
    if (regrpm.is_set || is_set(regrpm.yfilter)) leaf_name_data.push_back(regrpm.get_name_leafdata());
    if (reglisp.is_set || is_set(reglisp.yfilter)) leaf_name_data.push_back(reglisp.get_name_leafdata());
    if (mplsvpnmibtrapthresh.is_set || is_set(mplsvpnmibtrapthresh.yfilter)) leaf_name_data.push_back(mplsvpnmibtrapthresh.get_name_leafdata());
    if (ufdmrtemsgversion.is_set || is_set(ufdmrtemsgversion.yfilter)) leaf_name_data.push_back(ufdmrtemsgversion.get_name_leafdata());
    if (supstate.is_set || is_set(supstate.yfilter)) leaf_name_data.push_back(supstate.get_name_leafdata());
    if (pssuri.is_set || is_set(pssuri.yfilter)) leaf_name_data.push_back(pssuri.get_name_leafdata());
    if (servclisstate.is_set || is_set(servclisstate.yfilter)) leaf_name_data.push_back(servclisstate.get_name_leafdata());
    if (servl3vmstate.is_set || is_set(servl3vmstate.yfilter)) leaf_name_data.push_back(servl3vmstate.get_name_leafdata());
    if (servufdmstate.is_set || is_set(servufdmstate.yfilter)) leaf_name_data.push_back(servufdmstate.get_name_leafdata());
    if (regclis.is_set || is_set(regclis.yfilter)) leaf_name_data.push_back(regclis.get_name_leafdata());
    if (regl3vm.is_set || is_set(regl3vm.yfilter)) leaf_name_data.push_back(regl3vm.get_name_leafdata());
    if (regufdm.is_set || is_set(regufdm.yfilter)) leaf_name_data.push_back(regufdm.get_name_leafdata());
    if (shmmin.is_set || is_set(shmmin.yfilter)) leaf_name_data.push_back(shmmin.get_name_leafdata());
    if (shmsize.is_set || is_set(shmsize.yfilter)) leaf_name_data.push_back(shmsize.get_name_leafdata());
    if (dbgfiltervrfname.is_set || is_set(dbgfiltervrfname.yfilter)) leaf_name_data.push_back(dbgfiltervrfname.get_name_leafdata());
    if (dbgfiltervrftableid.is_set || is_set(dbgfiltervrftableid.yfilter)) leaf_name_data.push_back(dbgfiltervrftableid.get_name_leafdata());
    if (dbgfilterclientname.is_set || is_set(dbgfilterclientname.yfilter)) leaf_name_data.push_back(dbgfilterclientname.get_name_leafdata());
    if (dbgfilterclientidx.is_set || is_set(dbgfilterclientidx.yfilter)) leaf_name_data.push_back(dbgfilterclientidx.get_name_leafdata());
    if (dbgfilterprefixlist.is_set || is_set(dbgfilterprefixlist.yfilter)) leaf_name_data.push_back(dbgfilterprefixlist.get_name_leafdata());
    if (performancemode.is_set || is_set(performancemode.yfilter)) leaf_name_data.push_back(performancemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Internal4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Internal4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Internal4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanRestart")
    {
        cleanrestart = value;
        cleanrestart.value_namespace = name_space;
        cleanrestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servRpm")
    {
        servrpm = value;
        servrpm.value_namespace = name_space;
        servrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servLisp")
    {
        servlisp = value;
        servlisp.value_namespace = name_space;
        servlisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRpm")
    {
        regrpm = value;
        regrpm.value_namespace = name_space;
        regrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regLisp")
    {
        reglisp = value;
        reglisp.value_namespace = name_space;
        reglisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnMibTrapThresh")
    {
        mplsvpnmibtrapthresh = value;
        mplsvpnmibtrapthresh.value_namespace = name_space;
        mplsvpnmibtrapthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ufdmRteMsgVersion")
    {
        ufdmrtemsgversion = value;
        ufdmrtemsgversion.value_namespace = name_space;
        ufdmrtemsgversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supState")
    {
        supstate = value;
        supstate.value_namespace = name_space;
        supstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pssUri")
    {
        pssuri = value;
        pssuri.value_namespace = name_space;
        pssuri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servClisState")
    {
        servclisstate = value;
        servclisstate.value_namespace = name_space;
        servclisstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servL3vmState")
    {
        servl3vmstate = value;
        servl3vmstate.value_namespace = name_space;
        servl3vmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servUfdmState")
    {
        servufdmstate = value;
        servufdmstate.value_namespace = name_space;
        servufdmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regClis")
    {
        regclis = value;
        regclis.value_namespace = name_space;
        regclis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regL3vm")
    {
        regl3vm = value;
        regl3vm.value_namespace = name_space;
        regl3vm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regUfdm")
    {
        regufdm = value;
        regufdm.value_namespace = name_space;
        regufdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shmMin")
    {
        shmmin = value;
        shmmin.value_namespace = name_space;
        shmmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shmSize")
    {
        shmsize = value;
        shmsize.value_namespace = name_space;
        shmsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterVrfName")
    {
        dbgfiltervrfname = value;
        dbgfiltervrfname.value_namespace = name_space;
        dbgfiltervrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterVrfTableId")
    {
        dbgfiltervrftableid = value;
        dbgfiltervrftableid.value_namespace = name_space;
        dbgfiltervrftableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterClientName")
    {
        dbgfilterclientname = value;
        dbgfilterclientname.value_namespace = name_space;
        dbgfilterclientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterClientIdx")
    {
        dbgfilterclientidx = value;
        dbgfilterclientidx.value_namespace = name_space;
        dbgfilterclientidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterPrefixList")
    {
        dbgfilterprefixlist = value;
        dbgfilterprefixlist.value_namespace = name_space;
        dbgfilterprefixlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performanceMode")
    {
        performancemode = value;
        performancemode.value_namespace = name_space;
        performancemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Internal4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanRestart")
    {
        cleanrestart.yfilter = yfilter;
    }
    if(value_path == "servRpm")
    {
        servrpm.yfilter = yfilter;
    }
    if(value_path == "servLisp")
    {
        servlisp.yfilter = yfilter;
    }
    if(value_path == "regRpm")
    {
        regrpm.yfilter = yfilter;
    }
    if(value_path == "regLisp")
    {
        reglisp.yfilter = yfilter;
    }
    if(value_path == "mplsVpnMibTrapThresh")
    {
        mplsvpnmibtrapthresh.yfilter = yfilter;
    }
    if(value_path == "ufdmRteMsgVersion")
    {
        ufdmrtemsgversion.yfilter = yfilter;
    }
    if(value_path == "supState")
    {
        supstate.yfilter = yfilter;
    }
    if(value_path == "pssUri")
    {
        pssuri.yfilter = yfilter;
    }
    if(value_path == "servClisState")
    {
        servclisstate.yfilter = yfilter;
    }
    if(value_path == "servL3vmState")
    {
        servl3vmstate.yfilter = yfilter;
    }
    if(value_path == "servUfdmState")
    {
        servufdmstate.yfilter = yfilter;
    }
    if(value_path == "regClis")
    {
        regclis.yfilter = yfilter;
    }
    if(value_path == "regL3vm")
    {
        regl3vm.yfilter = yfilter;
    }
    if(value_path == "regUfdm")
    {
        regufdm.yfilter = yfilter;
    }
    if(value_path == "shmMin")
    {
        shmmin.yfilter = yfilter;
    }
    if(value_path == "shmSize")
    {
        shmsize.yfilter = yfilter;
    }
    if(value_path == "dbgFilterVrfName")
    {
        dbgfiltervrfname.yfilter = yfilter;
    }
    if(value_path == "dbgFilterVrfTableId")
    {
        dbgfiltervrftableid.yfilter = yfilter;
    }
    if(value_path == "dbgFilterClientName")
    {
        dbgfilterclientname.yfilter = yfilter;
    }
    if(value_path == "dbgFilterClientIdx")
    {
        dbgfilterclientidx.yfilter = yfilter;
    }
    if(value_path == "dbgFilterPrefixList")
    {
        dbgfilterprefixlist.yfilter = yfilter;
    }
    if(value_path == "performanceMode")
    {
        performancemode.yfilter = yfilter;
    }
}

bool System::UribItems::Internal4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanRestart" || name == "servRpm" || name == "servLisp" || name == "regRpm" || name == "regLisp" || name == "mplsVpnMibTrapThresh" || name == "ufdmRteMsgVersion" || name == "supState" || name == "pssUri" || name == "servClisState" || name == "servL3vmState" || name == "servUfdmState" || name == "regClis" || name == "regL3vm" || name == "regUfdm" || name == "shmMin" || name == "shmSize" || name == "dbgFilterVrfName" || name == "dbgFilterVrfTableId" || name == "dbgFilterClientName" || name == "dbgFilterClientIdx" || name == "dbgFilterPrefixList" || name == "performanceMode")
        return true;
    return false;
}

System::UribItems::Internalvrf4Items::Internalvrf4Items()
    :
    internalvrf4_list(this, {"vrfname"})
{

    yang_name = "internalvrf4-items"; yang_parent_name = "urib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Internalvrf4Items::~Internalvrf4Items()
{
}

bool System::UribItems::Internalvrf4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalvrf4_list.len(); index++)
    {
        if(internalvrf4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Internalvrf4Items::has_operation() const
{
    for (std::size_t index=0; index<internalvrf4_list.len(); index++)
    {
        if(internalvrf4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Internalvrf4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Internalvrf4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalvrf4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Internalvrf4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Internalvrf4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalVrf4-list")
    {
        auto c = std::make_shared<System::UribItems::Internalvrf4Items::InternalVrf4List>();
        c->parent = this;
        internalvrf4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Internalvrf4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : internalvrf4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Internalvrf4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Internalvrf4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Internalvrf4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalVrf4-list")
        return true;
    return false;
}

System::UribItems::Internalvrf4Items::InternalVrf4List::InternalVrf4List()
    :
    vrfname{YType::str, "vrfName"},
    vrfconverged{YType::boolean, "vrfConverged"},
    repopulatetimerremaining{YType::str, "repopulateTimerRemaining"},
    rnhvrfmismatchcount{YType::uint64, "rnhVrfMismatchCount"},
    ufdmrtemsgversion{YType::uint8, "ufdmRteMsgVersion"},
    tableid{YType::uint32, "tableId"},
    state{YType::enumeration, "state"},
    l3vmstate{YType::str, "l3vmState"},
    ufdmenabled{YType::boolean, "ufdmEnabled"},
    emptytimerremaining{YType::str, "emptyTimerRemaining"},
    haclientcount{YType::uint32, "haClientCount"},
    haclientconvcount{YType::uint32, "haClientConvCount"},
    haclientconvlist{YType::str, "haClientConvList"},
    haclientunconvlist{YType::str, "haClientUnconvList"},
    routelimitmax{YType::uint32, "routeLimitMax"},
    routelimitwarnpct{YType::uint32, "routeLimitWarnPct"},
    routelimitwarn{YType::uint32, "routeLimitWarn"},
    routelimitreinstpct{YType::uint32, "routeLimitReinstPct"},
    routelimitreinst{YType::uint32, "routeLimitReinst"},
    routelimitreinstpending{YType::boolean, "routeLimitReinstPending"},
    lastmibtrap{YType::str, "lastMibTrap"},
    maxtrapreset{YType::boolean, "maxTrapReset"},
    warntrapreset{YType::boolean, "warnTrapReset"},
    addedcount{YType::uint32, "addedCount"},
    deletedcount{YType::uint32, "deletedCount"},
    droppedcount{YType::uint64, "droppedCount"}
{

    yang_name = "InternalVrf4-list"; yang_parent_name = "internalvrf4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Internalvrf4Items::InternalVrf4List::~InternalVrf4List()
{
}

bool System::UribItems::Internalvrf4Items::InternalVrf4List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| vrfconverged.is_set
	|| repopulatetimerremaining.is_set
	|| rnhvrfmismatchcount.is_set
	|| ufdmrtemsgversion.is_set
	|| tableid.is_set
	|| state.is_set
	|| l3vmstate.is_set
	|| ufdmenabled.is_set
	|| emptytimerremaining.is_set
	|| haclientcount.is_set
	|| haclientconvcount.is_set
	|| haclientconvlist.is_set
	|| haclientunconvlist.is_set
	|| routelimitmax.is_set
	|| routelimitwarnpct.is_set
	|| routelimitwarn.is_set
	|| routelimitreinstpct.is_set
	|| routelimitreinst.is_set
	|| routelimitreinstpending.is_set
	|| lastmibtrap.is_set
	|| maxtrapreset.is_set
	|| warntrapreset.is_set
	|| addedcount.is_set
	|| deletedcount.is_set
	|| droppedcount.is_set;
}

bool System::UribItems::Internalvrf4Items::InternalVrf4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(vrfconverged.yfilter)
	|| ydk::is_set(repopulatetimerremaining.yfilter)
	|| ydk::is_set(rnhvrfmismatchcount.yfilter)
	|| ydk::is_set(ufdmrtemsgversion.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(l3vmstate.yfilter)
	|| ydk::is_set(ufdmenabled.yfilter)
	|| ydk::is_set(emptytimerremaining.yfilter)
	|| ydk::is_set(haclientcount.yfilter)
	|| ydk::is_set(haclientconvcount.yfilter)
	|| ydk::is_set(haclientconvlist.yfilter)
	|| ydk::is_set(haclientunconvlist.yfilter)
	|| ydk::is_set(routelimitmax.yfilter)
	|| ydk::is_set(routelimitwarnpct.yfilter)
	|| ydk::is_set(routelimitwarn.yfilter)
	|| ydk::is_set(routelimitreinstpct.yfilter)
	|| ydk::is_set(routelimitreinst.yfilter)
	|| ydk::is_set(routelimitreinstpending.yfilter)
	|| ydk::is_set(lastmibtrap.yfilter)
	|| ydk::is_set(maxtrapreset.yfilter)
	|| ydk::is_set(warntrapreset.yfilter)
	|| ydk::is_set(addedcount.yfilter)
	|| ydk::is_set(deletedcount.yfilter)
	|| ydk::is_set(droppedcount.yfilter);
}

std::string System::UribItems::Internalvrf4Items::InternalVrf4List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/internalvrf4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Internalvrf4Items::InternalVrf4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalVrf4-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Internalvrf4Items::InternalVrf4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (vrfconverged.is_set || is_set(vrfconverged.yfilter)) leaf_name_data.push_back(vrfconverged.get_name_leafdata());
    if (repopulatetimerremaining.is_set || is_set(repopulatetimerremaining.yfilter)) leaf_name_data.push_back(repopulatetimerremaining.get_name_leafdata());
    if (rnhvrfmismatchcount.is_set || is_set(rnhvrfmismatchcount.yfilter)) leaf_name_data.push_back(rnhvrfmismatchcount.get_name_leafdata());
    if (ufdmrtemsgversion.is_set || is_set(ufdmrtemsgversion.yfilter)) leaf_name_data.push_back(ufdmrtemsgversion.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (l3vmstate.is_set || is_set(l3vmstate.yfilter)) leaf_name_data.push_back(l3vmstate.get_name_leafdata());
    if (ufdmenabled.is_set || is_set(ufdmenabled.yfilter)) leaf_name_data.push_back(ufdmenabled.get_name_leafdata());
    if (emptytimerremaining.is_set || is_set(emptytimerremaining.yfilter)) leaf_name_data.push_back(emptytimerremaining.get_name_leafdata());
    if (haclientcount.is_set || is_set(haclientcount.yfilter)) leaf_name_data.push_back(haclientcount.get_name_leafdata());
    if (haclientconvcount.is_set || is_set(haclientconvcount.yfilter)) leaf_name_data.push_back(haclientconvcount.get_name_leafdata());
    if (haclientconvlist.is_set || is_set(haclientconvlist.yfilter)) leaf_name_data.push_back(haclientconvlist.get_name_leafdata());
    if (haclientunconvlist.is_set || is_set(haclientunconvlist.yfilter)) leaf_name_data.push_back(haclientunconvlist.get_name_leafdata());
    if (routelimitmax.is_set || is_set(routelimitmax.yfilter)) leaf_name_data.push_back(routelimitmax.get_name_leafdata());
    if (routelimitwarnpct.is_set || is_set(routelimitwarnpct.yfilter)) leaf_name_data.push_back(routelimitwarnpct.get_name_leafdata());
    if (routelimitwarn.is_set || is_set(routelimitwarn.yfilter)) leaf_name_data.push_back(routelimitwarn.get_name_leafdata());
    if (routelimitreinstpct.is_set || is_set(routelimitreinstpct.yfilter)) leaf_name_data.push_back(routelimitreinstpct.get_name_leafdata());
    if (routelimitreinst.is_set || is_set(routelimitreinst.yfilter)) leaf_name_data.push_back(routelimitreinst.get_name_leafdata());
    if (routelimitreinstpending.is_set || is_set(routelimitreinstpending.yfilter)) leaf_name_data.push_back(routelimitreinstpending.get_name_leafdata());
    if (lastmibtrap.is_set || is_set(lastmibtrap.yfilter)) leaf_name_data.push_back(lastmibtrap.get_name_leafdata());
    if (maxtrapreset.is_set || is_set(maxtrapreset.yfilter)) leaf_name_data.push_back(maxtrapreset.get_name_leafdata());
    if (warntrapreset.is_set || is_set(warntrapreset.yfilter)) leaf_name_data.push_back(warntrapreset.get_name_leafdata());
    if (addedcount.is_set || is_set(addedcount.yfilter)) leaf_name_data.push_back(addedcount.get_name_leafdata());
    if (deletedcount.is_set || is_set(deletedcount.yfilter)) leaf_name_data.push_back(deletedcount.get_name_leafdata());
    if (droppedcount.is_set || is_set(droppedcount.yfilter)) leaf_name_data.push_back(droppedcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Internalvrf4Items::InternalVrf4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Internalvrf4Items::InternalVrf4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Internalvrf4Items::InternalVrf4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfConverged")
    {
        vrfconverged = value;
        vrfconverged.value_namespace = name_space;
        vrfconverged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repopulateTimerRemaining")
    {
        repopulatetimerremaining = value;
        repopulatetimerremaining.value_namespace = name_space;
        repopulatetimerremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnhVrfMismatchCount")
    {
        rnhvrfmismatchcount = value;
        rnhvrfmismatchcount.value_namespace = name_space;
        rnhvrfmismatchcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ufdmRteMsgVersion")
    {
        ufdmrtemsgversion = value;
        ufdmrtemsgversion.value_namespace = name_space;
        ufdmrtemsgversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3vmState")
    {
        l3vmstate = value;
        l3vmstate.value_namespace = name_space;
        l3vmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ufdmEnabled")
    {
        ufdmenabled = value;
        ufdmenabled.value_namespace = name_space;
        ufdmenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emptyTimerRemaining")
    {
        emptytimerremaining = value;
        emptytimerremaining.value_namespace = name_space;
        emptytimerremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientCount")
    {
        haclientcount = value;
        haclientcount.value_namespace = name_space;
        haclientcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientConvCount")
    {
        haclientconvcount = value;
        haclientconvcount.value_namespace = name_space;
        haclientconvcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientConvList")
    {
        haclientconvlist = value;
        haclientconvlist.value_namespace = name_space;
        haclientconvlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientUnconvList")
    {
        haclientunconvlist = value;
        haclientunconvlist.value_namespace = name_space;
        haclientunconvlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitMax")
    {
        routelimitmax = value;
        routelimitmax.value_namespace = name_space;
        routelimitmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitWarnPct")
    {
        routelimitwarnpct = value;
        routelimitwarnpct.value_namespace = name_space;
        routelimitwarnpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitWarn")
    {
        routelimitwarn = value;
        routelimitwarn.value_namespace = name_space;
        routelimitwarn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitReinstPct")
    {
        routelimitreinstpct = value;
        routelimitreinstpct.value_namespace = name_space;
        routelimitreinstpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitReinst")
    {
        routelimitreinst = value;
        routelimitreinst.value_namespace = name_space;
        routelimitreinst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitReinstPending")
    {
        routelimitreinstpending = value;
        routelimitreinstpending.value_namespace = name_space;
        routelimitreinstpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMibTrap")
    {
        lastmibtrap = value;
        lastmibtrap.value_namespace = name_space;
        lastmibtrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTrapReset")
    {
        maxtrapreset = value;
        maxtrapreset.value_namespace = name_space;
        maxtrapreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warnTrapReset")
    {
        warntrapreset = value;
        warntrapreset.value_namespace = name_space;
        warntrapreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addedCount")
    {
        addedcount = value;
        addedcount.value_namespace = name_space;
        addedcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedCount")
    {
        deletedcount = value;
        deletedcount.value_namespace = name_space;
        deletedcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedCount")
    {
        droppedcount = value;
        droppedcount.value_namespace = name_space;
        droppedcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Internalvrf4Items::InternalVrf4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "vrfConverged")
    {
        vrfconverged.yfilter = yfilter;
    }
    if(value_path == "repopulateTimerRemaining")
    {
        repopulatetimerremaining.yfilter = yfilter;
    }
    if(value_path == "rnhVrfMismatchCount")
    {
        rnhvrfmismatchcount.yfilter = yfilter;
    }
    if(value_path == "ufdmRteMsgVersion")
    {
        ufdmrtemsgversion.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "l3vmState")
    {
        l3vmstate.yfilter = yfilter;
    }
    if(value_path == "ufdmEnabled")
    {
        ufdmenabled.yfilter = yfilter;
    }
    if(value_path == "emptyTimerRemaining")
    {
        emptytimerremaining.yfilter = yfilter;
    }
    if(value_path == "haClientCount")
    {
        haclientcount.yfilter = yfilter;
    }
    if(value_path == "haClientConvCount")
    {
        haclientconvcount.yfilter = yfilter;
    }
    if(value_path == "haClientConvList")
    {
        haclientconvlist.yfilter = yfilter;
    }
    if(value_path == "haClientUnconvList")
    {
        haclientunconvlist.yfilter = yfilter;
    }
    if(value_path == "routeLimitMax")
    {
        routelimitmax.yfilter = yfilter;
    }
    if(value_path == "routeLimitWarnPct")
    {
        routelimitwarnpct.yfilter = yfilter;
    }
    if(value_path == "routeLimitWarn")
    {
        routelimitwarn.yfilter = yfilter;
    }
    if(value_path == "routeLimitReinstPct")
    {
        routelimitreinstpct.yfilter = yfilter;
    }
    if(value_path == "routeLimitReinst")
    {
        routelimitreinst.yfilter = yfilter;
    }
    if(value_path == "routeLimitReinstPending")
    {
        routelimitreinstpending.yfilter = yfilter;
    }
    if(value_path == "lastMibTrap")
    {
        lastmibtrap.yfilter = yfilter;
    }
    if(value_path == "maxTrapReset")
    {
        maxtrapreset.yfilter = yfilter;
    }
    if(value_path == "warnTrapReset")
    {
        warntrapreset.yfilter = yfilter;
    }
    if(value_path == "addedCount")
    {
        addedcount.yfilter = yfilter;
    }
    if(value_path == "deletedCount")
    {
        deletedcount.yfilter = yfilter;
    }
    if(value_path == "droppedCount")
    {
        droppedcount.yfilter = yfilter;
    }
}

bool System::UribItems::Internalvrf4Items::InternalVrf4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfName" || name == "vrfConverged" || name == "repopulateTimerRemaining" || name == "rnhVrfMismatchCount" || name == "ufdmRteMsgVersion" || name == "tableId" || name == "state" || name == "l3vmState" || name == "ufdmEnabled" || name == "emptyTimerRemaining" || name == "haClientCount" || name == "haClientConvCount" || name == "haClientConvList" || name == "haClientUnconvList" || name == "routeLimitMax" || name == "routeLimitWarnPct" || name == "routeLimitWarn" || name == "routeLimitReinstPct" || name == "routeLimitReinst" || name == "routeLimitReinstPending" || name == "lastMibTrap" || name == "maxTrapReset" || name == "warnTrapReset" || name == "addedCount" || name == "deletedCount" || name == "droppedCount")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4Items()
    :
    table4_list(this, {"vrfname"})
{

    yang_name = "table4-items"; yang_parent_name = "urib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Table4Items::~Table4Items()
{
}

bool System::UribItems::Table4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table4_list.len(); index++)
    {
        if(table4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::has_operation() const
{
    for (std::size_t index=0; index<table4_list.len(); index++)
    {
        if(table4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Table4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Table4-list")
    {
        auto c = std::make_shared<System::UribItems::Table4Items::Table4List>();
        c->parent = this;
        table4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : table4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Table4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Table4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Table4List()
    :
    vrfname{YType::str, "vrfName"},
    routecount{YType::uint32, "routeCount"},
    unibestcount{YType::uint32, "uniBestCount"},
    unibackupcount{YType::uint32, "uniBackupCount"},
    multibestcount{YType::uint32, "multiBestCount"},
    multibackupcount{YType::uint32, "multiBackupCount"},
    routepermaskcount{YType::str, "routePerMaskCount"}
        ,
    hiddennh4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Hiddennh4Items>())
    , route4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items>())
{
    hiddennh4_items->parent = this;
    route4_items->parent = this;

    yang_name = "Table4-list"; yang_parent_name = "table4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UribItems::Table4Items::Table4List::~Table4List()
{
}

bool System::UribItems::Table4Items::Table4List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| routecount.is_set
	|| unibestcount.is_set
	|| unibackupcount.is_set
	|| multibestcount.is_set
	|| multibackupcount.is_set
	|| routepermaskcount.is_set
	|| (hiddennh4_items !=  nullptr && hiddennh4_items->has_data())
	|| (route4_items !=  nullptr && route4_items->has_data());
}

bool System::UribItems::Table4Items::Table4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(routecount.yfilter)
	|| ydk::is_set(unibestcount.yfilter)
	|| ydk::is_set(unibackupcount.yfilter)
	|| ydk::is_set(multibestcount.yfilter)
	|| ydk::is_set(multibackupcount.yfilter)
	|| ydk::is_set(routepermaskcount.yfilter)
	|| (hiddennh4_items !=  nullptr && hiddennh4_items->has_operation())
	|| (route4_items !=  nullptr && route4_items->has_operation());
}

std::string System::UribItems::Table4Items::Table4List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/urib-items/table4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UribItems::Table4Items::Table4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Table4-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (routecount.is_set || is_set(routecount.yfilter)) leaf_name_data.push_back(routecount.get_name_leafdata());
    if (unibestcount.is_set || is_set(unibestcount.yfilter)) leaf_name_data.push_back(unibestcount.get_name_leafdata());
    if (unibackupcount.is_set || is_set(unibackupcount.yfilter)) leaf_name_data.push_back(unibackupcount.get_name_leafdata());
    if (multibestcount.is_set || is_set(multibestcount.yfilter)) leaf_name_data.push_back(multibestcount.get_name_leafdata());
    if (multibackupcount.is_set || is_set(multibackupcount.yfilter)) leaf_name_data.push_back(multibackupcount.get_name_leafdata());
    if (routepermaskcount.is_set || is_set(routepermaskcount.yfilter)) leaf_name_data.push_back(routepermaskcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hiddennh4-items")
    {
        if(hiddennh4_items == nullptr)
        {
            hiddennh4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Hiddennh4Items>();
        }
        return hiddennh4_items;
    }

    if(child_yang_name == "route4-items")
    {
        if(route4_items == nullptr)
        {
            route4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items>();
        }
        return route4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hiddennh4_items != nullptr)
    {
        children["hiddennh4-items"] = hiddennh4_items;
    }

    if(route4_items != nullptr)
    {
        children["route4-items"] = route4_items;
    }

    return children;
}

void System::UribItems::Table4Items::Table4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeCount")
    {
        routecount = value;
        routecount.value_namespace = name_space;
        routecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uniBestCount")
    {
        unibestcount = value;
        unibestcount.value_namespace = name_space;
        unibestcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uniBackupCount")
    {
        unibackupcount = value;
        unibackupcount.value_namespace = name_space;
        unibackupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiBestCount")
    {
        multibestcount = value;
        multibestcount.value_namespace = name_space;
        multibestcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiBackupCount")
    {
        multibackupcount = value;
        multibackupcount.value_namespace = name_space;
        multibackupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePerMaskCount")
    {
        routepermaskcount = value;
        routepermaskcount.value_namespace = name_space;
        routepermaskcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "routeCount")
    {
        routecount.yfilter = yfilter;
    }
    if(value_path == "uniBestCount")
    {
        unibestcount.yfilter = yfilter;
    }
    if(value_path == "uniBackupCount")
    {
        unibackupcount.yfilter = yfilter;
    }
    if(value_path == "multiBestCount")
    {
        multibestcount.yfilter = yfilter;
    }
    if(value_path == "multiBackupCount")
    {
        multibackupcount.yfilter = yfilter;
    }
    if(value_path == "routePerMaskCount")
    {
        routepermaskcount.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hiddennh4-items" || name == "route4-items" || name == "vrfName" || name == "routeCount" || name == "uniBestCount" || name == "uniBackupCount" || name == "multiBestCount" || name == "multiBackupCount" || name == "routePerMaskCount")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Hiddennh4Items::Hiddennh4Items()
    :
    hiddennexthop4_list(this, {"id"})
{

    yang_name = "hiddennh4-items"; yang_parent_name = "Table4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Hiddennh4Items::~Hiddennh4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Hiddennh4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hiddennexthop4_list.len(); index++)
    {
        if(hiddennexthop4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::Table4List::Hiddennh4Items::has_operation() const
{
    for (std::size_t index=0; index<hiddennexthop4_list.len(); index++)
    {
        if(hiddennexthop4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Hiddennh4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hiddennh4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Hiddennh4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Hiddennh4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HiddenNextHop4-list")
    {
        auto c = std::make_shared<System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List>();
        c->parent = this;
        hiddennexthop4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Hiddennh4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hiddennexthop4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Table4Items::Table4List::Hiddennh4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::Table4List::Hiddennh4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::Table4List::Hiddennh4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HiddenNextHop4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::HiddenNextHop4List()
    :
    id{YType::uint32, "id"},
    routeaddress{YType::str, "routeAddress"},
    routemask{YType::uint8, "routeMask"},
    clientname{YType::str, "clientName"},
    recursivenhaddress{YType::str, "recursiveNhAddress"},
    recursivenhmask{YType::uint8, "recursiveNhMask"}
{

    yang_name = "HiddenNextHop4-list"; yang_parent_name = "hiddennh4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::~HiddenNextHop4List()
{
}

bool System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| routeaddress.is_set
	|| routemask.is_set
	|| clientname.is_set
	|| recursivenhaddress.is_set
	|| recursivenhmask.is_set;
}

bool System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(routeaddress.yfilter)
	|| ydk::is_set(routemask.yfilter)
	|| ydk::is_set(clientname.yfilter)
	|| ydk::is_set(recursivenhaddress.yfilter)
	|| ydk::is_set(recursivenhmask.yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HiddenNextHop4-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (routeaddress.is_set || is_set(routeaddress.yfilter)) leaf_name_data.push_back(routeaddress.get_name_leafdata());
    if (routemask.is_set || is_set(routemask.yfilter)) leaf_name_data.push_back(routemask.get_name_leafdata());
    if (clientname.is_set || is_set(clientname.yfilter)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (recursivenhaddress.is_set || is_set(recursivenhaddress.yfilter)) leaf_name_data.push_back(recursivenhaddress.get_name_leafdata());
    if (recursivenhmask.is_set || is_set(recursivenhmask.yfilter)) leaf_name_data.push_back(recursivenhmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeAddress")
    {
        routeaddress = value;
        routeaddress.value_namespace = name_space;
        routeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMask")
    {
        routemask = value;
        routemask.value_namespace = name_space;
        routemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientName")
    {
        clientname = value;
        clientname.value_namespace = name_space;
        clientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNhAddress")
    {
        recursivenhaddress = value;
        recursivenhaddress.value_namespace = name_space;
        recursivenhaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNhMask")
    {
        recursivenhmask = value;
        recursivenhmask.value_namespace = name_space;
        recursivenhmask.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "routeAddress")
    {
        routeaddress.yfilter = yfilter;
    }
    if(value_path == "routeMask")
    {
        routemask.yfilter = yfilter;
    }
    if(value_path == "clientName")
    {
        clientname.yfilter = yfilter;
    }
    if(value_path == "recursiveNhAddress")
    {
        recursivenhaddress.yfilter = yfilter;
    }
    if(value_path == "recursiveNhMask")
    {
        recursivenhmask.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Hiddennh4Items::HiddenNextHop4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "routeAddress" || name == "routeMask" || name == "clientName" || name == "recursiveNhAddress" || name == "recursiveNhMask")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4Items()
    :
    route4_list(this, {"prefix"})
{

    yang_name = "route4-items"; yang_parent_name = "Table4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::~Route4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route4_list.len(); index++)
    {
        if(route4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::has_operation() const
{
    for (std::size_t index=0; index<route4_list.len(); index++)
    {
        if(route4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Route4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route4-list")
    {
        auto c = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List>();
        c->parent = this;
        route4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Route4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::Table4List::Route4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Route4List()
    :
    prefix{YType::str, "prefix"},
    ubestnexthopcount{YType::uint32, "uBestNextHopCount"},
    mbestnexthopcount{YType::uint32, "mBestNextHopCount"}
        ,
    nh4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items>())
    , routedetail4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items>())
{
    nh4_items->parent = this;
    routedetail4_items->parent = this;

    yang_name = "Route4-list"; yang_parent_name = "route4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::~Route4List()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| ubestnexthopcount.is_set
	|| mbestnexthopcount.is_set
	|| (nh4_items !=  nullptr && nh4_items->has_data())
	|| (routedetail4_items !=  nullptr && routedetail4_items->has_data());
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ubestnexthopcount.yfilter)
	|| ydk::is_set(mbestnexthopcount.yfilter)
	|| (nh4_items !=  nullptr && nh4_items->has_operation())
	|| (routedetail4_items !=  nullptr && routedetail4_items->has_operation());
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route4-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ubestnexthopcount.is_set || is_set(ubestnexthopcount.yfilter)) leaf_name_data.push_back(ubestnexthopcount.get_name_leafdata());
    if (mbestnexthopcount.is_set || is_set(mbestnexthopcount.yfilter)) leaf_name_data.push_back(mbestnexthopcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh4-items")
    {
        if(nh4_items == nullptr)
        {
            nh4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items>();
        }
        return nh4_items;
    }

    if(child_yang_name == "routedetail4-items")
    {
        if(routedetail4_items == nullptr)
        {
            routedetail4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items>();
        }
        return routedetail4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh4_items != nullptr)
    {
        children["nh4-items"] = nh4_items;
    }

    if(routedetail4_items != nullptr)
    {
        children["routedetail4-items"] = routedetail4_items;
    }

    return children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uBestNextHopCount")
    {
        ubestnexthopcount = value;
        ubestnexthopcount.value_namespace = name_space;
        ubestnexthopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mBestNextHopCount")
    {
        mbestnexthopcount = value;
        mbestnexthopcount.value_namespace = name_space;
        mbestnexthopcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "uBestNextHopCount")
    {
        ubestnexthopcount.yfilter = yfilter;
    }
    if(value_path == "mBestNextHopCount")
    {
        mbestnexthopcount.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh4-items" || name == "routedetail4-items" || name == "prefix" || name == "uBestNextHopCount" || name == "mBestNextHopCount")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::Nh4Items()
    :
    nexthop4_list(this, {"id"})
{

    yang_name = "nh4-items"; yang_parent_name = "Route4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::~Nh4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop4_list.len(); index++)
    {
        if(nexthop4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::has_operation() const
{
    for (std::size_t index=0; index<nexthop4_list.len(); index++)
    {
        if(nexthop4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NextHop4-list")
    {
        auto c = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List>();
        c->parent = this;
        nexthop4_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop4_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NextHop4-list")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::NextHop4List()
    :
    id{YType::uint32, "id"},
    prefix{YType::str, "prefix"},
    mask{YType::uint32, "mask"},
    tableid{YType::uint32, "tableId"},
    interfacename{YType::str, "interfaceName"},
    owner{YType::str, "owner"},
    preference{YType::uint32, "preference"},
    metric{YType::uint32, "metric"},
    uptime{YType::str, "uptime"}
        ,
    nhdetail4_items(std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items>())
{
    nhdetail4_items->parent = this;

    yang_name = "NextHop4-list"; yang_parent_name = "nh4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::~NextHop4List()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| prefix.is_set
	|| mask.is_set
	|| tableid.is_set
	|| interfacename.is_set
	|| owner.is_set
	|| preference.is_set
	|| metric.is_set
	|| uptime.is_set
	|| (nhdetail4_items !=  nullptr && nhdetail4_items->has_data());
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(interfacename.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (nhdetail4_items !=  nullptr && nhdetail4_items->has_operation());
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NextHop4-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (interfacename.is_set || is_set(interfacename.yfilter)) leaf_name_data.push_back(interfacename.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhdetail4-items")
    {
        if(nhdetail4_items == nullptr)
        {
            nhdetail4_items = std::make_shared<System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items>();
        }
        return nhdetail4_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nhdetail4_items != nullptr)
    {
        children["nhdetail4-items"] = nhdetail4_items;
    }

    return children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceName")
    {
        interfacename = value;
        interfacename.value_namespace = name_space;
        interfacename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "interfaceName")
    {
        interfacename.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhdetail4-items" || name == "id" || name == "prefix" || name == "mask" || name == "tableId" || name == "interfaceName" || name == "owner" || name == "preference" || name == "metric" || name == "uptime")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::Nhdetail4Items()
    :
    flags{YType::str, "flags"},
    nhlfeflags{YType::str, "nhlfeFlags"},
    tlvtype{YType::enumeration, "tlvType"},
    routetype{YType::str, "routeType"},
    tag{YType::uint32, "tag"},
    segmentid{YType::uint32, "segmentId"},
    tunnelid{YType::uint32, "tunnelId"},
    encaptype{YType::enumeration, "encapType"},
    labelstack{YType::str, "labelStack"},
    nhlfeowner{YType::str, "nhlfeOwner"},
    clientdata{YType::enumeration, "clientData"},
    recursivenexthopprefix{YType::str, "recursiveNextHopPrefix"},
    xribgporigin{YType::str, "xriBgpOrigin"},
    xribgppeer{YType::str, "xriBgpPeer"},
    tlv{YType::str, "tlv"},
    tlvextentedcommunity{YType::str, "tlvExtentedCommunity"},
    tlvattachexport{YType::str, "tlvAttachExport"}
{

    yang_name = "nhdetail4-items"; yang_parent_name = "NextHop4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::~Nhdetail4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| nhlfeflags.is_set
	|| tlvtype.is_set
	|| routetype.is_set
	|| tag.is_set
	|| segmentid.is_set
	|| tunnelid.is_set
	|| encaptype.is_set
	|| labelstack.is_set
	|| nhlfeowner.is_set
	|| clientdata.is_set
	|| recursivenexthopprefix.is_set
	|| xribgporigin.is_set
	|| xribgppeer.is_set
	|| tlv.is_set
	|| tlvextentedcommunity.is_set
	|| tlvattachexport.is_set;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(nhlfeflags.yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(segmentid.yfilter)
	|| ydk::is_set(tunnelid.yfilter)
	|| ydk::is_set(encaptype.yfilter)
	|| ydk::is_set(labelstack.yfilter)
	|| ydk::is_set(nhlfeowner.yfilter)
	|| ydk::is_set(clientdata.yfilter)
	|| ydk::is_set(recursivenexthopprefix.yfilter)
	|| ydk::is_set(xribgporigin.yfilter)
	|| ydk::is_set(xribgppeer.yfilter)
	|| ydk::is_set(tlv.yfilter)
	|| ydk::is_set(tlvextentedcommunity.yfilter)
	|| ydk::is_set(tlvattachexport.yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhdetail4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (nhlfeflags.is_set || is_set(nhlfeflags.yfilter)) leaf_name_data.push_back(nhlfeflags.get_name_leafdata());
    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (segmentid.is_set || is_set(segmentid.yfilter)) leaf_name_data.push_back(segmentid.get_name_leafdata());
    if (tunnelid.is_set || is_set(tunnelid.yfilter)) leaf_name_data.push_back(tunnelid.get_name_leafdata());
    if (encaptype.is_set || is_set(encaptype.yfilter)) leaf_name_data.push_back(encaptype.get_name_leafdata());
    if (labelstack.is_set || is_set(labelstack.yfilter)) leaf_name_data.push_back(labelstack.get_name_leafdata());
    if (nhlfeowner.is_set || is_set(nhlfeowner.yfilter)) leaf_name_data.push_back(nhlfeowner.get_name_leafdata());
    if (clientdata.is_set || is_set(clientdata.yfilter)) leaf_name_data.push_back(clientdata.get_name_leafdata());
    if (recursivenexthopprefix.is_set || is_set(recursivenexthopprefix.yfilter)) leaf_name_data.push_back(recursivenexthopprefix.get_name_leafdata());
    if (xribgporigin.is_set || is_set(xribgporigin.yfilter)) leaf_name_data.push_back(xribgporigin.get_name_leafdata());
    if (xribgppeer.is_set || is_set(xribgppeer.yfilter)) leaf_name_data.push_back(xribgppeer.get_name_leafdata());
    if (tlv.is_set || is_set(tlv.yfilter)) leaf_name_data.push_back(tlv.get_name_leafdata());
    if (tlvextentedcommunity.is_set || is_set(tlvextentedcommunity.yfilter)) leaf_name_data.push_back(tlvextentedcommunity.get_name_leafdata());
    if (tlvattachexport.is_set || is_set(tlvattachexport.yfilter)) leaf_name_data.push_back(tlvattachexport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhlfeFlags")
    {
        nhlfeflags = value;
        nhlfeflags.value_namespace = name_space;
        nhlfeflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvType")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmentId")
    {
        segmentid = value;
        segmentid.value_namespace = name_space;
        segmentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelId")
    {
        tunnelid = value;
        tunnelid.value_namespace = name_space;
        tunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapType")
    {
        encaptype = value;
        encaptype.value_namespace = name_space;
        encaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelStack")
    {
        labelstack = value;
        labelstack.value_namespace = name_space;
        labelstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhlfeOwner")
    {
        nhlfeowner = value;
        nhlfeowner.value_namespace = name_space;
        nhlfeowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientData")
    {
        clientdata = value;
        clientdata.value_namespace = name_space;
        clientdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNextHopPrefix")
    {
        recursivenexthopprefix = value;
        recursivenexthopprefix.value_namespace = name_space;
        recursivenexthopprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xriBgpOrigin")
    {
        xribgporigin = value;
        xribgporigin.value_namespace = name_space;
        xribgporigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xriBgpPeer")
    {
        xribgppeer = value;
        xribgppeer.value_namespace = name_space;
        xribgppeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv")
    {
        tlv = value;
        tlv.value_namespace = name_space;
        tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvExtentedCommunity")
    {
        tlvextentedcommunity = value;
        tlvextentedcommunity.value_namespace = name_space;
        tlvextentedcommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvAttachExport")
    {
        tlvattachexport = value;
        tlvattachexport.value_namespace = name_space;
        tlvattachexport.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "nhlfeFlags")
    {
        nhlfeflags.yfilter = yfilter;
    }
    if(value_path == "tlvType")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "segmentId")
    {
        segmentid.yfilter = yfilter;
    }
    if(value_path == "tunnelId")
    {
        tunnelid.yfilter = yfilter;
    }
    if(value_path == "encapType")
    {
        encaptype.yfilter = yfilter;
    }
    if(value_path == "labelStack")
    {
        labelstack.yfilter = yfilter;
    }
    if(value_path == "nhlfeOwner")
    {
        nhlfeowner.yfilter = yfilter;
    }
    if(value_path == "clientData")
    {
        clientdata.yfilter = yfilter;
    }
    if(value_path == "recursiveNextHopPrefix")
    {
        recursivenexthopprefix.yfilter = yfilter;
    }
    if(value_path == "xriBgpOrigin")
    {
        xribgporigin.yfilter = yfilter;
    }
    if(value_path == "xriBgpPeer")
    {
        xribgppeer.yfilter = yfilter;
    }
    if(value_path == "tlv")
    {
        tlv.yfilter = yfilter;
    }
    if(value_path == "tlvExtentedCommunity")
    {
        tlvextentedcommunity.yfilter = yfilter;
    }
    if(value_path == "tlvAttachExport")
    {
        tlvattachexport.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "nhlfeFlags" || name == "tlvType" || name == "routeType" || name == "tag" || name == "segmentId" || name == "tunnelId" || name == "encapType" || name == "labelStack" || name == "nhlfeOwner" || name == "clientData" || name == "recursiveNextHopPrefix" || name == "xriBgpOrigin" || name == "xriBgpPeer" || name == "tlv" || name == "tlvExtentedCommunity" || name == "tlvAttachExport")
        return true;
    return false;
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::Routedetail4Items()
    :
    wildcard{YType::boolean, "wildcard"},
    flags{YType::str, "flags"},
    attached{YType::boolean, "attached"}
{

    yang_name = "routedetail4-items"; yang_parent_name = "Route4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::~Routedetail4Items()
{
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::has_data() const
{
    if (is_presence_container) return true;
    return wildcard.is_set
	|| flags.is_set
	|| attached.is_set;
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(attached.yfilter);
}

std::string System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedetail4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (attached.is_set || is_set(attached.yfilter)) leaf_name_data.push_back(attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached")
    {
        attached = value;
        attached.value_namespace = name_space;
        attached.value_namespace_prefix = name_space_prefix;
    }
}

void System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "attached")
    {
        attached.yfilter = yfilter;
    }
}

bool System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wildcard" || name == "flags" || name == "attached")
        return true;
    return false;
}

System::U6ribItems::U6ribItems()
    :
    uribdmeversion{YType::uint32, "uribDmeVersion"}
        ,
    client6_items(std::make_shared<System::U6ribItems::Client6Items>())
    , internal6_items(std::make_shared<System::U6ribItems::Internal6Items>())
    , internalvrf6_items(std::make_shared<System::U6ribItems::Internalvrf6Items>())
    , table6_items(std::make_shared<System::U6ribItems::Table6Items>())
{
    client6_items->parent = this;
    internal6_items->parent = this;
    internalvrf6_items->parent = this;
    table6_items->parent = this;

    yang_name = "u6rib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::~U6ribItems()
{
}

bool System::U6ribItems::has_data() const
{
    if (is_presence_container) return true;
    return uribdmeversion.is_set
	|| (client6_items !=  nullptr && client6_items->has_data())
	|| (internal6_items !=  nullptr && internal6_items->has_data())
	|| (internalvrf6_items !=  nullptr && internalvrf6_items->has_data())
	|| (table6_items !=  nullptr && table6_items->has_data());
}

bool System::U6ribItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uribdmeversion.yfilter)
	|| (client6_items !=  nullptr && client6_items->has_operation())
	|| (internal6_items !=  nullptr && internal6_items->has_operation())
	|| (internalvrf6_items !=  nullptr && internalvrf6_items->has_operation())
	|| (table6_items !=  nullptr && table6_items->has_operation());
}

std::string System::U6ribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "u6rib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uribdmeversion.is_set || is_set(uribdmeversion.yfilter)) leaf_name_data.push_back(uribdmeversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client6-items")
    {
        if(client6_items == nullptr)
        {
            client6_items = std::make_shared<System::U6ribItems::Client6Items>();
        }
        return client6_items;
    }

    if(child_yang_name == "internal6-items")
    {
        if(internal6_items == nullptr)
        {
            internal6_items = std::make_shared<System::U6ribItems::Internal6Items>();
        }
        return internal6_items;
    }

    if(child_yang_name == "internalvrf6-items")
    {
        if(internalvrf6_items == nullptr)
        {
            internalvrf6_items = std::make_shared<System::U6ribItems::Internalvrf6Items>();
        }
        return internalvrf6_items;
    }

    if(child_yang_name == "table6-items")
    {
        if(table6_items == nullptr)
        {
            table6_items = std::make_shared<System::U6ribItems::Table6Items>();
        }
        return table6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client6_items != nullptr)
    {
        children["client6-items"] = client6_items;
    }

    if(internal6_items != nullptr)
    {
        children["internal6-items"] = internal6_items;
    }

    if(internalvrf6_items != nullptr)
    {
        children["internalvrf6-items"] = internalvrf6_items;
    }

    if(table6_items != nullptr)
    {
        children["table6-items"] = table6_items;
    }

    return children;
}

void System::U6ribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uribDmeVersion")
    {
        uribdmeversion = value;
        uribdmeversion.value_namespace = name_space;
        uribdmeversion.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uribDmeVersion")
    {
        uribdmeversion.yfilter = yfilter;
    }
}

bool System::U6ribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client6-items" || name == "internal6-items" || name == "internalvrf6-items" || name == "table6-items" || name == "uribDmeVersion")
        return true;
    return false;
}

System::U6ribItems::Client6Items::Client6Items()
    :
    client6_list(this, {"name"})
{

    yang_name = "client6-items"; yang_parent_name = "u6rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Client6Items::~Client6Items()
{
}

bool System::U6ribItems::Client6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client6_list.len(); index++)
    {
        if(client6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Client6Items::has_operation() const
{
    for (std::size_t index=0; index<client6_list.len(); index++)
    {
        if(client6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Client6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Client6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Client6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Client6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Client6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Client6Items::Client6List>();
        c->parent = this;
        client6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Client6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Client6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Client6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Client6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Client6-list")
        return true;
    return false;
}

System::U6ribItems::Client6Items::Client6List::Client6List()
    :
    name{YType::str, "name"},
    updateackqueuecount{YType::uint32, "updateAckQueueCount"},
    readyclientqueuecount{YType::uint32, "readyClientQueueCount"},
    bufreqclientqueuecount{YType::uint32, "bufReqClientQueueCount"},
    rtebufusedqueuecount{YType::uint32, "rteBufUsedQueueCount"},
    rnhbufusedqueuecount{YType::uint32, "rnhBufUsedQueueCount"},
    state{YType::enumeration, "state"},
    badtablecount{YType::uint32, "badTableCount"},
    index_{YType::uint64, "index"},
    epid{YType::uint32, "epid"},
    mtssap{YType::int32, "mtsSap"},
    mrumisses{YType::uint32, "mruMisses"},
    mruhits{YType::uint32, "mruHits"},
    staletime{YType::uint32, "staleTime"},
    staletimerremaining{YType::str, "staleTimerRemaining"}
        ,
    message6_items(std::make_shared<System::U6ribItems::Client6Items::Client6List::Message6Items>())
    , clientvrf6_items(std::make_shared<System::U6ribItems::Client6Items::Client6List::Clientvrf6Items>())
{
    message6_items->parent = this;
    clientvrf6_items->parent = this;

    yang_name = "Client6-list"; yang_parent_name = "client6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Client6Items::Client6List::~Client6List()
{
}

bool System::U6ribItems::Client6Items::Client6List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| updateackqueuecount.is_set
	|| readyclientqueuecount.is_set
	|| bufreqclientqueuecount.is_set
	|| rtebufusedqueuecount.is_set
	|| rnhbufusedqueuecount.is_set
	|| state.is_set
	|| badtablecount.is_set
	|| index_.is_set
	|| epid.is_set
	|| mtssap.is_set
	|| mrumisses.is_set
	|| mruhits.is_set
	|| staletime.is_set
	|| staletimerremaining.is_set
	|| (message6_items !=  nullptr && message6_items->has_data())
	|| (clientvrf6_items !=  nullptr && clientvrf6_items->has_data());
}

bool System::U6ribItems::Client6Items::Client6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(updateackqueuecount.yfilter)
	|| ydk::is_set(readyclientqueuecount.yfilter)
	|| ydk::is_set(bufreqclientqueuecount.yfilter)
	|| ydk::is_set(rtebufusedqueuecount.yfilter)
	|| ydk::is_set(rnhbufusedqueuecount.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(badtablecount.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(epid.yfilter)
	|| ydk::is_set(mtssap.yfilter)
	|| ydk::is_set(mrumisses.yfilter)
	|| ydk::is_set(mruhits.yfilter)
	|| ydk::is_set(staletime.yfilter)
	|| ydk::is_set(staletimerremaining.yfilter)
	|| (message6_items !=  nullptr && message6_items->has_operation())
	|| (clientvrf6_items !=  nullptr && clientvrf6_items->has_operation());
}

std::string System::U6ribItems::Client6Items::Client6List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/client6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Client6Items::Client6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Client6-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Client6Items::Client6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (updateackqueuecount.is_set || is_set(updateackqueuecount.yfilter)) leaf_name_data.push_back(updateackqueuecount.get_name_leafdata());
    if (readyclientqueuecount.is_set || is_set(readyclientqueuecount.yfilter)) leaf_name_data.push_back(readyclientqueuecount.get_name_leafdata());
    if (bufreqclientqueuecount.is_set || is_set(bufreqclientqueuecount.yfilter)) leaf_name_data.push_back(bufreqclientqueuecount.get_name_leafdata());
    if (rtebufusedqueuecount.is_set || is_set(rtebufusedqueuecount.yfilter)) leaf_name_data.push_back(rtebufusedqueuecount.get_name_leafdata());
    if (rnhbufusedqueuecount.is_set || is_set(rnhbufusedqueuecount.yfilter)) leaf_name_data.push_back(rnhbufusedqueuecount.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (badtablecount.is_set || is_set(badtablecount.yfilter)) leaf_name_data.push_back(badtablecount.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (epid.is_set || is_set(epid.yfilter)) leaf_name_data.push_back(epid.get_name_leafdata());
    if (mtssap.is_set || is_set(mtssap.yfilter)) leaf_name_data.push_back(mtssap.get_name_leafdata());
    if (mrumisses.is_set || is_set(mrumisses.yfilter)) leaf_name_data.push_back(mrumisses.get_name_leafdata());
    if (mruhits.is_set || is_set(mruhits.yfilter)) leaf_name_data.push_back(mruhits.get_name_leafdata());
    if (staletime.is_set || is_set(staletime.yfilter)) leaf_name_data.push_back(staletime.get_name_leafdata());
    if (staletimerremaining.is_set || is_set(staletimerremaining.yfilter)) leaf_name_data.push_back(staletimerremaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Client6Items::Client6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message6-items")
    {
        if(message6_items == nullptr)
        {
            message6_items = std::make_shared<System::U6ribItems::Client6Items::Client6List::Message6Items>();
        }
        return message6_items;
    }

    if(child_yang_name == "clientvrf6-items")
    {
        if(clientvrf6_items == nullptr)
        {
            clientvrf6_items = std::make_shared<System::U6ribItems::Client6Items::Client6List::Clientvrf6Items>();
        }
        return clientvrf6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Client6Items::Client6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(message6_items != nullptr)
    {
        children["message6-items"] = message6_items;
    }

    if(clientvrf6_items != nullptr)
    {
        children["clientvrf6-items"] = clientvrf6_items;
    }

    return children;
}

void System::U6ribItems::Client6Items::Client6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateAckQueueCount")
    {
        updateackqueuecount = value;
        updateackqueuecount.value_namespace = name_space;
        updateackqueuecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "readyClientQueueCount")
    {
        readyclientqueuecount = value;
        readyclientqueuecount.value_namespace = name_space;
        readyclientqueuecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufReqClientQueueCount")
    {
        bufreqclientqueuecount = value;
        bufreqclientqueuecount.value_namespace = name_space;
        bufreqclientqueuecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rteBufUsedQueueCount")
    {
        rtebufusedqueuecount = value;
        rtebufusedqueuecount.value_namespace = name_space;
        rtebufusedqueuecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnhBufUsedQueueCount")
    {
        rnhbufusedqueuecount = value;
        rnhbufusedqueuecount.value_namespace = name_space;
        rnhbufusedqueuecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badTableCount")
    {
        badtablecount = value;
        badtablecount.value_namespace = name_space;
        badtablecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epid")
    {
        epid = value;
        epid.value_namespace = name_space;
        epid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtsSap")
    {
        mtssap = value;
        mtssap.value_namespace = name_space;
        mtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mruMisses")
    {
        mrumisses = value;
        mrumisses.value_namespace = name_space;
        mrumisses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mruHits")
    {
        mruhits = value;
        mruhits.value_namespace = name_space;
        mruhits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTime")
    {
        staletime = value;
        staletime.value_namespace = name_space;
        staletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTimerRemaining")
    {
        staletimerremaining = value;
        staletimerremaining.value_namespace = name_space;
        staletimerremaining.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Client6Items::Client6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "updateAckQueueCount")
    {
        updateackqueuecount.yfilter = yfilter;
    }
    if(value_path == "readyClientQueueCount")
    {
        readyclientqueuecount.yfilter = yfilter;
    }
    if(value_path == "bufReqClientQueueCount")
    {
        bufreqclientqueuecount.yfilter = yfilter;
    }
    if(value_path == "rteBufUsedQueueCount")
    {
        rtebufusedqueuecount.yfilter = yfilter;
    }
    if(value_path == "rnhBufUsedQueueCount")
    {
        rnhbufusedqueuecount.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "badTableCount")
    {
        badtablecount.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "epid")
    {
        epid.yfilter = yfilter;
    }
    if(value_path == "mtsSap")
    {
        mtssap.yfilter = yfilter;
    }
    if(value_path == "mruMisses")
    {
        mrumisses.yfilter = yfilter;
    }
    if(value_path == "mruHits")
    {
        mruhits.yfilter = yfilter;
    }
    if(value_path == "staleTime")
    {
        staletime.yfilter = yfilter;
    }
    if(value_path == "staleTimerRemaining")
    {
        staletimerremaining.yfilter = yfilter;
    }
}

bool System::U6ribItems::Client6Items::Client6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message6-items" || name == "clientvrf6-items" || name == "name" || name == "updateAckQueueCount" || name == "readyClientQueueCount" || name == "bufReqClientQueueCount" || name == "rteBufUsedQueueCount" || name == "rnhBufUsedQueueCount" || name == "state" || name == "badTableCount" || name == "index" || name == "epid" || name == "mtsSap" || name == "mruMisses" || name == "mruHits" || name == "staleTime" || name == "staleTimerRemaining")
        return true;
    return false;
}

System::U6ribItems::Client6Items::Client6List::Message6Items::Message6Items()
    :
    rregister{YType::uint32, "rRegister"},
    rderegister{YType::uint32, "rDeregister"},
    raddroute{YType::uint32, "rAddRoute"},
    rdeleteroute{YType::uint32, "rDeleteRoute"},
    saddrouteack{YType::uint32, "sAddRouteAck"},
    sdeleterouteack{YType::uint32, "sDeleteRouteAck"},
    snotifyroute{YType::uint32, "sNotifyRoute"},
    rnotifyrouteack{YType::uint32, "rNotifyRouteAck"},
    raddrnh{YType::uint32, "rAddRnh"},
    rdeleternh{YType::uint32, "rDeleteRnh"},
    rdeleteallrnh{YType::uint32, "rDeleteAllRnh"},
    rdeleteallroute{YType::uint32, "rDeleteAllRoute"},
    saddrnhack{YType::uint32, "sAddRnhAck"},
    sdeleternhack{YType::uint32, "sDeleteRnhAck"},
    snotifyrnh{YType::uint32, "sNotifyRnh"},
    rnotifyrnhack{YType::uint32, "rNotifyRnhAck"},
    rnotifyrequest{YType::uint32, "rNotifyRequest"},
    rdenotifyrequest{YType::uint32, "rDenotifyRequest"},
    srepopulateroute{YType::uint32, "sRepopulateRoute"},
    rnotifypibconvrequest{YType::uint32, "rNotifyPibConvRequest"},
    snotifypibconv{YType::uint32, "sNotifyPibConv"},
    rnotifypibconv{YType::uint32, "rNotifyPibConv"},
    rmodifyroute{YType::uint32, "rModifyRoute"},
    smodifyrouteack{YType::uint32, "sModifyRouteAck"},
    rnotifypibconvall{YType::uint32, "rNotifyPibConvAll"},
    rpibsetstaletime{YType::uint32, "rPibSetStaleTime"},
    rsetagedrouteinterval{YType::uint32, "rSetAgedRouteInterval"}
{

    yang_name = "message6-items"; yang_parent_name = "Client6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Client6Items::Client6List::Message6Items::~Message6Items()
{
}

bool System::U6ribItems::Client6Items::Client6List::Message6Items::has_data() const
{
    if (is_presence_container) return true;
    return rregister.is_set
	|| rderegister.is_set
	|| raddroute.is_set
	|| rdeleteroute.is_set
	|| saddrouteack.is_set
	|| sdeleterouteack.is_set
	|| snotifyroute.is_set
	|| rnotifyrouteack.is_set
	|| raddrnh.is_set
	|| rdeleternh.is_set
	|| rdeleteallrnh.is_set
	|| rdeleteallroute.is_set
	|| saddrnhack.is_set
	|| sdeleternhack.is_set
	|| snotifyrnh.is_set
	|| rnotifyrnhack.is_set
	|| rnotifyrequest.is_set
	|| rdenotifyrequest.is_set
	|| srepopulateroute.is_set
	|| rnotifypibconvrequest.is_set
	|| snotifypibconv.is_set
	|| rnotifypibconv.is_set
	|| rmodifyroute.is_set
	|| smodifyrouteack.is_set
	|| rnotifypibconvall.is_set
	|| rpibsetstaletime.is_set
	|| rsetagedrouteinterval.is_set;
}

bool System::U6ribItems::Client6Items::Client6List::Message6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rregister.yfilter)
	|| ydk::is_set(rderegister.yfilter)
	|| ydk::is_set(raddroute.yfilter)
	|| ydk::is_set(rdeleteroute.yfilter)
	|| ydk::is_set(saddrouteack.yfilter)
	|| ydk::is_set(sdeleterouteack.yfilter)
	|| ydk::is_set(snotifyroute.yfilter)
	|| ydk::is_set(rnotifyrouteack.yfilter)
	|| ydk::is_set(raddrnh.yfilter)
	|| ydk::is_set(rdeleternh.yfilter)
	|| ydk::is_set(rdeleteallrnh.yfilter)
	|| ydk::is_set(rdeleteallroute.yfilter)
	|| ydk::is_set(saddrnhack.yfilter)
	|| ydk::is_set(sdeleternhack.yfilter)
	|| ydk::is_set(snotifyrnh.yfilter)
	|| ydk::is_set(rnotifyrnhack.yfilter)
	|| ydk::is_set(rnotifyrequest.yfilter)
	|| ydk::is_set(rdenotifyrequest.yfilter)
	|| ydk::is_set(srepopulateroute.yfilter)
	|| ydk::is_set(rnotifypibconvrequest.yfilter)
	|| ydk::is_set(snotifypibconv.yfilter)
	|| ydk::is_set(rnotifypibconv.yfilter)
	|| ydk::is_set(rmodifyroute.yfilter)
	|| ydk::is_set(smodifyrouteack.yfilter)
	|| ydk::is_set(rnotifypibconvall.yfilter)
	|| ydk::is_set(rpibsetstaletime.yfilter)
	|| ydk::is_set(rsetagedrouteinterval.yfilter);
}

std::string System::U6ribItems::Client6Items::Client6List::Message6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Client6Items::Client6List::Message6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rregister.is_set || is_set(rregister.yfilter)) leaf_name_data.push_back(rregister.get_name_leafdata());
    if (rderegister.is_set || is_set(rderegister.yfilter)) leaf_name_data.push_back(rderegister.get_name_leafdata());
    if (raddroute.is_set || is_set(raddroute.yfilter)) leaf_name_data.push_back(raddroute.get_name_leafdata());
    if (rdeleteroute.is_set || is_set(rdeleteroute.yfilter)) leaf_name_data.push_back(rdeleteroute.get_name_leafdata());
    if (saddrouteack.is_set || is_set(saddrouteack.yfilter)) leaf_name_data.push_back(saddrouteack.get_name_leafdata());
    if (sdeleterouteack.is_set || is_set(sdeleterouteack.yfilter)) leaf_name_data.push_back(sdeleterouteack.get_name_leafdata());
    if (snotifyroute.is_set || is_set(snotifyroute.yfilter)) leaf_name_data.push_back(snotifyroute.get_name_leafdata());
    if (rnotifyrouteack.is_set || is_set(rnotifyrouteack.yfilter)) leaf_name_data.push_back(rnotifyrouteack.get_name_leafdata());
    if (raddrnh.is_set || is_set(raddrnh.yfilter)) leaf_name_data.push_back(raddrnh.get_name_leafdata());
    if (rdeleternh.is_set || is_set(rdeleternh.yfilter)) leaf_name_data.push_back(rdeleternh.get_name_leafdata());
    if (rdeleteallrnh.is_set || is_set(rdeleteallrnh.yfilter)) leaf_name_data.push_back(rdeleteallrnh.get_name_leafdata());
    if (rdeleteallroute.is_set || is_set(rdeleteallroute.yfilter)) leaf_name_data.push_back(rdeleteallroute.get_name_leafdata());
    if (saddrnhack.is_set || is_set(saddrnhack.yfilter)) leaf_name_data.push_back(saddrnhack.get_name_leafdata());
    if (sdeleternhack.is_set || is_set(sdeleternhack.yfilter)) leaf_name_data.push_back(sdeleternhack.get_name_leafdata());
    if (snotifyrnh.is_set || is_set(snotifyrnh.yfilter)) leaf_name_data.push_back(snotifyrnh.get_name_leafdata());
    if (rnotifyrnhack.is_set || is_set(rnotifyrnhack.yfilter)) leaf_name_data.push_back(rnotifyrnhack.get_name_leafdata());
    if (rnotifyrequest.is_set || is_set(rnotifyrequest.yfilter)) leaf_name_data.push_back(rnotifyrequest.get_name_leafdata());
    if (rdenotifyrequest.is_set || is_set(rdenotifyrequest.yfilter)) leaf_name_data.push_back(rdenotifyrequest.get_name_leafdata());
    if (srepopulateroute.is_set || is_set(srepopulateroute.yfilter)) leaf_name_data.push_back(srepopulateroute.get_name_leafdata());
    if (rnotifypibconvrequest.is_set || is_set(rnotifypibconvrequest.yfilter)) leaf_name_data.push_back(rnotifypibconvrequest.get_name_leafdata());
    if (snotifypibconv.is_set || is_set(snotifypibconv.yfilter)) leaf_name_data.push_back(snotifypibconv.get_name_leafdata());
    if (rnotifypibconv.is_set || is_set(rnotifypibconv.yfilter)) leaf_name_data.push_back(rnotifypibconv.get_name_leafdata());
    if (rmodifyroute.is_set || is_set(rmodifyroute.yfilter)) leaf_name_data.push_back(rmodifyroute.get_name_leafdata());
    if (smodifyrouteack.is_set || is_set(smodifyrouteack.yfilter)) leaf_name_data.push_back(smodifyrouteack.get_name_leafdata());
    if (rnotifypibconvall.is_set || is_set(rnotifypibconvall.yfilter)) leaf_name_data.push_back(rnotifypibconvall.get_name_leafdata());
    if (rpibsetstaletime.is_set || is_set(rpibsetstaletime.yfilter)) leaf_name_data.push_back(rpibsetstaletime.get_name_leafdata());
    if (rsetagedrouteinterval.is_set || is_set(rsetagedrouteinterval.yfilter)) leaf_name_data.push_back(rsetagedrouteinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Client6Items::Client6List::Message6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Client6Items::Client6List::Message6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Client6Items::Client6List::Message6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rRegister")
    {
        rregister = value;
        rregister.value_namespace = name_space;
        rregister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeregister")
    {
        rderegister = value;
        rderegister.value_namespace = name_space;
        rderegister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rAddRoute")
    {
        raddroute = value;
        raddroute.value_namespace = name_space;
        raddroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteRoute")
    {
        rdeleteroute = value;
        rdeleteroute.value_namespace = name_space;
        rdeleteroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sAddRouteAck")
    {
        saddrouteack = value;
        saddrouteack.value_namespace = name_space;
        saddrouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sDeleteRouteAck")
    {
        sdeleterouteack = value;
        sdeleterouteack.value_namespace = name_space;
        sdeleterouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sNotifyRoute")
    {
        snotifyroute = value;
        snotifyroute.value_namespace = name_space;
        snotifyroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyRouteAck")
    {
        rnotifyrouteack = value;
        rnotifyrouteack.value_namespace = name_space;
        rnotifyrouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rAddRnh")
    {
        raddrnh = value;
        raddrnh.value_namespace = name_space;
        raddrnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteRnh")
    {
        rdeleternh = value;
        rdeleternh.value_namespace = name_space;
        rdeleternh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteAllRnh")
    {
        rdeleteallrnh = value;
        rdeleteallrnh.value_namespace = name_space;
        rdeleteallrnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDeleteAllRoute")
    {
        rdeleteallroute = value;
        rdeleteallroute.value_namespace = name_space;
        rdeleteallroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sAddRnhAck")
    {
        saddrnhack = value;
        saddrnhack.value_namespace = name_space;
        saddrnhack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sDeleteRnhAck")
    {
        sdeleternhack = value;
        sdeleternhack.value_namespace = name_space;
        sdeleternhack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sNotifyRnh")
    {
        snotifyrnh = value;
        snotifyrnh.value_namespace = name_space;
        snotifyrnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyRnhAck")
    {
        rnotifyrnhack = value;
        rnotifyrnhack.value_namespace = name_space;
        rnotifyrnhack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyRequest")
    {
        rnotifyrequest = value;
        rnotifyrequest.value_namespace = name_space;
        rnotifyrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rDenotifyRequest")
    {
        rdenotifyrequest = value;
        rdenotifyrequest.value_namespace = name_space;
        rdenotifyrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sRepopulateRoute")
    {
        srepopulateroute = value;
        srepopulateroute.value_namespace = name_space;
        srepopulateroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyPibConvRequest")
    {
        rnotifypibconvrequest = value;
        rnotifypibconvrequest.value_namespace = name_space;
        rnotifypibconvrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sNotifyPibConv")
    {
        snotifypibconv = value;
        snotifypibconv.value_namespace = name_space;
        snotifypibconv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyPibConv")
    {
        rnotifypibconv = value;
        rnotifypibconv.value_namespace = name_space;
        rnotifypibconv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rModifyRoute")
    {
        rmodifyroute = value;
        rmodifyroute.value_namespace = name_space;
        rmodifyroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sModifyRouteAck")
    {
        smodifyrouteack = value;
        smodifyrouteack.value_namespace = name_space;
        smodifyrouteack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rNotifyPibConvAll")
    {
        rnotifypibconvall = value;
        rnotifypibconvall.value_namespace = name_space;
        rnotifypibconvall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rPibSetStaleTime")
    {
        rpibsetstaletime = value;
        rpibsetstaletime.value_namespace = name_space;
        rpibsetstaletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSetAgedRouteInterval")
    {
        rsetagedrouteinterval = value;
        rsetagedrouteinterval.value_namespace = name_space;
        rsetagedrouteinterval.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Client6Items::Client6List::Message6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rRegister")
    {
        rregister.yfilter = yfilter;
    }
    if(value_path == "rDeregister")
    {
        rderegister.yfilter = yfilter;
    }
    if(value_path == "rAddRoute")
    {
        raddroute.yfilter = yfilter;
    }
    if(value_path == "rDeleteRoute")
    {
        rdeleteroute.yfilter = yfilter;
    }
    if(value_path == "sAddRouteAck")
    {
        saddrouteack.yfilter = yfilter;
    }
    if(value_path == "sDeleteRouteAck")
    {
        sdeleterouteack.yfilter = yfilter;
    }
    if(value_path == "sNotifyRoute")
    {
        snotifyroute.yfilter = yfilter;
    }
    if(value_path == "rNotifyRouteAck")
    {
        rnotifyrouteack.yfilter = yfilter;
    }
    if(value_path == "rAddRnh")
    {
        raddrnh.yfilter = yfilter;
    }
    if(value_path == "rDeleteRnh")
    {
        rdeleternh.yfilter = yfilter;
    }
    if(value_path == "rDeleteAllRnh")
    {
        rdeleteallrnh.yfilter = yfilter;
    }
    if(value_path == "rDeleteAllRoute")
    {
        rdeleteallroute.yfilter = yfilter;
    }
    if(value_path == "sAddRnhAck")
    {
        saddrnhack.yfilter = yfilter;
    }
    if(value_path == "sDeleteRnhAck")
    {
        sdeleternhack.yfilter = yfilter;
    }
    if(value_path == "sNotifyRnh")
    {
        snotifyrnh.yfilter = yfilter;
    }
    if(value_path == "rNotifyRnhAck")
    {
        rnotifyrnhack.yfilter = yfilter;
    }
    if(value_path == "rNotifyRequest")
    {
        rnotifyrequest.yfilter = yfilter;
    }
    if(value_path == "rDenotifyRequest")
    {
        rdenotifyrequest.yfilter = yfilter;
    }
    if(value_path == "sRepopulateRoute")
    {
        srepopulateroute.yfilter = yfilter;
    }
    if(value_path == "rNotifyPibConvRequest")
    {
        rnotifypibconvrequest.yfilter = yfilter;
    }
    if(value_path == "sNotifyPibConv")
    {
        snotifypibconv.yfilter = yfilter;
    }
    if(value_path == "rNotifyPibConv")
    {
        rnotifypibconv.yfilter = yfilter;
    }
    if(value_path == "rModifyRoute")
    {
        rmodifyroute.yfilter = yfilter;
    }
    if(value_path == "sModifyRouteAck")
    {
        smodifyrouteack.yfilter = yfilter;
    }
    if(value_path == "rNotifyPibConvAll")
    {
        rnotifypibconvall.yfilter = yfilter;
    }
    if(value_path == "rPibSetStaleTime")
    {
        rpibsetstaletime.yfilter = yfilter;
    }
    if(value_path == "rSetAgedRouteInterval")
    {
        rsetagedrouteinterval.yfilter = yfilter;
    }
}

bool System::U6ribItems::Client6Items::Client6List::Message6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rRegister" || name == "rDeregister" || name == "rAddRoute" || name == "rDeleteRoute" || name == "sAddRouteAck" || name == "sDeleteRouteAck" || name == "sNotifyRoute" || name == "rNotifyRouteAck" || name == "rAddRnh" || name == "rDeleteRnh" || name == "rDeleteAllRnh" || name == "rDeleteAllRoute" || name == "sAddRnhAck" || name == "sDeleteRnhAck" || name == "sNotifyRnh" || name == "rNotifyRnhAck" || name == "rNotifyRequest" || name == "rDenotifyRequest" || name == "sRepopulateRoute" || name == "rNotifyPibConvRequest" || name == "sNotifyPibConv" || name == "rNotifyPibConv" || name == "rModifyRoute" || name == "sModifyRouteAck" || name == "rNotifyPibConvAll" || name == "rPibSetStaleTime" || name == "rSetAgedRouteInterval")
        return true;
    return false;
}

System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::Clientvrf6Items()
    :
    clientvrf6_list(this, {"vrfname"})
{

    yang_name = "clientvrf6-items"; yang_parent_name = "Client6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::~Clientvrf6Items()
{
}

bool System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientvrf6_list.len(); index++)
    {
        if(clientvrf6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::has_operation() const
{
    for (std::size_t index=0; index<clientvrf6_list.len(); index++)
    {
        if(clientvrf6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clientvrf6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientVrf6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List>();
        c->parent = this;
        clientvrf6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clientvrf6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientVrf6-list")
        return true;
    return false;
}

System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::ClientVrf6List()
    :
    vrfname{YType::str, "vrfName"},
    changenotifynames{YType::str, "changeNotifyNames"},
    changenotifyhandles{YType::str, "changeNotifyHandles"},
    changenotifyall{YType::boolean, "changeNotifyAll"},
    changesubscribednames{YType::str, "changeSubscribedNames"},
    changesubscribedhandles{YType::str, "changeSubscribedHandles"},
    changesubscribedindex{YType::str, "changeSubscribedIndex"},
    flags{YType::str, "flags"},
    pendingtimerremaining{YType::str, "pendingTimerRemaining"},
    routecount{YType::uint32, "routeCount"},
    recursivenexthopcount{YType::uint32, "recursiveNextHopCount"},
    bestpathcount{YType::uint32, "bestPathCount"},
    backuppathcount{YType::uint32, "backupPathCount"},
    routechangesubscribed{YType::uint64, "routeChangeSubscribed"},
    convergencenotifymask{YType::uint64, "convergenceNotifyMask"},
    labelcount{YType::uint32, "labelCount"}
{

    yang_name = "ClientVrf6-list"; yang_parent_name = "clientvrf6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::~ClientVrf6List()
{
}

bool System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| changenotifynames.is_set
	|| changenotifyhandles.is_set
	|| changenotifyall.is_set
	|| changesubscribednames.is_set
	|| changesubscribedhandles.is_set
	|| changesubscribedindex.is_set
	|| flags.is_set
	|| pendingtimerremaining.is_set
	|| routecount.is_set
	|| recursivenexthopcount.is_set
	|| bestpathcount.is_set
	|| backuppathcount.is_set
	|| routechangesubscribed.is_set
	|| convergencenotifymask.is_set
	|| labelcount.is_set;
}

bool System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(changenotifynames.yfilter)
	|| ydk::is_set(changenotifyhandles.yfilter)
	|| ydk::is_set(changenotifyall.yfilter)
	|| ydk::is_set(changesubscribednames.yfilter)
	|| ydk::is_set(changesubscribedhandles.yfilter)
	|| ydk::is_set(changesubscribedindex.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(pendingtimerremaining.yfilter)
	|| ydk::is_set(routecount.yfilter)
	|| ydk::is_set(recursivenexthopcount.yfilter)
	|| ydk::is_set(bestpathcount.yfilter)
	|| ydk::is_set(backuppathcount.yfilter)
	|| ydk::is_set(routechangesubscribed.yfilter)
	|| ydk::is_set(convergencenotifymask.yfilter)
	|| ydk::is_set(labelcount.yfilter);
}

std::string System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientVrf6-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (changenotifynames.is_set || is_set(changenotifynames.yfilter)) leaf_name_data.push_back(changenotifynames.get_name_leafdata());
    if (changenotifyhandles.is_set || is_set(changenotifyhandles.yfilter)) leaf_name_data.push_back(changenotifyhandles.get_name_leafdata());
    if (changenotifyall.is_set || is_set(changenotifyall.yfilter)) leaf_name_data.push_back(changenotifyall.get_name_leafdata());
    if (changesubscribednames.is_set || is_set(changesubscribednames.yfilter)) leaf_name_data.push_back(changesubscribednames.get_name_leafdata());
    if (changesubscribedhandles.is_set || is_set(changesubscribedhandles.yfilter)) leaf_name_data.push_back(changesubscribedhandles.get_name_leafdata());
    if (changesubscribedindex.is_set || is_set(changesubscribedindex.yfilter)) leaf_name_data.push_back(changesubscribedindex.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (pendingtimerremaining.is_set || is_set(pendingtimerremaining.yfilter)) leaf_name_data.push_back(pendingtimerremaining.get_name_leafdata());
    if (routecount.is_set || is_set(routecount.yfilter)) leaf_name_data.push_back(routecount.get_name_leafdata());
    if (recursivenexthopcount.is_set || is_set(recursivenexthopcount.yfilter)) leaf_name_data.push_back(recursivenexthopcount.get_name_leafdata());
    if (bestpathcount.is_set || is_set(bestpathcount.yfilter)) leaf_name_data.push_back(bestpathcount.get_name_leafdata());
    if (backuppathcount.is_set || is_set(backuppathcount.yfilter)) leaf_name_data.push_back(backuppathcount.get_name_leafdata());
    if (routechangesubscribed.is_set || is_set(routechangesubscribed.yfilter)) leaf_name_data.push_back(routechangesubscribed.get_name_leafdata());
    if (convergencenotifymask.is_set || is_set(convergencenotifymask.yfilter)) leaf_name_data.push_back(convergencenotifymask.get_name_leafdata());
    if (labelcount.is_set || is_set(labelcount.yfilter)) leaf_name_data.push_back(labelcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeNotifyNames")
    {
        changenotifynames = value;
        changenotifynames.value_namespace = name_space;
        changenotifynames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeNotifyHandles")
    {
        changenotifyhandles = value;
        changenotifyhandles.value_namespace = name_space;
        changenotifyhandles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeNotifyAll")
    {
        changenotifyall = value;
        changenotifyall.value_namespace = name_space;
        changenotifyall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeSubscribedNames")
    {
        changesubscribednames = value;
        changesubscribednames.value_namespace = name_space;
        changesubscribednames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeSubscribedHandles")
    {
        changesubscribedhandles = value;
        changesubscribedhandles.value_namespace = name_space;
        changesubscribedhandles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeSubscribedIndex")
    {
        changesubscribedindex = value;
        changesubscribedindex.value_namespace = name_space;
        changesubscribedindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pendingTimerRemaining")
    {
        pendingtimerremaining = value;
        pendingtimerremaining.value_namespace = name_space;
        pendingtimerremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeCount")
    {
        routecount = value;
        routecount.value_namespace = name_space;
        routecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNextHopCount")
    {
        recursivenexthopcount = value;
        recursivenexthopcount.value_namespace = name_space;
        recursivenexthopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestPathCount")
    {
        bestpathcount = value;
        bestpathcount.value_namespace = name_space;
        bestpathcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backupPathCount")
    {
        backuppathcount = value;
        backuppathcount.value_namespace = name_space;
        backuppathcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeChangeSubscribed")
    {
        routechangesubscribed = value;
        routechangesubscribed.value_namespace = name_space;
        routechangesubscribed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convergenceNotifyMask")
    {
        convergencenotifymask = value;
        convergencenotifymask.value_namespace = name_space;
        convergencenotifymask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelCount")
    {
        labelcount = value;
        labelcount.value_namespace = name_space;
        labelcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "changeNotifyNames")
    {
        changenotifynames.yfilter = yfilter;
    }
    if(value_path == "changeNotifyHandles")
    {
        changenotifyhandles.yfilter = yfilter;
    }
    if(value_path == "changeNotifyAll")
    {
        changenotifyall.yfilter = yfilter;
    }
    if(value_path == "changeSubscribedNames")
    {
        changesubscribednames.yfilter = yfilter;
    }
    if(value_path == "changeSubscribedHandles")
    {
        changesubscribedhandles.yfilter = yfilter;
    }
    if(value_path == "changeSubscribedIndex")
    {
        changesubscribedindex.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "pendingTimerRemaining")
    {
        pendingtimerremaining.yfilter = yfilter;
    }
    if(value_path == "routeCount")
    {
        routecount.yfilter = yfilter;
    }
    if(value_path == "recursiveNextHopCount")
    {
        recursivenexthopcount.yfilter = yfilter;
    }
    if(value_path == "bestPathCount")
    {
        bestpathcount.yfilter = yfilter;
    }
    if(value_path == "backupPathCount")
    {
        backuppathcount.yfilter = yfilter;
    }
    if(value_path == "routeChangeSubscribed")
    {
        routechangesubscribed.yfilter = yfilter;
    }
    if(value_path == "convergenceNotifyMask")
    {
        convergencenotifymask.yfilter = yfilter;
    }
    if(value_path == "labelCount")
    {
        labelcount.yfilter = yfilter;
    }
}

bool System::U6ribItems::Client6Items::Client6List::Clientvrf6Items::ClientVrf6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfName" || name == "changeNotifyNames" || name == "changeNotifyHandles" || name == "changeNotifyAll" || name == "changeSubscribedNames" || name == "changeSubscribedHandles" || name == "changeSubscribedIndex" || name == "flags" || name == "pendingTimerRemaining" || name == "routeCount" || name == "recursiveNextHopCount" || name == "bestPathCount" || name == "backupPathCount" || name == "routeChangeSubscribed" || name == "convergenceNotifyMask" || name == "labelCount")
        return true;
    return false;
}

System::U6ribItems::Internal6Items::Internal6Items()
    :
    supstate{YType::str, "supState"},
    pssuri{YType::str, "pssUri"},
    servclisstate{YType::enumeration, "servClisState"},
    servl3vmstate{YType::enumeration, "servL3vmState"},
    servufdmstate{YType::enumeration, "servUfdmState"},
    regclis{YType::boolean, "regClis"},
    regl3vm{YType::boolean, "regL3vm"},
    regufdm{YType::boolean, "regUfdm"},
    shmmin{YType::uint32, "shmMin"},
    shmsize{YType::uint32, "shmSize"},
    dbgfiltervrfname{YType::str, "dbgFilterVrfName"},
    dbgfiltervrftableid{YType::uint32, "dbgFilterVrfTableId"},
    dbgfilterclientname{YType::str, "dbgFilterClientName"},
    dbgfilterclientidx{YType::uint32, "dbgFilterClientIdx"},
    dbgfilterprefixlist{YType::str, "dbgFilterPrefixList"},
    performancemode{YType::boolean, "performanceMode"}
{

    yang_name = "internal6-items"; yang_parent_name = "u6rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Internal6Items::~Internal6Items()
{
}

bool System::U6ribItems::Internal6Items::has_data() const
{
    if (is_presence_container) return true;
    return supstate.is_set
	|| pssuri.is_set
	|| servclisstate.is_set
	|| servl3vmstate.is_set
	|| servufdmstate.is_set
	|| regclis.is_set
	|| regl3vm.is_set
	|| regufdm.is_set
	|| shmmin.is_set
	|| shmsize.is_set
	|| dbgfiltervrfname.is_set
	|| dbgfiltervrftableid.is_set
	|| dbgfilterclientname.is_set
	|| dbgfilterclientidx.is_set
	|| dbgfilterprefixlist.is_set
	|| performancemode.is_set;
}

bool System::U6ribItems::Internal6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supstate.yfilter)
	|| ydk::is_set(pssuri.yfilter)
	|| ydk::is_set(servclisstate.yfilter)
	|| ydk::is_set(servl3vmstate.yfilter)
	|| ydk::is_set(servufdmstate.yfilter)
	|| ydk::is_set(regclis.yfilter)
	|| ydk::is_set(regl3vm.yfilter)
	|| ydk::is_set(regufdm.yfilter)
	|| ydk::is_set(shmmin.yfilter)
	|| ydk::is_set(shmsize.yfilter)
	|| ydk::is_set(dbgfiltervrfname.yfilter)
	|| ydk::is_set(dbgfiltervrftableid.yfilter)
	|| ydk::is_set(dbgfilterclientname.yfilter)
	|| ydk::is_set(dbgfilterclientidx.yfilter)
	|| ydk::is_set(dbgfilterprefixlist.yfilter)
	|| ydk::is_set(performancemode.yfilter);
}

std::string System::U6ribItems::Internal6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Internal6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Internal6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supstate.is_set || is_set(supstate.yfilter)) leaf_name_data.push_back(supstate.get_name_leafdata());
    if (pssuri.is_set || is_set(pssuri.yfilter)) leaf_name_data.push_back(pssuri.get_name_leafdata());
    if (servclisstate.is_set || is_set(servclisstate.yfilter)) leaf_name_data.push_back(servclisstate.get_name_leafdata());
    if (servl3vmstate.is_set || is_set(servl3vmstate.yfilter)) leaf_name_data.push_back(servl3vmstate.get_name_leafdata());
    if (servufdmstate.is_set || is_set(servufdmstate.yfilter)) leaf_name_data.push_back(servufdmstate.get_name_leafdata());
    if (regclis.is_set || is_set(regclis.yfilter)) leaf_name_data.push_back(regclis.get_name_leafdata());
    if (regl3vm.is_set || is_set(regl3vm.yfilter)) leaf_name_data.push_back(regl3vm.get_name_leafdata());
    if (regufdm.is_set || is_set(regufdm.yfilter)) leaf_name_data.push_back(regufdm.get_name_leafdata());
    if (shmmin.is_set || is_set(shmmin.yfilter)) leaf_name_data.push_back(shmmin.get_name_leafdata());
    if (shmsize.is_set || is_set(shmsize.yfilter)) leaf_name_data.push_back(shmsize.get_name_leafdata());
    if (dbgfiltervrfname.is_set || is_set(dbgfiltervrfname.yfilter)) leaf_name_data.push_back(dbgfiltervrfname.get_name_leafdata());
    if (dbgfiltervrftableid.is_set || is_set(dbgfiltervrftableid.yfilter)) leaf_name_data.push_back(dbgfiltervrftableid.get_name_leafdata());
    if (dbgfilterclientname.is_set || is_set(dbgfilterclientname.yfilter)) leaf_name_data.push_back(dbgfilterclientname.get_name_leafdata());
    if (dbgfilterclientidx.is_set || is_set(dbgfilterclientidx.yfilter)) leaf_name_data.push_back(dbgfilterclientidx.get_name_leafdata());
    if (dbgfilterprefixlist.is_set || is_set(dbgfilterprefixlist.yfilter)) leaf_name_data.push_back(dbgfilterprefixlist.get_name_leafdata());
    if (performancemode.is_set || is_set(performancemode.yfilter)) leaf_name_data.push_back(performancemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Internal6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Internal6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Internal6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supState")
    {
        supstate = value;
        supstate.value_namespace = name_space;
        supstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pssUri")
    {
        pssuri = value;
        pssuri.value_namespace = name_space;
        pssuri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servClisState")
    {
        servclisstate = value;
        servclisstate.value_namespace = name_space;
        servclisstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servL3vmState")
    {
        servl3vmstate = value;
        servl3vmstate.value_namespace = name_space;
        servl3vmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servUfdmState")
    {
        servufdmstate = value;
        servufdmstate.value_namespace = name_space;
        servufdmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regClis")
    {
        regclis = value;
        regclis.value_namespace = name_space;
        regclis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regL3vm")
    {
        regl3vm = value;
        regl3vm.value_namespace = name_space;
        regl3vm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regUfdm")
    {
        regufdm = value;
        regufdm.value_namespace = name_space;
        regufdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shmMin")
    {
        shmmin = value;
        shmmin.value_namespace = name_space;
        shmmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shmSize")
    {
        shmsize = value;
        shmsize.value_namespace = name_space;
        shmsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterVrfName")
    {
        dbgfiltervrfname = value;
        dbgfiltervrfname.value_namespace = name_space;
        dbgfiltervrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterVrfTableId")
    {
        dbgfiltervrftableid = value;
        dbgfiltervrftableid.value_namespace = name_space;
        dbgfiltervrftableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterClientName")
    {
        dbgfilterclientname = value;
        dbgfilterclientname.value_namespace = name_space;
        dbgfilterclientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterClientIdx")
    {
        dbgfilterclientidx = value;
        dbgfilterclientidx.value_namespace = name_space;
        dbgfilterclientidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbgFilterPrefixList")
    {
        dbgfilterprefixlist = value;
        dbgfilterprefixlist.value_namespace = name_space;
        dbgfilterprefixlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performanceMode")
    {
        performancemode = value;
        performancemode.value_namespace = name_space;
        performancemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Internal6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supState")
    {
        supstate.yfilter = yfilter;
    }
    if(value_path == "pssUri")
    {
        pssuri.yfilter = yfilter;
    }
    if(value_path == "servClisState")
    {
        servclisstate.yfilter = yfilter;
    }
    if(value_path == "servL3vmState")
    {
        servl3vmstate.yfilter = yfilter;
    }
    if(value_path == "servUfdmState")
    {
        servufdmstate.yfilter = yfilter;
    }
    if(value_path == "regClis")
    {
        regclis.yfilter = yfilter;
    }
    if(value_path == "regL3vm")
    {
        regl3vm.yfilter = yfilter;
    }
    if(value_path == "regUfdm")
    {
        regufdm.yfilter = yfilter;
    }
    if(value_path == "shmMin")
    {
        shmmin.yfilter = yfilter;
    }
    if(value_path == "shmSize")
    {
        shmsize.yfilter = yfilter;
    }
    if(value_path == "dbgFilterVrfName")
    {
        dbgfiltervrfname.yfilter = yfilter;
    }
    if(value_path == "dbgFilterVrfTableId")
    {
        dbgfiltervrftableid.yfilter = yfilter;
    }
    if(value_path == "dbgFilterClientName")
    {
        dbgfilterclientname.yfilter = yfilter;
    }
    if(value_path == "dbgFilterClientIdx")
    {
        dbgfilterclientidx.yfilter = yfilter;
    }
    if(value_path == "dbgFilterPrefixList")
    {
        dbgfilterprefixlist.yfilter = yfilter;
    }
    if(value_path == "performanceMode")
    {
        performancemode.yfilter = yfilter;
    }
}

bool System::U6ribItems::Internal6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supState" || name == "pssUri" || name == "servClisState" || name == "servL3vmState" || name == "servUfdmState" || name == "regClis" || name == "regL3vm" || name == "regUfdm" || name == "shmMin" || name == "shmSize" || name == "dbgFilterVrfName" || name == "dbgFilterVrfTableId" || name == "dbgFilterClientName" || name == "dbgFilterClientIdx" || name == "dbgFilterPrefixList" || name == "performanceMode")
        return true;
    return false;
}

System::U6ribItems::Internalvrf6Items::Internalvrf6Items()
    :
    internalvrf6_list(this, {"vrfname"})
{

    yang_name = "internalvrf6-items"; yang_parent_name = "u6rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Internalvrf6Items::~Internalvrf6Items()
{
}

bool System::U6ribItems::Internalvrf6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalvrf6_list.len(); index++)
    {
        if(internalvrf6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Internalvrf6Items::has_operation() const
{
    for (std::size_t index=0; index<internalvrf6_list.len(); index++)
    {
        if(internalvrf6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Internalvrf6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Internalvrf6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalvrf6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Internalvrf6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Internalvrf6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalVrf6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Internalvrf6Items::InternalVrf6List>();
        c->parent = this;
        internalvrf6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Internalvrf6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : internalvrf6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Internalvrf6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Internalvrf6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Internalvrf6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalVrf6-list")
        return true;
    return false;
}

System::U6ribItems::Internalvrf6Items::InternalVrf6List::InternalVrf6List()
    :
    vrfname{YType::str, "vrfName"},
    cleanuptimerremaining{YType::str, "cleanupTimerRemaining"},
    ufdmconnectcheck{YType::boolean, "ufdmConnectCheck"},
    convrequested{YType::str, "convRequested"},
    tableid{YType::uint32, "tableId"},
    state{YType::enumeration, "state"},
    l3vmstate{YType::str, "l3vmState"},
    ufdmenabled{YType::boolean, "ufdmEnabled"},
    emptytimerremaining{YType::str, "emptyTimerRemaining"},
    haclientcount{YType::uint32, "haClientCount"},
    haclientconvcount{YType::uint32, "haClientConvCount"},
    haclientconvlist{YType::str, "haClientConvList"},
    haclientunconvlist{YType::str, "haClientUnconvList"},
    routelimitmax{YType::uint32, "routeLimitMax"},
    routelimitwarnpct{YType::uint32, "routeLimitWarnPct"},
    routelimitwarn{YType::uint32, "routeLimitWarn"},
    routelimitreinstpct{YType::uint32, "routeLimitReinstPct"},
    routelimitreinst{YType::uint32, "routeLimitReinst"},
    routelimitreinstpending{YType::boolean, "routeLimitReinstPending"},
    lastmibtrap{YType::str, "lastMibTrap"},
    maxtrapreset{YType::boolean, "maxTrapReset"},
    warntrapreset{YType::boolean, "warnTrapReset"},
    addedcount{YType::uint32, "addedCount"},
    deletedcount{YType::uint32, "deletedCount"},
    droppedcount{YType::uint64, "droppedCount"}
{

    yang_name = "InternalVrf6-list"; yang_parent_name = "internalvrf6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Internalvrf6Items::InternalVrf6List::~InternalVrf6List()
{
}

bool System::U6ribItems::Internalvrf6Items::InternalVrf6List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| cleanuptimerremaining.is_set
	|| ufdmconnectcheck.is_set
	|| convrequested.is_set
	|| tableid.is_set
	|| state.is_set
	|| l3vmstate.is_set
	|| ufdmenabled.is_set
	|| emptytimerremaining.is_set
	|| haclientcount.is_set
	|| haclientconvcount.is_set
	|| haclientconvlist.is_set
	|| haclientunconvlist.is_set
	|| routelimitmax.is_set
	|| routelimitwarnpct.is_set
	|| routelimitwarn.is_set
	|| routelimitreinstpct.is_set
	|| routelimitreinst.is_set
	|| routelimitreinstpending.is_set
	|| lastmibtrap.is_set
	|| maxtrapreset.is_set
	|| warntrapreset.is_set
	|| addedcount.is_set
	|| deletedcount.is_set
	|| droppedcount.is_set;
}

bool System::U6ribItems::Internalvrf6Items::InternalVrf6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(cleanuptimerremaining.yfilter)
	|| ydk::is_set(ufdmconnectcheck.yfilter)
	|| ydk::is_set(convrequested.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(l3vmstate.yfilter)
	|| ydk::is_set(ufdmenabled.yfilter)
	|| ydk::is_set(emptytimerremaining.yfilter)
	|| ydk::is_set(haclientcount.yfilter)
	|| ydk::is_set(haclientconvcount.yfilter)
	|| ydk::is_set(haclientconvlist.yfilter)
	|| ydk::is_set(haclientunconvlist.yfilter)
	|| ydk::is_set(routelimitmax.yfilter)
	|| ydk::is_set(routelimitwarnpct.yfilter)
	|| ydk::is_set(routelimitwarn.yfilter)
	|| ydk::is_set(routelimitreinstpct.yfilter)
	|| ydk::is_set(routelimitreinst.yfilter)
	|| ydk::is_set(routelimitreinstpending.yfilter)
	|| ydk::is_set(lastmibtrap.yfilter)
	|| ydk::is_set(maxtrapreset.yfilter)
	|| ydk::is_set(warntrapreset.yfilter)
	|| ydk::is_set(addedcount.yfilter)
	|| ydk::is_set(deletedcount.yfilter)
	|| ydk::is_set(droppedcount.yfilter);
}

std::string System::U6ribItems::Internalvrf6Items::InternalVrf6List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/internalvrf6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Internalvrf6Items::InternalVrf6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalVrf6-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Internalvrf6Items::InternalVrf6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (cleanuptimerremaining.is_set || is_set(cleanuptimerremaining.yfilter)) leaf_name_data.push_back(cleanuptimerremaining.get_name_leafdata());
    if (ufdmconnectcheck.is_set || is_set(ufdmconnectcheck.yfilter)) leaf_name_data.push_back(ufdmconnectcheck.get_name_leafdata());
    if (convrequested.is_set || is_set(convrequested.yfilter)) leaf_name_data.push_back(convrequested.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (l3vmstate.is_set || is_set(l3vmstate.yfilter)) leaf_name_data.push_back(l3vmstate.get_name_leafdata());
    if (ufdmenabled.is_set || is_set(ufdmenabled.yfilter)) leaf_name_data.push_back(ufdmenabled.get_name_leafdata());
    if (emptytimerremaining.is_set || is_set(emptytimerremaining.yfilter)) leaf_name_data.push_back(emptytimerremaining.get_name_leafdata());
    if (haclientcount.is_set || is_set(haclientcount.yfilter)) leaf_name_data.push_back(haclientcount.get_name_leafdata());
    if (haclientconvcount.is_set || is_set(haclientconvcount.yfilter)) leaf_name_data.push_back(haclientconvcount.get_name_leafdata());
    if (haclientconvlist.is_set || is_set(haclientconvlist.yfilter)) leaf_name_data.push_back(haclientconvlist.get_name_leafdata());
    if (haclientunconvlist.is_set || is_set(haclientunconvlist.yfilter)) leaf_name_data.push_back(haclientunconvlist.get_name_leafdata());
    if (routelimitmax.is_set || is_set(routelimitmax.yfilter)) leaf_name_data.push_back(routelimitmax.get_name_leafdata());
    if (routelimitwarnpct.is_set || is_set(routelimitwarnpct.yfilter)) leaf_name_data.push_back(routelimitwarnpct.get_name_leafdata());
    if (routelimitwarn.is_set || is_set(routelimitwarn.yfilter)) leaf_name_data.push_back(routelimitwarn.get_name_leafdata());
    if (routelimitreinstpct.is_set || is_set(routelimitreinstpct.yfilter)) leaf_name_data.push_back(routelimitreinstpct.get_name_leafdata());
    if (routelimitreinst.is_set || is_set(routelimitreinst.yfilter)) leaf_name_data.push_back(routelimitreinst.get_name_leafdata());
    if (routelimitreinstpending.is_set || is_set(routelimitreinstpending.yfilter)) leaf_name_data.push_back(routelimitreinstpending.get_name_leafdata());
    if (lastmibtrap.is_set || is_set(lastmibtrap.yfilter)) leaf_name_data.push_back(lastmibtrap.get_name_leafdata());
    if (maxtrapreset.is_set || is_set(maxtrapreset.yfilter)) leaf_name_data.push_back(maxtrapreset.get_name_leafdata());
    if (warntrapreset.is_set || is_set(warntrapreset.yfilter)) leaf_name_data.push_back(warntrapreset.get_name_leafdata());
    if (addedcount.is_set || is_set(addedcount.yfilter)) leaf_name_data.push_back(addedcount.get_name_leafdata());
    if (deletedcount.is_set || is_set(deletedcount.yfilter)) leaf_name_data.push_back(deletedcount.get_name_leafdata());
    if (droppedcount.is_set || is_set(droppedcount.yfilter)) leaf_name_data.push_back(droppedcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Internalvrf6Items::InternalVrf6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Internalvrf6Items::InternalVrf6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Internalvrf6Items::InternalVrf6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanupTimerRemaining")
    {
        cleanuptimerremaining = value;
        cleanuptimerremaining.value_namespace = name_space;
        cleanuptimerremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ufdmConnectCheck")
    {
        ufdmconnectcheck = value;
        ufdmconnectcheck.value_namespace = name_space;
        ufdmconnectcheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convRequested")
    {
        convrequested = value;
        convrequested.value_namespace = name_space;
        convrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3vmState")
    {
        l3vmstate = value;
        l3vmstate.value_namespace = name_space;
        l3vmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ufdmEnabled")
    {
        ufdmenabled = value;
        ufdmenabled.value_namespace = name_space;
        ufdmenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emptyTimerRemaining")
    {
        emptytimerremaining = value;
        emptytimerremaining.value_namespace = name_space;
        emptytimerremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientCount")
    {
        haclientcount = value;
        haclientcount.value_namespace = name_space;
        haclientcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientConvCount")
    {
        haclientconvcount = value;
        haclientconvcount.value_namespace = name_space;
        haclientconvcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientConvList")
    {
        haclientconvlist = value;
        haclientconvlist.value_namespace = name_space;
        haclientconvlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "haClientUnconvList")
    {
        haclientunconvlist = value;
        haclientunconvlist.value_namespace = name_space;
        haclientunconvlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitMax")
    {
        routelimitmax = value;
        routelimitmax.value_namespace = name_space;
        routelimitmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitWarnPct")
    {
        routelimitwarnpct = value;
        routelimitwarnpct.value_namespace = name_space;
        routelimitwarnpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitWarn")
    {
        routelimitwarn = value;
        routelimitwarn.value_namespace = name_space;
        routelimitwarn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitReinstPct")
    {
        routelimitreinstpct = value;
        routelimitreinstpct.value_namespace = name_space;
        routelimitreinstpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitReinst")
    {
        routelimitreinst = value;
        routelimitreinst.value_namespace = name_space;
        routelimitreinst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLimitReinstPending")
    {
        routelimitreinstpending = value;
        routelimitreinstpending.value_namespace = name_space;
        routelimitreinstpending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMibTrap")
    {
        lastmibtrap = value;
        lastmibtrap.value_namespace = name_space;
        lastmibtrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTrapReset")
    {
        maxtrapreset = value;
        maxtrapreset.value_namespace = name_space;
        maxtrapreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warnTrapReset")
    {
        warntrapreset = value;
        warntrapreset.value_namespace = name_space;
        warntrapreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addedCount")
    {
        addedcount = value;
        addedcount.value_namespace = name_space;
        addedcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedCount")
    {
        deletedcount = value;
        deletedcount.value_namespace = name_space;
        deletedcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedCount")
    {
        droppedcount = value;
        droppedcount.value_namespace = name_space;
        droppedcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Internalvrf6Items::InternalVrf6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "cleanupTimerRemaining")
    {
        cleanuptimerremaining.yfilter = yfilter;
    }
    if(value_path == "ufdmConnectCheck")
    {
        ufdmconnectcheck.yfilter = yfilter;
    }
    if(value_path == "convRequested")
    {
        convrequested.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "l3vmState")
    {
        l3vmstate.yfilter = yfilter;
    }
    if(value_path == "ufdmEnabled")
    {
        ufdmenabled.yfilter = yfilter;
    }
    if(value_path == "emptyTimerRemaining")
    {
        emptytimerremaining.yfilter = yfilter;
    }
    if(value_path == "haClientCount")
    {
        haclientcount.yfilter = yfilter;
    }
    if(value_path == "haClientConvCount")
    {
        haclientconvcount.yfilter = yfilter;
    }
    if(value_path == "haClientConvList")
    {
        haclientconvlist.yfilter = yfilter;
    }
    if(value_path == "haClientUnconvList")
    {
        haclientunconvlist.yfilter = yfilter;
    }
    if(value_path == "routeLimitMax")
    {
        routelimitmax.yfilter = yfilter;
    }
    if(value_path == "routeLimitWarnPct")
    {
        routelimitwarnpct.yfilter = yfilter;
    }
    if(value_path == "routeLimitWarn")
    {
        routelimitwarn.yfilter = yfilter;
    }
    if(value_path == "routeLimitReinstPct")
    {
        routelimitreinstpct.yfilter = yfilter;
    }
    if(value_path == "routeLimitReinst")
    {
        routelimitreinst.yfilter = yfilter;
    }
    if(value_path == "routeLimitReinstPending")
    {
        routelimitreinstpending.yfilter = yfilter;
    }
    if(value_path == "lastMibTrap")
    {
        lastmibtrap.yfilter = yfilter;
    }
    if(value_path == "maxTrapReset")
    {
        maxtrapreset.yfilter = yfilter;
    }
    if(value_path == "warnTrapReset")
    {
        warntrapreset.yfilter = yfilter;
    }
    if(value_path == "addedCount")
    {
        addedcount.yfilter = yfilter;
    }
    if(value_path == "deletedCount")
    {
        deletedcount.yfilter = yfilter;
    }
    if(value_path == "droppedCount")
    {
        droppedcount.yfilter = yfilter;
    }
}

bool System::U6ribItems::Internalvrf6Items::InternalVrf6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfName" || name == "cleanupTimerRemaining" || name == "ufdmConnectCheck" || name == "convRequested" || name == "tableId" || name == "state" || name == "l3vmState" || name == "ufdmEnabled" || name == "emptyTimerRemaining" || name == "haClientCount" || name == "haClientConvCount" || name == "haClientConvList" || name == "haClientUnconvList" || name == "routeLimitMax" || name == "routeLimitWarnPct" || name == "routeLimitWarn" || name == "routeLimitReinstPct" || name == "routeLimitReinst" || name == "routeLimitReinstPending" || name == "lastMibTrap" || name == "maxTrapReset" || name == "warnTrapReset" || name == "addedCount" || name == "deletedCount" || name == "droppedCount")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6Items()
    :
    table6_list(this, {"vrfname"})
{

    yang_name = "table6-items"; yang_parent_name = "u6rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Table6Items::~Table6Items()
{
}

bool System::U6ribItems::Table6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table6_list.len(); index++)
    {
        if(table6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::has_operation() const
{
    for (std::size_t index=0; index<table6_list.len(); index++)
    {
        if(table6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Table6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Table6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Table6Items::Table6List>();
        c->parent = this;
        table6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : table6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Table6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Table6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Table6List()
    :
    vrfname{YType::str, "vrfName"},
    routecount{YType::uint32, "routeCount"},
    unibestcount{YType::uint32, "uniBestCount"},
    unibackupcount{YType::uint32, "uniBackupCount"},
    multibestcount{YType::uint32, "multiBestCount"},
    multibackupcount{YType::uint32, "multiBackupCount"},
    routepermaskcount{YType::str, "routePerMaskCount"}
        ,
    hiddennh6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Hiddennh6Items>())
    , route6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items>())
{
    hiddennh6_items->parent = this;
    route6_items->parent = this;

    yang_name = "Table6-list"; yang_parent_name = "table6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::U6ribItems::Table6Items::Table6List::~Table6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| routecount.is_set
	|| unibestcount.is_set
	|| unibackupcount.is_set
	|| multibestcount.is_set
	|| multibackupcount.is_set
	|| routepermaskcount.is_set
	|| (hiddennh6_items !=  nullptr && hiddennh6_items->has_data())
	|| (route6_items !=  nullptr && route6_items->has_data());
}

bool System::U6ribItems::Table6Items::Table6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(routecount.yfilter)
	|| ydk::is_set(unibestcount.yfilter)
	|| ydk::is_set(unibackupcount.yfilter)
	|| ydk::is_set(multibestcount.yfilter)
	|| ydk::is_set(multibackupcount.yfilter)
	|| ydk::is_set(routepermaskcount.yfilter)
	|| (hiddennh6_items !=  nullptr && hiddennh6_items->has_operation())
	|| (route6_items !=  nullptr && route6_items->has_operation());
}

std::string System::U6ribItems::Table6Items::Table6List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/u6rib-items/table6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::U6ribItems::Table6Items::Table6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Table6-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (routecount.is_set || is_set(routecount.yfilter)) leaf_name_data.push_back(routecount.get_name_leafdata());
    if (unibestcount.is_set || is_set(unibestcount.yfilter)) leaf_name_data.push_back(unibestcount.get_name_leafdata());
    if (unibackupcount.is_set || is_set(unibackupcount.yfilter)) leaf_name_data.push_back(unibackupcount.get_name_leafdata());
    if (multibestcount.is_set || is_set(multibestcount.yfilter)) leaf_name_data.push_back(multibestcount.get_name_leafdata());
    if (multibackupcount.is_set || is_set(multibackupcount.yfilter)) leaf_name_data.push_back(multibackupcount.get_name_leafdata());
    if (routepermaskcount.is_set || is_set(routepermaskcount.yfilter)) leaf_name_data.push_back(routepermaskcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hiddennh6-items")
    {
        if(hiddennh6_items == nullptr)
        {
            hiddennh6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Hiddennh6Items>();
        }
        return hiddennh6_items;
    }

    if(child_yang_name == "route6-items")
    {
        if(route6_items == nullptr)
        {
            route6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items>();
        }
        return route6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hiddennh6_items != nullptr)
    {
        children["hiddennh6-items"] = hiddennh6_items;
    }

    if(route6_items != nullptr)
    {
        children["route6-items"] = route6_items;
    }

    return children;
}

void System::U6ribItems::Table6Items::Table6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeCount")
    {
        routecount = value;
        routecount.value_namespace = name_space;
        routecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uniBestCount")
    {
        unibestcount = value;
        unibestcount.value_namespace = name_space;
        unibestcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uniBackupCount")
    {
        unibackupcount = value;
        unibackupcount.value_namespace = name_space;
        unibackupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiBestCount")
    {
        multibestcount = value;
        multibestcount.value_namespace = name_space;
        multibestcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiBackupCount")
    {
        multibackupcount = value;
        multibackupcount.value_namespace = name_space;
        multibackupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePerMaskCount")
    {
        routepermaskcount = value;
        routepermaskcount.value_namespace = name_space;
        routepermaskcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "routeCount")
    {
        routecount.yfilter = yfilter;
    }
    if(value_path == "uniBestCount")
    {
        unibestcount.yfilter = yfilter;
    }
    if(value_path == "uniBackupCount")
    {
        unibackupcount.yfilter = yfilter;
    }
    if(value_path == "multiBestCount")
    {
        multibestcount.yfilter = yfilter;
    }
    if(value_path == "multiBackupCount")
    {
        multibackupcount.yfilter = yfilter;
    }
    if(value_path == "routePerMaskCount")
    {
        routepermaskcount.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hiddennh6-items" || name == "route6-items" || name == "vrfName" || name == "routeCount" || name == "uniBestCount" || name == "uniBackupCount" || name == "multiBestCount" || name == "multiBackupCount" || name == "routePerMaskCount")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::Hiddennh6Items()
    :
    hiddennexthop6_list(this, {"id"})
{

    yang_name = "hiddennh6-items"; yang_parent_name = "Table6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::~Hiddennh6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hiddennexthop6_list.len(); index++)
    {
        if(hiddennexthop6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::has_operation() const
{
    for (std::size_t index=0; index<hiddennexthop6_list.len(); index++)
    {
        if(hiddennexthop6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hiddennh6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HiddenNextHop6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List>();
        c->parent = this;
        hiddennexthop6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hiddennexthop6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HiddenNextHop6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::HiddenNextHop6List()
    :
    id{YType::uint32, "id"},
    routeaddress{YType::str, "routeAddress"},
    routemask{YType::uint8, "routeMask"},
    clientname{YType::str, "clientName"},
    recursivenhaddress{YType::str, "recursiveNhAddress"},
    recursivenhmask{YType::uint8, "recursiveNhMask"}
{

    yang_name = "HiddenNextHop6-list"; yang_parent_name = "hiddennh6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::~HiddenNextHop6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| routeaddress.is_set
	|| routemask.is_set
	|| clientname.is_set
	|| recursivenhaddress.is_set
	|| recursivenhmask.is_set;
}

bool System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(routeaddress.yfilter)
	|| ydk::is_set(routemask.yfilter)
	|| ydk::is_set(clientname.yfilter)
	|| ydk::is_set(recursivenhaddress.yfilter)
	|| ydk::is_set(recursivenhmask.yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HiddenNextHop6-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (routeaddress.is_set || is_set(routeaddress.yfilter)) leaf_name_data.push_back(routeaddress.get_name_leafdata());
    if (routemask.is_set || is_set(routemask.yfilter)) leaf_name_data.push_back(routemask.get_name_leafdata());
    if (clientname.is_set || is_set(clientname.yfilter)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (recursivenhaddress.is_set || is_set(recursivenhaddress.yfilter)) leaf_name_data.push_back(recursivenhaddress.get_name_leafdata());
    if (recursivenhmask.is_set || is_set(recursivenhmask.yfilter)) leaf_name_data.push_back(recursivenhmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeAddress")
    {
        routeaddress = value;
        routeaddress.value_namespace = name_space;
        routeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMask")
    {
        routemask = value;
        routemask.value_namespace = name_space;
        routemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientName")
    {
        clientname = value;
        clientname.value_namespace = name_space;
        clientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNhAddress")
    {
        recursivenhaddress = value;
        recursivenhaddress.value_namespace = name_space;
        recursivenhaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNhMask")
    {
        recursivenhmask = value;
        recursivenhmask.value_namespace = name_space;
        recursivenhmask.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "routeAddress")
    {
        routeaddress.yfilter = yfilter;
    }
    if(value_path == "routeMask")
    {
        routemask.yfilter = yfilter;
    }
    if(value_path == "clientName")
    {
        clientname.yfilter = yfilter;
    }
    if(value_path == "recursiveNhAddress")
    {
        recursivenhaddress.yfilter = yfilter;
    }
    if(value_path == "recursiveNhMask")
    {
        recursivenhmask.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Hiddennh6Items::HiddenNextHop6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "routeAddress" || name == "routeMask" || name == "clientName" || name == "recursiveNhAddress" || name == "recursiveNhMask")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6Items()
    :
    route6_list(this, {"prefix"})
{

    yang_name = "route6-items"; yang_parent_name = "Table6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::~Route6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route6_list.len(); index++)
    {
        if(route6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::has_operation() const
{
    for (std::size_t index=0; index<route6_list.len(); index++)
    {
        if(route6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List>();
        c->parent = this;
        route6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Route6List()
    :
    prefix{YType::str, "prefix"},
    ubestnexthopcount{YType::uint32, "uBestNextHopCount"},
    mbestnexthopcount{YType::uint32, "mBestNextHopCount"}
        ,
    nh6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items>())
    , routedetail6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items>())
{
    nh6_items->parent = this;
    routedetail6_items->parent = this;

    yang_name = "Route6-list"; yang_parent_name = "route6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::~Route6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| ubestnexthopcount.is_set
	|| mbestnexthopcount.is_set
	|| (nh6_items !=  nullptr && nh6_items->has_data())
	|| (routedetail6_items !=  nullptr && routedetail6_items->has_data());
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ubestnexthopcount.yfilter)
	|| ydk::is_set(mbestnexthopcount.yfilter)
	|| (nh6_items !=  nullptr && nh6_items->has_operation())
	|| (routedetail6_items !=  nullptr && routedetail6_items->has_operation());
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route6-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ubestnexthopcount.is_set || is_set(ubestnexthopcount.yfilter)) leaf_name_data.push_back(ubestnexthopcount.get_name_leafdata());
    if (mbestnexthopcount.is_set || is_set(mbestnexthopcount.yfilter)) leaf_name_data.push_back(mbestnexthopcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh6-items")
    {
        if(nh6_items == nullptr)
        {
            nh6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items>();
        }
        return nh6_items;
    }

    if(child_yang_name == "routedetail6-items")
    {
        if(routedetail6_items == nullptr)
        {
            routedetail6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items>();
        }
        return routedetail6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh6_items != nullptr)
    {
        children["nh6-items"] = nh6_items;
    }

    if(routedetail6_items != nullptr)
    {
        children["routedetail6-items"] = routedetail6_items;
    }

    return children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uBestNextHopCount")
    {
        ubestnexthopcount = value;
        ubestnexthopcount.value_namespace = name_space;
        ubestnexthopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mBestNextHopCount")
    {
        mbestnexthopcount = value;
        mbestnexthopcount.value_namespace = name_space;
        mbestnexthopcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "uBestNextHopCount")
    {
        ubestnexthopcount.yfilter = yfilter;
    }
    if(value_path == "mBestNextHopCount")
    {
        mbestnexthopcount.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh6-items" || name == "routedetail6-items" || name == "prefix" || name == "uBestNextHopCount" || name == "mBestNextHopCount")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::Nh6Items()
    :
    nexthop6_list(this, {"id"})
{

    yang_name = "nh6-items"; yang_parent_name = "Route6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::~Nh6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop6_list.len(); index++)
    {
        if(nexthop6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::has_operation() const
{
    for (std::size_t index=0; index<nexthop6_list.len(); index++)
    {
        if(nexthop6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NextHop6-list")
    {
        auto c = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List>();
        c->parent = this;
        nexthop6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NextHop6-list")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::NextHop6List()
    :
    id{YType::uint32, "id"},
    prefix{YType::str, "prefix"},
    mask{YType::uint32, "mask"},
    tableid{YType::uint32, "tableId"},
    interfacename{YType::str, "interfaceName"},
    owner{YType::str, "owner"},
    preference{YType::uint32, "preference"},
    metric{YType::uint32, "metric"},
    uptime{YType::str, "uptime"}
        ,
    nhdetail6_items(std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items>())
{
    nhdetail6_items->parent = this;

    yang_name = "NextHop6-list"; yang_parent_name = "nh6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::~NextHop6List()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| prefix.is_set
	|| mask.is_set
	|| tableid.is_set
	|| interfacename.is_set
	|| owner.is_set
	|| preference.is_set
	|| metric.is_set
	|| uptime.is_set
	|| (nhdetail6_items !=  nullptr && nhdetail6_items->has_data());
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(interfacename.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (nhdetail6_items !=  nullptr && nhdetail6_items->has_operation());
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NextHop6-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (interfacename.is_set || is_set(interfacename.yfilter)) leaf_name_data.push_back(interfacename.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhdetail6-items")
    {
        if(nhdetail6_items == nullptr)
        {
            nhdetail6_items = std::make_shared<System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items>();
        }
        return nhdetail6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nhdetail6_items != nullptr)
    {
        children["nhdetail6-items"] = nhdetail6_items;
    }

    return children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceName")
    {
        interfacename = value;
        interfacename.value_namespace = name_space;
        interfacename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "interfaceName")
    {
        interfacename.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhdetail6-items" || name == "id" || name == "prefix" || name == "mask" || name == "tableId" || name == "interfaceName" || name == "owner" || name == "preference" || name == "metric" || name == "uptime")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::Nhdetail6Items()
    :
    flags{YType::str, "flags"},
    nhlfeflags{YType::str, "nhlfeFlags"},
    tlvtype{YType::enumeration, "tlvType"},
    routetype{YType::str, "routeType"},
    tag{YType::uint32, "tag"},
    segmentid{YType::uint32, "segmentId"},
    tunnelid{YType::uint32, "tunnelId"},
    encaptype{YType::enumeration, "encapType"},
    labelstack{YType::str, "labelStack"},
    nhlfeowner{YType::str, "nhlfeOwner"},
    clientdata{YType::enumeration, "clientData"},
    recursivenexthopprefix{YType::str, "recursiveNextHopPrefix"},
    xribgporigin{YType::str, "xriBgpOrigin"},
    xribgppeer{YType::str, "xriBgpPeer"},
    tlv{YType::str, "tlv"},
    tlvextentedcommunity{YType::str, "tlvExtentedCommunity"},
    tlvattachexport{YType::str, "tlvAttachExport"}
{

    yang_name = "nhdetail6-items"; yang_parent_name = "NextHop6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::~Nhdetail6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| nhlfeflags.is_set
	|| tlvtype.is_set
	|| routetype.is_set
	|| tag.is_set
	|| segmentid.is_set
	|| tunnelid.is_set
	|| encaptype.is_set
	|| labelstack.is_set
	|| nhlfeowner.is_set
	|| clientdata.is_set
	|| recursivenexthopprefix.is_set
	|| xribgporigin.is_set
	|| xribgppeer.is_set
	|| tlv.is_set
	|| tlvextentedcommunity.is_set
	|| tlvattachexport.is_set;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(nhlfeflags.yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(segmentid.yfilter)
	|| ydk::is_set(tunnelid.yfilter)
	|| ydk::is_set(encaptype.yfilter)
	|| ydk::is_set(labelstack.yfilter)
	|| ydk::is_set(nhlfeowner.yfilter)
	|| ydk::is_set(clientdata.yfilter)
	|| ydk::is_set(recursivenexthopprefix.yfilter)
	|| ydk::is_set(xribgporigin.yfilter)
	|| ydk::is_set(xribgppeer.yfilter)
	|| ydk::is_set(tlv.yfilter)
	|| ydk::is_set(tlvextentedcommunity.yfilter)
	|| ydk::is_set(tlvattachexport.yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhdetail6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (nhlfeflags.is_set || is_set(nhlfeflags.yfilter)) leaf_name_data.push_back(nhlfeflags.get_name_leafdata());
    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (segmentid.is_set || is_set(segmentid.yfilter)) leaf_name_data.push_back(segmentid.get_name_leafdata());
    if (tunnelid.is_set || is_set(tunnelid.yfilter)) leaf_name_data.push_back(tunnelid.get_name_leafdata());
    if (encaptype.is_set || is_set(encaptype.yfilter)) leaf_name_data.push_back(encaptype.get_name_leafdata());
    if (labelstack.is_set || is_set(labelstack.yfilter)) leaf_name_data.push_back(labelstack.get_name_leafdata());
    if (nhlfeowner.is_set || is_set(nhlfeowner.yfilter)) leaf_name_data.push_back(nhlfeowner.get_name_leafdata());
    if (clientdata.is_set || is_set(clientdata.yfilter)) leaf_name_data.push_back(clientdata.get_name_leafdata());
    if (recursivenexthopprefix.is_set || is_set(recursivenexthopprefix.yfilter)) leaf_name_data.push_back(recursivenexthopprefix.get_name_leafdata());
    if (xribgporigin.is_set || is_set(xribgporigin.yfilter)) leaf_name_data.push_back(xribgporigin.get_name_leafdata());
    if (xribgppeer.is_set || is_set(xribgppeer.yfilter)) leaf_name_data.push_back(xribgppeer.get_name_leafdata());
    if (tlv.is_set || is_set(tlv.yfilter)) leaf_name_data.push_back(tlv.get_name_leafdata());
    if (tlvextentedcommunity.is_set || is_set(tlvextentedcommunity.yfilter)) leaf_name_data.push_back(tlvextentedcommunity.get_name_leafdata());
    if (tlvattachexport.is_set || is_set(tlvattachexport.yfilter)) leaf_name_data.push_back(tlvattachexport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhlfeFlags")
    {
        nhlfeflags = value;
        nhlfeflags.value_namespace = name_space;
        nhlfeflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvType")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmentId")
    {
        segmentid = value;
        segmentid.value_namespace = name_space;
        segmentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelId")
    {
        tunnelid = value;
        tunnelid.value_namespace = name_space;
        tunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapType")
    {
        encaptype = value;
        encaptype.value_namespace = name_space;
        encaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelStack")
    {
        labelstack = value;
        labelstack.value_namespace = name_space;
        labelstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhlfeOwner")
    {
        nhlfeowner = value;
        nhlfeowner.value_namespace = name_space;
        nhlfeowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientData")
    {
        clientdata = value;
        clientdata.value_namespace = name_space;
        clientdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursiveNextHopPrefix")
    {
        recursivenexthopprefix = value;
        recursivenexthopprefix.value_namespace = name_space;
        recursivenexthopprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xriBgpOrigin")
    {
        xribgporigin = value;
        xribgporigin.value_namespace = name_space;
        xribgporigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xriBgpPeer")
    {
        xribgppeer = value;
        xribgppeer.value_namespace = name_space;
        xribgppeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv")
    {
        tlv = value;
        tlv.value_namespace = name_space;
        tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvExtentedCommunity")
    {
        tlvextentedcommunity = value;
        tlvextentedcommunity.value_namespace = name_space;
        tlvextentedcommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvAttachExport")
    {
        tlvattachexport = value;
        tlvattachexport.value_namespace = name_space;
        tlvattachexport.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "nhlfeFlags")
    {
        nhlfeflags.yfilter = yfilter;
    }
    if(value_path == "tlvType")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "segmentId")
    {
        segmentid.yfilter = yfilter;
    }
    if(value_path == "tunnelId")
    {
        tunnelid.yfilter = yfilter;
    }
    if(value_path == "encapType")
    {
        encaptype.yfilter = yfilter;
    }
    if(value_path == "labelStack")
    {
        labelstack.yfilter = yfilter;
    }
    if(value_path == "nhlfeOwner")
    {
        nhlfeowner.yfilter = yfilter;
    }
    if(value_path == "clientData")
    {
        clientdata.yfilter = yfilter;
    }
    if(value_path == "recursiveNextHopPrefix")
    {
        recursivenexthopprefix.yfilter = yfilter;
    }
    if(value_path == "xriBgpOrigin")
    {
        xribgporigin.yfilter = yfilter;
    }
    if(value_path == "xriBgpPeer")
    {
        xribgppeer.yfilter = yfilter;
    }
    if(value_path == "tlv")
    {
        tlv.yfilter = yfilter;
    }
    if(value_path == "tlvExtentedCommunity")
    {
        tlvextentedcommunity.yfilter = yfilter;
    }
    if(value_path == "tlvAttachExport")
    {
        tlvattachexport.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "nhlfeFlags" || name == "tlvType" || name == "routeType" || name == "tag" || name == "segmentId" || name == "tunnelId" || name == "encapType" || name == "labelStack" || name == "nhlfeOwner" || name == "clientData" || name == "recursiveNextHopPrefix" || name == "xriBgpOrigin" || name == "xriBgpPeer" || name == "tlv" || name == "tlvExtentedCommunity" || name == "tlvAttachExport")
        return true;
    return false;
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::Routedetail6Items()
    :
    inufdm{YType::boolean, "inUfdm"},
    ufdmscheduled{YType::boolean, "ufdmScheduled"},
    flags{YType::str, "flags"},
    notificationmask{YType::uint64, "notificationMask"},
    attached{YType::boolean, "attached"}
{

    yang_name = "routedetail6-items"; yang_parent_name = "Route6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::~Routedetail6Items()
{
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::has_data() const
{
    if (is_presence_container) return true;
    return inufdm.is_set
	|| ufdmscheduled.is_set
	|| flags.is_set
	|| notificationmask.is_set
	|| attached.is_set;
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inufdm.yfilter)
	|| ydk::is_set(ufdmscheduled.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(notificationmask.yfilter)
	|| ydk::is_set(attached.yfilter);
}

std::string System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedetail6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inufdm.is_set || is_set(inufdm.yfilter)) leaf_name_data.push_back(inufdm.get_name_leafdata());
    if (ufdmscheduled.is_set || is_set(ufdmscheduled.yfilter)) leaf_name_data.push_back(ufdmscheduled.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (notificationmask.is_set || is_set(notificationmask.yfilter)) leaf_name_data.push_back(notificationmask.get_name_leafdata());
    if (attached.is_set || is_set(attached.yfilter)) leaf_name_data.push_back(attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inUfdm")
    {
        inufdm = value;
        inufdm.value_namespace = name_space;
        inufdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ufdmScheduled")
    {
        ufdmscheduled = value;
        ufdmscheduled.value_namespace = name_space;
        ufdmscheduled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notificationMask")
    {
        notificationmask = value;
        notificationmask.value_namespace = name_space;
        notificationmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached")
    {
        attached = value;
        attached.value_namespace = name_space;
        attached.value_namespace_prefix = name_space_prefix;
    }
}

void System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inUfdm")
    {
        inufdm.yfilter = yfilter;
    }
    if(value_path == "ufdmScheduled")
    {
        ufdmscheduled.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "notificationMask")
    {
        notificationmask.yfilter = yfilter;
    }
    if(value_path == "attached")
    {
        attached.yfilter = yfilter;
    }
}

bool System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inUfdm" || name == "ufdmScheduled" || name == "flags" || name == "notificationMask" || name == "attached")
        return true;
    return false;
}

System::Uribv4Items::Uribv4Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::Uribv4Items::DomItems>())
{
    dom_items->parent = this;

    yang_name = "uribv4-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv4Items::~Uribv4Items()
{
}

bool System::Uribv4Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::Uribv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::Uribv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uribv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Uribv4Items::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::Uribv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Uribv4Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Uribv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "uribv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv4Items::DomItems::~DomItems()
{
}

bool System::Uribv4Items::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv4Items::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv4Items::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv4Items::DomItems::DomList::~DomList()
{
}

bool System::Uribv4Items::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv4-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv4Items::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name" || name == "operSt")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rt_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems>())
{
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"prefix"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
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

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    prefix{YType::str, "prefix"},
    prefixlength{YType::uint8, "prefixLength"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>())
    , owner_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>())
{
    nh_items->parent = this;
    owner_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefixlength.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (owner_items !=  nullptr && owner_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefixlength.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (owner_items !=  nullptr && owner_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefixlength.is_set || is_set(prefixlength.yfilter)) leaf_name_data.push_back(prefixlength.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "owner-items")
    {
        if(owner_items == nullptr)
        {
            owner_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>();
        }
        return owner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    if(owner_items != nullptr)
    {
        children["owner-items"] = owner_items;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixLength")
    {
        prefixlength = value;
        prefixlength.value_namespace = name_space;
        prefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefixLength")
    {
        prefixlength.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "owner-items" || name == "prefix" || name == "prefixLength" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    pref{YType::uint16, "pref"},
    metric{YType::uint16, "metric"},
    routetype{YType::enumeration, "routeType"},
    type{YType::str, "type"},
    createts{YType::str, "createTs"},
    active{YType::boolean, "active"},
    tag{YType::uint16, "tag"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| pref.is_set
	|| metric.is_set
	|| routetype.is_set
	|| type.is_set
	|| createts.is_set
	|| active.is_set
	|| tag.is_set
	|| name.is_set;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "pref" || name == "metric" || name == "routeType" || name == "type" || name == "createTs" || name == "active" || name == "tag" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::OwnerItems()
    :
    routeowner_list(this, {"owner"})
{

    yang_name = "owner-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::~OwnerItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_operation() const
{
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteOwner-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList>();
        c->parent = this;
        routeowner_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routeowner_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteOwner-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RouteOwnerList()
    :
    owner{YType::str, "owner"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>())
    , rsrouteownertonexthopatt_items(std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems>())
{
    nh_items->parent = this;
    rsrouteownertonexthopatt_items->parent = this;

    yang_name = "RouteOwner-list"; yang_parent_name = "owner-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::~RouteOwnerList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (rsrouteownertonexthopatt_items !=  nullptr && rsrouteownertonexthopatt_items->has_data());
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (rsrouteownertonexthopatt_items !=  nullptr && rsrouteownertonexthopatt_items->has_operation());
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteOwner-list";
    ADD_KEY_TOKEN(owner, "owner");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "rsrouteOwnerToNexthopAtt-items")
    {
        if(rsrouteownertonexthopatt_items == nullptr)
        {
            rsrouteownertonexthopatt_items = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems>();
        }
        return rsrouteownertonexthopatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    if(rsrouteownertonexthopatt_items != nullptr)
    {
        children["rsrouteOwnerToNexthopAtt-items"] = rsrouteownertonexthopatt_items;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "rsrouteOwnerToNexthopAtt-items" || name == "owner" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "RouteOwner-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::~NhItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    pref{YType::uint16, "pref"},
    metric{YType::uint16, "metric"},
    routetype{YType::enumeration, "routeType"},
    type{YType::str, "type"},
    createts{YType::str, "createTs"},
    active{YType::boolean, "active"},
    tag{YType::uint16, "tag"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| pref.is_set
	|| metric.is_set
	|| routetype.is_set
	|| type.is_set
	|| createts.is_set
	|| active.is_set
	|| tag.is_set
	|| name.is_set;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "pref" || name == "metric" || name == "routeType" || name == "type" || name == "createTs" || name == "active" || name == "tag" || name == "name")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsrouteOwnerToNexthopAttItems()
    :
    rsrouteownertonexthopatt_list(this, {"tdn"})
{

    yang_name = "rsrouteOwnerToNexthopAtt-items"; yang_parent_name = "RouteOwner-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::~RsrouteOwnerToNexthopAttItems()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrouteownertonexthopatt_list.len(); index++)
    {
        if(rsrouteownertonexthopatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrouteownertonexthopatt_list.len(); index++)
    {
        if(rsrouteownertonexthopatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrouteOwnerToNexthopAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRouteOwnerToNexthopAtt-list")
    {
        auto c = std::make_shared<System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList>();
        c->parent = this;
        rsrouteownertonexthopatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrouteownertonexthopatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRouteOwnerToNexthopAtt-list")
        return true;
    return false;
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::RsRouteOwnerToNexthopAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRouteOwnerToNexthopAtt-list"; yang_parent_name = "rsrouteOwnerToNexthopAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::~RsRouteOwnerToNexthopAttList()
{
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRouteOwnerToNexthopAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Uribv6Items::Uribv6Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::Uribv6Items::DomItems>())
{
    dom_items->parent = this;

    yang_name = "uribv6-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv6Items::~Uribv6Items()
{
}

bool System::Uribv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::Uribv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::Uribv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uribv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Uribv6Items::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::Uribv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Uribv6Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Uribv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "uribv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv6Items::DomItems::~DomItems()
{
}

bool System::Uribv6Items::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv6Items::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::Uribv6Items::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv6Items::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Uribv6Items::DomItems::DomList::~DomList()
{
}

bool System::Uribv6Items::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/uribv6-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Uribv6Items::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name" || name == "operSt")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rt_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems>())
{
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"prefix"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
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

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    prefix{YType::str, "prefix"},
    name{YType::str, "name"},
    prefixlength{YType::uint8, "prefixLength"}
        ,
    nh_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>())
    , owner_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>())
{
    nh_items->parent = this;
    owner_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| name.is_set
	|| prefixlength.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (owner_items !=  nullptr && owner_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prefixlength.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (owner_items !=  nullptr && owner_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefixlength.is_set || is_set(prefixlength.yfilter)) leaf_name_data.push_back(prefixlength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "owner-items")
    {
        if(owner_items == nullptr)
        {
            owner_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems>();
        }
        return owner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    if(owner_items != nullptr)
    {
        children["owner-items"] = owner_items;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixLength")
    {
        prefixlength = value;
        prefixlength.value_namespace = name_space;
        prefixlength.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prefixLength")
    {
        prefixlength.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "owner-items" || name == "prefix" || name == "name" || name == "prefixLength")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    name{YType::str, "name"},
    pref{YType::uint16, "pref"},
    metric{YType::uint16, "metric"},
    routetype{YType::enumeration, "routeType"},
    type{YType::str, "type"},
    createts{YType::str, "createTs"},
    active{YType::boolean, "active"},
    tag{YType::uint16, "tag"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| name.is_set
	|| pref.is_set
	|| metric.is_set
	|| routetype.is_set
	|| type.is_set
	|| createts.is_set
	|| active.is_set
	|| tag.is_set;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "name" || name == "pref" || name == "metric" || name == "routeType" || name == "type" || name == "createTs" || name == "active" || name == "tag")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::OwnerItems()
    :
    routeowner_list(this, {"owner"})
{

    yang_name = "owner-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::~OwnerItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_operation() const
{
    for (std::size_t index=0; index<routeowner_list.len(); index++)
    {
        if(routeowner_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteOwner-list")
    {
        auto c = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList>();
        c->parent = this;
        routeowner_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routeowner_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteOwner-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RouteOwnerList()
    :
    owner{YType::str, "owner"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "RouteOwner-list"; yang_parent_name = "owner-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::~RouteOwnerList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteOwner-list";
    ADD_KEY_TOKEN(owner, "owner");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "owner" || name == "name")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NhItems()
    :
    nexthop_list(this, {"owner", "addr", "if_", "vrf"})
{

    yang_name = "nh-items"; yang_parent_name = "RouteOwner-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::~NhItems()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::NexthopList()
    :
    owner{YType::str, "owner"},
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    vrf{YType::str, "vrf"},
    name{YType::str, "name"},
    pref{YType::uint16, "pref"},
    metric{YType::uint16, "metric"},
    routetype{YType::enumeration, "routeType"},
    type{YType::str, "type"},
    createts{YType::str, "createTs"},
    active{YType::boolean, "active"},
    tag{YType::uint16, "tag"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| addr.is_set
	|| if_.is_set
	|| vrf.is_set
	|| name.is_set
	|| pref.is_set
	|| metric.is_set
	|| routetype.is_set
	|| type.is_set
	|| createts.is_set
	|| active.is_set
	|| tag.is_set;
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(routetype.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(owner, "owner");
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (routetype.is_set || is_set(routetype.yfilter)) leaf_name_data.push_back(routetype.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeType")
    {
        routetype = value;
        routetype.value_namespace = name_space;
        routetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "routeType")
    {
        routetype.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "addr" || name == "if" || name == "vrf" || name == "name" || name == "pref" || name == "metric" || name == "routeType" || name == "type" || name == "createTs" || name == "active" || name == "tag")
        return true;
    return false;
}

System::ConngItems::ConngItems()
    :
    descr{YType::str, "descr"},
    name{YType::str, "name"}
        ,
    path_items(std::make_shared<System::ConngItems::PathItems>())
{
    path_items->parent = this;

    yang_name = "conng-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ConngItems::~ConngItems()
{
}

bool System::ConngItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| name.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::ConngItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::ConngItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ConngItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conng-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ConngItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::ConngItems::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ConngItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::ConngItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ConngItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "descr" || name == "name")
        return true;
    return false;
}

System::ConngItems::PathItems::PathItems()
    :
    pathep_list(this, {"id"})
{

    yang_name = "path-items"; yang_parent_name = "conng-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ConngItems::PathItems::~PathItems()
{
}

bool System::ConngItems::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathep_list.len(); index++)
    {
        if(pathep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::has_operation() const
{
    for (std::size_t index=0; index<pathep_list.len(); index++)
    {
        if(pathep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/conng-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ConngItems::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ConngItems::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathEp-list")
    {
        auto c = std::make_shared<System::ConngItems::PathItems::PathEpList>();
        c->parent = this;
        pathep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ConngItems::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pathep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ConngItems::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathEp-list")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::PathEpList()
    :
    id{YType::str, "id"},
    nativeencap{YType::str, "nativeEncap"},
    fabricpathdn{YType::str, "fabricPathDn"},
    descr{YType::str, "descr"},
    name{YType::str, "name"}
        ,
    rtfvepdeftopathep_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems>())
    , rtfvdypathatt_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems>())
    , rtvsanvsanpathatt_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems>())
    , rspathtoif_items(std::make_shared<System::ConngItems::PathItems::PathEpList::RspathToIfItems>())
{
    rtfvepdeftopathep_items->parent = this;
    rtfvdypathatt_items->parent = this;
    rtvsanvsanpathatt_items->parent = this;
    rspathtoif_items->parent = this;

    yang_name = "PathEp-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ConngItems::PathItems::PathEpList::~PathEpList()
{
}

bool System::ConngItems::PathItems::PathEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| nativeencap.is_set
	|| fabricpathdn.is_set
	|| descr.is_set
	|| name.is_set
	|| (rtfvepdeftopathep_items !=  nullptr && rtfvepdeftopathep_items->has_data())
	|| (rtfvdypathatt_items !=  nullptr && rtfvdypathatt_items->has_data())
	|| (rtvsanvsanpathatt_items !=  nullptr && rtvsanvsanpathatt_items->has_data())
	|| (rspathtoif_items !=  nullptr && rspathtoif_items->has_data());
}

bool System::ConngItems::PathItems::PathEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nativeencap.yfilter)
	|| ydk::is_set(fabricpathdn.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdeftopathep_items !=  nullptr && rtfvepdeftopathep_items->has_operation())
	|| (rtfvdypathatt_items !=  nullptr && rtfvdypathatt_items->has_operation())
	|| (rtvsanvsanpathatt_items !=  nullptr && rtvsanvsanpathatt_items->has_operation())
	|| (rspathtoif_items !=  nullptr && rspathtoif_items->has_operation());
}

std::string System::ConngItems::PathItems::PathEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/conng-items/path-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ConngItems::PathItems::PathEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nativeencap.is_set || is_set(nativeencap.yfilter)) leaf_name_data.push_back(nativeencap.get_name_leafdata());
    if (fabricpathdn.is_set || is_set(fabricpathdn.yfilter)) leaf_name_data.push_back(fabricpathdn.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ConngItems::PathItems::PathEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefToPathEp-items")
    {
        if(rtfvepdeftopathep_items == nullptr)
        {
            rtfvepdeftopathep_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems>();
        }
        return rtfvepdeftopathep_items;
    }

    if(child_yang_name == "rtfvDyPathAtt-items")
    {
        if(rtfvdypathatt_items == nullptr)
        {
            rtfvdypathatt_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems>();
        }
        return rtfvdypathatt_items;
    }

    if(child_yang_name == "rtvsanVsanPathAtt-items")
    {
        if(rtvsanvsanpathatt_items == nullptr)
        {
            rtvsanvsanpathatt_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems>();
        }
        return rtvsanvsanpathatt_items;
    }

    if(child_yang_name == "rspathToIf-items")
    {
        if(rspathtoif_items == nullptr)
        {
            rspathtoif_items = std::make_shared<System::ConngItems::PathItems::PathEpList::RspathToIfItems>();
        }
        return rspathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ConngItems::PathItems::PathEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtfvepdeftopathep_items != nullptr)
    {
        children["rtfvEpDefToPathEp-items"] = rtfvepdeftopathep_items;
    }

    if(rtfvdypathatt_items != nullptr)
    {
        children["rtfvDyPathAtt-items"] = rtfvdypathatt_items;
    }

    if(rtvsanvsanpathatt_items != nullptr)
    {
        children["rtvsanVsanPathAtt-items"] = rtvsanvsanpathatt_items;
    }

    if(rspathtoif_items != nullptr)
    {
        children["rspathToIf-items"] = rspathtoif_items;
    }

    return children;
}

void System::ConngItems::PathItems::PathEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeEncap")
    {
        nativeencap = value;
        nativeencap.value_namespace = name_space;
        nativeencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricPathDn")
    {
        fabricpathdn = value;
        fabricpathdn.value_namespace = name_space;
        fabricpathdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ConngItems::PathItems::PathEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nativeEncap")
    {
        nativeencap.yfilter = yfilter;
    }
    if(value_path == "fabricPathDn")
    {
        fabricpathdn.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ConngItems::PathItems::PathEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefToPathEp-items" || name == "rtfvDyPathAtt-items" || name == "rtvsanVsanPathAtt-items" || name == "rspathToIf-items" || name == "id" || name == "nativeEncap" || name == "fabricPathDn" || name == "descr" || name == "name")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtfvEpDefToPathEpItems()
    :
    rtfvepdeftopathep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefToPathEp-items"; yang_parent_name = "PathEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::~RtfvEpDefToPathEpItems()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdeftopathep_list.len(); index++)
    {
        if(rtfvepdeftopathep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdeftopathep_list.len(); index++)
    {
        if(rtfvepdeftopathep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefToPathEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefToPathEp-list")
    {
        auto c = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList>();
        c->parent = this;
        rtfvepdeftopathep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvepdeftopathep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefToPathEp-list")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::RtFvEpDefToPathEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefToPathEp-list"; yang_parent_name = "rtfvEpDefToPathEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::~RtFvEpDefToPathEpList()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefToPathEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtfvDyPathAttItems()
    :
    rtfvdypathatt_list(this, {"tdn"})
{

    yang_name = "rtfvDyPathAtt-items"; yang_parent_name = "PathEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::~RtfvDyPathAttItems()
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdypathatt_list.len(); index++)
    {
        if(rtfvdypathatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdypathatt_list.len(); index++)
    {
        if(rtfvdypathatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDyPathAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDyPathAtt-list")
    {
        auto c = std::make_shared<System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::RtFvDyPathAttList>();
        c->parent = this;
        rtfvdypathatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvdypathatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDyPathAtt-list")
        return true;
    return false;
}


}
}

