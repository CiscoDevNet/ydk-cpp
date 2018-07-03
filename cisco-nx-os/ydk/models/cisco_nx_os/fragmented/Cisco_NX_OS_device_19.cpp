
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_19.hpp"
#include "Cisco_NX_OS_device_20.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OpnicItems()
    :
    opnic_list(this, {"mac"})
{

    yang_name = "opnic-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::~OpnicItems()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::has_operation() const
{
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opnic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OPNic-list")
    {
        auto c = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList>();
        c->parent = this;
        opnic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : opnic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OPNic-list")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::OPNicList()
    :
    mac{YType::str, "mac"},
    ip{YType::str, "ip"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "OPNic-list"; yang_parent_name = "opnic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::~OPNicList()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| ip.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OPNic-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::RsbrConfItems::RsbrConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsbrConf-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::RsbrConfItems::~RsbrConfItems()
{
}

bool System::BrItems::BrIfList::RsbrConfItems::has_data() const
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

bool System::BrItems::BrIfList::RsbrConfItems::has_operation() const
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

std::string System::BrItems::BrIfList::RsbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::RsbrConfItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::BrItems::BrIfList::RsbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BrItems::BrIfList::RsbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BrItems::BrIfList::RsbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BrItems::BrIfList::RsbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BrItems::BrIfList::RsbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BrItems::BrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::BrItems::BrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BrItems::BrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BrItems::BrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BrItems::BrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BrItems::BrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BrItems::BrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BrItems::BrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BrItems::BrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BrItems::BrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BrItems::BrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BrItems::BrIfList::RtnwPathToIfItems::get_children() const
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

void System::BrItems::BrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CdpItems::CdpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::CdpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "cdp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CdpItems::~CdpItems()
{
}

bool System::CdpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::CdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::CdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::CdpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::CdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CdpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::CdpItems::InstItems::InstItems()
    :
    ver{YType::enumeration, "ver"},
    devidtype{YType::enumeration, "devIdType"},
    holdintvl{YType::uint8, "holdIntvl"},
    txfreq{YType::uint8, "txFreq"},
    sysname{YType::str, "sysName"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::CdpItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "cdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CdpItems::InstItems::~InstItems()
{
}

bool System::CdpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return ver.is_set
	|| devidtype.is_set
	|| holdintvl.is_set
	|| txfreq.is_set
	|| sysname.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::CdpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(devidtype.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(txfreq.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::CdpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/cdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CdpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (devidtype.is_set || is_set(devidtype.yfilter)) leaf_name_data.push_back(devidtype.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (txfreq.is_set || is_set(txfreq.yfilter)) leaf_name_data.push_back(txfreq.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::CdpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::CdpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devIdType")
    {
        devidtype = value;
        devidtype.value_namespace = name_space;
        devidtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txFreq")
    {
        txfreq = value;
        txfreq.value_namespace = name_space;
        txfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysName")
    {
        sysname = value;
        sysname.value_namespace = name_space;
        sysname.value_namespace_prefix = name_space_prefix;
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

void System::CdpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "devIdType")
    {
        devidtype.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "txFreq")
    {
        txfreq.yfilter = yfilter;
    }
    if(value_path == "sysName")
    {
        sysname.yfilter = yfilter;
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

bool System::CdpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "ver" || name == "devIdType" || name == "holdIntvl" || name == "txFreq" || name == "sysName" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CdpItems::InstItems::IfItems::~IfItems()
{
}

bool System::CdpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CdpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CdpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/cdp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CdpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::CdpItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::get_children() const
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

void System::CdpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CdpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CdpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    portdesc{YType::str, "portDesc"},
    locdesc{YType::str, "locDesc"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    nativevlan{YType::uint16, "nativeVlan"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    adj_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems>())
    , ifstats_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::IfstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    ifstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CdpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| portdesc.is_set
	|| locdesc.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| nativevlan.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::CdpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(portdesc.yfilter)
	|| ydk::is_set(locdesc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::CdpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/cdp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CdpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (portdesc.is_set || is_set(portdesc.yfilter)) leaf_name_data.push_back(portdesc.get_name_leafdata());
    if (locdesc.is_set || is_set(locdesc.yfilter)) leaf_name_data.push_back(locdesc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
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

void System::CdpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDesc")
    {
        portdesc = value;
        portdesc.value_namespace = name_space;
        portdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locDesc")
    {
        locdesc = value;
        locdesc.value_namespace = name_space;
        locdesc.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
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

void System::CdpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "portDesc")
    {
        portdesc.yfilter = yfilter;
    }
    if(value_path == "locDesc")
    {
        locdesc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
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

bool System::CdpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "portDesc" || name == "locDesc" || name == "operSt" || name == "operStQual" || name == "nativeVlan" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"index_"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    index_{YType::uint32, "index"},
    stqual{YType::str, "stQual"},
    ver{YType::str, "ver"},
    devid{YType::str, "devId"},
    portid{YType::str, "portId"},
    platid{YType::str, "platId"},
    cap{YType::str, "cap"},
    duplex{YType::enumeration, "duplex"},
    nativevlan{YType::uint16, "nativeVlan"},
    mtu{YType::uint32, "mtu"},
    sysname{YType::str, "sysName"},
    sysloc{YType::str, "sysLoc"},
    sysobjidv{YType::str, "sysObjIdV"},
    sysobjidl{YType::uint8, "sysObjIdL"},
    name{YType::str, "name"}
        ,
    mgmt_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems>())
    , intf_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems>())
    , adjstats_items(std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
{
    mgmt_items->parent = this;
    intf_items->parent = this;
    adjstats_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| stqual.is_set
	|| ver.is_set
	|| devid.is_set
	|| portid.is_set
	|| platid.is_set
	|| cap.is_set
	|| duplex.is_set
	|| nativevlan.is_set
	|| mtu.is_set
	|| sysname.is_set
	|| sysloc.is_set
	|| sysobjidv.is_set
	|| sysobjidl.is_set
	|| name.is_set
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(stqual.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(platid.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(sysloc.yfilter)
	|| ydk::is_set(sysobjidv.yfilter)
	|| ydk::is_set(sysobjidl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (stqual.is_set || is_set(stqual.yfilter)) leaf_name_data.push_back(stqual.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (platid.is_set || is_set(platid.yfilter)) leaf_name_data.push_back(platid.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (sysloc.is_set || is_set(sysloc.yfilter)) leaf_name_data.push_back(sysloc.get_name_leafdata());
    if (sysobjidv.is_set || is_set(sysobjidv.yfilter)) leaf_name_data.push_back(sysobjidv.get_name_leafdata());
    if (sysobjidl.is_set || is_set(sysobjidl.yfilter)) leaf_name_data.push_back(sysobjidl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mgmt_items != nullptr)
    {
        children["mgmt-items"] = mgmt_items;
    }

    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stQual")
    {
        stqual = value;
        stqual.value_namespace = name_space;
        stqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platId")
    {
        platid = value;
        platid.value_namespace = name_space;
        platid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysName")
    {
        sysname = value;
        sysname.value_namespace = name_space;
        sysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysLoc")
    {
        sysloc = value;
        sysloc.value_namespace = name_space;
        sysloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysObjIdV")
    {
        sysobjidv = value;
        sysobjidv.value_namespace = name_space;
        sysobjidv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysObjIdL")
    {
        sysobjidl = value;
        sysobjidl.value_namespace = name_space;
        sysobjidl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "stQual")
    {
        stqual.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "platId")
    {
        platid.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "sysName")
    {
        sysname.yfilter = yfilter;
    }
    if(value_path == "sysLoc")
    {
        sysloc.yfilter = yfilter;
    }
    if(value_path == "sysObjIdV")
    {
        sysobjidv.yfilter = yfilter;
    }
    if(value_path == "sysObjIdL")
    {
        sysobjidl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgmt-items" || name == "intf-items" || name == "adjstats-items" || name == "index" || name == "stQual" || name == "ver" || name == "devId" || name == "portId" || name == "platId" || name == "cap" || name == "duplex" || name == "nativeVlan" || name == "mtu" || name == "sysName" || name == "sysLoc" || name == "sysObjIdV" || name == "sysObjIdL" || name == "name")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtItems()
    :
    mgmtaddr_list(this, {"addr"})
{

    yang_name = "mgmt-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::~MgmtItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtaddr_list.len(); index++)
    {
        if(mgmtaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtaddr_list.len(); index++)
    {
        if(mgmtaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAddr-list")
    {
        auto c = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList>();
        c->parent = this;
        mgmtaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtAddr-list")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::MgmtAddrList()
    :
    addr{YType::str, "addr"}
{

    yang_name = "MgmtAddr-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::~MgmtAddrList()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtAddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfItems()
    :
    intfaddr_list(this, {"addr"})
{

    yang_name = "intf-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::~IntfItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<intfaddr_list.len(); index++)
    {
        if(intfaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<intfaddr_list.len(); index++)
    {
        if(intfaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IntfAddr-list")
    {
        auto c = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList>();
        c->parent = this;
        intfaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : intfaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IntfAddr-list")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::IntfAddrList()
    :
    addr{YType::str, "addr"}
{

    yang_name = "IntfAddr-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::~IntfAddrList()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IntfAddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    adjexpts{YType::str, "adjExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return adjexpts.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjexpts.yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjexpts.is_set || is_set(adjexpts.yfilter)) leaf_name_data.push_back(adjexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjExpTs")
    {
        adjexpts = value;
        adjexpts.value_namespace = name_space;
        adjexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjExpTs")
    {
        adjexpts.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjExpTs")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    v1sent{YType::uint32, "v1Sent"},
    v2sent{YType::uint32, "v2Sent"},
    failedsent{YType::uint32, "failedSent"},
    validv1rcvd{YType::uint32, "validV1Rcvd"},
    validv2rcvd{YType::uint32, "validV2Rcvd"},
    unsupverrcvd{YType::uint32, "unSupVerRcvd"},
    cksumerrrcvd{YType::uint32, "cksumErrRcvd"},
    malformrcvd{YType::uint32, "malformRcvd"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return v1sent.is_set
	|| v2sent.is_set
	|| failedsent.is_set
	|| validv1rcvd.is_set
	|| validv2rcvd.is_set
	|| unsupverrcvd.is_set
	|| cksumerrrcvd.is_set
	|| malformrcvd.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v1sent.yfilter)
	|| ydk::is_set(v2sent.yfilter)
	|| ydk::is_set(failedsent.yfilter)
	|| ydk::is_set(validv1rcvd.yfilter)
	|| ydk::is_set(validv2rcvd.yfilter)
	|| ydk::is_set(unsupverrcvd.yfilter)
	|| ydk::is_set(cksumerrrcvd.yfilter)
	|| ydk::is_set(malformrcvd.yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1sent.is_set || is_set(v1sent.yfilter)) leaf_name_data.push_back(v1sent.get_name_leafdata());
    if (v2sent.is_set || is_set(v2sent.yfilter)) leaf_name_data.push_back(v2sent.get_name_leafdata());
    if (failedsent.is_set || is_set(failedsent.yfilter)) leaf_name_data.push_back(failedsent.get_name_leafdata());
    if (validv1rcvd.is_set || is_set(validv1rcvd.yfilter)) leaf_name_data.push_back(validv1rcvd.get_name_leafdata());
    if (validv2rcvd.is_set || is_set(validv2rcvd.yfilter)) leaf_name_data.push_back(validv2rcvd.get_name_leafdata());
    if (unsupverrcvd.is_set || is_set(unsupverrcvd.yfilter)) leaf_name_data.push_back(unsupverrcvd.get_name_leafdata());
    if (cksumerrrcvd.is_set || is_set(cksumerrrcvd.yfilter)) leaf_name_data.push_back(cksumerrrcvd.get_name_leafdata());
    if (malformrcvd.is_set || is_set(malformrcvd.yfilter)) leaf_name_data.push_back(malformrcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v1Sent")
    {
        v1sent = value;
        v1sent.value_namespace = name_space;
        v1sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2Sent")
    {
        v2sent = value;
        v2sent.value_namespace = name_space;
        v2sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failedSent")
    {
        failedsent = value;
        failedsent.value_namespace = name_space;
        failedsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validV1Rcvd")
    {
        validv1rcvd = value;
        validv1rcvd.value_namespace = name_space;
        validv1rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validV2Rcvd")
    {
        validv2rcvd = value;
        validv2rcvd.value_namespace = name_space;
        validv2rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unSupVerRcvd")
    {
        unsupverrcvd = value;
        unsupverrcvd.value_namespace = name_space;
        unsupverrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksumErrRcvd")
    {
        cksumerrrcvd = value;
        cksumerrrcvd.value_namespace = name_space;
        cksumerrrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformRcvd")
    {
        malformrcvd = value;
        malformrcvd.value_namespace = name_space;
        malformrcvd.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v1Sent")
    {
        v1sent.yfilter = yfilter;
    }
    if(value_path == "v2Sent")
    {
        v2sent.yfilter = yfilter;
    }
    if(value_path == "failedSent")
    {
        failedsent.yfilter = yfilter;
    }
    if(value_path == "validV1Rcvd")
    {
        validv1rcvd.yfilter = yfilter;
    }
    if(value_path == "validV2Rcvd")
    {
        validv2rcvd.yfilter = yfilter;
    }
    if(value_path == "unSupVerRcvd")
    {
        unsupverrcvd.yfilter = yfilter;
    }
    if(value_path == "cksumErrRcvd")
    {
        cksumerrrcvd.yfilter = yfilter;
    }
    if(value_path == "malformRcvd")
    {
        malformrcvd.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1Sent" || name == "v2Sent" || name == "failedSent" || name == "validV1Rcvd" || name == "validV2Rcvd" || name == "unSupVerRcvd" || name == "cksumErrRcvd" || name == "malformRcvd")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LldpItems::LldpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::LldpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "lldp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::~LldpItems()
{
}

bool System::LldpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::LldpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::LldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::LldpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::LldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LldpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::LldpItems::InstItems::InstItems()
    :
    holdtime{YType::uint16, "holdTime"},
    initdelaytime{YType::uint16, "initDelayTime"},
    txfreq{YType::uint16, "txFreq"},
    opttlvsel{YType::str, "optTlvSel"},
    sysdesc{YType::str, "sysDesc"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    mgmt_items(std::make_shared<System::LldpItems::InstItems::MgmtItems>())
    , if_items(std::make_shared<System::LldpItems::InstItems::IfItems>())
    , instsendtask_items(std::make_shared<System::LldpItems::InstItems::InstsendtaskItems>())
    , inststats_items(std::make_shared<System::LldpItems::InstItems::InststatsItems>())
    , polcomplex_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems>())
    , poltext_items(std::make_shared<System::LldpItems::InstItems::PoltextItems>())
    , polip_items(std::make_shared<System::LldpItems::InstItems::PolipItems>())
    , polmac_items(std::make_shared<System::LldpItems::InstItems::PolmacItems>())
    , poluint64_items(std::make_shared<System::LldpItems::InstItems::Poluint64Items>())
    , poluint32_items(std::make_shared<System::LldpItems::InstItems::Poluint32Items>())
    , poluint16_items(std::make_shared<System::LldpItems::InstItems::Poluint16Items>())
    , polubyte_items(std::make_shared<System::LldpItems::InstItems::PolubyteItems>())
    , rslldpinstpolcons_items(std::make_shared<System::LldpItems::InstItems::RslldpInstPolConsItems>())
{
    mgmt_items->parent = this;
    if_items->parent = this;
    instsendtask_items->parent = this;
    inststats_items->parent = this;
    polcomplex_items->parent = this;
    poltext_items->parent = this;
    polip_items->parent = this;
    polmac_items->parent = this;
    poluint64_items->parent = this;
    poluint32_items->parent = this;
    poluint16_items->parent = this;
    polubyte_items->parent = this;
    rslldpinstpolcons_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "lldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::~InstItems()
{
}

bool System::LldpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return holdtime.is_set
	|| initdelaytime.is_set
	|| txfreq.is_set
	|| opttlvsel.is_set
	|| sysdesc.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (instsendtask_items !=  nullptr && instsendtask_items->has_data())
	|| (inststats_items !=  nullptr && inststats_items->has_data())
	|| (polcomplex_items !=  nullptr && polcomplex_items->has_data())
	|| (poltext_items !=  nullptr && poltext_items->has_data())
	|| (polip_items !=  nullptr && polip_items->has_data())
	|| (polmac_items !=  nullptr && polmac_items->has_data())
	|| (poluint64_items !=  nullptr && poluint64_items->has_data())
	|| (poluint32_items !=  nullptr && poluint32_items->has_data())
	|| (poluint16_items !=  nullptr && poluint16_items->has_data())
	|| (polubyte_items !=  nullptr && polubyte_items->has_data())
	|| (rslldpinstpolcons_items !=  nullptr && rslldpinstpolcons_items->has_data());
}

bool System::LldpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(initdelaytime.yfilter)
	|| ydk::is_set(txfreq.yfilter)
	|| ydk::is_set(opttlvsel.yfilter)
	|| ydk::is_set(sysdesc.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (instsendtask_items !=  nullptr && instsendtask_items->has_operation())
	|| (inststats_items !=  nullptr && inststats_items->has_operation())
	|| (polcomplex_items !=  nullptr && polcomplex_items->has_operation())
	|| (poltext_items !=  nullptr && poltext_items->has_operation())
	|| (polip_items !=  nullptr && polip_items->has_operation())
	|| (polmac_items !=  nullptr && polmac_items->has_operation())
	|| (poluint64_items !=  nullptr && poluint64_items->has_operation())
	|| (poluint32_items !=  nullptr && poluint32_items->has_operation())
	|| (poluint16_items !=  nullptr && poluint16_items->has_operation())
	|| (polubyte_items !=  nullptr && polubyte_items->has_operation())
	|| (rslldpinstpolcons_items !=  nullptr && rslldpinstpolcons_items->has_operation());
}

std::string System::LldpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (initdelaytime.is_set || is_set(initdelaytime.yfilter)) leaf_name_data.push_back(initdelaytime.get_name_leafdata());
    if (txfreq.is_set || is_set(txfreq.yfilter)) leaf_name_data.push_back(txfreq.get_name_leafdata());
    if (opttlvsel.is_set || is_set(opttlvsel.yfilter)) leaf_name_data.push_back(opttlvsel.get_name_leafdata());
    if (sysdesc.is_set || is_set(sysdesc.yfilter)) leaf_name_data.push_back(sysdesc.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::LldpItems::InstItems::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::LldpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "instsendtask-items")
    {
        if(instsendtask_items == nullptr)
        {
            instsendtask_items = std::make_shared<System::LldpItems::InstItems::InstsendtaskItems>();
        }
        return instsendtask_items;
    }

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::LldpItems::InstItems::InststatsItems>();
        }
        return inststats_items;
    }

    if(child_yang_name == "polcomplex-items")
    {
        if(polcomplex_items == nullptr)
        {
            polcomplex_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems>();
        }
        return polcomplex_items;
    }

    if(child_yang_name == "poltext-items")
    {
        if(poltext_items == nullptr)
        {
            poltext_items = std::make_shared<System::LldpItems::InstItems::PoltextItems>();
        }
        return poltext_items;
    }

    if(child_yang_name == "polip-items")
    {
        if(polip_items == nullptr)
        {
            polip_items = std::make_shared<System::LldpItems::InstItems::PolipItems>();
        }
        return polip_items;
    }

    if(child_yang_name == "polmac-items")
    {
        if(polmac_items == nullptr)
        {
            polmac_items = std::make_shared<System::LldpItems::InstItems::PolmacItems>();
        }
        return polmac_items;
    }

    if(child_yang_name == "poluint64-items")
    {
        if(poluint64_items == nullptr)
        {
            poluint64_items = std::make_shared<System::LldpItems::InstItems::Poluint64Items>();
        }
        return poluint64_items;
    }

    if(child_yang_name == "poluint32-items")
    {
        if(poluint32_items == nullptr)
        {
            poluint32_items = std::make_shared<System::LldpItems::InstItems::Poluint32Items>();
        }
        return poluint32_items;
    }

    if(child_yang_name == "poluint16-items")
    {
        if(poluint16_items == nullptr)
        {
            poluint16_items = std::make_shared<System::LldpItems::InstItems::Poluint16Items>();
        }
        return poluint16_items;
    }

    if(child_yang_name == "polubyte-items")
    {
        if(polubyte_items == nullptr)
        {
            polubyte_items = std::make_shared<System::LldpItems::InstItems::PolubyteItems>();
        }
        return polubyte_items;
    }

    if(child_yang_name == "rslldpInstPolCons-items")
    {
        if(rslldpinstpolcons_items == nullptr)
        {
            rslldpinstpolcons_items = std::make_shared<System::LldpItems::InstItems::RslldpInstPolConsItems>();
        }
        return rslldpinstpolcons_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mgmt_items != nullptr)
    {
        children["mgmt-items"] = mgmt_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(instsendtask_items != nullptr)
    {
        children["instsendtask-items"] = instsendtask_items;
    }

    if(inststats_items != nullptr)
    {
        children["inststats-items"] = inststats_items;
    }

    if(polcomplex_items != nullptr)
    {
        children["polcomplex-items"] = polcomplex_items;
    }

    if(poltext_items != nullptr)
    {
        children["poltext-items"] = poltext_items;
    }

    if(polip_items != nullptr)
    {
        children["polip-items"] = polip_items;
    }

    if(polmac_items != nullptr)
    {
        children["polmac-items"] = polmac_items;
    }

    if(poluint64_items != nullptr)
    {
        children["poluint64-items"] = poluint64_items;
    }

    if(poluint32_items != nullptr)
    {
        children["poluint32-items"] = poluint32_items;
    }

    if(poluint16_items != nullptr)
    {
        children["poluint16-items"] = poluint16_items;
    }

    if(polubyte_items != nullptr)
    {
        children["polubyte-items"] = polubyte_items;
    }

    if(rslldpinstpolcons_items != nullptr)
    {
        children["rslldpInstPolCons-items"] = rslldpinstpolcons_items;
    }

    return children;
}

void System::LldpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdTime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initDelayTime")
    {
        initdelaytime = value;
        initdelaytime.value_namespace = name_space;
        initdelaytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txFreq")
    {
        txfreq = value;
        txfreq.value_namespace = name_space;
        txfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optTlvSel")
    {
        opttlvsel = value;
        opttlvsel.value_namespace = name_space;
        opttlvsel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDesc")
    {
        sysdesc = value;
        sysdesc.value_namespace = name_space;
        sysdesc.value_namespace_prefix = name_space_prefix;
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

void System::LldpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdTime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "initDelayTime")
    {
        initdelaytime.yfilter = yfilter;
    }
    if(value_path == "txFreq")
    {
        txfreq.yfilter = yfilter;
    }
    if(value_path == "optTlvSel")
    {
        opttlvsel.yfilter = yfilter;
    }
    if(value_path == "sysDesc")
    {
        sysdesc.yfilter = yfilter;
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

bool System::LldpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgmt-items" || name == "if-items" || name == "instsendtask-items" || name == "inststats-items" || name == "polcomplex-items" || name == "poltext-items" || name == "polip-items" || name == "polmac-items" || name == "poluint64-items" || name == "poluint32-items" || name == "poluint16-items" || name == "polubyte-items" || name == "rslldpInstPolCons-items" || name == "holdTime" || name == "initDelayTime" || name == "txFreq" || name == "optTlvSel" || name == "sysDesc" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::LldpItems::InstItems::MgmtItems::MgmtItems()
    :
    mgmtaddr_list(this, {"addr"})
{

    yang_name = "mgmt-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::MgmtItems::~MgmtItems()
{
}

bool System::LldpItems::InstItems::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtaddr_list.len(); index++)
    {
        if(mgmtaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtaddr_list.len(); index++)
    {
        if(mgmtaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::MgmtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAddr-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::MgmtItems::MgmtAddrList>();
        c->parent = this;
        mgmtaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtAddr-list")
        return true;
    return false;
}

System::LldpItems::InstItems::MgmtItems::MgmtAddrList::MgmtAddrList()
    :
    addr{YType::str, "addr"}
{

    yang_name = "MgmtAddr-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::MgmtItems::MgmtAddrList::~MgmtAddrList()
{
}

bool System::LldpItems::InstItems::MgmtItems::MgmtAddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::LldpItems::InstItems::MgmtItems::MgmtAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/mgmt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtAddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::MgmtItems::MgmtAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::MgmtItems::MgmtAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::MgmtItems::MgmtAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::IfItems::~IfItems()
{
}

bool System::LldpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::get_children() const
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

void System::LldpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    adminrxst{YType::enumeration, "adminRxSt"},
    admintxst{YType::enumeration, "adminTxSt"},
    sysdesc{YType::str, "sysDesc"},
    portdesc{YType::str, "portDesc"},
    operrxst{YType::enumeration, "operRxSt"},
    opertxst{YType::enumeration, "operTxSt"},
    mac{YType::str, "mac"},
    portvlan{YType::uint16, "portVlan"},
    wiringissues{YType::str, "wiringIssues"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    adj_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems>())
    , ctrlradj_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems>())
    , ifsendtask_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems>())
    , ifstats_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfstatsItems>())
    , polcomplex_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems>())
    , poltext_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PoltextItems>())
    , polip_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolipItems>())
    , polmac_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolmacItems>())
    , poluint64_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint64Items>())
    , poluint32_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint32Items>())
    , poluint16_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint16Items>())
    , polubyte_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolubyteItems>())
    , rtvrfmbr_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    ctrlradj_items->parent = this;
    ifsendtask_items->parent = this;
    ifstats_items->parent = this;
    polcomplex_items->parent = this;
    poltext_items->parent = this;
    polip_items->parent = this;
    polmac_items->parent = this;
    poluint64_items->parent = this;
    poluint32_items->parent = this;
    poluint16_items->parent = this;
    polubyte_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| adminrxst.is_set
	|| admintxst.is_set
	|| sysdesc.is_set
	|| portdesc.is_set
	|| operrxst.is_set
	|| opertxst.is_set
	|| mac.is_set
	|| portvlan.is_set
	|| wiringissues.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (ctrlradj_items !=  nullptr && ctrlradj_items->has_data())
	|| (ifsendtask_items !=  nullptr && ifsendtask_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (polcomplex_items !=  nullptr && polcomplex_items->has_data())
	|| (poltext_items !=  nullptr && poltext_items->has_data())
	|| (polip_items !=  nullptr && polip_items->has_data())
	|| (polmac_items !=  nullptr && polmac_items->has_data())
	|| (poluint64_items !=  nullptr && poluint64_items->has_data())
	|| (poluint32_items !=  nullptr && poluint32_items->has_data())
	|| (poluint16_items !=  nullptr && poluint16_items->has_data())
	|| (polubyte_items !=  nullptr && polubyte_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminrxst.yfilter)
	|| ydk::is_set(admintxst.yfilter)
	|| ydk::is_set(sysdesc.yfilter)
	|| ydk::is_set(portdesc.yfilter)
	|| ydk::is_set(operrxst.yfilter)
	|| ydk::is_set(opertxst.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(portvlan.yfilter)
	|| ydk::is_set(wiringissues.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (ctrlradj_items !=  nullptr && ctrlradj_items->has_operation())
	|| (ifsendtask_items !=  nullptr && ifsendtask_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (polcomplex_items !=  nullptr && polcomplex_items->has_operation())
	|| (poltext_items !=  nullptr && poltext_items->has_operation())
	|| (polip_items !=  nullptr && polip_items->has_operation())
	|| (polmac_items !=  nullptr && polmac_items->has_operation())
	|| (poluint64_items !=  nullptr && poluint64_items->has_operation())
	|| (poluint32_items !=  nullptr && poluint32_items->has_operation())
	|| (poluint16_items !=  nullptr && poluint16_items->has_operation())
	|| (polubyte_items !=  nullptr && polubyte_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::LldpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminrxst.is_set || is_set(adminrxst.yfilter)) leaf_name_data.push_back(adminrxst.get_name_leafdata());
    if (admintxst.is_set || is_set(admintxst.yfilter)) leaf_name_data.push_back(admintxst.get_name_leafdata());
    if (sysdesc.is_set || is_set(sysdesc.yfilter)) leaf_name_data.push_back(sysdesc.get_name_leafdata());
    if (portdesc.is_set || is_set(portdesc.yfilter)) leaf_name_data.push_back(portdesc.get_name_leafdata());
    if (operrxst.is_set || is_set(operrxst.yfilter)) leaf_name_data.push_back(operrxst.get_name_leafdata());
    if (opertxst.is_set || is_set(opertxst.yfilter)) leaf_name_data.push_back(opertxst.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (portvlan.is_set || is_set(portvlan.yfilter)) leaf_name_data.push_back(portvlan.get_name_leafdata());
    if (wiringissues.is_set || is_set(wiringissues.yfilter)) leaf_name_data.push_back(wiringissues.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "ctrlradj-items")
    {
        if(ctrlradj_items == nullptr)
        {
            ctrlradj_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems>();
        }
        return ctrlradj_items;
    }

    if(child_yang_name == "ifsendtask-items")
    {
        if(ifsendtask_items == nullptr)
        {
            ifsendtask_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems>();
        }
        return ifsendtask_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "polcomplex-items")
    {
        if(polcomplex_items == nullptr)
        {
            polcomplex_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems>();
        }
        return polcomplex_items;
    }

    if(child_yang_name == "poltext-items")
    {
        if(poltext_items == nullptr)
        {
            poltext_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PoltextItems>();
        }
        return poltext_items;
    }

    if(child_yang_name == "polip-items")
    {
        if(polip_items == nullptr)
        {
            polip_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolipItems>();
        }
        return polip_items;
    }

    if(child_yang_name == "polmac-items")
    {
        if(polmac_items == nullptr)
        {
            polmac_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolmacItems>();
        }
        return polmac_items;
    }

    if(child_yang_name == "poluint64-items")
    {
        if(poluint64_items == nullptr)
        {
            poluint64_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint64Items>();
        }
        return poluint64_items;
    }

    if(child_yang_name == "poluint32-items")
    {
        if(poluint32_items == nullptr)
        {
            poluint32_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint32Items>();
        }
        return poluint32_items;
    }

    if(child_yang_name == "poluint16-items")
    {
        if(poluint16_items == nullptr)
        {
            poluint16_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint16Items>();
        }
        return poluint16_items;
    }

    if(child_yang_name == "polubyte-items")
    {
        if(polubyte_items == nullptr)
        {
            polubyte_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolubyteItems>();
        }
        return polubyte_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(ctrlradj_items != nullptr)
    {
        children["ctrlradj-items"] = ctrlradj_items;
    }

    if(ifsendtask_items != nullptr)
    {
        children["ifsendtask-items"] = ifsendtask_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    if(polcomplex_items != nullptr)
    {
        children["polcomplex-items"] = polcomplex_items;
    }

    if(poltext_items != nullptr)
    {
        children["poltext-items"] = poltext_items;
    }

    if(polip_items != nullptr)
    {
        children["polip-items"] = polip_items;
    }

    if(polmac_items != nullptr)
    {
        children["polmac-items"] = polmac_items;
    }

    if(poluint64_items != nullptr)
    {
        children["poluint64-items"] = poluint64_items;
    }

    if(poluint32_items != nullptr)
    {
        children["poluint32-items"] = poluint32_items;
    }

    if(poluint16_items != nullptr)
    {
        children["poluint16-items"] = poluint16_items;
    }

    if(polubyte_items != nullptr)
    {
        children["polubyte-items"] = polubyte_items;
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

void System::LldpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminRxSt")
    {
        adminrxst = value;
        adminrxst.value_namespace = name_space;
        adminrxst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminTxSt")
    {
        admintxst = value;
        admintxst.value_namespace = name_space;
        admintxst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDesc")
    {
        sysdesc = value;
        sysdesc.value_namespace = name_space;
        sysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDesc")
    {
        portdesc = value;
        portdesc.value_namespace = name_space;
        portdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRxSt")
    {
        operrxst = value;
        operrxst.value_namespace = name_space;
        operrxst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operTxSt")
    {
        opertxst = value;
        opertxst.value_namespace = name_space;
        opertxst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portVlan")
    {
        portvlan = value;
        portvlan.value_namespace = name_space;
        portvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiringIssues")
    {
        wiringissues = value;
        wiringissues.value_namespace = name_space;
        wiringissues.value_namespace_prefix = name_space_prefix;
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

void System::LldpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminRxSt")
    {
        adminrxst.yfilter = yfilter;
    }
    if(value_path == "adminTxSt")
    {
        admintxst.yfilter = yfilter;
    }
    if(value_path == "sysDesc")
    {
        sysdesc.yfilter = yfilter;
    }
    if(value_path == "portDesc")
    {
        portdesc.yfilter = yfilter;
    }
    if(value_path == "operRxSt")
    {
        operrxst.yfilter = yfilter;
    }
    if(value_path == "operTxSt")
    {
        opertxst.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "portVlan")
    {
        portvlan.yfilter = yfilter;
    }
    if(value_path == "wiringIssues")
    {
        wiringissues.yfilter = yfilter;
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

bool System::LldpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "ctrlradj-items" || name == "ifsendtask-items" || name == "ifstats-items" || name == "polcomplex-items" || name == "poltext-items" || name == "polip-items" || name == "polmac-items" || name == "poluint64-items" || name == "poluint32-items" || name == "poluint16-items" || name == "polubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "adminRxSt" || name == "adminTxSt" || name == "sysDesc" || name == "portDesc" || name == "operRxSt" || name == "operTxSt" || name == "mac" || name == "portVlan" || name == "wiringIssues" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"id"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    id{YType::uint16, "id"},
    stqual{YType::str, "stQual"},
    chassisidt{YType::uint8, "chassisIdT"},
    chassisidv{YType::str, "chassisIdV"},
    portidt{YType::uint8, "portIdT"},
    portidv{YType::str, "portIdV"},
    ttl{YType::uint16, "ttl"},
    sysname{YType::str, "sysName"},
    sysdesc{YType::str, "sysDesc"},
    portdesc{YType::str, "portDesc"},
    capability{YType::str, "capability"},
    encap{YType::str, "enCap"},
    mgmtip{YType::str, "mgmtIp"},
    mgmtportmac{YType::str, "mgmtPortMac"},
    mgmtid{YType::uint32, "mgmtId"},
    portvlan{YType::uint16, "portVlan"},
    name{YType::str, "name"}
        ,
    adjstats_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
    , ip_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems>())
    , mac_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems>())
    , uint64_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items>())
    , uint32_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items>())
    , uint16_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items>())
    , ubyte_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems>())
    , text_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems>())
    , complex_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems>())
{
    adjstats_items->parent = this;
    ip_items->parent = this;
    mac_items->parent = this;
    uint64_items->parent = this;
    uint32_items->parent = this;
    uint16_items->parent = this;
    ubyte_items->parent = this;
    text_items->parent = this;
    complex_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| stqual.is_set
	|| chassisidt.is_set
	|| chassisidv.is_set
	|| portidt.is_set
	|| portidv.is_set
	|| ttl.is_set
	|| sysname.is_set
	|| sysdesc.is_set
	|| portdesc.is_set
	|| capability.is_set
	|| encap.is_set
	|| mgmtip.is_set
	|| mgmtportmac.is_set
	|| mgmtid.is_set
	|| portvlan.is_set
	|| name.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (uint64_items !=  nullptr && uint64_items->has_data())
	|| (uint32_items !=  nullptr && uint32_items->has_data())
	|| (uint16_items !=  nullptr && uint16_items->has_data())
	|| (ubyte_items !=  nullptr && ubyte_items->has_data())
	|| (text_items !=  nullptr && text_items->has_data())
	|| (complex_items !=  nullptr && complex_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(stqual.yfilter)
	|| ydk::is_set(chassisidt.yfilter)
	|| ydk::is_set(chassisidv.yfilter)
	|| ydk::is_set(portidt.yfilter)
	|| ydk::is_set(portidv.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(sysdesc.yfilter)
	|| ydk::is_set(portdesc.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mgmtip.yfilter)
	|| ydk::is_set(mgmtportmac.yfilter)
	|| ydk::is_set(mgmtid.yfilter)
	|| ydk::is_set(portvlan.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (uint64_items !=  nullptr && uint64_items->has_operation())
	|| (uint32_items !=  nullptr && uint32_items->has_operation())
	|| (uint16_items !=  nullptr && uint16_items->has_operation())
	|| (ubyte_items !=  nullptr && ubyte_items->has_operation())
	|| (text_items !=  nullptr && text_items->has_operation())
	|| (complex_items !=  nullptr && complex_items->has_operation());
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (stqual.is_set || is_set(stqual.yfilter)) leaf_name_data.push_back(stqual.get_name_leafdata());
    if (chassisidt.is_set || is_set(chassisidt.yfilter)) leaf_name_data.push_back(chassisidt.get_name_leafdata());
    if (chassisidv.is_set || is_set(chassisidv.yfilter)) leaf_name_data.push_back(chassisidv.get_name_leafdata());
    if (portidt.is_set || is_set(portidt.yfilter)) leaf_name_data.push_back(portidt.get_name_leafdata());
    if (portidv.is_set || is_set(portidv.yfilter)) leaf_name_data.push_back(portidv.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (sysdesc.is_set || is_set(sysdesc.yfilter)) leaf_name_data.push_back(sysdesc.get_name_leafdata());
    if (portdesc.is_set || is_set(portdesc.yfilter)) leaf_name_data.push_back(portdesc.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mgmtip.is_set || is_set(mgmtip.yfilter)) leaf_name_data.push_back(mgmtip.get_name_leafdata());
    if (mgmtportmac.is_set || is_set(mgmtportmac.yfilter)) leaf_name_data.push_back(mgmtportmac.get_name_leafdata());
    if (mgmtid.is_set || is_set(mgmtid.yfilter)) leaf_name_data.push_back(mgmtid.get_name_leafdata());
    if (portvlan.is_set || is_set(portvlan.yfilter)) leaf_name_data.push_back(portvlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems>();
        }
        return complex_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    if(uint64_items != nullptr)
    {
        children["uint64-items"] = uint64_items;
    }

    if(uint32_items != nullptr)
    {
        children["uint32-items"] = uint32_items;
    }

    if(uint16_items != nullptr)
    {
        children["uint16-items"] = uint16_items;
    }

    if(ubyte_items != nullptr)
    {
        children["ubyte-items"] = ubyte_items;
    }

    if(text_items != nullptr)
    {
        children["text-items"] = text_items;
    }

    if(complex_items != nullptr)
    {
        children["complex-items"] = complex_items;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stQual")
    {
        stqual = value;
        stqual.value_namespace = name_space;
        stqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassisIdT")
    {
        chassisidt = value;
        chassisidt.value_namespace = name_space;
        chassisidt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassisIdV")
    {
        chassisidv = value;
        chassisidv.value_namespace = name_space;
        chassisidv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portIdT")
    {
        portidt = value;
        portidt.value_namespace = name_space;
        portidt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portIdV")
    {
        portidv = value;
        portidv.value_namespace = name_space;
        portidv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysName")
    {
        sysname = value;
        sysname.value_namespace = name_space;
        sysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDesc")
    {
        sysdesc = value;
        sysdesc.value_namespace = name_space;
        sysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDesc")
    {
        portdesc = value;
        portdesc.value_namespace = name_space;
        portdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enCap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtIp")
    {
        mgmtip = value;
        mgmtip.value_namespace = name_space;
        mgmtip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtPortMac")
    {
        mgmtportmac = value;
        mgmtportmac.value_namespace = name_space;
        mgmtportmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtId")
    {
        mgmtid = value;
        mgmtid.value_namespace = name_space;
        mgmtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portVlan")
    {
        portvlan = value;
        portvlan.value_namespace = name_space;
        portvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "stQual")
    {
        stqual.yfilter = yfilter;
    }
    if(value_path == "chassisIdT")
    {
        chassisidt.yfilter = yfilter;
    }
    if(value_path == "chassisIdV")
    {
        chassisidv.yfilter = yfilter;
    }
    if(value_path == "portIdT")
    {
        portidt.yfilter = yfilter;
    }
    if(value_path == "portIdV")
    {
        portidv.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "sysName")
    {
        sysname.yfilter = yfilter;
    }
    if(value_path == "sysDesc")
    {
        sysdesc.yfilter = yfilter;
    }
    if(value_path == "portDesc")
    {
        portdesc.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "enCap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mgmtIp")
    {
        mgmtip.yfilter = yfilter;
    }
    if(value_path == "mgmtPortMac")
    {
        mgmtportmac.yfilter = yfilter;
    }
    if(value_path == "mgmtId")
    {
        mgmtid.yfilter = yfilter;
    }
    if(value_path == "portVlan")
    {
        portvlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "complex-items" || name == "id" || name == "stQual" || name == "chassisIdT" || name == "chassisIdV" || name == "portIdT" || name == "portIdV" || name == "ttl" || name == "sysName" || name == "sysDesc" || name == "portDesc" || name == "capability" || name == "enCap" || name == "mgmtIp" || name == "mgmtPortMac" || name == "mgmtId" || name == "portVlan" || name == "name")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    adjexpts{YType::str, "adjExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return adjexpts.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjexpts.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjexpts.is_set || is_set(adjexpts.yfilter)) leaf_name_data.push_back(adjexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjExpTs")
    {
        adjexpts = value;
        adjexpts.value_namespace = name_space;
        adjexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjExpTs")
    {
        adjexpts.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjExpTs")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::~IpItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::~IpList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::~MacItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::~MacList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::~Uint64Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint64_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::~Uint32Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint32_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::~Uint16Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint16_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::~UbyteItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ubyte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::~UByteList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::~TextItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : text_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::~TextList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::~ComplexItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList>();
        c->parent = this;
        complex_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : complex_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;
    uint64_items->parent = this;
    uint32_items->parent = this;
    uint16_items->parent = this;
    ubyte_items->parent = this;
    text_items->parent = this;

    yang_name = "Complex-list"; yang_parent_name = "complex-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| id.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (uint64_items !=  nullptr && uint64_items->has_data())
	|| (uint32_items !=  nullptr && uint32_items->has_data())
	|| (uint16_items !=  nullptr && uint16_items->has_data())
	|| (ubyte_items !=  nullptr && ubyte_items->has_data())
	|| (text_items !=  nullptr && text_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (uint64_items !=  nullptr && uint64_items->has_operation())
	|| (uint32_items !=  nullptr && uint32_items->has_operation())
	|| (uint16_items !=  nullptr && uint16_items->has_operation())
	|| (ubyte_items !=  nullptr && ubyte_items->has_operation())
	|| (text_items !=  nullptr && text_items->has_operation());
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::get_children() const
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

    if(uint64_items != nullptr)
    {
        children["uint64-items"] = uint64_items;
    }

    if(uint32_items != nullptr)
    {
        children["uint32-items"] = uint32_items;
    }

    if(uint16_items != nullptr)
    {
        children["uint16-items"] = uint16_items;
    }

    if(ubyte_items != nullptr)
    {
        children["ubyte-items"] = ubyte_items;
    }

    if(text_items != nullptr)
    {
        children["text-items"] = text_items;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint64_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint32_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint16_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ubyte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : text_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::CtrlradjItems()
    :
    id{YType::uint16, "id"},
    ip{YType::str, "ip"},
    infravlan{YType::uint16, "infraVlan"},
    portrole{YType::enumeration, "portRole"},
    mac{YType::str, "mac"}
        ,
    rsctrlradjeptostadjep_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems>())
{
    rsctrlradjeptostadjep_items->parent = this;

    yang_name = "ctrlradj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::~CtrlradjItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ip.is_set
	|| infravlan.is_set
	|| portrole.is_set
	|| mac.is_set
	|| (rsctrlradjeptostadjep_items !=  nullptr && rsctrlradjeptostadjep_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(infravlan.yfilter)
	|| ydk::is_set(portrole.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (rsctrlradjeptostadjep_items !=  nullptr && rsctrlradjeptostadjep_items->has_operation());
}

std::string System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrlradj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (infravlan.is_set || is_set(infravlan.yfilter)) leaf_name_data.push_back(infravlan.get_name_leafdata());
    if (portrole.is_set || is_set(portrole.yfilter)) leaf_name_data.push_back(portrole.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsctrlrAdjEpToStAdjEp-items")
    {
        if(rsctrlradjeptostadjep_items == nullptr)
        {
            rsctrlradjeptostadjep_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems>();
        }
        return rsctrlradjeptostadjep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsctrlradjeptostadjep_items != nullptr)
    {
        children["rsctrlrAdjEpToStAdjEp-items"] = rsctrlradjeptostadjep_items;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infraVlan")
    {
        infravlan = value;
        infravlan.value_namespace = name_space;
        infravlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portRole")
    {
        portrole = value;
        portrole.value_namespace = name_space;
        portrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "infraVlan")
    {
        infravlan.yfilter = yfilter;
    }
    if(value_path == "portRole")
    {
        portrole.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsctrlrAdjEpToStAdjEp-items" || name == "id" || name == "ip" || name == "infraVlan" || name == "portRole" || name == "mac")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::RsctrlrAdjEpToStAdjEpItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsctrlrAdjEpToStAdjEp-items"; yang_parent_name = "ctrlradj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::~RsctrlrAdjEpToStAdjEpItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsctrlrAdjEpToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfsendtaskItems()
    :
    ifsendtask_list(this, {"shard"})
{

    yang_name = "ifsendtask-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::~IfsendtaskItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifsendtask_list.len(); index++)
    {
        if(ifsendtask_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::has_operation() const
{
    for (std::size_t index=0; index<ifsendtask_list.len(); index++)
    {
        if(ifsendtask_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifsendtask-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfSendTask-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList>();
        c->parent = this;
        ifsendtask_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifsendtask_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfSendTask-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::IfSendTaskList()
    :
    shard{YType::uint8, "shard"}
{

    yang_name = "IfSendTask-list"; yang_parent_name = "ifsendtask-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::~IfSendTaskList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::has_data() const
{
    if (is_presence_container) return true;
    return shard.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shard.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfSendTask-list";
    ADD_KEY_TOKEN(shard, "shard");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shard.is_set || is_set(shard.yfilter)) leaf_name_data.push_back(shard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shard")
    {
        shard = value;
        shard.value_namespace = name_space;
        shard.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shard")
    {
        shard.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shard")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    pktsent{YType::uint64, "pktSent"},
    pktrcvd{YType::uint64, "pktRcvd"},
    entriesaged{YType::uint64, "entriesAged"},
    errpktrcvd{YType::uint64, "errPktRcvd"},
    pktdiscarded{YType::uint64, "pktDiscarded"},
    unrecogtlv{YType::uint64, "unrecogTLV"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pktsent.is_set
	|| pktrcvd.is_set
	|| entriesaged.is_set
	|| errpktrcvd.is_set
	|| pktdiscarded.is_set
	|| unrecogtlv.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(entriesaged.yfilter)
	|| ydk::is_set(errpktrcvd.yfilter)
	|| ydk::is_set(pktdiscarded.yfilter)
	|| ydk::is_set(unrecogtlv.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktsent.is_set || is_set(pktsent.yfilter)) leaf_name_data.push_back(pktsent.get_name_leafdata());
    if (pktrcvd.is_set || is_set(pktrcvd.yfilter)) leaf_name_data.push_back(pktrcvd.get_name_leafdata());
    if (entriesaged.is_set || is_set(entriesaged.yfilter)) leaf_name_data.push_back(entriesaged.get_name_leafdata());
    if (errpktrcvd.is_set || is_set(errpktrcvd.yfilter)) leaf_name_data.push_back(errpktrcvd.get_name_leafdata());
    if (pktdiscarded.is_set || is_set(pktdiscarded.yfilter)) leaf_name_data.push_back(pktdiscarded.get_name_leafdata());
    if (unrecogtlv.is_set || is_set(unrecogtlv.yfilter)) leaf_name_data.push_back(unrecogtlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktSent")
    {
        pktsent = value;
        pktsent.value_namespace = name_space;
        pktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd = value;
        pktrcvd.value_namespace = name_space;
        pktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entriesAged")
    {
        entriesaged = value;
        entriesaged.value_namespace = name_space;
        entriesaged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd = value;
        errpktrcvd.value_namespace = name_space;
        errpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktDiscarded")
    {
        pktdiscarded = value;
        pktdiscarded.value_namespace = name_space;
        pktdiscarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecogTLV")
    {
        unrecogtlv = value;
        unrecogtlv.value_namespace = name_space;
        unrecogtlv.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktSent")
    {
        pktsent.yfilter = yfilter;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd.yfilter = yfilter;
    }
    if(value_path == "entriesAged")
    {
        entriesaged.yfilter = yfilter;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd.yfilter = yfilter;
    }
    if(value_path == "pktDiscarded")
    {
        pktdiscarded.yfilter = yfilter;
    }
    if(value_path == "unrecogTLV")
    {
        unrecogtlv.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktSent" || name == "pktRcvd" || name == "entriesAged" || name == "errPktRcvd" || name == "pktDiscarded" || name == "unrecogTLV")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::PolcomplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "polcomplex-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::~PolcomplexItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polcomplex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList>();
        c->parent = this;
        complex_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : complex_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    polip_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems>())
    , polmac_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems>())
    , poluint64_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items>())
    , poluint32_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items>())
    , poluint16_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items>())
    , polubyte_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems>())
    , poltext_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems>())
{
    polip_items->parent = this;
    polmac_items->parent = this;
    poluint64_items->parent = this;
    poluint32_items->parent = this;
    poluint16_items->parent = this;
    polubyte_items->parent = this;
    poltext_items->parent = this;

    yang_name = "Complex-list"; yang_parent_name = "polcomplex-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::~ComplexList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| id.is_set
	|| (polip_items !=  nullptr && polip_items->has_data())
	|| (polmac_items !=  nullptr && polmac_items->has_data())
	|| (poluint64_items !=  nullptr && poluint64_items->has_data())
	|| (poluint32_items !=  nullptr && poluint32_items->has_data())
	|| (poluint16_items !=  nullptr && poluint16_items->has_data())
	|| (polubyte_items !=  nullptr && polubyte_items->has_data())
	|| (poltext_items !=  nullptr && poltext_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (polip_items !=  nullptr && polip_items->has_operation())
	|| (polmac_items !=  nullptr && polmac_items->has_operation())
	|| (poluint64_items !=  nullptr && poluint64_items->has_operation())
	|| (poluint32_items !=  nullptr && poluint32_items->has_operation())
	|| (poluint16_items !=  nullptr && poluint16_items->has_operation())
	|| (polubyte_items !=  nullptr && polubyte_items->has_operation())
	|| (poltext_items !=  nullptr && poltext_items->has_operation());
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "polip-items")
    {
        if(polip_items == nullptr)
        {
            polip_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems>();
        }
        return polip_items;
    }

    if(child_yang_name == "polmac-items")
    {
        if(polmac_items == nullptr)
        {
            polmac_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems>();
        }
        return polmac_items;
    }

    if(child_yang_name == "poluint64-items")
    {
        if(poluint64_items == nullptr)
        {
            poluint64_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items>();
        }
        return poluint64_items;
    }

    if(child_yang_name == "poluint32-items")
    {
        if(poluint32_items == nullptr)
        {
            poluint32_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items>();
        }
        return poluint32_items;
    }

    if(child_yang_name == "poluint16-items")
    {
        if(poluint16_items == nullptr)
        {
            poluint16_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items>();
        }
        return poluint16_items;
    }

    if(child_yang_name == "polubyte-items")
    {
        if(polubyte_items == nullptr)
        {
            polubyte_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems>();
        }
        return polubyte_items;
    }

    if(child_yang_name == "poltext-items")
    {
        if(poltext_items == nullptr)
        {
            poltext_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems>();
        }
        return poltext_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(polip_items != nullptr)
    {
        children["polip-items"] = polip_items;
    }

    if(polmac_items != nullptr)
    {
        children["polmac-items"] = polmac_items;
    }

    if(poluint64_items != nullptr)
    {
        children["poluint64-items"] = poluint64_items;
    }

    if(poluint32_items != nullptr)
    {
        children["poluint32-items"] = poluint32_items;
    }

    if(poluint16_items != nullptr)
    {
        children["poluint16-items"] = poluint16_items;
    }

    if(polubyte_items != nullptr)
    {
        children["polubyte-items"] = polubyte_items;
    }

    if(poltext_items != nullptr)
    {
        children["poltext-items"] = poltext_items;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "polip-items" || name == "polmac-items" || name == "poluint64-items" || name == "poluint32-items" || name == "poluint16-items" || name == "polubyte-items" || name == "poltext-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::PolipItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "polip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::~PolipItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "polip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::~IpList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::PolmacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "polmac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::~PolmacItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "polmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::~MacList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::Poluint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "poluint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::~Poluint64Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint64_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "poluint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::~UInt64List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::Poluint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "poluint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::~Poluint32Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint32_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "poluint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::~UInt32List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::Poluint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "poluint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::~Poluint16Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint16_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "poluint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::~UInt16List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::PolubyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "polubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::~PolubyteItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ubyte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "polubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::~UByteList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::PoltextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "poltext-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::~PoltextItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poltext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : text_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "poltext-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::~TextList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PoltextItems::PoltextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "poltext-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PoltextItems::~PoltextItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PoltextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PoltextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PoltextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poltext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PoltextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PoltextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PoltextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : text_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PoltextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PoltextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PoltextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "poltext-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::~TextList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolipItems::PolipItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "polip-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolipItems::~PolipItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolipItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "polip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::~IpList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolmacItems::PolmacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "polmac-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolmacItems::~PolmacItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolmacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "polmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::~MacList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::Poluint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "poluint64-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::~Poluint64Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint64_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "poluint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::~UInt64List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::Poluint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "poluint32-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::~Poluint32Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint32_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "poluint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::~UInt32List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::Poluint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "poluint16-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::~Poluint16Items()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint16_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "poluint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::~UInt16List()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::PolubyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "polubyte-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::~PolubyteItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ubyte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "polubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::~UByteList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LldpItems::InstItems::InstsendtaskItems::InstsendtaskItems()
    :
    instsendtask_list(this, {"shard"})
{

    yang_name = "instsendtask-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::InstsendtaskItems::~InstsendtaskItems()
{
}

bool System::LldpItems::InstItems::InstsendtaskItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instsendtask_list.len(); index++)
    {
        if(instsendtask_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::InstsendtaskItems::has_operation() const
{
    for (std::size_t index=0; index<instsendtask_list.len(); index++)
    {
        if(instsendtask_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::InstsendtaskItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::InstsendtaskItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instsendtask-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::InstsendtaskItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::InstsendtaskItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstSendTask-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList>();
        c->parent = this;
        instsendtask_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::InstsendtaskItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instsendtask_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::InstsendtaskItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::InstsendtaskItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::InstsendtaskItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstSendTask-list")
        return true;
    return false;
}

System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::InstSendTaskList()
    :
    shard{YType::uint8, "shard"}
{

    yang_name = "InstSendTask-list"; yang_parent_name = "instsendtask-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::~InstSendTaskList()
{
}

bool System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::has_data() const
{
    if (is_presence_container) return true;
    return shard.is_set;
}

bool System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shard.yfilter);
}

std::string System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/instsendtask-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstSendTask-list";
    ADD_KEY_TOKEN(shard, "shard");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shard.is_set || is_set(shard.yfilter)) leaf_name_data.push_back(shard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shard")
    {
        shard = value;
        shard.value_namespace = name_space;
        shard.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shard")
    {
        shard.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shard")
        return true;
    return false;
}

System::LldpItems::InstItems::InststatsItems::InststatsItems()
    :
    pktsent{YType::uint64, "pktSent"},
    pktrcvd{YType::uint64, "pktRcvd"},
    entriesaged{YType::uint64, "entriesAged"},
    errpktrcvd{YType::uint64, "errPktRcvd"},
    pktdiscarded{YType::uint64, "pktDiscarded"},
    unrecogtlv{YType::uint64, "unrecogTLV"},
    numadjadded{YType::uint32, "numAdjAdded"},
    numadjremoved{YType::uint32, "numAdjRemoved"},
    lastadjchgts{YType::str, "lastAdjChgTs"}
{

    yang_name = "inststats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::InststatsItems::~InststatsItems()
{
}

bool System::LldpItems::InstItems::InststatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pktsent.is_set
	|| pktrcvd.is_set
	|| entriesaged.is_set
	|| errpktrcvd.is_set
	|| pktdiscarded.is_set
	|| unrecogtlv.is_set
	|| numadjadded.is_set
	|| numadjremoved.is_set
	|| lastadjchgts.is_set;
}

bool System::LldpItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(entriesaged.yfilter)
	|| ydk::is_set(errpktrcvd.yfilter)
	|| ydk::is_set(pktdiscarded.yfilter)
	|| ydk::is_set(unrecogtlv.yfilter)
	|| ydk::is_set(numadjadded.yfilter)
	|| ydk::is_set(numadjremoved.yfilter)
	|| ydk::is_set(lastadjchgts.yfilter);
}

std::string System::LldpItems::InstItems::InststatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::InststatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inststats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::InststatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktsent.is_set || is_set(pktsent.yfilter)) leaf_name_data.push_back(pktsent.get_name_leafdata());
    if (pktrcvd.is_set || is_set(pktrcvd.yfilter)) leaf_name_data.push_back(pktrcvd.get_name_leafdata());
    if (entriesaged.is_set || is_set(entriesaged.yfilter)) leaf_name_data.push_back(entriesaged.get_name_leafdata());
    if (errpktrcvd.is_set || is_set(errpktrcvd.yfilter)) leaf_name_data.push_back(errpktrcvd.get_name_leafdata());
    if (pktdiscarded.is_set || is_set(pktdiscarded.yfilter)) leaf_name_data.push_back(pktdiscarded.get_name_leafdata());
    if (unrecogtlv.is_set || is_set(unrecogtlv.yfilter)) leaf_name_data.push_back(unrecogtlv.get_name_leafdata());
    if (numadjadded.is_set || is_set(numadjadded.yfilter)) leaf_name_data.push_back(numadjadded.get_name_leafdata());
    if (numadjremoved.is_set || is_set(numadjremoved.yfilter)) leaf_name_data.push_back(numadjremoved.get_name_leafdata());
    if (lastadjchgts.is_set || is_set(lastadjchgts.yfilter)) leaf_name_data.push_back(lastadjchgts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::InststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktSent")
    {
        pktsent = value;
        pktsent.value_namespace = name_space;
        pktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd = value;
        pktrcvd.value_namespace = name_space;
        pktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entriesAged")
    {
        entriesaged = value;
        entriesaged.value_namespace = name_space;
        entriesaged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd = value;
        errpktrcvd.value_namespace = name_space;
        errpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktDiscarded")
    {
        pktdiscarded = value;
        pktdiscarded.value_namespace = name_space;
        pktdiscarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecogTLV")
    {
        unrecogtlv = value;
        unrecogtlv.value_namespace = name_space;
        unrecogtlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAdjAdded")
    {
        numadjadded = value;
        numadjadded.value_namespace = name_space;
        numadjadded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAdjRemoved")
    {
        numadjremoved = value;
        numadjremoved.value_namespace = name_space;
        numadjremoved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastAdjChgTs")
    {
        lastadjchgts = value;
        lastadjchgts.value_namespace = name_space;
        lastadjchgts.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::InststatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktSent")
    {
        pktsent.yfilter = yfilter;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd.yfilter = yfilter;
    }
    if(value_path == "entriesAged")
    {
        entriesaged.yfilter = yfilter;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd.yfilter = yfilter;
    }
    if(value_path == "pktDiscarded")
    {
        pktdiscarded.yfilter = yfilter;
    }
    if(value_path == "unrecogTLV")
    {
        unrecogtlv.yfilter = yfilter;
    }
    if(value_path == "numAdjAdded")
    {
        numadjadded.yfilter = yfilter;
    }
    if(value_path == "numAdjRemoved")
    {
        numadjremoved.yfilter = yfilter;
    }
    if(value_path == "lastAdjChgTs")
    {
        lastadjchgts.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::InststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktSent" || name == "pktRcvd" || name == "entriesAged" || name == "errPktRcvd" || name == "pktDiscarded" || name == "unrecogTLV" || name == "numAdjAdded" || name == "numAdjRemoved" || name == "lastAdjChgTs")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::PolcomplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "polcomplex-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolcomplexItems::~PolcomplexItems()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolcomplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polcomplex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList>();
        c->parent = this;
        complex_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : complex_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    polip_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems>())
    , polmac_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems>())
    , poluint64_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items>())
    , poluint32_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items>())
    , poluint16_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items>())
    , polubyte_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems>())
    , poltext_items(std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems>())
{
    polip_items->parent = this;
    polmac_items->parent = this;
    poluint64_items->parent = this;
    poluint32_items->parent = this;
    poluint16_items->parent = this;
    polubyte_items->parent = this;
    poltext_items->parent = this;

    yang_name = "Complex-list"; yang_parent_name = "polcomplex-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::~ComplexList()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| id.is_set
	|| (polip_items !=  nullptr && polip_items->has_data())
	|| (polmac_items !=  nullptr && polmac_items->has_data())
	|| (poluint64_items !=  nullptr && poluint64_items->has_data())
	|| (poluint32_items !=  nullptr && poluint32_items->has_data())
	|| (poluint16_items !=  nullptr && poluint16_items->has_data())
	|| (polubyte_items !=  nullptr && polubyte_items->has_data())
	|| (poltext_items !=  nullptr && poltext_items->has_data());
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (polip_items !=  nullptr && polip_items->has_operation())
	|| (polmac_items !=  nullptr && polmac_items->has_operation())
	|| (poluint64_items !=  nullptr && poluint64_items->has_operation())
	|| (poluint32_items !=  nullptr && poluint32_items->has_operation())
	|| (poluint16_items !=  nullptr && poluint16_items->has_operation())
	|| (polubyte_items !=  nullptr && polubyte_items->has_operation())
	|| (poltext_items !=  nullptr && poltext_items->has_operation());
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/polcomplex-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "polip-items")
    {
        if(polip_items == nullptr)
        {
            polip_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems>();
        }
        return polip_items;
    }

    if(child_yang_name == "polmac-items")
    {
        if(polmac_items == nullptr)
        {
            polmac_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems>();
        }
        return polmac_items;
    }

    if(child_yang_name == "poluint64-items")
    {
        if(poluint64_items == nullptr)
        {
            poluint64_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items>();
        }
        return poluint64_items;
    }

    if(child_yang_name == "poluint32-items")
    {
        if(poluint32_items == nullptr)
        {
            poluint32_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items>();
        }
        return poluint32_items;
    }

    if(child_yang_name == "poluint16-items")
    {
        if(poluint16_items == nullptr)
        {
            poluint16_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items>();
        }
        return poluint16_items;
    }

    if(child_yang_name == "polubyte-items")
    {
        if(polubyte_items == nullptr)
        {
            polubyte_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems>();
        }
        return polubyte_items;
    }

    if(child_yang_name == "poltext-items")
    {
        if(poltext_items == nullptr)
        {
            poltext_items = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems>();
        }
        return poltext_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(polip_items != nullptr)
    {
        children["polip-items"] = polip_items;
    }

    if(polmac_items != nullptr)
    {
        children["polmac-items"] = polmac_items;
    }

    if(poluint64_items != nullptr)
    {
        children["poluint64-items"] = poluint64_items;
    }

    if(poluint32_items != nullptr)
    {
        children["poluint32-items"] = poluint32_items;
    }

    if(poluint16_items != nullptr)
    {
        children["poluint16-items"] = poluint16_items;
    }

    if(polubyte_items != nullptr)
    {
        children["polubyte-items"] = polubyte_items;
    }

    if(poltext_items != nullptr)
    {
        children["poltext-items"] = poltext_items;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "polip-items" || name == "polmac-items" || name == "poluint64-items" || name == "poluint32-items" || name == "poluint16-items" || name == "polubyte-items" || name == "poltext-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::PolipItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "polip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::~PolipItems()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "polip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::~IpList()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::PolmacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "polmac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::~PolmacItems()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "polmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::~MacList()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::Poluint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "poluint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::~Poluint64Items()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint64_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "poluint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::~UInt64List()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::Poluint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "poluint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::~Poluint32Items()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint32_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "poluint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::~UInt32List()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::Poluint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "poluint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::~Poluint16Items()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint16_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "poluint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::~UInt16List()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::PolubyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "polubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::~PolubyteItems()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ubyte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "polubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::~UByteList()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::PoltextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "poltext-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::~PoltextItems()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poltext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : text_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "poltext-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::~TextList()
{
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PoltextItems::PoltextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "poltext-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PoltextItems::~PoltextItems()
{
}

bool System::LldpItems::InstItems::PoltextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PoltextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PoltextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PoltextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poltext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PoltextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PoltextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PoltextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PoltextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : text_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PoltextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PoltextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PoltextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PoltextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "poltext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PoltextItems::TextList::~TextList()
{
}

bool System::LldpItems::InstItems::PoltextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PoltextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PoltextItems::TextList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/poltext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PoltextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PoltextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PoltextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PoltextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PoltextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PoltextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PoltextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolipItems::PolipItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "polip-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolipItems::~PolipItems()
{
}

bool System::LldpItems::InstItems::PolipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolipItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolipItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolipItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "polip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolipItems::IpList::~IpList()
{
}

bool System::LldpItems::InstItems::PolipItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolipItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolipItems::IpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/polip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolipItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolipItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolipItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolipItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolipItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolipItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolipItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolmacItems::PolmacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "polmac-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolmacItems::~PolmacItems()
{
}

bool System::LldpItems::InstItems::PolmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolmacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolmacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolmacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolmacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "polmac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolmacItems::MacList::~MacList()
{
}

bool System::LldpItems::InstItems::PolmacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolmacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolmacItems::MacList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/polmac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolmacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolmacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolmacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolmacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolmacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolmacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolmacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::Poluint64Items::Poluint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "poluint64-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::Poluint64Items::~Poluint64Items()
{
}

bool System::LldpItems::InstItems::Poluint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::Poluint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::Poluint64Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::Poluint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::Poluint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::Poluint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::Poluint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::Poluint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint64_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::Poluint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::Poluint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::Poluint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::LldpItems::InstItems::Poluint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "poluint64-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::Poluint64Items::UInt64List::~UInt64List()
{
}

bool System::LldpItems::InstItems::Poluint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::Poluint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::Poluint64Items::UInt64List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/poluint64-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::Poluint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::Poluint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::Poluint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::Poluint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::Poluint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::Poluint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::Poluint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::Poluint32Items::Poluint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "poluint32-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::Poluint32Items::~Poluint32Items()
{
}

bool System::LldpItems::InstItems::Poluint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::Poluint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::Poluint32Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::Poluint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::Poluint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::Poluint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::Poluint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::Poluint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint32_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::Poluint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::Poluint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::Poluint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::LldpItems::InstItems::Poluint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "poluint32-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::Poluint32Items::UInt32List::~UInt32List()
{
}

bool System::LldpItems::InstItems::Poluint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::Poluint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::Poluint32Items::UInt32List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/poluint32-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::Poluint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::Poluint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::Poluint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::Poluint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::Poluint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::Poluint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::Poluint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::Poluint16Items::Poluint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "poluint16-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::Poluint16Items::~Poluint16Items()
{
}

bool System::LldpItems::InstItems::Poluint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::Poluint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::Poluint16Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::Poluint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poluint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::Poluint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::Poluint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::Poluint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::Poluint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : uint16_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::Poluint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::Poluint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::Poluint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::LldpItems::InstItems::Poluint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "poluint16-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::Poluint16Items::UInt16List::~UInt16List()
{
}

bool System::LldpItems::InstItems::Poluint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::Poluint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::Poluint16Items::UInt16List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/poluint16-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::Poluint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::Poluint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::Poluint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::Poluint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::Poluint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::Poluint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::Poluint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::PolubyteItems::PolubyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "polubyte-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolubyteItems::~PolubyteItems()
{
}

bool System::LldpItems::InstItems::PolubyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LldpItems::InstItems::PolubyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LldpItems::InstItems::PolubyteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolubyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "polubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolubyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolubyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::LldpItems::InstItems::PolubyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolubyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ubyte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LldpItems::InstItems::PolubyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::PolubyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::PolubyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::LldpItems::InstItems::PolubyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "polubyte-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::PolubyteItems::UByteList::~UByteList()
{
}

bool System::LldpItems::InstItems::PolubyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::LldpItems::InstItems::PolubyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::LldpItems::InstItems::PolubyteItems::UByteList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/polubyte-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::PolubyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::PolubyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::PolubyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::PolubyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::PolubyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::PolubyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::PolubyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::LldpItems::InstItems::RslldpInstPolConsItems::RslldpInstPolConsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rslldpInstPolCons-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::RslldpInstPolConsItems::~RslldpInstPolConsItems()
{
}

bool System::LldpItems::InstItems::RslldpInstPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LldpItems::InstItems::RslldpInstPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LldpItems::InstItems::RslldpInstPolConsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lldp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LldpItems::InstItems::RslldpInstPolConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslldpInstPolCons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LldpItems::InstItems::RslldpInstPolConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LldpItems::InstItems::RslldpInstPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LldpItems::InstItems::RslldpInstPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LldpItems::InstItems::RslldpInstPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LldpItems::InstItems::RslldpInstPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LldpItems::InstItems::RslldpInstPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::McpItems::McpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::McpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mcp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McpItems::~McpItems()
{
}

bool System::McpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::McpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::McpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::McpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::McpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::McpItems::InstItems::InstItems()
    :
    txfreq{YType::uint16, "txFreq"},
    loopdetectmult{YType::uint8, "loopDetectMult"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::McpItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mcp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McpItems::InstItems::~InstItems()
{
}

bool System::McpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return txfreq.is_set
	|| loopdetectmult.is_set
	|| key.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::McpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txfreq.yfilter)
	|| ydk::is_set(loopdetectmult.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::McpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txfreq.is_set || is_set(txfreq.yfilter)) leaf_name_data.push_back(txfreq.get_name_leafdata());
    if (loopdetectmult.is_set || is_set(loopdetectmult.yfilter)) leaf_name_data.push_back(loopdetectmult.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::McpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::McpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txFreq")
    {
        txfreq = value;
        txfreq.value_namespace = name_space;
        txfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopDetectMult")
    {
        loopdetectmult = value;
        loopdetectmult.value_namespace = name_space;
        loopdetectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
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

void System::McpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txFreq")
    {
        txfreq.yfilter = yfilter;
    }
    if(value_path == "loopDetectMult")
    {
        loopdetectmult.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
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

bool System::McpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "txFreq" || name == "loopDetectMult" || name == "key" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::McpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McpItems::InstItems::IfItems::~IfItems()
{
}

bool System::McpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::McpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::McpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::McpItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::InstItems::IfItems::get_children() const
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

void System::McpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::McpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::McpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::McpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    lastloopdetts{YType::str, "lastLoopDetTs"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::McpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| lastloopdetts.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::McpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(lastloopdetts.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::McpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (lastloopdetts.is_set || is_set(lastloopdetts.yfilter)) leaf_name_data.push_back(lastloopdetts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void System::McpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lastLoopDetTs")
    {
        lastloopdetts = value;
        lastloopdetts.value_namespace = name_space;
        lastloopdetts.value_namespace_prefix = name_space_prefix;
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

void System::McpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "lastLoopDetTs")
    {
        lastloopdetts.yfilter = yfilter;
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

bool System::McpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "operSt" || name == "operStQual" || name == "lastLoopDetTs" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VpcItems::VpcItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::VpcItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "vpc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::~VpcItems()
{
}

bool System::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VpcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VpcItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::VpcItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    orphan_items(std::make_shared<System::VpcItems::InstItems::OrphanItems>())
    , dom_items(std::make_shared<System::VpcItems::InstItems::DomItems>())
{
    orphan_items->parent = this;
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::~InstItems()
{
}

bool System::VpcItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (orphan_items !=  nullptr && orphan_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::VpcItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (orphan_items !=  nullptr && orphan_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::VpcItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orphan-items")
    {
        if(orphan_items == nullptr)
        {
            orphan_items = std::make_shared<System::VpcItems::InstItems::OrphanItems>();
        }
        return orphan_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::VpcItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(orphan_items != nullptr)
    {
        children["orphan-items"] = orphan_items;
    }

    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::VpcItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VpcItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::VpcItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orphan-items" || name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::VpcItems::InstItems::OrphanItems::OrphanItems()
    :
    orphanport_list(this, {"id"})
{

    yang_name = "orphan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::OrphanItems::~OrphanItems()
{
}

bool System::VpcItems::InstItems::OrphanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<orphanport_list.len(); index++)
    {
        if(orphanport_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::OrphanItems::has_operation() const
{
    for (std::size_t index=0; index<orphanport_list.len(); index++)
    {
        if(orphanport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::OrphanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::OrphanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orphan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::OrphanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::OrphanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OrphanPort-list")
    {
        auto c = std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList>();
        c->parent = this;
        orphanport_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::OrphanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : orphanport_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VpcItems::InstItems::OrphanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::OrphanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::OrphanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OrphanPort-list")
        return true;
    return false;
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::OrphanPortList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "OrphanPort-list"; yang_parent_name = "orphan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::~OrphanPortList()
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/orphan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OrphanPort-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "OrphanPort-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "OrphanPort-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::get_children() const
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

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::DomItems()
    :
    id{YType::uint16, "id"},
    peerip{YType::str, "peerIp"},
    virtualip{YType::str, "virtualIp"},
    vipannouncedelay{YType::uint16, "vIpAnnounceDelay"},
    sysprio{YType::uint16, "sysPrio"},
    sysmac{YType::str, "sysMac"},
    roleprio{YType::uint16, "rolePrio"},
    deadintvl{YType::uint32, "deadIntvl"},
    orphanportlist{YType::uint32, "orphanPortList"},
    peergw{YType::enumeration, "peerGw"},
    grcflcnstncychck{YType::enumeration, "grcflCnstncyChck"},
    track{YType::uint16, "track"},
    autorecovery{YType::enumeration, "autoRecovery"},
    autorecoveryintvl{YType::uint16, "autoRecoveryIntvl"},
    ipv4cfssync{YType::enumeration, "ipv4CfsSync"},
    ipv6cfssync{YType::enumeration, "ipv6CfsSync"},
    peerswitch{YType::enumeration, "peerSwitch"},
    delayrestorevpc{YType::uint16, "delayRestoreVPC"},
    delayrestoresvi{YType::uint16, "delayRestoreSVI"},
    delaypeerlinkbringup{YType::uint16, "delayPeerLinkBringup"},
    excludesvi{YType::str, "excludeSVI"},
    adminst{YType::enumeration, "adminSt"},
    fastconvergence{YType::enumeration, "fastConvergence"},
    operrole{YType::enumeration, "operRole"},
    oldrole{YType::enumeration, "oldRole"},
    lacprole{YType::enumeration, "lacpRole"},
    summoperrole{YType::enumeration, "summOperRole"},
    localprio{YType::uint16, "localPrio"},
    peerprio{YType::uint16, "peerPrio"},
    vpcprio{YType::uint16, "vpcPrio"},
    localmac{YType::str, "localMAC"},
    peermac{YType::str, "peerMAC"},
    vpcmac{YType::str, "vpcMAC"},
    operst{YType::str, "operSt"},
    peerversion{YType::uint32, "peerVersion"},
    batchedvpcinv{YType::str, "batchedVpcInv"},
    issufromver{YType::str, "issuFromVer"},
    issutover{YType::str, "issuToVer"},
    peerst{YType::enumeration, "peerSt"},
    peerstqual{YType::enumeration, "peerStQual"},
    dualactivest{YType::enumeration, "dualActiveSt"},
    compatst{YType::enumeration, "compatSt"},
    compatqual{YType::uint32, "compatQual"},
    compatqualstr{YType::str, "compatQualStr"},
    type2compatst{YType::enumeration, "type2CompatSt"},
    type2compatqual{YType::uint32, "type2CompatQual"},
    type2compatqualstr{YType::str, "type2CompatQualStr"},
    name{YType::str, "name"}
        ,
    if_items(std::make_shared<System::VpcItems::InstItems::DomItems::IfItems>())
    , keepalive_items(std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems>())
    , params_items(std::make_shared<System::VpcItems::InstItems::DomItems::ParamsItems>())
    , rsvpcinstpolcons_items(std::make_shared<System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems>())
{
    if_items->parent = this;
    keepalive_items->parent = this;
    params_items->parent = this;
    rsvpcinstpolcons_items->parent = this;

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::~DomItems()
{
}

bool System::VpcItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| peerip.is_set
	|| virtualip.is_set
	|| vipannouncedelay.is_set
	|| sysprio.is_set
	|| sysmac.is_set
	|| roleprio.is_set
	|| deadintvl.is_set
	|| orphanportlist.is_set
	|| peergw.is_set
	|| grcflcnstncychck.is_set
	|| track.is_set
	|| autorecovery.is_set
	|| autorecoveryintvl.is_set
	|| ipv4cfssync.is_set
	|| ipv6cfssync.is_set
	|| peerswitch.is_set
	|| delayrestorevpc.is_set
	|| delayrestoresvi.is_set
	|| delaypeerlinkbringup.is_set
	|| excludesvi.is_set
	|| adminst.is_set
	|| fastconvergence.is_set
	|| operrole.is_set
	|| oldrole.is_set
	|| lacprole.is_set
	|| summoperrole.is_set
	|| localprio.is_set
	|| peerprio.is_set
	|| vpcprio.is_set
	|| localmac.is_set
	|| peermac.is_set
	|| vpcmac.is_set
	|| operst.is_set
	|| peerversion.is_set
	|| batchedvpcinv.is_set
	|| issufromver.is_set
	|| issutover.is_set
	|| peerst.is_set
	|| peerstqual.is_set
	|| dualactivest.is_set
	|| compatst.is_set
	|| compatqual.is_set
	|| compatqualstr.is_set
	|| type2compatst.is_set
	|| type2compatqual.is_set
	|| type2compatqualstr.is_set
	|| name.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (keepalive_items !=  nullptr && keepalive_items->has_data())
	|| (params_items !=  nullptr && params_items->has_data())
	|| (rsvpcinstpolcons_items !=  nullptr && rsvpcinstpolcons_items->has_data());
}

bool System::VpcItems::InstItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(virtualip.yfilter)
	|| ydk::is_set(vipannouncedelay.yfilter)
	|| ydk::is_set(sysprio.yfilter)
	|| ydk::is_set(sysmac.yfilter)
	|| ydk::is_set(roleprio.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(orphanportlist.yfilter)
	|| ydk::is_set(peergw.yfilter)
	|| ydk::is_set(grcflcnstncychck.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(autorecovery.yfilter)
	|| ydk::is_set(autorecoveryintvl.yfilter)
	|| ydk::is_set(ipv4cfssync.yfilter)
	|| ydk::is_set(ipv6cfssync.yfilter)
	|| ydk::is_set(peerswitch.yfilter)
	|| ydk::is_set(delayrestorevpc.yfilter)
	|| ydk::is_set(delayrestoresvi.yfilter)
	|| ydk::is_set(delaypeerlinkbringup.yfilter)
	|| ydk::is_set(excludesvi.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(fastconvergence.yfilter)
	|| ydk::is_set(operrole.yfilter)
	|| ydk::is_set(oldrole.yfilter)
	|| ydk::is_set(lacprole.yfilter)
	|| ydk::is_set(summoperrole.yfilter)
	|| ydk::is_set(localprio.yfilter)
	|| ydk::is_set(peerprio.yfilter)
	|| ydk::is_set(vpcprio.yfilter)
	|| ydk::is_set(localmac.yfilter)
	|| ydk::is_set(peermac.yfilter)
	|| ydk::is_set(vpcmac.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(peerversion.yfilter)
	|| ydk::is_set(batchedvpcinv.yfilter)
	|| ydk::is_set(issufromver.yfilter)
	|| ydk::is_set(issutover.yfilter)
	|| ydk::is_set(peerst.yfilter)
	|| ydk::is_set(peerstqual.yfilter)
	|| ydk::is_set(dualactivest.yfilter)
	|| ydk::is_set(compatst.yfilter)
	|| ydk::is_set(compatqual.yfilter)
	|| ydk::is_set(compatqualstr.yfilter)
	|| ydk::is_set(type2compatst.yfilter)
	|| ydk::is_set(type2compatqual.yfilter)
	|| ydk::is_set(type2compatqualstr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (keepalive_items !=  nullptr && keepalive_items->has_operation())
	|| (params_items !=  nullptr && params_items->has_operation())
	|| (rsvpcinstpolcons_items !=  nullptr && rsvpcinstpolcons_items->has_operation());
}

std::string System::VpcItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (virtualip.is_set || is_set(virtualip.yfilter)) leaf_name_data.push_back(virtualip.get_name_leafdata());
    if (vipannouncedelay.is_set || is_set(vipannouncedelay.yfilter)) leaf_name_data.push_back(vipannouncedelay.get_name_leafdata());
    if (sysprio.is_set || is_set(sysprio.yfilter)) leaf_name_data.push_back(sysprio.get_name_leafdata());
    if (sysmac.is_set || is_set(sysmac.yfilter)) leaf_name_data.push_back(sysmac.get_name_leafdata());
    if (roleprio.is_set || is_set(roleprio.yfilter)) leaf_name_data.push_back(roleprio.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (orphanportlist.is_set || is_set(orphanportlist.yfilter)) leaf_name_data.push_back(orphanportlist.get_name_leafdata());
    if (peergw.is_set || is_set(peergw.yfilter)) leaf_name_data.push_back(peergw.get_name_leafdata());
    if (grcflcnstncychck.is_set || is_set(grcflcnstncychck.yfilter)) leaf_name_data.push_back(grcflcnstncychck.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (autorecovery.is_set || is_set(autorecovery.yfilter)) leaf_name_data.push_back(autorecovery.get_name_leafdata());
    if (autorecoveryintvl.is_set || is_set(autorecoveryintvl.yfilter)) leaf_name_data.push_back(autorecoveryintvl.get_name_leafdata());
    if (ipv4cfssync.is_set || is_set(ipv4cfssync.yfilter)) leaf_name_data.push_back(ipv4cfssync.get_name_leafdata());
    if (ipv6cfssync.is_set || is_set(ipv6cfssync.yfilter)) leaf_name_data.push_back(ipv6cfssync.get_name_leafdata());
    if (peerswitch.is_set || is_set(peerswitch.yfilter)) leaf_name_data.push_back(peerswitch.get_name_leafdata());
    if (delayrestorevpc.is_set || is_set(delayrestorevpc.yfilter)) leaf_name_data.push_back(delayrestorevpc.get_name_leafdata());
    if (delayrestoresvi.is_set || is_set(delayrestoresvi.yfilter)) leaf_name_data.push_back(delayrestoresvi.get_name_leafdata());
    if (delaypeerlinkbringup.is_set || is_set(delaypeerlinkbringup.yfilter)) leaf_name_data.push_back(delaypeerlinkbringup.get_name_leafdata());
    if (excludesvi.is_set || is_set(excludesvi.yfilter)) leaf_name_data.push_back(excludesvi.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (fastconvergence.is_set || is_set(fastconvergence.yfilter)) leaf_name_data.push_back(fastconvergence.get_name_leafdata());
    if (operrole.is_set || is_set(operrole.yfilter)) leaf_name_data.push_back(operrole.get_name_leafdata());
    if (oldrole.is_set || is_set(oldrole.yfilter)) leaf_name_data.push_back(oldrole.get_name_leafdata());
    if (lacprole.is_set || is_set(lacprole.yfilter)) leaf_name_data.push_back(lacprole.get_name_leafdata());
    if (summoperrole.is_set || is_set(summoperrole.yfilter)) leaf_name_data.push_back(summoperrole.get_name_leafdata());
    if (localprio.is_set || is_set(localprio.yfilter)) leaf_name_data.push_back(localprio.get_name_leafdata());
    if (peerprio.is_set || is_set(peerprio.yfilter)) leaf_name_data.push_back(peerprio.get_name_leafdata());
    if (vpcprio.is_set || is_set(vpcprio.yfilter)) leaf_name_data.push_back(vpcprio.get_name_leafdata());
    if (localmac.is_set || is_set(localmac.yfilter)) leaf_name_data.push_back(localmac.get_name_leafdata());
    if (peermac.is_set || is_set(peermac.yfilter)) leaf_name_data.push_back(peermac.get_name_leafdata());
    if (vpcmac.is_set || is_set(vpcmac.yfilter)) leaf_name_data.push_back(vpcmac.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (peerversion.is_set || is_set(peerversion.yfilter)) leaf_name_data.push_back(peerversion.get_name_leafdata());
    if (batchedvpcinv.is_set || is_set(batchedvpcinv.yfilter)) leaf_name_data.push_back(batchedvpcinv.get_name_leafdata());
    if (issufromver.is_set || is_set(issufromver.yfilter)) leaf_name_data.push_back(issufromver.get_name_leafdata());
    if (issutover.is_set || is_set(issutover.yfilter)) leaf_name_data.push_back(issutover.get_name_leafdata());
    if (peerst.is_set || is_set(peerst.yfilter)) leaf_name_data.push_back(peerst.get_name_leafdata());
    if (peerstqual.is_set || is_set(peerstqual.yfilter)) leaf_name_data.push_back(peerstqual.get_name_leafdata());
    if (dualactivest.is_set || is_set(dualactivest.yfilter)) leaf_name_data.push_back(dualactivest.get_name_leafdata());
    if (compatst.is_set || is_set(compatst.yfilter)) leaf_name_data.push_back(compatst.get_name_leafdata());
    if (compatqual.is_set || is_set(compatqual.yfilter)) leaf_name_data.push_back(compatqual.get_name_leafdata());
    if (compatqualstr.is_set || is_set(compatqualstr.yfilter)) leaf_name_data.push_back(compatqualstr.get_name_leafdata());
    if (type2compatst.is_set || is_set(type2compatst.yfilter)) leaf_name_data.push_back(type2compatst.get_name_leafdata());
    if (type2compatqual.is_set || is_set(type2compatqual.yfilter)) leaf_name_data.push_back(type2compatqual.get_name_leafdata());
    if (type2compatqualstr.is_set || is_set(type2compatqualstr.yfilter)) leaf_name_data.push_back(type2compatqualstr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "keepalive-items")
    {
        if(keepalive_items == nullptr)
        {
            keepalive_items = std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems>();
        }
        return keepalive_items;
    }

    if(child_yang_name == "params-items")
    {
        if(params_items == nullptr)
        {
            params_items = std::make_shared<System::VpcItems::InstItems::DomItems::ParamsItems>();
        }
        return params_items;
    }

    if(child_yang_name == "rsvpcInstPolCons-items")
    {
        if(rsvpcinstpolcons_items == nullptr)
        {
            rsvpcinstpolcons_items = std::make_shared<System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems>();
        }
        return rsvpcinstpolcons_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(keepalive_items != nullptr)
    {
        children["keepalive-items"] = keepalive_items;
    }

    if(params_items != nullptr)
    {
        children["params-items"] = params_items;
    }

    if(rsvpcinstpolcons_items != nullptr)
    {
        children["rsvpcInstPolCons-items"] = rsvpcinstpolcons_items;
    }

    return children;
}

void System::VpcItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualIp")
    {
        virtualip = value;
        virtualip.value_namespace = name_space;
        virtualip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vIpAnnounceDelay")
    {
        vipannouncedelay = value;
        vipannouncedelay.value_namespace = name_space;
        vipannouncedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysPrio")
    {
        sysprio = value;
        sysprio.value_namespace = name_space;
        sysprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysMac")
    {
        sysmac = value;
        sysmac.value_namespace = name_space;
        sysmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rolePrio")
    {
        roleprio = value;
        roleprio.value_namespace = name_space;
        roleprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orphanPortList")
    {
        orphanportlist = value;
        orphanportlist.value_namespace = name_space;
        orphanportlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerGw")
    {
        peergw = value;
        peergw.value_namespace = name_space;
        peergw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grcflCnstncyChck")
    {
        grcflcnstncychck = value;
        grcflcnstncychck.value_namespace = name_space;
        grcflcnstncychck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRecovery")
    {
        autorecovery = value;
        autorecovery.value_namespace = name_space;
        autorecovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRecoveryIntvl")
    {
        autorecoveryintvl = value;
        autorecoveryintvl.value_namespace = name_space;
        autorecoveryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4CfsSync")
    {
        ipv4cfssync = value;
        ipv4cfssync.value_namespace = name_space;
        ipv4cfssync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6CfsSync")
    {
        ipv6cfssync = value;
        ipv6cfssync.value_namespace = name_space;
        ipv6cfssync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSwitch")
    {
        peerswitch = value;
        peerswitch.value_namespace = name_space;
        peerswitch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayRestoreVPC")
    {
        delayrestorevpc = value;
        delayrestorevpc.value_namespace = name_space;
        delayrestorevpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayRestoreSVI")
    {
        delayrestoresvi = value;
        delayrestoresvi.value_namespace = name_space;
        delayrestoresvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayPeerLinkBringup")
    {
        delaypeerlinkbringup = value;
        delaypeerlinkbringup.value_namespace = name_space;
        delaypeerlinkbringup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excludeSVI")
    {
        excludesvi = value;
        excludesvi.value_namespace = name_space;
        excludesvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastConvergence")
    {
        fastconvergence = value;
        fastconvergence.value_namespace = name_space;
        fastconvergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRole")
    {
        operrole = value;
        operrole.value_namespace = name_space;
        operrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldRole")
    {
        oldrole = value;
        oldrole.value_namespace = name_space;
        oldrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpRole")
    {
        lacprole = value;
        lacprole.value_namespace = name_space;
        lacprole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summOperRole")
    {
        summoperrole = value;
        summoperrole.value_namespace = name_space;
        summoperrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPrio")
    {
        localprio = value;
        localprio.value_namespace = name_space;
        localprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerPrio")
    {
        peerprio = value;
        peerprio.value_namespace = name_space;
        peerprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPrio")
    {
        vpcprio = value;
        vpcprio.value_namespace = name_space;
        vpcprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localMAC")
    {
        localmac = value;
        localmac.value_namespace = name_space;
        localmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerMAC")
    {
        peermac = value;
        peermac.value_namespace = name_space;
        peermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcMAC")
    {
        vpcmac = value;
        vpcmac.value_namespace = name_space;
        vpcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerVersion")
    {
        peerversion = value;
        peerversion.value_namespace = name_space;
        peerversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "batchedVpcInv")
    {
        batchedvpcinv = value;
        batchedvpcinv.value_namespace = name_space;
        batchedvpcinv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issuFromVer")
    {
        issufromver = value;
        issufromver.value_namespace = name_space;
        issufromver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issuToVer")
    {
        issutover = value;
        issutover.value_namespace = name_space;
        issutover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerSt")
    {
        peerst = value;
        peerst.value_namespace = name_space;
        peerst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerStQual")
    {
        peerstqual = value;
        peerstqual.value_namespace = name_space;
        peerstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dualActiveSt")
    {
        dualactivest = value;
        dualactivest.value_namespace = name_space;
        dualactivest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compatSt")
    {
        compatst = value;
        compatst.value_namespace = name_space;
        compatst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compatQual")
    {
        compatqual = value;
        compatqual.value_namespace = name_space;
        compatqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compatQualStr")
    {
        compatqualstr = value;
        compatqualstr.value_namespace = name_space;
        compatqualstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type2CompatSt")
    {
        type2compatst = value;
        type2compatst.value_namespace = name_space;
        type2compatst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type2CompatQual")
    {
        type2compatqual = value;
        type2compatqual.value_namespace = name_space;
        type2compatqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type2CompatQualStr")
    {
        type2compatqualstr = value;
        type2compatqualstr.value_namespace = name_space;
        type2compatqualstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "virtualIp")
    {
        virtualip.yfilter = yfilter;
    }
    if(value_path == "vIpAnnounceDelay")
    {
        vipannouncedelay.yfilter = yfilter;
    }
    if(value_path == "sysPrio")
    {
        sysprio.yfilter = yfilter;
    }
    if(value_path == "sysMac")
    {
        sysmac.yfilter = yfilter;
    }
    if(value_path == "rolePrio")
    {
        roleprio.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "orphanPortList")
    {
        orphanportlist.yfilter = yfilter;
    }
    if(value_path == "peerGw")
    {
        peergw.yfilter = yfilter;
    }
    if(value_path == "grcflCnstncyChck")
    {
        grcflcnstncychck.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "autoRecovery")
    {
        autorecovery.yfilter = yfilter;
    }
    if(value_path == "autoRecoveryIntvl")
    {
        autorecoveryintvl.yfilter = yfilter;
    }
    if(value_path == "ipv4CfsSync")
    {
        ipv4cfssync.yfilter = yfilter;
    }
    if(value_path == "ipv6CfsSync")
    {
        ipv6cfssync.yfilter = yfilter;
    }
    if(value_path == "peerSwitch")
    {
        peerswitch.yfilter = yfilter;
    }
    if(value_path == "delayRestoreVPC")
    {
        delayrestorevpc.yfilter = yfilter;
    }
    if(value_path == "delayRestoreSVI")
    {
        delayrestoresvi.yfilter = yfilter;
    }
    if(value_path == "delayPeerLinkBringup")
    {
        delaypeerlinkbringup.yfilter = yfilter;
    }
    if(value_path == "excludeSVI")
    {
        excludesvi.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "fastConvergence")
    {
        fastconvergence.yfilter = yfilter;
    }
    if(value_path == "operRole")
    {
        operrole.yfilter = yfilter;
    }
    if(value_path == "oldRole")
    {
        oldrole.yfilter = yfilter;
    }
    if(value_path == "lacpRole")
    {
        lacprole.yfilter = yfilter;
    }
    if(value_path == "summOperRole")
    {
        summoperrole.yfilter = yfilter;
    }
    if(value_path == "localPrio")
    {
        localprio.yfilter = yfilter;
    }
    if(value_path == "peerPrio")
    {
        peerprio.yfilter = yfilter;
    }
    if(value_path == "vpcPrio")
    {
        vpcprio.yfilter = yfilter;
    }
    if(value_path == "localMAC")
    {
        localmac.yfilter = yfilter;
    }
    if(value_path == "peerMAC")
    {
        peermac.yfilter = yfilter;
    }
    if(value_path == "vpcMAC")
    {
        vpcmac.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "peerVersion")
    {
        peerversion.yfilter = yfilter;
    }
    if(value_path == "batchedVpcInv")
    {
        batchedvpcinv.yfilter = yfilter;
    }
    if(value_path == "issuFromVer")
    {
        issufromver.yfilter = yfilter;
    }
    if(value_path == "issuToVer")
    {
        issutover.yfilter = yfilter;
    }
    if(value_path == "peerSt")
    {
        peerst.yfilter = yfilter;
    }
    if(value_path == "peerStQual")
    {
        peerstqual.yfilter = yfilter;
    }
    if(value_path == "dualActiveSt")
    {
        dualactivest.yfilter = yfilter;
    }
    if(value_path == "compatSt")
    {
        compatst.yfilter = yfilter;
    }
    if(value_path == "compatQual")
    {
        compatqual.yfilter = yfilter;
    }
    if(value_path == "compatQualStr")
    {
        compatqualstr.yfilter = yfilter;
    }
    if(value_path == "type2CompatSt")
    {
        type2compatst.yfilter = yfilter;
    }
    if(value_path == "type2CompatQual")
    {
        type2compatqual.yfilter = yfilter;
    }
    if(value_path == "type2CompatQualStr")
    {
        type2compatqualstr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "keepalive-items" || name == "params-items" || name == "rsvpcInstPolCons-items" || name == "id" || name == "peerIp" || name == "virtualIp" || name == "vIpAnnounceDelay" || name == "sysPrio" || name == "sysMac" || name == "rolePrio" || name == "deadIntvl" || name == "orphanPortList" || name == "peerGw" || name == "grcflCnstncyChck" || name == "track" || name == "autoRecovery" || name == "autoRecoveryIntvl" || name == "ipv4CfsSync" || name == "ipv6CfsSync" || name == "peerSwitch" || name == "delayRestoreVPC" || name == "delayRestoreSVI" || name == "delayPeerLinkBringup" || name == "excludeSVI" || name == "adminSt" || name == "fastConvergence" || name == "operRole" || name == "oldRole" || name == "lacpRole" || name == "summOperRole" || name == "localPrio" || name == "peerPrio" || name == "vpcPrio" || name == "localMAC" || name == "peerMAC" || name == "vpcMAC" || name == "operSt" || name == "peerVersion" || name == "batchedVpcInv" || name == "issuFromVer" || name == "issuToVer" || name == "peerSt" || name == "peerStQual" || name == "dualActiveSt" || name == "compatSt" || name == "compatQual" || name == "compatQualStr" || name == "type2CompatSt" || name == "type2CompatQual" || name == "type2CompatQualStr" || name == "name")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::IfItems::~IfItems()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::DomItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::DomItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::DomItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::DomItems::IfItems::get_children() const
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

void System::VpcItems::InstItems::DomItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::DomItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::IfList()
    :
    id{YType::uint16, "id"},
    localoperst{YType::enumeration, "localOperSt"},
    remoteoperst{YType::enumeration, "remoteOperSt"},
    compatst{YType::enumeration, "compatSt"},
    compatqual{YType::uint32, "compatQual"},
    compatqualstr{YType::str, "compatQualStr"},
    cfgdvlans{YType::str, "cfgdVlans"},
    cfgdtrunkvlans{YType::str, "cfgdTrunkVlans"},
    cfgdaccessvlan{YType::str, "cfgdAccessVlan"},
    upvlans{YType::str, "upVlans"},
    suspvlans{YType::str, "suspVlans"},
    peercfgdvlans{YType::str, "peerCfgdVlans"},
    peerupvlans{YType::str, "peerUpVlans"}
        ,
    params_items(std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems>())
    , rsvpcconf_items(std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems>())
{
    params_items->parent = this;
    rsvpcconf_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::~IfList()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| localoperst.is_set
	|| remoteoperst.is_set
	|| compatst.is_set
	|| compatqual.is_set
	|| compatqualstr.is_set
	|| cfgdvlans.is_set
	|| cfgdtrunkvlans.is_set
	|| cfgdaccessvlan.is_set
	|| upvlans.is_set
	|| suspvlans.is_set
	|| peercfgdvlans.is_set
	|| peerupvlans.is_set
	|| (params_items !=  nullptr && params_items->has_data())
	|| (rsvpcconf_items !=  nullptr && rsvpcconf_items->has_data());
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(localoperst.yfilter)
	|| ydk::is_set(remoteoperst.yfilter)
	|| ydk::is_set(compatst.yfilter)
	|| ydk::is_set(compatqual.yfilter)
	|| ydk::is_set(compatqualstr.yfilter)
	|| ydk::is_set(cfgdvlans.yfilter)
	|| ydk::is_set(cfgdtrunkvlans.yfilter)
	|| ydk::is_set(cfgdaccessvlan.yfilter)
	|| ydk::is_set(upvlans.yfilter)
	|| ydk::is_set(suspvlans.yfilter)
	|| ydk::is_set(peercfgdvlans.yfilter)
	|| ydk::is_set(peerupvlans.yfilter)
	|| (params_items !=  nullptr && params_items->has_operation())
	|| (rsvpcconf_items !=  nullptr && rsvpcconf_items->has_operation());
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (localoperst.is_set || is_set(localoperst.yfilter)) leaf_name_data.push_back(localoperst.get_name_leafdata());
    if (remoteoperst.is_set || is_set(remoteoperst.yfilter)) leaf_name_data.push_back(remoteoperst.get_name_leafdata());
    if (compatst.is_set || is_set(compatst.yfilter)) leaf_name_data.push_back(compatst.get_name_leafdata());
    if (compatqual.is_set || is_set(compatqual.yfilter)) leaf_name_data.push_back(compatqual.get_name_leafdata());
    if (compatqualstr.is_set || is_set(compatqualstr.yfilter)) leaf_name_data.push_back(compatqualstr.get_name_leafdata());
    if (cfgdvlans.is_set || is_set(cfgdvlans.yfilter)) leaf_name_data.push_back(cfgdvlans.get_name_leafdata());
    if (cfgdtrunkvlans.is_set || is_set(cfgdtrunkvlans.yfilter)) leaf_name_data.push_back(cfgdtrunkvlans.get_name_leafdata());
    if (cfgdaccessvlan.is_set || is_set(cfgdaccessvlan.yfilter)) leaf_name_data.push_back(cfgdaccessvlan.get_name_leafdata());
    if (upvlans.is_set || is_set(upvlans.yfilter)) leaf_name_data.push_back(upvlans.get_name_leafdata());
    if (suspvlans.is_set || is_set(suspvlans.yfilter)) leaf_name_data.push_back(suspvlans.get_name_leafdata());
    if (peercfgdvlans.is_set || is_set(peercfgdvlans.yfilter)) leaf_name_data.push_back(peercfgdvlans.get_name_leafdata());
    if (peerupvlans.is_set || is_set(peerupvlans.yfilter)) leaf_name_data.push_back(peerupvlans.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "params-items")
    {
        if(params_items == nullptr)
        {
            params_items = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems>();
        }
        return params_items;
    }

    if(child_yang_name == "rsvpcConf-items")
    {
        if(rsvpcconf_items == nullptr)
        {
            rsvpcconf_items = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems>();
        }
        return rsvpcconf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(params_items != nullptr)
    {
        children["params-items"] = params_items;
    }

    if(rsvpcconf_items != nullptr)
    {
        children["rsvpcConf-items"] = rsvpcconf_items;
    }

    return children;
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localOperSt")
    {
        localoperst = value;
        localoperst.value_namespace = name_space;
        localoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteOperSt")
    {
        remoteoperst = value;
        remoteoperst.value_namespace = name_space;
        remoteoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compatSt")
    {
        compatst = value;
        compatst.value_namespace = name_space;
        compatst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compatQual")
    {
        compatqual = value;
        compatqual.value_namespace = name_space;
        compatqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compatQualStr")
    {
        compatqualstr = value;
        compatqualstr.value_namespace = name_space;
        compatqualstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgdVlans")
    {
        cfgdvlans = value;
        cfgdvlans.value_namespace = name_space;
        cfgdvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgdTrunkVlans")
    {
        cfgdtrunkvlans = value;
        cfgdtrunkvlans.value_namespace = name_space;
        cfgdtrunkvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgdAccessVlan")
    {
        cfgdaccessvlan = value;
        cfgdaccessvlan.value_namespace = name_space;
        cfgdaccessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upVlans")
    {
        upvlans = value;
        upvlans.value_namespace = name_space;
        upvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspVlans")
    {
        suspvlans = value;
        suspvlans.value_namespace = name_space;
        suspvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCfgdVlans")
    {
        peercfgdvlans = value;
        peercfgdvlans.value_namespace = name_space;
        peercfgdvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerUpVlans")
    {
        peerupvlans = value;
        peerupvlans.value_namespace = name_space;
        peerupvlans.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "localOperSt")
    {
        localoperst.yfilter = yfilter;
    }
    if(value_path == "remoteOperSt")
    {
        remoteoperst.yfilter = yfilter;
    }
    if(value_path == "compatSt")
    {
        compatst.yfilter = yfilter;
    }
    if(value_path == "compatQual")
    {
        compatqual.yfilter = yfilter;
    }
    if(value_path == "compatQualStr")
    {
        compatqualstr.yfilter = yfilter;
    }
    if(value_path == "cfgdVlans")
    {
        cfgdvlans.yfilter = yfilter;
    }
    if(value_path == "cfgdTrunkVlans")
    {
        cfgdtrunkvlans.yfilter = yfilter;
    }
    if(value_path == "cfgdAccessVlan")
    {
        cfgdaccessvlan.yfilter = yfilter;
    }
    if(value_path == "upVlans")
    {
        upvlans.yfilter = yfilter;
    }
    if(value_path == "suspVlans")
    {
        suspvlans.yfilter = yfilter;
    }
    if(value_path == "peerCfgdVlans")
    {
        peercfgdvlans.yfilter = yfilter;
    }
    if(value_path == "peerUpVlans")
    {
        peerupvlans.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "params-items" || name == "rsvpcConf-items" || name == "id" || name == "localOperSt" || name == "remoteOperSt" || name == "compatSt" || name == "compatQual" || name == "compatQualStr" || name == "cfgdVlans" || name == "cfgdTrunkVlans" || name == "cfgdAccessVlan" || name == "upVlans" || name == "suspVlans" || name == "peerCfgdVlans" || name == "peerUpVlans")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::ParamsItems()
    :
    appparams_list(this, {"appid"})
{

    yang_name = "params-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::~ParamsItems()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appparams_list.len(); index++)
    {
        if(appparams_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::has_operation() const
{
    for (std::size_t index=0; index<appparams_list.len(); index++)
    {
        if(appparams_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppParams-list")
    {
        auto c = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList>();
        c->parent = this;
        appparams_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : appparams_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppParams-list")
        return true;
    return false;
}


}
}

