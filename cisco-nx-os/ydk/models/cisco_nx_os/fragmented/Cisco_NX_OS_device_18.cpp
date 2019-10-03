
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_18.hpp"
#include "Cisco_NX_OS_device_19.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::InbItems::InbandIfList::IdepItems::IDEpList::IDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    eppdn{YType::str, "eppdn"},
    compvmdn{YType::str, "compVmDn"},
    comphvdn{YType::str, "compHvDn"},
    epgid{YType::str, "epgID"},
    ephostaddr{YType::str, "epHostAddr"},
    hypervisorname{YType::str, "hypervisorName"},
    portid{YType::uint32, "portId"},
    containername{YType::str, "containerName"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    eppdownloadhint{YType::enumeration, "eppDownloadHint"},
    handle{YType::uint64, "handle"},
    insttype{YType::enumeration, "instType"},
    pcifid{YType::uint32, "pcIfId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
        ,
    idepcntr_items(std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems>())
    , vdep_items(std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems>())
{
    idepcntr_items->parent = this;
    vdep_items->parent = this;

    yang_name = "IDEp-list"; yang_parent_name = "idep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::~IDEpList()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| eppdn.is_set
	|| compvmdn.is_set
	|| comphvdn.is_set
	|| epgid.is_set
	|| ephostaddr.is_set
	|| hypervisorname.is_set
	|| portid.is_set
	|| containername.is_set
	|| transitionstatus.is_set
	|| eppdownloadhint.is_set
	|| handle.is_set
	|| insttype.is_set
	|| pcifid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_data())
	|| (vdep_items !=  nullptr && vdep_items->has_data());
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(eppdn.yfilter)
	|| ydk::is_set(compvmdn.yfilter)
	|| ydk::is_set(comphvdn.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(ephostaddr.yfilter)
	|| ydk::is_set(hypervisorname.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(containername.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(eppdownloadhint.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_operation())
	|| (vdep_items !=  nullptr && vdep_items->has_operation());
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (eppdn.is_set || is_set(eppdn.yfilter)) leaf_name_data.push_back(eppdn.get_name_leafdata());
    if (compvmdn.is_set || is_set(compvmdn.yfilter)) leaf_name_data.push_back(compvmdn.get_name_leafdata());
    if (comphvdn.is_set || is_set(comphvdn.yfilter)) leaf_name_data.push_back(comphvdn.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (ephostaddr.is_set || is_set(ephostaddr.yfilter)) leaf_name_data.push_back(ephostaddr.get_name_leafdata());
    if (hypervisorname.is_set || is_set(hypervisorname.yfilter)) leaf_name_data.push_back(hypervisorname.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (containername.is_set || is_set(containername.yfilter)) leaf_name_data.push_back(containername.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (eppdownloadhint.is_set || is_set(eppdownloadhint.yfilter)) leaf_name_data.push_back(eppdownloadhint.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idepcntr-items")
    {
        if(idepcntr_items == nullptr)
        {
            idepcntr_items = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems>();
        }
        return idepcntr_items;
    }

    if(child_yang_name == "vdep-items")
    {
        if(vdep_items == nullptr)
        {
            vdep_items = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems>();
        }
        return vdep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idepcntr_items != nullptr)
    {
        _children["idepcntr-items"] = idepcntr_items;
    }

    if(vdep_items != nullptr)
    {
        _children["vdep-items"] = vdep_items;
    }

    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppdn")
    {
        eppdn = value;
        eppdn.value_namespace = name_space;
        eppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compVmDn")
    {
        compvmdn = value;
        compvmdn.value_namespace = name_space;
        compvmdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compHvDn")
    {
        comphvdn = value;
        comphvdn.value_namespace = name_space;
        comphvdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr = value;
        ephostaddr.value_namespace = name_space;
        ephostaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname = value;
        hypervisorname.value_namespace = name_space;
        hypervisorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "containerName")
    {
        containername = value;
        containername.value_namespace = name_space;
        containername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint = value;
        eppdownloadhint.value_namespace = name_space;
        eppdownloadhint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "eppdn")
    {
        eppdn.yfilter = yfilter;
    }
    if(value_path == "compVmDn")
    {
        compvmdn.yfilter = yfilter;
    }
    if(value_path == "compHvDn")
    {
        comphvdn.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr.yfilter = yfilter;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "containerName")
    {
        containername.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
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
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idepcntr-items" || name == "vdep-items" || name == "mac" || name == "encap" || name == "eppdn" || name == "compVmDn" || name == "compHvDn" || name == "epgID" || name == "epHostAddr" || name == "hypervisorName" || name == "portId" || name == "containerName" || name == "transitionStatus" || name == "eppDownloadHint" || name == "handle" || name == "instType" || name == "pcIfId" || name == "state" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IdepcntrItems()
    :
    idepcntr_list(this, {"mac", "encap"})
{

    yang_name = "idepcntr-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::~IdepcntrItems()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::has_operation() const
{
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idepcntr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEpCntr-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList>();
        ent_->parent = this;
        idepcntr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idepcntr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEpCntr-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::IDEpCntrList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "IDEpCntr-list"; yang_parent_name = "idepcntr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::~IDEpCntrList()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| direction.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEpCntr-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
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

bool System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "direction" || name == "name" || name == "id")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VdepItems()
    :
    vdep_list(this, {"mac", "encap", "brifid"})
{

    yang_name = "vdep-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::~VdepItems()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::has_operation() const
{
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vdep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VDEp-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList>();
        ent_->parent = this;
        vdep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vdep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VDEp-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::VDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    brifid{YType::str, "brIfId"},
    epgid{YType::str, "epgID"},
    insttype{YType::enumeration, "instType"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
        ,
    rsvnode_items(std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>())
{
    rsvnode_items->parent = this;

    yang_name = "VDEp-list"; yang_parent_name = "vdep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::~VDEpList()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| brifid.is_set
	|| epgid.is_set
	|| insttype.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_data());
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(brifid.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_operation());
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    ADD_KEY_TOKEN(brifid, "brIfId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (brifid.is_set || is_set(brifid.yfilter)) leaf_name_data.push_back(brifid.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvNode-items")
    {
        if(rsvnode_items == nullptr)
        {
            rsvnode_items = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>();
        }
        return rsvnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvnode_items != nullptr)
    {
        _children["rsvNode-items"] = rsvnode_items;
    }

    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIfId")
    {
        brifid = value;
        brifid.value_namespace = name_space;
        brifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "brIfId")
    {
        brifid.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvNode-items" || name == "mac" || name == "encap" || name == "brIfId" || name == "epgID" || name == "instType" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsvNodeItems()
    :
    rsvnode_list(this, {"tdn"})
{

    yang_name = "rsvNode-items"; yang_parent_name = "VDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::~RsvNodeItems()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList>();
        ent_->parent = this;
        rsvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::RsVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsVNode-list"; yang_parent_name = "rsvNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::~RsVNodeList()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::OdevItems()
    :
    odev_list(this, {"devid"})
{

    yang_name = "odev-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::~OdevItems()
{
}

bool System::InbItems::InbandIfList::OdevItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::OdevItems::has_operation() const
{
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODev-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList>();
        ent_->parent = this;
        odev_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odev_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::OdevItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::OdevItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODev-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::ODevList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    encap{YType::str, "encap"},
    hostname{YType::str, "hostName"},
    ipaddr{YType::str, "ipAddr"},
    numhb{YType::uint32, "numHB"},
    lastnumhb{YType::uint32, "lastNumHB"},
    hbstatus{YType::enumeration, "hbStatus"},
    operst{YType::enumeration, "operSt"},
    maxmisshb{YType::uint32, "maxMissHb"},
    pcifid{YType::uint32, "pcIfId"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    portid{YType::uint32, "portId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    odevcap_items(std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems>())
    , vnode_items(std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems>())
    , opnic_items(std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems>())
{
    odevcap_items->parent = this;
    vnode_items->parent = this;
    opnic_items->parent = this;

    yang_name = "ODev-list"; yang_parent_name = "odev-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::~ODevList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| encap.is_set
	|| hostname.is_set
	|| ipaddr.is_set
	|| numhb.is_set
	|| lastnumhb.is_set
	|| hbstatus.is_set
	|| operst.is_set
	|| maxmisshb.is_set
	|| pcifid.is_set
	|| transitionstatus.is_set
	|| portid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| (odevcap_items !=  nullptr && odevcap_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (opnic_items !=  nullptr && opnic_items->has_data());
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(numhb.yfilter)
	|| ydk::is_set(lastnumhb.yfilter)
	|| ydk::is_set(hbstatus.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxmisshb.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (odevcap_items !=  nullptr && odevcap_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (opnic_items !=  nullptr && opnic_items->has_operation());
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODev-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (numhb.is_set || is_set(numhb.yfilter)) leaf_name_data.push_back(numhb.get_name_leafdata());
    if (lastnumhb.is_set || is_set(lastnumhb.yfilter)) leaf_name_data.push_back(lastnumhb.get_name_leafdata());
    if (hbstatus.is_set || is_set(hbstatus.yfilter)) leaf_name_data.push_back(hbstatus.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxmisshb.is_set || is_set(maxmisshb.yfilter)) leaf_name_data.push_back(maxmisshb.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odevcap-items")
    {
        if(odevcap_items == nullptr)
        {
            odevcap_items = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems>();
        }
        return odevcap_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "opnic-items")
    {
        if(opnic_items == nullptr)
        {
            opnic_items = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems>();
        }
        return opnic_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odevcap_items != nullptr)
    {
        _children["odevcap-items"] = odevcap_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(opnic_items != nullptr)
    {
        _children["opnic-items"] = opnic_items;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostName")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numHB")
    {
        numhb = value;
        numhb.value_namespace = name_space;
        numhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb = value;
        lastnumhb.value_namespace = name_space;
        lastnumhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbStatus")
    {
        hbstatus = value;
        hbstatus.value_namespace = name_space;
        hbstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb = value;
        maxmisshb.value_namespace = name_space;
        maxmisshb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
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

void System::InbItems::InbandIfList::OdevItems::ODevList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "hostName")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "numHB")
    {
        numhb.yfilter = yfilter;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb.yfilter = yfilter;
    }
    if(value_path == "hbStatus")
    {
        hbstatus.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
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

bool System::InbItems::InbandIfList::OdevItems::ODevList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odevcap-items" || name == "vnode-items" || name == "opnic-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "encap" || name == "hostName" || name == "ipAddr" || name == "numHB" || name == "lastNumHB" || name == "hbStatus" || name == "operSt" || name == "maxMissHb" || name == "pcIfId" || name == "transitionStatus" || name == "portId" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::OdevcapItems()
    :
    version{YType::str, "version"},
    devid{YType::uint32, "devId"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "odevcap-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::~OdevcapItems()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| devid.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odevcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "devId" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::~VnodeItems()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OpnicItems()
    :
    opnic_list(this, {"mac"})
{

    yang_name = "opnic-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::~OpnicItems()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::has_operation() const
{
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opnic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OPNic-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList>();
        ent_->parent = this;
        opnic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opnic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OPNic-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::OPNicList()
    :
    mac{YType::str, "mac"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "OPNic-list"; yang_parent_name = "opnic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::~OPNicList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OPNic-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
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

void System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
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

bool System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::InbItems::InbandIfList::RsinbandConfItems::RsinbandConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsinbandConf-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RsinbandConfItems::~RsinbandConfItems()
{
}

bool System::InbItems::InbandIfList::RsinbandConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::RsinbandConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::InbItems::InbandIfList::RsinbandConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsinbandConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::RsinbandConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::RsinbandConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::RsinbandConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::RsinbandConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::RsinbandConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::RsinbandConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::InbItems::InbandIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::InbItems::InbandIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::InbItems::InbandIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::InbItems::InbandIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::InbandIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtItems()
    :
    extif_list(this, {"id"})
{

    yang_name = "ext-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ExtItems::~ExtItems()
{
}

bool System::ExtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::has_operation() const
{
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ExtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIf-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList>();
        ent_->parent = this;
        extif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIf-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::ExtIfList()
    :
    id{YType::str, "id"},
    extchasid{YType::uint16, "extChasId"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    dep_items(std::make_shared<System::ExtItems::ExtIfList::DepItems>())
    , vnode_items(std::make_shared<System::ExtItems::ExtIfList::VnodeItems>())
    , idep_items(std::make_shared<System::ExtItems::ExtIfList::IdepItems>())
    , odev_items(std::make_shared<System::ExtItems::ExtIfList::OdevItems>())
    , rsextconf_items(std::make_shared<System::ExtItems::ExtIfList::RsextConfItems>())
    , rtvrfmbr_items(std::make_shared<System::ExtItems::ExtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::ExtItems::ExtIfList::RtnwPathToIfItems>())
{
    dep_items->parent = this;
    vnode_items->parent = this;
    idep_items->parent = this;
    odev_items->parent = this;
    rsextconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "ExtIf-list"; yang_parent_name = "ext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ExtItems::ExtIfList::~ExtIfList()
{
}

bool System::ExtItems::ExtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| extchasid.is_set
	|| name.is_set
	|| descr.is_set
	|| (dep_items !=  nullptr && dep_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (idep_items !=  nullptr && idep_items->has_data())
	|| (odev_items !=  nullptr && odev_items->has_data())
	|| (rsextconf_items !=  nullptr && rsextconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::ExtItems::ExtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extchasid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (dep_items !=  nullptr && dep_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (idep_items !=  nullptr && idep_items->has_operation())
	|| (odev_items !=  nullptr && odev_items->has_operation())
	|| (rsextconf_items !=  nullptr && rsextconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::ExtItems::ExtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ExtItems::ExtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extchasid.is_set || is_set(extchasid.yfilter)) leaf_name_data.push_back(extchasid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dep-items")
    {
        if(dep_items == nullptr)
        {
            dep_items = std::make_shared<System::ExtItems::ExtIfList::DepItems>();
        }
        return dep_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::ExtItems::ExtIfList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "idep-items")
    {
        if(idep_items == nullptr)
        {
            idep_items = std::make_shared<System::ExtItems::ExtIfList::IdepItems>();
        }
        return idep_items;
    }

    if(child_yang_name == "odev-items")
    {
        if(odev_items == nullptr)
        {
            odev_items = std::make_shared<System::ExtItems::ExtIfList::OdevItems>();
        }
        return odev_items;
    }

    if(child_yang_name == "rsextConf-items")
    {
        if(rsextconf_items == nullptr)
        {
            rsextconf_items = std::make_shared<System::ExtItems::ExtIfList::RsextConfItems>();
        }
        return rsextconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::ExtItems::ExtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::ExtItems::ExtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dep_items != nullptr)
    {
        _children["dep-items"] = dep_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(idep_items != nullptr)
    {
        _children["idep-items"] = idep_items;
    }

    if(odev_items != nullptr)
    {
        _children["odev-items"] = odev_items;
    }

    if(rsextconf_items != nullptr)
    {
        _children["rsextConf-items"] = rsextconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::ExtItems::ExtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extChasId")
    {
        extchasid = value;
        extchasid.value_namespace = name_space;
        extchasid.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extChasId")
    {
        extchasid.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dep-items" || name == "vnode-items" || name == "idep-items" || name == "odev-items" || name == "rsextConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "extChasId" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ExtItems::ExtIfList::DepItems::DepItems()
    :
    dep_list(this, {"mac", "encap"})
{

    yang_name = "dep-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::DepItems::~DepItems()
{
}

bool System::ExtItems::ExtIfList::DepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::DepItems::has_operation() const
{
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::DepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::DepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::DepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DEp-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::DepItems::DEpList>();
        ent_->parent = this;
        dep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::DepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::DepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::DepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::DepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DEp-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::DepItems::DEpList::DEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
{

    yang_name = "DEp-list"; yang_parent_name = "dep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::DepItems::DEpList::~DEpList()
{
}

bool System::ExtItems::ExtIfList::DepItems::DEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set;
}

bool System::ExtItems::ExtIfList::DepItems::DEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter);
}

std::string System::ExtItems::ExtIfList::DepItems::DEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::DepItems::DEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::DepItems::DEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::DepItems::DEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::DepItems::DEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::DepItems::DEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::DepItems::DEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::ExtItems::ExtIfList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::~VnodeItems()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::ExtItems::ExtIfList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IdepItems()
    :
    idep_list(this, {"mac", "encap"})
{

    yang_name = "idep-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::~IdepItems()
{
}

bool System::ExtItems::ExtIfList::IdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::IdepItems::has_operation() const
{
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::IdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEp-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList>();
        ent_->parent = this;
        idep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::IdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::IdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEp-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::IDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    eppdn{YType::str, "eppdn"},
    compvmdn{YType::str, "compVmDn"},
    comphvdn{YType::str, "compHvDn"},
    epgid{YType::str, "epgID"},
    ephostaddr{YType::str, "epHostAddr"},
    hypervisorname{YType::str, "hypervisorName"},
    portid{YType::uint32, "portId"},
    containername{YType::str, "containerName"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    eppdownloadhint{YType::enumeration, "eppDownloadHint"},
    handle{YType::uint64, "handle"},
    insttype{YType::enumeration, "instType"},
    pcifid{YType::uint32, "pcIfId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
        ,
    idepcntr_items(std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems>())
    , vdep_items(std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems>())
{
    idepcntr_items->parent = this;
    vdep_items->parent = this;

    yang_name = "IDEp-list"; yang_parent_name = "idep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::~IDEpList()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| eppdn.is_set
	|| compvmdn.is_set
	|| comphvdn.is_set
	|| epgid.is_set
	|| ephostaddr.is_set
	|| hypervisorname.is_set
	|| portid.is_set
	|| containername.is_set
	|| transitionstatus.is_set
	|| eppdownloadhint.is_set
	|| handle.is_set
	|| insttype.is_set
	|| pcifid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_data())
	|| (vdep_items !=  nullptr && vdep_items->has_data());
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(eppdn.yfilter)
	|| ydk::is_set(compvmdn.yfilter)
	|| ydk::is_set(comphvdn.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(ephostaddr.yfilter)
	|| ydk::is_set(hypervisorname.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(containername.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(eppdownloadhint.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_operation())
	|| (vdep_items !=  nullptr && vdep_items->has_operation());
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (eppdn.is_set || is_set(eppdn.yfilter)) leaf_name_data.push_back(eppdn.get_name_leafdata());
    if (compvmdn.is_set || is_set(compvmdn.yfilter)) leaf_name_data.push_back(compvmdn.get_name_leafdata());
    if (comphvdn.is_set || is_set(comphvdn.yfilter)) leaf_name_data.push_back(comphvdn.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (ephostaddr.is_set || is_set(ephostaddr.yfilter)) leaf_name_data.push_back(ephostaddr.get_name_leafdata());
    if (hypervisorname.is_set || is_set(hypervisorname.yfilter)) leaf_name_data.push_back(hypervisorname.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (containername.is_set || is_set(containername.yfilter)) leaf_name_data.push_back(containername.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (eppdownloadhint.is_set || is_set(eppdownloadhint.yfilter)) leaf_name_data.push_back(eppdownloadhint.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idepcntr-items")
    {
        if(idepcntr_items == nullptr)
        {
            idepcntr_items = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems>();
        }
        return idepcntr_items;
    }

    if(child_yang_name == "vdep-items")
    {
        if(vdep_items == nullptr)
        {
            vdep_items = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems>();
        }
        return vdep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idepcntr_items != nullptr)
    {
        _children["idepcntr-items"] = idepcntr_items;
    }

    if(vdep_items != nullptr)
    {
        _children["vdep-items"] = vdep_items;
    }

    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppdn")
    {
        eppdn = value;
        eppdn.value_namespace = name_space;
        eppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compVmDn")
    {
        compvmdn = value;
        compvmdn.value_namespace = name_space;
        compvmdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compHvDn")
    {
        comphvdn = value;
        comphvdn.value_namespace = name_space;
        comphvdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr = value;
        ephostaddr.value_namespace = name_space;
        ephostaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname = value;
        hypervisorname.value_namespace = name_space;
        hypervisorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "containerName")
    {
        containername = value;
        containername.value_namespace = name_space;
        containername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint = value;
        eppdownloadhint.value_namespace = name_space;
        eppdownloadhint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "eppdn")
    {
        eppdn.yfilter = yfilter;
    }
    if(value_path == "compVmDn")
    {
        compvmdn.yfilter = yfilter;
    }
    if(value_path == "compHvDn")
    {
        comphvdn.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr.yfilter = yfilter;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "containerName")
    {
        containername.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
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
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idepcntr-items" || name == "vdep-items" || name == "mac" || name == "encap" || name == "eppdn" || name == "compVmDn" || name == "compHvDn" || name == "epgID" || name == "epHostAddr" || name == "hypervisorName" || name == "portId" || name == "containerName" || name == "transitionStatus" || name == "eppDownloadHint" || name == "handle" || name == "instType" || name == "pcIfId" || name == "state" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IdepcntrItems()
    :
    idepcntr_list(this, {"mac", "encap"})
{

    yang_name = "idepcntr-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::~IdepcntrItems()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::has_operation() const
{
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idepcntr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEpCntr-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList>();
        ent_->parent = this;
        idepcntr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idepcntr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEpCntr-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::IDEpCntrList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "IDEpCntr-list"; yang_parent_name = "idepcntr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::~IDEpCntrList()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| direction.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEpCntr-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "direction" || name == "name" || name == "id")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VdepItems()
    :
    vdep_list(this, {"mac", "encap", "brifid"})
{

    yang_name = "vdep-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::~VdepItems()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::has_operation() const
{
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vdep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VDEp-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList>();
        ent_->parent = this;
        vdep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vdep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VDEp-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::VDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    brifid{YType::str, "brIfId"},
    epgid{YType::str, "epgID"},
    insttype{YType::enumeration, "instType"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
        ,
    rsvnode_items(std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>())
{
    rsvnode_items->parent = this;

    yang_name = "VDEp-list"; yang_parent_name = "vdep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::~VDEpList()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| brifid.is_set
	|| epgid.is_set
	|| insttype.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_data());
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(brifid.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_operation());
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    ADD_KEY_TOKEN(brifid, "brIfId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (brifid.is_set || is_set(brifid.yfilter)) leaf_name_data.push_back(brifid.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvNode-items")
    {
        if(rsvnode_items == nullptr)
        {
            rsvnode_items = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>();
        }
        return rsvnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvnode_items != nullptr)
    {
        _children["rsvNode-items"] = rsvnode_items;
    }

    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIfId")
    {
        brifid = value;
        brifid.value_namespace = name_space;
        brifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "brIfId")
    {
        brifid.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvNode-items" || name == "mac" || name == "encap" || name == "brIfId" || name == "epgID" || name == "instType" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsvNodeItems()
    :
    rsvnode_list(this, {"tdn"})
{

    yang_name = "rsvNode-items"; yang_parent_name = "VDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::~RsvNodeItems()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList>();
        ent_->parent = this;
        rsvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::RsVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsVNode-list"; yang_parent_name = "rsvNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::~RsVNodeList()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::OdevItems()
    :
    odev_list(this, {"devid"})
{

    yang_name = "odev-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::~OdevItems()
{
}

bool System::ExtItems::ExtIfList::OdevItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::OdevItems::has_operation() const
{
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODev-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList>();
        ent_->parent = this;
        odev_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odev_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::OdevItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::OdevItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODev-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::ODevList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    encap{YType::str, "encap"},
    hostname{YType::str, "hostName"},
    ipaddr{YType::str, "ipAddr"},
    numhb{YType::uint32, "numHB"},
    lastnumhb{YType::uint32, "lastNumHB"},
    hbstatus{YType::enumeration, "hbStatus"},
    operst{YType::enumeration, "operSt"},
    maxmisshb{YType::uint32, "maxMissHb"},
    pcifid{YType::uint32, "pcIfId"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    portid{YType::uint32, "portId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    odevcap_items(std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems>())
    , vnode_items(std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems>())
    , opnic_items(std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems>())
{
    odevcap_items->parent = this;
    vnode_items->parent = this;
    opnic_items->parent = this;

    yang_name = "ODev-list"; yang_parent_name = "odev-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::~ODevList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| encap.is_set
	|| hostname.is_set
	|| ipaddr.is_set
	|| numhb.is_set
	|| lastnumhb.is_set
	|| hbstatus.is_set
	|| operst.is_set
	|| maxmisshb.is_set
	|| pcifid.is_set
	|| transitionstatus.is_set
	|| portid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| (odevcap_items !=  nullptr && odevcap_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (opnic_items !=  nullptr && opnic_items->has_data());
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(numhb.yfilter)
	|| ydk::is_set(lastnumhb.yfilter)
	|| ydk::is_set(hbstatus.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxmisshb.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (odevcap_items !=  nullptr && odevcap_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (opnic_items !=  nullptr && opnic_items->has_operation());
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODev-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (numhb.is_set || is_set(numhb.yfilter)) leaf_name_data.push_back(numhb.get_name_leafdata());
    if (lastnumhb.is_set || is_set(lastnumhb.yfilter)) leaf_name_data.push_back(lastnumhb.get_name_leafdata());
    if (hbstatus.is_set || is_set(hbstatus.yfilter)) leaf_name_data.push_back(hbstatus.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxmisshb.is_set || is_set(maxmisshb.yfilter)) leaf_name_data.push_back(maxmisshb.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odevcap-items")
    {
        if(odevcap_items == nullptr)
        {
            odevcap_items = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems>();
        }
        return odevcap_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "opnic-items")
    {
        if(opnic_items == nullptr)
        {
            opnic_items = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems>();
        }
        return opnic_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odevcap_items != nullptr)
    {
        _children["odevcap-items"] = odevcap_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(opnic_items != nullptr)
    {
        _children["opnic-items"] = opnic_items;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostName")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numHB")
    {
        numhb = value;
        numhb.value_namespace = name_space;
        numhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb = value;
        lastnumhb.value_namespace = name_space;
        lastnumhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbStatus")
    {
        hbstatus = value;
        hbstatus.value_namespace = name_space;
        hbstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb = value;
        maxmisshb.value_namespace = name_space;
        maxmisshb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::OdevItems::ODevList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "hostName")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "numHB")
    {
        numhb.yfilter = yfilter;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb.yfilter = yfilter;
    }
    if(value_path == "hbStatus")
    {
        hbstatus.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::OdevItems::ODevList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odevcap-items" || name == "vnode-items" || name == "opnic-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "encap" || name == "hostName" || name == "ipAddr" || name == "numHB" || name == "lastNumHB" || name == "hbStatus" || name == "operSt" || name == "maxMissHb" || name == "pcIfId" || name == "transitionStatus" || name == "portId" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::OdevcapItems()
    :
    version{YType::str, "version"},
    devid{YType::uint32, "devId"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "odevcap-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::~OdevcapItems()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| devid.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odevcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "devId" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::~VnodeItems()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OpnicItems()
    :
    opnic_list(this, {"mac"})
{

    yang_name = "opnic-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::~OpnicItems()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::has_operation() const
{
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opnic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OPNic-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList>();
        ent_->parent = this;
        opnic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opnic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OPNic-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::OPNicList()
    :
    mac{YType::str, "mac"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "OPNic-list"; yang_parent_name = "opnic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::~OPNicList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OPNic-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::ExtItems::ExtIfList::RsextConfItems::RsextConfItems()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsextConf-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::RsextConfItems::~RsextConfItems()
{
}

bool System::ExtItems::ExtIfList::RsextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::ExtItems::ExtIfList::RsextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::ExtItems::ExtIfList::RsextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::RsextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::RsextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::RsextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::RsextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
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

void System::ExtItems::ExtIfList::RsextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
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

bool System::ExtItems::ExtIfList::RsextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::ExtItems::ExtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::ExtItems::ExtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtItems::ExtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::ExtItems::ExtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtItems::ExtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtItems::ExtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtItems::ExtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtItems::ExtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtItems::ExtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BrItems::BrItems()
    :
    brif_list(this, {"id"})
{

    yang_name = "br-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BrItems::~BrItems()
{
}

bool System::BrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brif_list.len(); index++)
    {
        if(brif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::has_operation() const
{
    for (std::size_t index=0; index<brif_list.len(); index++)
    {
        if(brif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "br-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BrIf-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList>();
        ent_->parent = this;
        brif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : brif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BrIf-list")
        return true;
    return false;
}

System::BrItems::BrIfList::BrIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    dep_items(std::make_shared<System::BrItems::BrIfList::DepItems>())
    , vnode_items(std::make_shared<System::BrItems::BrIfList::VnodeItems>())
    , idep_items(std::make_shared<System::BrItems::BrIfList::IdepItems>())
    , odev_items(std::make_shared<System::BrItems::BrIfList::OdevItems>())
    , rsbrconf_items(std::make_shared<System::BrItems::BrIfList::RsbrConfItems>())
    , rtvrfmbr_items(std::make_shared<System::BrItems::BrIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::BrItems::BrIfList::RtnwPathToIfItems>())
{
    dep_items->parent = this;
    vnode_items->parent = this;
    idep_items->parent = this;
    odev_items->parent = this;
    rsbrconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "BrIf-list"; yang_parent_name = "br-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BrItems::BrIfList::~BrIfList()
{
}

bool System::BrItems::BrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| (dep_items !=  nullptr && dep_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (idep_items !=  nullptr && idep_items->has_data())
	|| (odev_items !=  nullptr && odev_items->has_data())
	|| (rsbrconf_items !=  nullptr && rsbrconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::BrItems::BrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (dep_items !=  nullptr && dep_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (idep_items !=  nullptr && idep_items->has_operation())
	|| (odev_items !=  nullptr && odev_items->has_operation())
	|| (rsbrconf_items !=  nullptr && rsbrconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::BrItems::BrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/br-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BrItems::BrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dep-items")
    {
        if(dep_items == nullptr)
        {
            dep_items = std::make_shared<System::BrItems::BrIfList::DepItems>();
        }
        return dep_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::BrItems::BrIfList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "idep-items")
    {
        if(idep_items == nullptr)
        {
            idep_items = std::make_shared<System::BrItems::BrIfList::IdepItems>();
        }
        return idep_items;
    }

    if(child_yang_name == "odev-items")
    {
        if(odev_items == nullptr)
        {
            odev_items = std::make_shared<System::BrItems::BrIfList::OdevItems>();
        }
        return odev_items;
    }

    if(child_yang_name == "rsbrConf-items")
    {
        if(rsbrconf_items == nullptr)
        {
            rsbrconf_items = std::make_shared<System::BrItems::BrIfList::RsbrConfItems>();
        }
        return rsbrconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::BrItems::BrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::BrItems::BrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dep_items != nullptr)
    {
        _children["dep-items"] = dep_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(idep_items != nullptr)
    {
        _children["idep-items"] = idep_items;
    }

    if(odev_items != nullptr)
    {
        _children["odev-items"] = odev_items;
    }

    if(rsbrconf_items != nullptr)
    {
        _children["rsbrConf-items"] = rsbrconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::BrItems::BrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BrItems::BrIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::BrItems::BrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dep-items" || name == "vnode-items" || name == "idep-items" || name == "odev-items" || name == "rsbrConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BrItems::BrIfList::DepItems::DepItems()
    :
    dep_list(this, {"mac", "encap"})
{

    yang_name = "dep-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::DepItems::~DepItems()
{
}

bool System::BrItems::BrIfList::DepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::DepItems::has_operation() const
{
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::DepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::DepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::DepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DEp-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::DepItems::DEpList>();
        ent_->parent = this;
        dep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::DepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::DepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::DepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::DepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DEp-list")
        return true;
    return false;
}

System::BrItems::BrIfList::DepItems::DEpList::DEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
{

    yang_name = "DEp-list"; yang_parent_name = "dep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::DepItems::DEpList::~DEpList()
{
}

bool System::BrItems::BrIfList::DepItems::DEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set;
}

bool System::BrItems::BrIfList::DepItems::DEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter);
}

std::string System::BrItems::BrIfList::DepItems::DEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::DepItems::DEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::DepItems::DEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::DepItems::DEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::DepItems::DEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::DepItems::DEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::DepItems::DEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::BrItems::BrIfList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::VnodeItems::~VnodeItems()
{
}

bool System::BrItems::BrIfList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::BrItems::BrIfList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::BrItems::BrIfList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::BrItems::BrIfList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IdepItems()
    :
    idep_list(this, {"mac", "encap"})
{

    yang_name = "idep-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::~IdepItems()
{
}

bool System::BrItems::BrIfList::IdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::IdepItems::has_operation() const
{
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::IdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEp-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList>();
        ent_->parent = this;
        idep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::IdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::IdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::IdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEp-list")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::IDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    eppdn{YType::str, "eppdn"},
    compvmdn{YType::str, "compVmDn"},
    comphvdn{YType::str, "compHvDn"},
    epgid{YType::str, "epgID"},
    ephostaddr{YType::str, "epHostAddr"},
    hypervisorname{YType::str, "hypervisorName"},
    portid{YType::uint32, "portId"},
    containername{YType::str, "containerName"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    eppdownloadhint{YType::enumeration, "eppDownloadHint"},
    handle{YType::uint64, "handle"},
    insttype{YType::enumeration, "instType"},
    pcifid{YType::uint32, "pcIfId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
        ,
    idepcntr_items(std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems>())
    , vdep_items(std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems>())
{
    idepcntr_items->parent = this;
    vdep_items->parent = this;

    yang_name = "IDEp-list"; yang_parent_name = "idep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::~IDEpList()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| eppdn.is_set
	|| compvmdn.is_set
	|| comphvdn.is_set
	|| epgid.is_set
	|| ephostaddr.is_set
	|| hypervisorname.is_set
	|| portid.is_set
	|| containername.is_set
	|| transitionstatus.is_set
	|| eppdownloadhint.is_set
	|| handle.is_set
	|| insttype.is_set
	|| pcifid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_data())
	|| (vdep_items !=  nullptr && vdep_items->has_data());
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(eppdn.yfilter)
	|| ydk::is_set(compvmdn.yfilter)
	|| ydk::is_set(comphvdn.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(ephostaddr.yfilter)
	|| ydk::is_set(hypervisorname.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(containername.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(eppdownloadhint.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_operation())
	|| (vdep_items !=  nullptr && vdep_items->has_operation());
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (eppdn.is_set || is_set(eppdn.yfilter)) leaf_name_data.push_back(eppdn.get_name_leafdata());
    if (compvmdn.is_set || is_set(compvmdn.yfilter)) leaf_name_data.push_back(compvmdn.get_name_leafdata());
    if (comphvdn.is_set || is_set(comphvdn.yfilter)) leaf_name_data.push_back(comphvdn.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (ephostaddr.is_set || is_set(ephostaddr.yfilter)) leaf_name_data.push_back(ephostaddr.get_name_leafdata());
    if (hypervisorname.is_set || is_set(hypervisorname.yfilter)) leaf_name_data.push_back(hypervisorname.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (containername.is_set || is_set(containername.yfilter)) leaf_name_data.push_back(containername.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (eppdownloadhint.is_set || is_set(eppdownloadhint.yfilter)) leaf_name_data.push_back(eppdownloadhint.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idepcntr-items")
    {
        if(idepcntr_items == nullptr)
        {
            idepcntr_items = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems>();
        }
        return idepcntr_items;
    }

    if(child_yang_name == "vdep-items")
    {
        if(vdep_items == nullptr)
        {
            vdep_items = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems>();
        }
        return vdep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idepcntr_items != nullptr)
    {
        _children["idepcntr-items"] = idepcntr_items;
    }

    if(vdep_items != nullptr)
    {
        _children["vdep-items"] = vdep_items;
    }

    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppdn")
    {
        eppdn = value;
        eppdn.value_namespace = name_space;
        eppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compVmDn")
    {
        compvmdn = value;
        compvmdn.value_namespace = name_space;
        compvmdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compHvDn")
    {
        comphvdn = value;
        comphvdn.value_namespace = name_space;
        comphvdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr = value;
        ephostaddr.value_namespace = name_space;
        ephostaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname = value;
        hypervisorname.value_namespace = name_space;
        hypervisorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "containerName")
    {
        containername = value;
        containername.value_namespace = name_space;
        containername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint = value;
        eppdownloadhint.value_namespace = name_space;
        eppdownloadhint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::IdepItems::IDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "eppdn")
    {
        eppdn.yfilter = yfilter;
    }
    if(value_path == "compVmDn")
    {
        compvmdn.yfilter = yfilter;
    }
    if(value_path == "compHvDn")
    {
        comphvdn.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr.yfilter = yfilter;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "containerName")
    {
        containername.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
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
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idepcntr-items" || name == "vdep-items" || name == "mac" || name == "encap" || name == "eppdn" || name == "compVmDn" || name == "compHvDn" || name == "epgID" || name == "epHostAddr" || name == "hypervisorName" || name == "portId" || name == "containerName" || name == "transitionStatus" || name == "eppDownloadHint" || name == "handle" || name == "instType" || name == "pcIfId" || name == "state" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IdepcntrItems()
    :
    idepcntr_list(this, {"mac", "encap"})
{

    yang_name = "idepcntr-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::~IdepcntrItems()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::has_operation() const
{
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idepcntr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEpCntr-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList>();
        ent_->parent = this;
        idepcntr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idepcntr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEpCntr-list")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::IDEpCntrList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "IDEpCntr-list"; yang_parent_name = "idepcntr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::~IDEpCntrList()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| direction.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEpCntr-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
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

bool System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "direction" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VdepItems()
    :
    vdep_list(this, {"mac", "encap", "brifid"})
{

    yang_name = "vdep-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::~VdepItems()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::has_operation() const
{
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vdep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VDEp-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList>();
        ent_->parent = this;
        vdep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vdep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VDEp-list")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::VDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    brifid{YType::str, "brIfId"},
    epgid{YType::str, "epgID"},
    insttype{YType::enumeration, "instType"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
        ,
    rsvnode_items(std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>())
{
    rsvnode_items->parent = this;

    yang_name = "VDEp-list"; yang_parent_name = "vdep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::~VDEpList()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| brifid.is_set
	|| epgid.is_set
	|| insttype.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_data());
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(brifid.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_operation());
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    ADD_KEY_TOKEN(brifid, "brIfId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (brifid.is_set || is_set(brifid.yfilter)) leaf_name_data.push_back(brifid.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvNode-items")
    {
        if(rsvnode_items == nullptr)
        {
            rsvnode_items = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>();
        }
        return rsvnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvnode_items != nullptr)
    {
        _children["rsvNode-items"] = rsvnode_items;
    }

    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIfId")
    {
        brifid = value;
        brifid.value_namespace = name_space;
        brifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "brIfId")
    {
        brifid.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvNode-items" || name == "mac" || name == "encap" || name == "brIfId" || name == "epgID" || name == "instType" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsvNodeItems()
    :
    rsvnode_list(this, {"tdn"})
{

    yang_name = "rsvNode-items"; yang_parent_name = "VDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::~RsvNodeItems()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList>();
        ent_->parent = this;
        rsvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::RsVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsVNode-list"; yang_parent_name = "rsvNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::~RsVNodeList()
{
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::OdevItems()
    :
    odev_list(this, {"devid"})
{

    yang_name = "odev-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::~OdevItems()
{
}

bool System::BrItems::BrIfList::OdevItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::OdevItems::has_operation() const
{
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODev-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList>();
        ent_->parent = this;
        odev_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odev_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::OdevItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::OdevItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::OdevItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODev-list")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::ODevList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    encap{YType::str, "encap"},
    hostname{YType::str, "hostName"},
    ipaddr{YType::str, "ipAddr"},
    numhb{YType::uint32, "numHB"},
    lastnumhb{YType::uint32, "lastNumHB"},
    hbstatus{YType::enumeration, "hbStatus"},
    operst{YType::enumeration, "operSt"},
    maxmisshb{YType::uint32, "maxMissHb"},
    pcifid{YType::uint32, "pcIfId"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    portid{YType::uint32, "portId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    odevcap_items(std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems>())
    , vnode_items(std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems>())
    , opnic_items(std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems>())
{
    odevcap_items->parent = this;
    vnode_items->parent = this;
    opnic_items->parent = this;

    yang_name = "ODev-list"; yang_parent_name = "odev-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::~ODevList()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| encap.is_set
	|| hostname.is_set
	|| ipaddr.is_set
	|| numhb.is_set
	|| lastnumhb.is_set
	|| hbstatus.is_set
	|| operst.is_set
	|| maxmisshb.is_set
	|| pcifid.is_set
	|| transitionstatus.is_set
	|| portid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| (odevcap_items !=  nullptr && odevcap_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (opnic_items !=  nullptr && opnic_items->has_data());
}

bool System::BrItems::BrIfList::OdevItems::ODevList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(numhb.yfilter)
	|| ydk::is_set(lastnumhb.yfilter)
	|| ydk::is_set(hbstatus.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxmisshb.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (odevcap_items !=  nullptr && odevcap_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (opnic_items !=  nullptr && opnic_items->has_operation());
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODev-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (numhb.is_set || is_set(numhb.yfilter)) leaf_name_data.push_back(numhb.get_name_leafdata());
    if (lastnumhb.is_set || is_set(lastnumhb.yfilter)) leaf_name_data.push_back(lastnumhb.get_name_leafdata());
    if (hbstatus.is_set || is_set(hbstatus.yfilter)) leaf_name_data.push_back(hbstatus.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxmisshb.is_set || is_set(maxmisshb.yfilter)) leaf_name_data.push_back(maxmisshb.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odevcap-items")
    {
        if(odevcap_items == nullptr)
        {
            odevcap_items = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems>();
        }
        return odevcap_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "opnic-items")
    {
        if(opnic_items == nullptr)
        {
            opnic_items = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems>();
        }
        return opnic_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odevcap_items != nullptr)
    {
        _children["odevcap-items"] = odevcap_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(opnic_items != nullptr)
    {
        _children["opnic-items"] = opnic_items;
    }

    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostName")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numHB")
    {
        numhb = value;
        numhb.value_namespace = name_space;
        numhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb = value;
        lastnumhb.value_namespace = name_space;
        lastnumhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbStatus")
    {
        hbstatus = value;
        hbstatus.value_namespace = name_space;
        hbstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb = value;
        maxmisshb.value_namespace = name_space;
        maxmisshb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
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

void System::BrItems::BrIfList::OdevItems::ODevList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "hostName")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "numHB")
    {
        numhb.yfilter = yfilter;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb.yfilter = yfilter;
    }
    if(value_path == "hbStatus")
    {
        hbstatus.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
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

bool System::BrItems::BrIfList::OdevItems::ODevList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odevcap-items" || name == "vnode-items" || name == "opnic-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "encap" || name == "hostName" || name == "ipAddr" || name == "numHB" || name == "lastNumHB" || name == "hbStatus" || name == "operSt" || name == "maxMissHb" || name == "pcIfId" || name == "transitionStatus" || name == "portId" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::OdevcapItems()
    :
    version{YType::str, "version"},
    devid{YType::uint32, "devId"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "odevcap-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::~OdevcapItems()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| devid.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odevcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "devId" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::~VnodeItems()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
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

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

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

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OPNic-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList>();
        ent_->parent = this;
        opnic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opnic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| state.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
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
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
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
    if(name == "mac" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::BrItems::BrIfList::RsbrConfItems::RsbrConfItems()
    :
    tdn{YType::str, "tDn"},
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
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::RsbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::RsbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::RsbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
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
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BrItems::BrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "BrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::BrItems::BrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MacItems::MacItems()
    :
    aging{YType::uint32, "aging"},
    userdefinedlimit{YType::uint32, "userDefinedLimit"}
        ,
    static_items(std::make_shared<System::MacItems::StaticItems>())
    , table_items(std::make_shared<System::MacItems::TableItems>())
{
    static_items->parent = this;
    table_items->parent = this;

    yang_name = "mac-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::~MacItems()
{
}

bool System::MacItems::has_data() const
{
    if (is_presence_container) return true;
    return aging.is_set
	|| userdefinedlimit.is_set
	|| (static_items !=  nullptr && static_items->has_data())
	|| (table_items !=  nullptr && table_items->has_data());
}

bool System::MacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging.yfilter)
	|| ydk::is_set(userdefinedlimit.yfilter)
	|| (static_items !=  nullptr && static_items->has_operation())
	|| (table_items !=  nullptr && table_items->has_operation());
}

std::string System::MacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging.is_set || is_set(aging.yfilter)) leaf_name_data.push_back(aging.get_name_leafdata());
    if (userdefinedlimit.is_set || is_set(userdefinedlimit.yfilter)) leaf_name_data.push_back(userdefinedlimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-items")
    {
        if(static_items == nullptr)
        {
            static_items = std::make_shared<System::MacItems::StaticItems>();
        }
        return static_items;
    }

    if(child_yang_name == "table-items")
    {
        if(table_items == nullptr)
        {
            table_items = std::make_shared<System::MacItems::TableItems>();
        }
        return table_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_items != nullptr)
    {
        _children["static-items"] = static_items;
    }

    if(table_items != nullptr)
    {
        _children["table-items"] = table_items;
    }

    return _children;
}

void System::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging")
    {
        aging = value;
        aging.value_namespace = name_space;
        aging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userDefinedLimit")
    {
        userdefinedlimit = value;
        userdefinedlimit.value_namespace = name_space;
        userdefinedlimit.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging")
    {
        aging.yfilter = yfilter;
    }
    if(value_path == "userDefinedLimit")
    {
        userdefinedlimit.yfilter = yfilter;
    }
}

bool System::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-items" || name == "table-items" || name == "aging" || name == "userDefinedLimit")
        return true;
    return false;
}

System::MacItems::StaticItems::StaticItems()
    :
    vlan_items(std::make_shared<System::MacItems::StaticItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "static-items"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::StaticItems::~StaticItems()
{
}

bool System::MacItems::StaticItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::MacItems::StaticItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::MacItems::StaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::StaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::StaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::StaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::MacItems::StaticItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::StaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::MacItems::StaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacItems::StaticItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacItems::StaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::MacItems::StaticItems::VlanItems::VlanItems()
    :
    staticentry_list(this, {"vlan", "staticmacaddress"})
{

    yang_name = "vlan-items"; yang_parent_name = "static-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::StaticItems::VlanItems::~VlanItems()
{
}

bool System::MacItems::StaticItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticentry_list.len(); index++)
    {
        if(staticentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacItems::StaticItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<staticentry_list.len(); index++)
    {
        if(staticentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacItems::StaticItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mac-items/static-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::StaticItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::StaticItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::StaticItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticEntry-list")
    {
        auto ent_ = std::make_shared<System::MacItems::StaticItems::VlanItems::StaticEntryList>();
        ent_->parent = this;
        staticentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::StaticItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : staticentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MacItems::StaticItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacItems::StaticItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacItems::StaticItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticEntry-list")
        return true;
    return false;
}

System::MacItems::StaticItems::VlanItems::StaticEntryList::StaticEntryList()
    :
    vlan{YType::str, "vlan"},
    staticmacaddress{YType::str, "staticMacAddress"},
    dropaction{YType::boolean, "dropAction"},
    interface{YType::str, "interface"}
{

    yang_name = "StaticEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::StaticItems::VlanItems::StaticEntryList::~StaticEntryList()
{
}

bool System::MacItems::StaticItems::VlanItems::StaticEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| staticmacaddress.is_set
	|| dropaction.is_set
	|| interface.is_set;
}

bool System::MacItems::StaticItems::VlanItems::StaticEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(staticmacaddress.yfilter)
	|| ydk::is_set(dropaction.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string System::MacItems::StaticItems::VlanItems::StaticEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mac-items/static-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::StaticItems::VlanItems::StaticEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticEntry-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    ADD_KEY_TOKEN(staticmacaddress, "staticMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::StaticItems::VlanItems::StaticEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (staticmacaddress.is_set || is_set(staticmacaddress.yfilter)) leaf_name_data.push_back(staticmacaddress.get_name_leafdata());
    if (dropaction.is_set || is_set(dropaction.yfilter)) leaf_name_data.push_back(dropaction.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::StaticItems::VlanItems::StaticEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::StaticItems::VlanItems::StaticEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MacItems::StaticItems::VlanItems::StaticEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticMacAddress")
    {
        staticmacaddress = value;
        staticmacaddress.value_namespace = name_space;
        staticmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAction")
    {
        dropaction = value;
        dropaction.value_namespace = name_space;
        dropaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacItems::StaticItems::VlanItems::StaticEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "staticMacAddress")
    {
        staticmacaddress.yfilter = yfilter;
    }
    if(value_path == "dropAction")
    {
        dropaction.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool System::MacItems::StaticItems::VlanItems::StaticEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "staticMacAddress" || name == "dropAction" || name == "interface")
        return true;
    return false;
}

System::MacItems::TableItems::TableItems()
    :
    vlan_items(std::make_shared<System::MacItems::TableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "table-items"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::TableItems::~TableItems()
{
}

bool System::MacItems::TableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::MacItems::TableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::MacItems::TableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::TableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::TableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::TableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::MacItems::TableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::TableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::MacItems::TableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacItems::TableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacItems::TableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::MacItems::TableItems::VlanItems::VlanItems()
    :
    macaddressentry_list(this, {"vlan", "macaddress"})
{

    yang_name = "vlan-items"; yang_parent_name = "table-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::TableItems::VlanItems::~VlanItems()
{
}

bool System::MacItems::TableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macaddressentry_list.len(); index++)
    {
        if(macaddressentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacItems::TableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<macaddressentry_list.len(); index++)
    {
        if(macaddressentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacItems::TableItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mac-items/table-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::TableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::TableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::TableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacAddressEntry-list")
    {
        auto ent_ = std::make_shared<System::MacItems::TableItems::VlanItems::MacAddressEntryList>();
        ent_->parent = this;
        macaddressentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::TableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macaddressentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MacItems::TableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacItems::TableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacItems::TableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacAddressEntry-list")
        return true;
    return false;
}

System::MacItems::TableItems::VlanItems::MacAddressEntryList::MacAddressEntryList()
    :
    vlan{YType::str, "vlan"},
    macaddress{YType::str, "macAddress"},
    type{YType::enumeration, "type"},
    static_{YType::boolean, "static"},
    secure{YType::boolean, "secure"},
    ntfy{YType::boolean, "ntfy"},
    routed{YType::boolean, "routed"},
    age{YType::uint32, "age"},
    port{YType::str, "port"},
    macinfo{YType::enumeration, "macInfo"}
{

    yang_name = "MacAddressEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacItems::TableItems::VlanItems::MacAddressEntryList::~MacAddressEntryList()
{
}

bool System::MacItems::TableItems::VlanItems::MacAddressEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| macaddress.is_set
	|| type.is_set
	|| static_.is_set
	|| secure.is_set
	|| ntfy.is_set
	|| routed.is_set
	|| age.is_set
	|| port.is_set
	|| macinfo.is_set;
}

bool System::MacItems::TableItems::VlanItems::MacAddressEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(macaddress.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(secure.yfilter)
	|| ydk::is_set(ntfy.yfilter)
	|| ydk::is_set(routed.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(macinfo.yfilter);
}

std::string System::MacItems::TableItems::VlanItems::MacAddressEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mac-items/table-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacItems::TableItems::VlanItems::MacAddressEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacAddressEntry-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    ADD_KEY_TOKEN(macaddress, "macAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacItems::TableItems::VlanItems::MacAddressEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (macaddress.is_set || is_set(macaddress.yfilter)) leaf_name_data.push_back(macaddress.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (secure.is_set || is_set(secure.yfilter)) leaf_name_data.push_back(secure.get_name_leafdata());
    if (ntfy.is_set || is_set(ntfy.yfilter)) leaf_name_data.push_back(ntfy.get_name_leafdata());
    if (routed.is_set || is_set(routed.yfilter)) leaf_name_data.push_back(routed.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (macinfo.is_set || is_set(macinfo.yfilter)) leaf_name_data.push_back(macinfo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacItems::TableItems::VlanItems::MacAddressEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacItems::TableItems::VlanItems::MacAddressEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MacItems::TableItems::VlanItems::MacAddressEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macAddress")
    {
        macaddress = value;
        macaddress.value_namespace = name_space;
        macaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure")
    {
        secure = value;
        secure.value_namespace = name_space;
        secure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntfy")
    {
        ntfy = value;
        ntfy.value_namespace = name_space;
        ntfy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed")
    {
        routed = value;
        routed.value_namespace = name_space;
        routed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macInfo")
    {
        macinfo = value;
        macinfo.value_namespace = name_space;
        macinfo.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacItems::TableItems::VlanItems::MacAddressEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "macAddress")
    {
        macaddress.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "secure")
    {
        secure.yfilter = yfilter;
    }
    if(value_path == "ntfy")
    {
        ntfy.yfilter = yfilter;
    }
    if(value_path == "routed")
    {
        routed.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "macInfo")
    {
        macinfo.yfilter = yfilter;
    }
}

bool System::MacItems::TableItems::VlanItems::MacAddressEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "macAddress" || name == "type" || name == "static" || name == "secure" || name == "ntfy" || name == "routed" || name == "age" || name == "port" || name == "macInfo")
        return true;
    return false;
}

System::CdpItems::CdpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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
    return adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::CdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
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

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::CdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::CdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::CdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::CdpItems::InstItems::InstItems()
    :
    ver{YType::enumeration, "ver"},
    devidtype{YType::enumeration, "devIdType"},
    holdintvl{YType::uint16, "holdIntvl"},
    txfreq{YType::uint16, "txFreq"},
    sysname{YType::str, "sysName"},
    adminst{YType::enumeration, "adminSt"},
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
	|| adminst.is_set
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
	|| ydk::is_set(adminst.yfilter)
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
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "ver" || name == "devIdType" || name == "holdIntvl" || name == "txFreq" || name == "sysName" || name == "adminSt" || name == "operErr")
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::CdpItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::get_children() const
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
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "portDesc" || name == "locDesc" || name == "operSt" || name == "operStQual" || name == "nativeVlan" || name == "adminSt")
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mgmt_items != nullptr)
    {
        _children["mgmt-items"] = mgmt_items;
    }

    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(adjstats_items != nullptr)
    {
        _children["adjstats-items"] = adjstats_items;
    }

    return _children;
}

void System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgmt-items" || name == "intf-items" || name == "adjstats-items" || name == "index" || name == "ver" || name == "devId" || name == "portId" || name == "platId" || name == "cap" || name == "duplex" || name == "nativeVlan" || name == "mtu" || name == "sysName" || name == "sysLoc" || name == "name")
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAddr-list")
    {
        auto ent_ = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList>();
        ent_->parent = this;
        mgmtaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IntfAddr-list")
    {
        auto ent_ = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList>();
        ent_->parent = this;
        intfaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : intfaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::LldpItems::LldpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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
    return adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::LldpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
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

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::LldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::LldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::LldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "adminSt" || name == "operSt")
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
    portidsubtype{YType::enumeration, "portIdSubType"},
    adminst{YType::enumeration, "adminSt"}
        ,
    mgmt_items(std::make_shared<System::LldpItems::InstItems::MgmtItems>())
    , if_items(std::make_shared<System::LldpItems::InstItems::IfItems>())
    , inststats_items(std::make_shared<System::LldpItems::InstItems::InststatsItems>())
    , rslldpinstpolcons_items(std::make_shared<System::LldpItems::InstItems::RslldpInstPolConsItems>())
{
    mgmt_items->parent = this;
    if_items->parent = this;
    inststats_items->parent = this;
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
	|| portidsubtype.is_set
	|| adminst.is_set
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (inststats_items !=  nullptr && inststats_items->has_data())
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
	|| ydk::is_set(portidsubtype.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (inststats_items !=  nullptr && inststats_items->has_operation())
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
    if (portidsubtype.is_set || is_set(portidsubtype.yfilter)) leaf_name_data.push_back(portidsubtype.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::LldpItems::InstItems::InststatsItems>();
        }
        return inststats_items;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mgmt_items != nullptr)
    {
        _children["mgmt-items"] = mgmt_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(inststats_items != nullptr)
    {
        _children["inststats-items"] = inststats_items;
    }

    if(rslldpinstpolcons_items != nullptr)
    {
        _children["rslldpInstPolCons-items"] = rslldpinstpolcons_items;
    }

    return _children;
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
    if(value_path == "portIdSubType")
    {
        portidsubtype = value;
        portidsubtype.value_namespace = name_space;
        portidsubtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "portIdSubType")
    {
        portidsubtype.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgmt-items" || name == "if-items" || name == "inststats-items" || name == "rslldpInstPolCons-items" || name == "holdTime" || name == "initDelayTime" || name == "txFreq" || name == "optTlvSel" || name == "sysDesc" || name == "portIdSubType" || name == "adminSt")
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

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtAddr-list")
    {
        auto ent_ = std::make_shared<System::LldpItems::InstItems::MgmtItems::MgmtAddrList>();
        ent_->parent = this;
        mgmtaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::MgmtItems::MgmtAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::LldpItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::get_children() const
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
    tlvsetvlan{YType::uint16, "tlvSetVlan"},
    tlvsetmgmtipv4{YType::str, "tlvSetMgmtIpv4"},
    tlvsetmgmtipv6{YType::str, "tlvSetMgmtIpv6"},
    portdesc{YType::str, "portDesc"},
    portdcbxpver{YType::enumeration, "portDCBXPVer"},
    adminst{YType::enumeration, "adminSt"}
        ,
    adj_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems>())
    , ctrlradj_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems>())
    , ifstats_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    ctrlradj_items->parent = this;
    ifstats_items->parent = this;
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
	|| tlvsetvlan.is_set
	|| tlvsetmgmtipv4.is_set
	|| tlvsetmgmtipv6.is_set
	|| portdesc.is_set
	|| portdcbxpver.is_set
	|| adminst.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (ctrlradj_items !=  nullptr && ctrlradj_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
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
	|| ydk::is_set(tlvsetvlan.yfilter)
	|| ydk::is_set(tlvsetmgmtipv4.yfilter)
	|| ydk::is_set(tlvsetmgmtipv6.yfilter)
	|| ydk::is_set(portdesc.yfilter)
	|| ydk::is_set(portdcbxpver.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (ctrlradj_items !=  nullptr && ctrlradj_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
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
    if (tlvsetvlan.is_set || is_set(tlvsetvlan.yfilter)) leaf_name_data.push_back(tlvsetvlan.get_name_leafdata());
    if (tlvsetmgmtipv4.is_set || is_set(tlvsetmgmtipv4.yfilter)) leaf_name_data.push_back(tlvsetmgmtipv4.get_name_leafdata());
    if (tlvsetmgmtipv6.is_set || is_set(tlvsetmgmtipv6.yfilter)) leaf_name_data.push_back(tlvsetmgmtipv6.get_name_leafdata());
    if (portdesc.is_set || is_set(portdesc.yfilter)) leaf_name_data.push_back(portdesc.get_name_leafdata());
    if (portdcbxpver.is_set || is_set(portdcbxpver.yfilter)) leaf_name_data.push_back(portdcbxpver.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    if(ctrlradj_items != nullptr)
    {
        _children["ctrlradj-items"] = ctrlradj_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
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
    if(value_path == "tlvSetVlan")
    {
        tlvsetvlan = value;
        tlvsetvlan.value_namespace = name_space;
        tlvsetvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvSetMgmtIpv4")
    {
        tlvsetmgmtipv4 = value;
        tlvsetmgmtipv4.value_namespace = name_space;
        tlvsetmgmtipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlvSetMgmtIpv6")
    {
        tlvsetmgmtipv6 = value;
        tlvsetmgmtipv6.value_namespace = name_space;
        tlvsetmgmtipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDesc")
    {
        portdesc = value;
        portdesc.value_namespace = name_space;
        portdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDCBXPVer")
    {
        portdcbxpver = value;
        portdcbxpver.value_namespace = name_space;
        portdcbxpver.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tlvSetVlan")
    {
        tlvsetvlan.yfilter = yfilter;
    }
    if(value_path == "tlvSetMgmtIpv4")
    {
        tlvsetmgmtipv4.yfilter = yfilter;
    }
    if(value_path == "tlvSetMgmtIpv6")
    {
        tlvsetmgmtipv6.yfilter = yfilter;
    }
    if(value_path == "portDesc")
    {
        portdesc.yfilter = yfilter;
    }
    if(value_path == "portDCBXPVer")
    {
        portdcbxpver.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "ctrlradj-items" || name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "adminRxSt" || name == "adminTxSt" || name == "sysDesc" || name == "tlvSetVlan" || name == "tlvSetMgmtIpv4" || name == "tlvSetMgmtIpv6" || name == "portDesc" || name == "portDCBXPVer" || name == "adminSt")
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

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    chassisidt{YType::uint8, "chassisIdT"},
    chassisidv{YType::str, "chassisIdV"},
    portidt{YType::uint8, "portIdT"},
    portidv{YType::str, "portIdV"},
    sysname{YType::str, "sysName"},
    sysdesc{YType::str, "sysDesc"},
    portdesc{YType::str, "portDesc"},
    capability{YType::str, "capability"},
    encap{YType::str, "enCap"},
    mgmtip{YType::str, "mgmtIp"},
    portvlan{YType::uint16, "portVlan"},
    name{YType::str, "name"}
        ,
    adjstats_items(std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| chassisidt.is_set
	|| chassisidv.is_set
	|| portidt.is_set
	|| portidv.is_set
	|| sysname.is_set
	|| sysdesc.is_set
	|| portdesc.is_set
	|| capability.is_set
	|| encap.is_set
	|| mgmtip.is_set
	|| portvlan.is_set
	|| name.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(chassisidt.yfilter)
	|| ydk::is_set(chassisidv.yfilter)
	|| ydk::is_set(portidt.yfilter)
	|| ydk::is_set(portidv.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(sysdesc.yfilter)
	|| ydk::is_set(portdesc.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mgmtip.yfilter)
	|| ydk::is_set(portvlan.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
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
    if (chassisidt.is_set || is_set(chassisidt.yfilter)) leaf_name_data.push_back(chassisidt.get_name_leafdata());
    if (chassisidv.is_set || is_set(chassisidv.yfilter)) leaf_name_data.push_back(chassisidv.get_name_leafdata());
    if (portidt.is_set || is_set(portidt.yfilter)) leaf_name_data.push_back(portidt.get_name_leafdata());
    if (portidv.is_set || is_set(portidv.yfilter)) leaf_name_data.push_back(portidv.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (sysdesc.is_set || is_set(sysdesc.yfilter)) leaf_name_data.push_back(sysdesc.get_name_leafdata());
    if (portdesc.is_set || is_set(portdesc.yfilter)) leaf_name_data.push_back(portdesc.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mgmtip.is_set || is_set(mgmtip.yfilter)) leaf_name_data.push_back(mgmtip.get_name_leafdata());
    if (portvlan.is_set || is_set(portvlan.yfilter)) leaf_name_data.push_back(portvlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjstats_items != nullptr)
    {
        _children["adjstats-items"] = adjstats_items;
    }

    return _children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(name == "adjstats-items" || name == "id" || name == "chassisIdT" || name == "chassisIdV" || name == "portIdT" || name == "portIdV" || name == "sysName" || name == "sysDesc" || name == "portDesc" || name == "capability" || name == "enCap" || name == "mgmtIp" || name == "portVlan" || name == "name")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::CtrlradjItems()
    :
    id{YType::uint16, "id"}
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
	|| (rsctrlradjeptostadjep_items !=  nullptr && rsctrlradjeptostadjep_items->has_data());
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsctrlradjeptostadjep_items != nullptr)
    {
        _children["rsctrlrAdjEpToStAdjEp-items"] = rsctrlradjeptostadjep_items;
    }

    return _children;
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsctrlrAdjEpToStAdjEp-items" || name == "id")
        return true;
    return false;
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::RsctrlrAdjEpToStAdjEpItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsctrlrAdjEpToStAdjEp-items"; yang_parent_name = "ctrlradj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::~RsctrlrAdjEpToStAdjEpItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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
    unrecogtlv{YType::uint64, "unrecogTLV"}
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
	|| unrecogtlv.is_set;
}

bool System::LldpItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(entriesaged.yfilter)
	|| ydk::is_set(errpktrcvd.yfilter)
	|| ydk::is_set(pktdiscarded.yfilter)
	|| ydk::is_set(unrecogtlv.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::LldpItems::InstItems::InststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktSent" || name == "pktRcvd" || name == "entriesAged" || name == "errPktRcvd" || name == "pktDiscarded" || name == "unrecogTLV")
        return true;
    return false;
}

System::LldpItems::InstItems::RslldpInstPolConsItems::RslldpInstPolConsItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rslldpInstPolCons-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LldpItems::InstItems::RslldpInstPolConsItems::~RslldpInstPolConsItems()
{
}

bool System::LldpItems::InstItems::RslldpInstPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LldpItems::InstItems::RslldpInstPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LldpItems::InstItems::RslldpInstPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LldpItems::InstItems::RslldpInstPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LldpItems::InstItems::RslldpInstPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LldpItems::InstItems::RslldpInstPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LldpItems::InstItems::RslldpInstPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::McpItems::McpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::McpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
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
}

bool System::McpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
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
    ctrl{YType::str, "ctrl"}
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
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
}

bool System::McpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "txFreq" || name == "loopDetectMult" || name == "key" || name == "name" || name == "adminSt" || name == "ctrl")
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

std::shared_ptr<ydk::Entity> System::McpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::McpItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::InstItems::IfItems::get_children() const
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
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
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "operSt" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orphan_items != nullptr)
    {
        _children["orphan-items"] = orphan_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::OrphanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OrphanPort-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList>();
        ent_->parent = this;
        orphanport_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::OrphanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : orphanport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "OrphanPort-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::DomItems()
    :
    id{YType::uint16, "id"},
    peerip{YType::str, "peerIp"},
    virtualip{YType::str, "virtualIp"},
    dscp{YType::uint16, "dscp"},
    sysprio{YType::uint16, "sysPrio"},
    sysmac{YType::str, "sysMac"},
    roleprio{YType::uint16, "rolePrio"},
    peergwexcludevlan{YType::str, "peerGWExcludeVLAN"},
    peergw{YType::enumeration, "peerGw"},
    grcflcnstncychck{YType::enumeration, "grcflCnstncyChck"},
    track{YType::uint16, "track"},
    autorecovery{YType::enumeration, "autoRecovery"},
    autorecoveryintvl{YType::uint32, "autoRecoveryIntvl"},
    peerswitch{YType::enumeration, "peerSwitch"},
    delayrestorevpc{YType::uint16, "delayRestoreVPC"},
    delayrestoresvi{YType::uint16, "delayRestoreSVI"},
    delaypeerlinkbringup{YType::uint16, "delayPeerLinkBringup"},
    delayrestoreorphanport{YType::uint16, "delayRestoreOrphanPort"},
    macbpdusrcver2{YType::boolean, "macBpduSrcVer2"},
    excludesvi{YType::str, "excludeSVI"},
    adminst{YType::enumeration, "adminSt"},
    fastconvergence{YType::enumeration, "fastConvergence"},
    l3peerrouter{YType::enumeration, "l3PeerRouter"},
    l3peerroutersyslog{YType::enumeration, "l3PeerRouterSyslog"},
    l3peerroutersysloginterval{YType::uint16, "l3PeerRouterSyslogInterval"},
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
	|| dscp.is_set
	|| sysprio.is_set
	|| sysmac.is_set
	|| roleprio.is_set
	|| peergwexcludevlan.is_set
	|| peergw.is_set
	|| grcflcnstncychck.is_set
	|| track.is_set
	|| autorecovery.is_set
	|| autorecoveryintvl.is_set
	|| peerswitch.is_set
	|| delayrestorevpc.is_set
	|| delayrestoresvi.is_set
	|| delaypeerlinkbringup.is_set
	|| delayrestoreorphanport.is_set
	|| macbpdusrcver2.is_set
	|| excludesvi.is_set
	|| adminst.is_set
	|| fastconvergence.is_set
	|| l3peerrouter.is_set
	|| l3peerroutersyslog.is_set
	|| l3peerroutersysloginterval.is_set
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
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(sysprio.yfilter)
	|| ydk::is_set(sysmac.yfilter)
	|| ydk::is_set(roleprio.yfilter)
	|| ydk::is_set(peergwexcludevlan.yfilter)
	|| ydk::is_set(peergw.yfilter)
	|| ydk::is_set(grcflcnstncychck.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(autorecovery.yfilter)
	|| ydk::is_set(autorecoveryintvl.yfilter)
	|| ydk::is_set(peerswitch.yfilter)
	|| ydk::is_set(delayrestorevpc.yfilter)
	|| ydk::is_set(delayrestoresvi.yfilter)
	|| ydk::is_set(delaypeerlinkbringup.yfilter)
	|| ydk::is_set(delayrestoreorphanport.yfilter)
	|| ydk::is_set(macbpdusrcver2.yfilter)
	|| ydk::is_set(excludesvi.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(fastconvergence.yfilter)
	|| ydk::is_set(l3peerrouter.yfilter)
	|| ydk::is_set(l3peerroutersyslog.yfilter)
	|| ydk::is_set(l3peerroutersysloginterval.yfilter)
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
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (sysprio.is_set || is_set(sysprio.yfilter)) leaf_name_data.push_back(sysprio.get_name_leafdata());
    if (sysmac.is_set || is_set(sysmac.yfilter)) leaf_name_data.push_back(sysmac.get_name_leafdata());
    if (roleprio.is_set || is_set(roleprio.yfilter)) leaf_name_data.push_back(roleprio.get_name_leafdata());
    if (peergwexcludevlan.is_set || is_set(peergwexcludevlan.yfilter)) leaf_name_data.push_back(peergwexcludevlan.get_name_leafdata());
    if (peergw.is_set || is_set(peergw.yfilter)) leaf_name_data.push_back(peergw.get_name_leafdata());
    if (grcflcnstncychck.is_set || is_set(grcflcnstncychck.yfilter)) leaf_name_data.push_back(grcflcnstncychck.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (autorecovery.is_set || is_set(autorecovery.yfilter)) leaf_name_data.push_back(autorecovery.get_name_leafdata());
    if (autorecoveryintvl.is_set || is_set(autorecoveryintvl.yfilter)) leaf_name_data.push_back(autorecoveryintvl.get_name_leafdata());
    if (peerswitch.is_set || is_set(peerswitch.yfilter)) leaf_name_data.push_back(peerswitch.get_name_leafdata());
    if (delayrestorevpc.is_set || is_set(delayrestorevpc.yfilter)) leaf_name_data.push_back(delayrestorevpc.get_name_leafdata());
    if (delayrestoresvi.is_set || is_set(delayrestoresvi.yfilter)) leaf_name_data.push_back(delayrestoresvi.get_name_leafdata());
    if (delaypeerlinkbringup.is_set || is_set(delaypeerlinkbringup.yfilter)) leaf_name_data.push_back(delaypeerlinkbringup.get_name_leafdata());
    if (delayrestoreorphanport.is_set || is_set(delayrestoreorphanport.yfilter)) leaf_name_data.push_back(delayrestoreorphanport.get_name_leafdata());
    if (macbpdusrcver2.is_set || is_set(macbpdusrcver2.yfilter)) leaf_name_data.push_back(macbpdusrcver2.get_name_leafdata());
    if (excludesvi.is_set || is_set(excludesvi.yfilter)) leaf_name_data.push_back(excludesvi.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (fastconvergence.is_set || is_set(fastconvergence.yfilter)) leaf_name_data.push_back(fastconvergence.get_name_leafdata());
    if (l3peerrouter.is_set || is_set(l3peerrouter.yfilter)) leaf_name_data.push_back(l3peerrouter.get_name_leafdata());
    if (l3peerroutersyslog.is_set || is_set(l3peerroutersyslog.yfilter)) leaf_name_data.push_back(l3peerroutersyslog.get_name_leafdata());
    if (l3peerroutersysloginterval.is_set || is_set(l3peerroutersysloginterval.yfilter)) leaf_name_data.push_back(l3peerroutersysloginterval.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(keepalive_items != nullptr)
    {
        _children["keepalive-items"] = keepalive_items;
    }

    if(params_items != nullptr)
    {
        _children["params-items"] = params_items;
    }

    if(rsvpcinstpolcons_items != nullptr)
    {
        _children["rsvpcInstPolCons-items"] = rsvpcinstpolcons_items;
    }

    return _children;
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
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "peerGWExcludeVLAN")
    {
        peergwexcludevlan = value;
        peergwexcludevlan.value_namespace = name_space;
        peergwexcludevlan.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "delayRestoreOrphanPort")
    {
        delayrestoreorphanport = value;
        delayrestoreorphanport.value_namespace = name_space;
        delayrestoreorphanport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macBpduSrcVer2")
    {
        macbpdusrcver2 = value;
        macbpdusrcver2.value_namespace = name_space;
        macbpdusrcver2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "l3PeerRouter")
    {
        l3peerrouter = value;
        l3peerrouter.value_namespace = name_space;
        l3peerrouter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3PeerRouterSyslog")
    {
        l3peerroutersyslog = value;
        l3peerroutersyslog.value_namespace = name_space;
        l3peerroutersyslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3PeerRouterSyslogInterval")
    {
        l3peerroutersysloginterval = value;
        l3peerroutersysloginterval.value_namespace = name_space;
        l3peerroutersysloginterval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
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
    if(value_path == "peerGWExcludeVLAN")
    {
        peergwexcludevlan.yfilter = yfilter;
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
    if(value_path == "delayRestoreOrphanPort")
    {
        delayrestoreorphanport.yfilter = yfilter;
    }
    if(value_path == "macBpduSrcVer2")
    {
        macbpdusrcver2.yfilter = yfilter;
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
    if(value_path == "l3PeerRouter")
    {
        l3peerrouter.yfilter = yfilter;
    }
    if(value_path == "l3PeerRouterSyslog")
    {
        l3peerroutersyslog.yfilter = yfilter;
    }
    if(value_path == "l3PeerRouterSyslogInterval")
    {
        l3peerroutersysloginterval.yfilter = yfilter;
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
    if(name == "if-items" || name == "keepalive-items" || name == "params-items" || name == "rsvpcInstPolCons-items" || name == "id" || name == "peerIp" || name == "virtualIp" || name == "dscp" || name == "sysPrio" || name == "sysMac" || name == "rolePrio" || name == "peerGWExcludeVLAN" || name == "peerGw" || name == "grcflCnstncyChck" || name == "track" || name == "autoRecovery" || name == "autoRecoveryIntvl" || name == "peerSwitch" || name == "delayRestoreVPC" || name == "delayRestoreSVI" || name == "delayPeerLinkBringup" || name == "delayRestoreOrphanPort" || name == "macBpduSrcVer2" || name == "excludeSVI" || name == "adminSt" || name == "fastConvergence" || name == "l3PeerRouter" || name == "l3PeerRouterSyslog" || name == "l3PeerRouterSyslogInterval" || name == "operRole" || name == "oldRole" || name == "lacpRole" || name == "summOperRole" || name == "localPrio" || name == "peerPrio" || name == "vpcPrio" || name == "localMAC" || name == "peerMAC" || name == "vpcMAC" || name == "operSt" || name == "peerVersion" || name == "batchedVpcInv" || name == "issuFromVer" || name == "issuToVer" || name == "peerSt" || name == "peerStQual" || name == "dualActiveSt" || name == "compatSt" || name == "compatQual" || name == "compatQualStr" || name == "type2CompatSt" || name == "type2CompatQual" || name == "type2CompatQualStr" || name == "name")
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(params_items != nullptr)
    {
        _children["params-items"] = params_items;
    }

    if(rsvpcconf_items != nullptr)
    {
        _children["rsvpcConf-items"] = rsvpcconf_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppParams-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList>();
        ent_->parent = this;
        appparams_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appparams_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::AppParamsList()
    :
    appid{YType::uint32, "appId"},
    locrsncode{YType::uint32, "locRsnCode"},
    locparamlen{YType::uint32, "locParamLen"},
    locparamval{YType::str, "locParamVal"},
    remrsncode{YType::uint32, "remRsnCode"},
    remparamlen{YType::uint32, "remParamLen"},
    remparamval{YType::str, "remParamVal"}
        ,
    param_items(std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems>())
{
    param_items->parent = this;

    yang_name = "AppParams-list"; yang_parent_name = "params-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::~AppParamsList()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set
	|| locrsncode.is_set
	|| locparamlen.is_set
	|| locparamval.is_set
	|| remrsncode.is_set
	|| remparamlen.is_set
	|| remparamval.is_set
	|| (param_items !=  nullptr && param_items->has_data());
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter)
	|| ydk::is_set(locrsncode.yfilter)
	|| ydk::is_set(locparamlen.yfilter)
	|| ydk::is_set(locparamval.yfilter)
	|| ydk::is_set(remrsncode.yfilter)
	|| ydk::is_set(remparamlen.yfilter)
	|| ydk::is_set(remparamval.yfilter)
	|| (param_items !=  nullptr && param_items->has_operation());
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppParams-list";
    ADD_KEY_TOKEN(appid, "appId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());
    if (locrsncode.is_set || is_set(locrsncode.yfilter)) leaf_name_data.push_back(locrsncode.get_name_leafdata());
    if (locparamlen.is_set || is_set(locparamlen.yfilter)) leaf_name_data.push_back(locparamlen.get_name_leafdata());
    if (locparamval.is_set || is_set(locparamval.yfilter)) leaf_name_data.push_back(locparamval.get_name_leafdata());
    if (remrsncode.is_set || is_set(remrsncode.yfilter)) leaf_name_data.push_back(remrsncode.get_name_leafdata());
    if (remparamlen.is_set || is_set(remparamlen.yfilter)) leaf_name_data.push_back(remparamlen.get_name_leafdata());
    if (remparamval.is_set || is_set(remparamval.yfilter)) leaf_name_data.push_back(remparamval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "param-items")
    {
        if(param_items == nullptr)
        {
            param_items = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems>();
        }
        return param_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(param_items != nullptr)
    {
        _children["param-items"] = param_items;
    }

    return _children;
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appId")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locRsnCode")
    {
        locrsncode = value;
        locrsncode.value_namespace = name_space;
        locrsncode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locParamLen")
    {
        locparamlen = value;
        locparamlen.value_namespace = name_space;
        locparamlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locParamVal")
    {
        locparamval = value;
        locparamval.value_namespace = name_space;
        locparamval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remRsnCode")
    {
        remrsncode = value;
        remrsncode.value_namespace = name_space;
        remrsncode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remParamLen")
    {
        remparamlen = value;
        remparamlen.value_namespace = name_space;
        remparamlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remParamVal")
    {
        remparamval = value;
        remparamval.value_namespace = name_space;
        remparamval.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appId")
    {
        appid.yfilter = yfilter;
    }
    if(value_path == "locRsnCode")
    {
        locrsncode.yfilter = yfilter;
    }
    if(value_path == "locParamLen")
    {
        locparamlen.yfilter = yfilter;
    }
    if(value_path == "locParamVal")
    {
        locparamval.yfilter = yfilter;
    }
    if(value_path == "remRsnCode")
    {
        remrsncode.yfilter = yfilter;
    }
    if(value_path == "remParamLen")
    {
        remparamlen.yfilter = yfilter;
    }
    if(value_path == "remParamVal")
    {
        remparamval.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "param-items" || name == "appId" || name == "locRsnCode" || name == "locParamLen" || name == "locParamVal" || name == "remRsnCode" || name == "remParamLen" || name == "remParamVal")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::ParamItems()
    :
    appparaminfo_list(this, {"paramname"})
{

    yang_name = "param-items"; yang_parent_name = "AppParams-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::~ParamItems()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appparaminfo_list.len(); index++)
    {
        if(appparaminfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::has_operation() const
{
    for (std::size_t index=0; index<appparaminfo_list.len(); index++)
    {
        if(appparaminfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "param-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppParamInfo-list")
    {
        auto ent_ = std::make_shared<System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList>();
        ent_->parent = this;
        appparaminfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appparaminfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppParamInfo-list")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::AppParamInfoList()
    :
    paramname{YType::str, "paramName"},
    paramtype{YType::enumeration, "paramType"},
    locparamval{YType::str, "locParamVal"},
    remparamval{YType::str, "remParamVal"}
{

    yang_name = "AppParamInfo-list"; yang_parent_name = "param-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::~AppParamInfoList()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::has_data() const
{
    if (is_presence_container) return true;
    return paramname.is_set
	|| paramtype.is_set
	|| locparamval.is_set
	|| remparamval.is_set;
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paramname.yfilter)
	|| ydk::is_set(paramtype.yfilter)
	|| ydk::is_set(locparamval.yfilter)
	|| ydk::is_set(remparamval.yfilter);
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppParamInfo-list";
    ADD_KEY_TOKEN(paramname, "paramName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paramname.is_set || is_set(paramname.yfilter)) leaf_name_data.push_back(paramname.get_name_leafdata());
    if (paramtype.is_set || is_set(paramtype.yfilter)) leaf_name_data.push_back(paramtype.get_name_leafdata());
    if (locparamval.is_set || is_set(locparamval.yfilter)) leaf_name_data.push_back(locparamval.get_name_leafdata());
    if (remparamval.is_set || is_set(remparamval.yfilter)) leaf_name_data.push_back(remparamval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paramName")
    {
        paramname = value;
        paramname.value_namespace = name_space;
        paramname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paramType")
    {
        paramtype = value;
        paramtype.value_namespace = name_space;
        paramtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locParamVal")
    {
        locparamval = value;
        locparamval.value_namespace = name_space;
        locparamval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remParamVal")
    {
        remparamval = value;
        remparamval.value_namespace = name_space;
        remparamval.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paramName")
    {
        paramname.yfilter = yfilter;
    }
    if(value_path == "paramType")
    {
        paramtype.yfilter = yfilter;
    }
    if(value_path == "locParamVal")
    {
        locparamval.yfilter = yfilter;
    }
    if(value_path == "remParamVal")
    {
        remparamval.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paramName" || name == "paramType" || name == "locParamVal" || name == "remParamVal")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::RsvpcConfItems()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvpcConf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::~RsvpcConfItems()
{
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpcConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
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

void System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
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

bool System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::KeepaliveItems()
    :
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    destip{YType::str, "destIp"},
    udpport{YType::uint32, "udpPort"},
    interval{YType::uint32, "interval"},
    timeout{YType::uint32, "timeout"},
    toscfgtype{YType::enumeration, "tosCfgType"},
    tosbyte{YType::uint8, "tosByte"},
    tosvalue{YType::uint8, "tosValue"},
    tostype{YType::enumeration, "tosType"},
    precvalue{YType::uint8, "precValue"},
    prectype{YType::enumeration, "precType"},
    flushtout{YType::uint32, "flushTout"},
    operst{YType::str, "operSt"},
    sendif{YType::str, "sendIf"},
    recvif{YType::str, "recvIf"},
    sendtime{YType::str, "sendTime"},
    recvtime{YType::str, "recvTime"},
    firstrecvtime{YType::str, "firstRecvTime"},
    name{YType::str, "name"}
        ,
    peerlink_items(std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems>())
{
    peerlink_items->parent = this;

    yang_name = "keepalive-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcItems::InstItems::DomItems::KeepaliveItems::~KeepaliveItems()
{
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| srcip.is_set
	|| destip.is_set
	|| udpport.is_set
	|| interval.is_set
	|| timeout.is_set
	|| toscfgtype.is_set
	|| tosbyte.is_set
	|| tosvalue.is_set
	|| tostype.is_set
	|| precvalue.is_set
	|| prectype.is_set
	|| flushtout.is_set
	|| operst.is_set
	|| sendif.is_set
	|| recvif.is_set
	|| sendtime.is_set
	|| recvtime.is_set
	|| firstrecvtime.is_set
	|| name.is_set
	|| (peerlink_items !=  nullptr && peerlink_items->has_data());
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(udpport.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(toscfgtype.yfilter)
	|| ydk::is_set(tosbyte.yfilter)
	|| ydk::is_set(tosvalue.yfilter)
	|| ydk::is_set(tostype.yfilter)
	|| ydk::is_set(precvalue.yfilter)
	|| ydk::is_set(prectype.yfilter)
	|| ydk::is_set(flushtout.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(sendif.yfilter)
	|| ydk::is_set(recvif.yfilter)
	|| ydk::is_set(sendtime.yfilter)
	|| ydk::is_set(recvtime.yfilter)
	|| ydk::is_set(firstrecvtime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (peerlink_items !=  nullptr && peerlink_items->has_operation());
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpc-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcItems::InstItems::DomItems::KeepaliveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcItems::InstItems::DomItems::KeepaliveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (udpport.is_set || is_set(udpport.yfilter)) leaf_name_data.push_back(udpport.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (toscfgtype.is_set || is_set(toscfgtype.yfilter)) leaf_name_data.push_back(toscfgtype.get_name_leafdata());
    if (tosbyte.is_set || is_set(tosbyte.yfilter)) leaf_name_data.push_back(tosbyte.get_name_leafdata());
    if (tosvalue.is_set || is_set(tosvalue.yfilter)) leaf_name_data.push_back(tosvalue.get_name_leafdata());
    if (tostype.is_set || is_set(tostype.yfilter)) leaf_name_data.push_back(tostype.get_name_leafdata());
    if (precvalue.is_set || is_set(precvalue.yfilter)) leaf_name_data.push_back(precvalue.get_name_leafdata());
    if (prectype.is_set || is_set(prectype.yfilter)) leaf_name_data.push_back(prectype.get_name_leafdata());
    if (flushtout.is_set || is_set(flushtout.yfilter)) leaf_name_data.push_back(flushtout.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (sendif.is_set || is_set(sendif.yfilter)) leaf_name_data.push_back(sendif.get_name_leafdata());
    if (recvif.is_set || is_set(recvif.yfilter)) leaf_name_data.push_back(recvif.get_name_leafdata());
    if (sendtime.is_set || is_set(sendtime.yfilter)) leaf_name_data.push_back(sendtime.get_name_leafdata());
    if (recvtime.is_set || is_set(recvtime.yfilter)) leaf_name_data.push_back(recvtime.get_name_leafdata());
    if (firstrecvtime.is_set || is_set(firstrecvtime.yfilter)) leaf_name_data.push_back(firstrecvtime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcItems::InstItems::DomItems::KeepaliveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peerlink-items")
    {
        if(peerlink_items == nullptr)
        {
            peerlink_items = std::make_shared<System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems>();
        }
        return peerlink_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcItems::InstItems::DomItems::KeepaliveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peerlink_items != nullptr)
    {
        _children["peerlink-items"] = peerlink_items;
    }

    return _children;
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "destIp")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpPort")
    {
        udpport = value;
        udpport.value_namespace = name_space;
        udpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosCfgType")
    {
        toscfgtype = value;
        toscfgtype.value_namespace = name_space;
        toscfgtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosByte")
    {
        tosbyte = value;
        tosbyte.value_namespace = name_space;
        tosbyte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosValue")
    {
        tosvalue = value;
        tosvalue.value_namespace = name_space;
        tosvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosType")
    {
        tostype = value;
        tostype.value_namespace = name_space;
        tostype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precValue")
    {
        precvalue = value;
        precvalue.value_namespace = name_space;
        precvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precType")
    {
        prectype = value;
        prectype.value_namespace = name_space;
        prectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushTout")
    {
        flushtout = value;
        flushtout.value_namespace = name_space;
        flushtout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendIf")
    {
        sendif = value;
        sendif.value_namespace = name_space;
        sendif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvIf")
    {
        recvif = value;
        recvif.value_namespace = name_space;
        recvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendTime")
    {
        sendtime = value;
        sendtime.value_namespace = name_space;
        sendtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvTime")
    {
        recvtime = value;
        recvtime.value_namespace = name_space;
        recvtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstRecvTime")
    {
        firstrecvtime = value;
        firstrecvtime.value_namespace = name_space;
        firstrecvtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcItems::InstItems::DomItems::KeepaliveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "destIp")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "udpPort")
    {
        udpport.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tosCfgType")
    {
        toscfgtype.yfilter = yfilter;
    }
    if(value_path == "tosByte")
    {
        tosbyte.yfilter = yfilter;
    }
    if(value_path == "tosValue")
    {
        tosvalue.yfilter = yfilter;
    }
    if(value_path == "tosType")
    {
        tostype.yfilter = yfilter;
    }
    if(value_path == "precValue")
    {
        precvalue.yfilter = yfilter;
    }
    if(value_path == "precType")
    {
        prectype.yfilter = yfilter;
    }
    if(value_path == "flushTout")
    {
        flushtout.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "sendIf")
    {
        sendif.yfilter = yfilter;
    }
    if(value_path == "recvIf")
    {
        recvif.yfilter = yfilter;
    }
    if(value_path == "sendTime")
    {
        sendtime.yfilter = yfilter;
    }
    if(value_path == "recvTime")
    {
        recvtime.yfilter = yfilter;
    }
    if(value_path == "firstRecvTime")
    {
        firstrecvtime.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VpcItems::InstItems::DomItems::KeepaliveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peerlink-items" || name == "vrf" || name == "srcIp" || name == "destIp" || name == "udpPort" || name == "interval" || name == "timeout" || name == "tosCfgType" || name == "tosByte" || name == "tosValue" || name == "tosType" || name == "precValue" || name == "precType" || name == "flushTout" || name == "operSt" || name == "sendIf" || name == "recvIf" || name == "sendTime" || name == "recvTime" || name == "firstRecvTime" || name == "name")
        return true;
    return false;
}


}
}

