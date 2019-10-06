
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_32.hpp"
#include "Cisco_NX_OS_device_33.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::RsvlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::~RsvlanEppAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::VxlanItems::VxlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vxlan-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VxlanItems::~VxlanItems()
{
}

bool System::BdItems::VxlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VxlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList>();
        ent_->parent = this;
        cktep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cktep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    mcastencap{YType::str, "mcastEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"},
    enfpref{YType::enumeration, "enfPref"},
    pctag{YType::uint32, "pcTag"},
    qosprio{YType::enumeration, "qosPrio"},
    epgdn{YType::str, "epgDn"}
        ,
    db_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvxlaneppatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems>())
{
    db_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvxlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vxlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VxlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| mcastencap.is_set
	|| name.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| enfpref.is_set
	|| pctag.is_set
	|| qosprio.is_set
	|| epgdn.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(enfpref.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(qosprio.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vxlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VxlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (enfpref.is_set || is_set(enfpref.yfilter)) leaf_name_data.push_back(enfpref.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (qosprio.is_set || is_set(qosprio.yfilter)) leaf_name_data.push_back(qosprio.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvxlanEppAtt-items")
    {
        if(rsvxlaneppatt_items == nullptr)
        {
            rsvxlaneppatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems>();
        }
        return rsvxlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        _children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(rsvxlaneppatt_items != nullptr)
    {
        _children["rsvxlanEppAtt-items"] = rsvxlaneppatt_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enfPref")
    {
        enfpref = value;
        enfpref.value_namespace = name_space;
        enfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPrio")
    {
        qosprio = value;
        qosprio.value_namespace = name_space;
        qosprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "enfPref")
    {
        enfpref.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "qosPrio")
    {
        qosprio.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "rtfvDomIfConn-items" || name == "rsvxlanEppAtt-items" || name == "encap" || name == "mcastEncap" || name == "name" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        ent_->parent = this;
        rtfvdomifconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdomifconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::RsvxlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvxlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::~RsvxlanEppAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvxlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::ResvlanItems::ResvlanItems()
    :
    sysvlan{YType::uint16, "sysVlan"},
    currentmin{YType::uint16, "currentmin"},
    currentmax{YType::uint16, "currentmax"}
{

    yang_name = "resvlan-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::ResvlanItems::~ResvlanItems()
{
}

bool System::BdItems::ResvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return sysvlan.is_set
	|| currentmin.is_set
	|| currentmax.is_set;
}

bool System::BdItems::ResvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysvlan.yfilter)
	|| ydk::is_set(currentmin.yfilter)
	|| ydk::is_set(currentmax.yfilter);
}

std::string System::BdItems::ResvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::ResvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::ResvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysvlan.is_set || is_set(sysvlan.yfilter)) leaf_name_data.push_back(sysvlan.get_name_leafdata());
    if (currentmin.is_set || is_set(currentmin.yfilter)) leaf_name_data.push_back(currentmin.get_name_leafdata());
    if (currentmax.is_set || is_set(currentmax.yfilter)) leaf_name_data.push_back(currentmax.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::ResvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::ResvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::ResvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysVlan")
    {
        sysvlan = value;
        sysvlan.value_namespace = name_space;
        sysvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currentmin")
    {
        currentmin = value;
        currentmin.value_namespace = name_space;
        currentmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currentmax")
    {
        currentmax = value;
        currentmax.value_namespace = name_space;
        currentmax.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::ResvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysVlan")
    {
        sysvlan.yfilter = yfilter;
    }
    if(value_path == "currentmin")
    {
        currentmin.yfilter = yfilter;
    }
    if(value_path == "currentmax")
    {
        currentmax.yfilter = yfilter;
    }
}

bool System::BdItems::ResvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysVlan" || name == "currentmin" || name == "currentmax")
        return true;
    return false;
}

System::TemplateTableItems::TemplateTableItems()
    :
    templateentry_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems>())
{
    templateentry_items->parent = this;

    yang_name = "templateTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::~TemplateTableItems()
{
}

bool System::TemplateTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (templateentry_items !=  nullptr && templateentry_items->has_data());
}

bool System::TemplateTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (templateentry_items !=  nullptr && templateentry_items->has_operation());
}

std::string System::TemplateTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templateEntry-items")
    {
        if(templateentry_items == nullptr)
        {
            templateentry_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems>();
        }
        return templateentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(templateentry_items != nullptr)
    {
        _children["templateEntry-items"] = templateentry_items;
    }

    return _children;
}

void System::TemplateTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templateEntry-items")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryItems()
    :
    templateentry_list(this, {"name"})
{

    yang_name = "templateEntry-items"; yang_parent_name = "templateTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::TemplateEntryItems::~TemplateEntryItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<templateentry_list.len(); index++)
    {
        if(templateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TemplateTableItems::TemplateEntryItems::has_operation() const
{
    for (std::size_t index=0; index<templateentry_list.len(); index++)
    {
        if(templateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/templateTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::TemplateEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TemplateEntry-list")
    {
        auto ent_ = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList>();
        ent_->parent = this;
        templateentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : templateentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::TemplateEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::TemplateEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TemplateEntry-list")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::TemplateEntryList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    refcount{YType::uint32, "refCount"}
        ,
    optable_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems>())
{
    optable_items->parent = this;

    yang_name = "TemplateEntry-list"; yang_parent_name = "templateEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::~TemplateEntryList()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| refcount.is_set
	|| (optable_items !=  nullptr && optable_items->has_data());
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| (optable_items !=  nullptr && optable_items->has_operation());
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/templateTable-items/templateEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TemplateEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opTable-items")
    {
        if(optable_items == nullptr)
        {
            optable_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems>();
        }
        return optable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(optable_items != nullptr)
    {
        _children["opTable-items"] = optable_items;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opTable-items" || name == "name" || name == "description" || name == "refCount")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpTableItems()
    :
    description{YType::str, "description"}
        ,
    opentry_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems>())
{
    opentry_items->parent = this;

    yang_name = "opTable-items"; yang_parent_name = "TemplateEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::~OpTableItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (opentry_items !=  nullptr && opentry_items->has_data());
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (opentry_items !=  nullptr && opentry_items->has_operation());
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opEntry-items")
    {
        if(opentry_items == nullptr)
        {
            opentry_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems>();
        }
        return opentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(opentry_items != nullptr)
    {
        _children["opEntry-items"] = opentry_items;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opEntry-items" || name == "description")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryItems()
    :
    opentry_list(this, {"operationtype"})
{

    yang_name = "opEntry-items"; yang_parent_name = "opTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::~OpEntryItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opentry_list.len(); index++)
    {
        if(opentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_operation() const
{
    for (std::size_t index=0; index<opentry_list.len(); index++)
    {
        if(opentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OpEntry-list")
    {
        auto ent_ = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList>();
        ent_->parent = this;
        opentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OpEntry-list")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::OpEntryList()
    :
    operationtype{YType::enumeration, "operationType"},
    templatetype{YType::enumeration, "templateType"},
    substitutestring{YType::str, "substituteString"},
    configstring{YType::str, "configString"},
    description{YType::str, "description"},
    refcount{YType::uint32, "refCount"}
{

    yang_name = "OpEntry-list"; yang_parent_name = "opEntry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::~OpEntryList()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_data() const
{
    if (is_presence_container) return true;
    return operationtype.is_set
	|| templatetype.is_set
	|| substitutestring.is_set
	|| configstring.is_set
	|| description.is_set
	|| refcount.is_set;
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operationtype.yfilter)
	|| ydk::is_set(templatetype.yfilter)
	|| ydk::is_set(substitutestring.yfilter)
	|| ydk::is_set(configstring.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(refcount.yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OpEntry-list";
    ADD_KEY_TOKEN(operationtype, "operationType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operationtype.is_set || is_set(operationtype.yfilter)) leaf_name_data.push_back(operationtype.get_name_leafdata());
    if (templatetype.is_set || is_set(templatetype.yfilter)) leaf_name_data.push_back(templatetype.get_name_leafdata());
    if (substitutestring.is_set || is_set(substitutestring.yfilter)) leaf_name_data.push_back(substitutestring.get_name_leafdata());
    if (configstring.is_set || is_set(configstring.yfilter)) leaf_name_data.push_back(configstring.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operationType")
    {
        operationtype = value;
        operationtype.value_namespace = name_space;
        operationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateType")
    {
        templatetype = value;
        templatetype.value_namespace = name_space;
        templatetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "substituteString")
    {
        substitutestring = value;
        substitutestring.value_namespace = name_space;
        substitutestring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configString")
    {
        configstring = value;
        configstring.value_namespace = name_space;
        configstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operationType")
    {
        operationtype.yfilter = yfilter;
    }
    if(value_path == "templateType")
    {
        templatetype.yfilter = yfilter;
    }
    if(value_path == "substituteString")
    {
        substitutestring.yfilter = yfilter;
    }
    if(value_path == "configString")
    {
        configstring.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operationType" || name == "templateType" || name == "substituteString" || name == "configString" || name == "description" || name == "refCount")
        return true;
    return false;
}

System::FcItems::FcItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    vfc_items(std::make_shared<System::FcItems::VfcItems>())
{
    vfc_items->parent = this;

    yang_name = "fc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::~FcItems()
{
}

bool System::FcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (vfc_items !=  nullptr && vfc_items->has_data());
}

bool System::FcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (vfc_items !=  nullptr && vfc_items->has_operation());
}

std::string System::FcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfc-items")
    {
        if(vfc_items == nullptr)
        {
            vfc_items = std::make_shared<System::FcItems::VfcItems>();
        }
        return vfc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vfc_items != nullptr)
    {
        _children["vfc-items"] = vfc_items;
    }

    return _children;
}

void System::FcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfc-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcItems()
    :
    vfcif_list(this, {"id"})
{

    yang_name = "vfc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::VfcItems::~VfcItems()
{
}

bool System::FcItems::VfcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::has_operation() const
{
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::VfcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcIf-list")
    {
        auto ent_ = std::make_shared<System::FcItems::VfcItems::VfcIfList>();
        ent_->parent = this;
        vfcif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfcif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcItems::VfcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcIf-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::VfcIfList()
    :
    id{YType::str, "id"},
    boundif{YType::str, "boundIf"},
    boundmac{YType::str, "boundMac"},
    disablefka{YType::enumeration, "disableFka"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    mode{YType::enumeration, "mode"},
    trunkmode{YType::enumeration, "trunkMode"},
    trunkvsans{YType::str, "trunkVsans"},
    operportvsan{YType::uint32, "operPortVsan"},
    opermode{YType::enumeration, "operMode"},
    operst{YType::str, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    opertrunkmode{YType::enumeration, "operTrunkMode"},
    trunkportupvsanbmp{YType::str, "trunkPortUpVsanBmp"},
    trunkisolatedvsanbmp{YType::str, "trunkIsolatedVsanBmp"},
    allowedvsanbmp{YType::str, "allowedVsanBmp"},
    portwwn{YType::str, "portWwn"},
    lastlinkstchg{YType::str, "lastLinkStChg"}
        ,
    rssrvextifmap_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems>())
    , rtvsanifmap_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems>())
    , rtvrfmbr_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems>())
{
    rssrvextifmap_items->parent = this;
    rtvsanifmap_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "VfcIf-list"; yang_parent_name = "vfc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::VfcItems::VfcIfList::~VfcIfList()
{
}

bool System::FcItems::VfcItems::VfcIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| boundif.is_set
	|| boundmac.is_set
	|| disablefka.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| mode.is_set
	|| trunkmode.is_set
	|| trunkvsans.is_set
	|| operportvsan.is_set
	|| opermode.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| opertrunkmode.is_set
	|| trunkportupvsanbmp.is_set
	|| trunkisolatedvsanbmp.is_set
	|| allowedvsanbmp.is_set
	|| portwwn.is_set
	|| lastlinkstchg.is_set
	|| (rssrvextifmap_items !=  nullptr && rssrvextifmap_items->has_data())
	|| (rtvsanifmap_items !=  nullptr && rtvsanifmap_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::FcItems::VfcItems::VfcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(boundif.yfilter)
	|| ydk::is_set(boundmac.yfilter)
	|| ydk::is_set(disablefka.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(trunkmode.yfilter)
	|| ydk::is_set(trunkvsans.yfilter)
	|| ydk::is_set(operportvsan.yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(opertrunkmode.yfilter)
	|| ydk::is_set(trunkportupvsanbmp.yfilter)
	|| ydk::is_set(trunkisolatedvsanbmp.yfilter)
	|| ydk::is_set(allowedvsanbmp.yfilter)
	|| ydk::is_set(portwwn.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter)
	|| (rssrvextifmap_items !=  nullptr && rssrvextifmap_items->has_operation())
	|| (rtvsanifmap_items !=  nullptr && rtvsanifmap_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::FcItems::VfcItems::VfcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fc-items/vfc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::VfcItems::VfcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (boundif.is_set || is_set(boundif.yfilter)) leaf_name_data.push_back(boundif.get_name_leafdata());
    if (boundmac.is_set || is_set(boundmac.yfilter)) leaf_name_data.push_back(boundmac.get_name_leafdata());
    if (disablefka.is_set || is_set(disablefka.yfilter)) leaf_name_data.push_back(disablefka.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (trunkmode.is_set || is_set(trunkmode.yfilter)) leaf_name_data.push_back(trunkmode.get_name_leafdata());
    if (trunkvsans.is_set || is_set(trunkvsans.yfilter)) leaf_name_data.push_back(trunkvsans.get_name_leafdata());
    if (operportvsan.is_set || is_set(operportvsan.yfilter)) leaf_name_data.push_back(operportvsan.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (opertrunkmode.is_set || is_set(opertrunkmode.yfilter)) leaf_name_data.push_back(opertrunkmode.get_name_leafdata());
    if (trunkportupvsanbmp.is_set || is_set(trunkportupvsanbmp.yfilter)) leaf_name_data.push_back(trunkportupvsanbmp.get_name_leafdata());
    if (trunkisolatedvsanbmp.is_set || is_set(trunkisolatedvsanbmp.yfilter)) leaf_name_data.push_back(trunkisolatedvsanbmp.get_name_leafdata());
    if (allowedvsanbmp.is_set || is_set(allowedvsanbmp.yfilter)) leaf_name_data.push_back(allowedvsanbmp.get_name_leafdata());
    if (portwwn.is_set || is_set(portwwn.yfilter)) leaf_name_data.push_back(portwwn.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssrvExtIfMap-items")
    {
        if(rssrvextifmap_items == nullptr)
        {
            rssrvextifmap_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems>();
        }
        return rssrvextifmap_items;
    }

    if(child_yang_name == "rtVsanIfMap-items")
    {
        if(rtvsanifmap_items == nullptr)
        {
            rtvsanifmap_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems>();
        }
        return rtvsanifmap_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rssrvextifmap_items != nullptr)
    {
        _children["rssrvExtIfMap-items"] = rssrvextifmap_items;
    }

    if(rtvsanifmap_items != nullptr)
    {
        _children["rtVsanIfMap-items"] = rtvsanifmap_items;
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

void System::FcItems::VfcItems::VfcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundIf")
    {
        boundif = value;
        boundif.value_namespace = name_space;
        boundif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundMac")
    {
        boundmac = value;
        boundmac.value_namespace = name_space;
        boundmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableFka")
    {
        disablefka = value;
        disablefka.value_namespace = name_space;
        disablefka.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkMode")
    {
        trunkmode = value;
        trunkmode.value_namespace = name_space;
        trunkmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVsans")
    {
        trunkvsans = value;
        trunkvsans.value_namespace = name_space;
        trunkvsans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortVsan")
    {
        operportvsan = value;
        operportvsan.value_namespace = name_space;
        operportvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operTrunkMode")
    {
        opertrunkmode = value;
        opertrunkmode.value_namespace = name_space;
        opertrunkmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkPortUpVsanBmp")
    {
        trunkportupvsanbmp = value;
        trunkportupvsanbmp.value_namespace = name_space;
        trunkportupvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkIsolatedVsanBmp")
    {
        trunkisolatedvsanbmp = value;
        trunkisolatedvsanbmp.value_namespace = name_space;
        trunkisolatedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp = value;
        allowedvsanbmp.value_namespace = name_space;
        allowedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portWwn")
    {
        portwwn = value;
        portwwn.value_namespace = name_space;
        portwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "boundIf")
    {
        boundif.yfilter = yfilter;
    }
    if(value_path == "boundMac")
    {
        boundmac.yfilter = yfilter;
    }
    if(value_path == "disableFka")
    {
        disablefka.yfilter = yfilter;
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "trunkMode")
    {
        trunkmode.yfilter = yfilter;
    }
    if(value_path == "trunkVsans")
    {
        trunkvsans.yfilter = yfilter;
    }
    if(value_path == "operPortVsan")
    {
        operportvsan.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operTrunkMode")
    {
        opertrunkmode.yfilter = yfilter;
    }
    if(value_path == "trunkPortUpVsanBmp")
    {
        trunkportupvsanbmp.yfilter = yfilter;
    }
    if(value_path == "trunkIsolatedVsanBmp")
    {
        trunkisolatedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "portWwn")
    {
        portwwn.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssrvExtIfMap-items" || name == "rtVsanIfMap-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "boundIf" || name == "boundMac" || name == "disableFka" || name == "name" || name == "descr" || name == "adminSt" || name == "mode" || name == "trunkMode" || name == "trunkVsans" || name == "operPortVsan" || name == "operMode" || name == "operSt" || name == "operStQual" || name == "operTrunkMode" || name == "trunkPortUpVsanBmp" || name == "trunkIsolatedVsanBmp" || name == "allowedVsanBmp" || name == "portWwn" || name == "lastLinkStChg")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RssrvExtIfMapItems()
    :
    rssrvextifmap_list(this, {"tdn"})
{

    yang_name = "rssrvExtIfMap-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::~RssrvExtIfMapItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rssrvextifmap_list.len(); index++)
    {
        if(rssrvextifmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_operation() const
{
    for (std::size_t index=0; index<rssrvextifmap_list.len(); index++)
    {
        if(rssrvextifmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssrvExtIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsSrvExtIfMap-list")
    {
        auto ent_ = std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList>();
        ent_->parent = this;
        rssrvextifmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rssrvextifmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsSrvExtIfMap-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::RsSrvExtIfMapList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    configstatus{YType::enumeration, "configStatus"}
{

    yang_name = "RsSrvExtIfMap-list"; yang_parent_name = "rssrvExtIfMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::~RsSrvExtIfMapList()
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| configstatus.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsSrvExtIfMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "configStatus")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::RtVsanIfMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtVsanIfMap-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::~RtVsanIfMapItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtVsanIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_children() const
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

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::FcoeItems::FcoeItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::FcoeItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "fcoe-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::~FcoeItems()
{
}

bool System::FcoeItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::FcoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::FcoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcoe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::FcoeItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::FcoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcoeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FcoeItems::InstItems::InstItems()
    :
    fipkaintvl{YType::uint32, "fipKaIntvl"},
    enablefex{YType::enumeration, "enableFex"},
    veloopback{YType::enumeration, "veLoopback"},
    fcmap{YType::uint32, "fcMap"},
    fcfprio{YType::uint32, "fcfPrio"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    vfc_items(std::make_shared<System::FcoeItems::InstItems::VfcItems>())
{
    vfc_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "fcoe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::~InstItems()
{
}

bool System::FcoeItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return fipkaintvl.is_set
	|| enablefex.is_set
	|| veloopback.is_set
	|| fcmap.is_set
	|| fcfprio.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (vfc_items !=  nullptr && vfc_items->has_data());
}

bool System::FcoeItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fipkaintvl.yfilter)
	|| ydk::is_set(enablefex.yfilter)
	|| ydk::is_set(veloopback.yfilter)
	|| ydk::is_set(fcmap.yfilter)
	|| ydk::is_set(fcfprio.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (vfc_items !=  nullptr && vfc_items->has_operation());
}

std::string System::FcoeItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fipkaintvl.is_set || is_set(fipkaintvl.yfilter)) leaf_name_data.push_back(fipkaintvl.get_name_leafdata());
    if (enablefex.is_set || is_set(enablefex.yfilter)) leaf_name_data.push_back(enablefex.get_name_leafdata());
    if (veloopback.is_set || is_set(veloopback.yfilter)) leaf_name_data.push_back(veloopback.get_name_leafdata());
    if (fcmap.is_set || is_set(fcmap.yfilter)) leaf_name_data.push_back(fcmap.get_name_leafdata());
    if (fcfprio.is_set || is_set(fcfprio.yfilter)) leaf_name_data.push_back(fcfprio.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfc-items")
    {
        if(vfc_items == nullptr)
        {
            vfc_items = std::make_shared<System::FcoeItems::InstItems::VfcItems>();
        }
        return vfc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vfc_items != nullptr)
    {
        _children["vfc-items"] = vfc_items;
    }

    return _children;
}

void System::FcoeItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl = value;
        fipkaintvl.value_namespace = name_space;
        fipkaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableFex")
    {
        enablefex = value;
        enablefex.value_namespace = name_space;
        enablefex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "veLoopback")
    {
        veloopback = value;
        veloopback.value_namespace = name_space;
        veloopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcMap")
    {
        fcmap = value;
        fcmap.value_namespace = name_space;
        fcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio = value;
        fcfprio.value_namespace = name_space;
        fcfprio.value_namespace_prefix = name_space_prefix;
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

void System::FcoeItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl.yfilter = yfilter;
    }
    if(value_path == "enableFex")
    {
        enablefex.yfilter = yfilter;
    }
    if(value_path == "veLoopback")
    {
        veloopback.yfilter = yfilter;
    }
    if(value_path == "fcMap")
    {
        fcmap.yfilter = yfilter;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio.yfilter = yfilter;
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

bool System::FcoeItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfc-items" || name == "fipKaIntvl" || name == "enableFex" || name == "veLoopback" || name == "fcMap" || name == "fcfPrio" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcItems()
    :
    vfcif_list(this, {"id"})
{

    yang_name = "vfc-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::VfcItems::~VfcItems()
{
}

bool System::FcoeItems::InstItems::VfcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcoeItems::InstItems::VfcItems::has_operation() const
{
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::VfcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcIf-list")
    {
        auto ent_ = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList>();
        ent_->parent = this;
        vfcif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfcif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcoeItems::InstItems::VfcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcoeItems::InstItems::VfcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcoeItems::InstItems::VfcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcIf-list")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::VfcIfList()
    :
    id{YType::str, "id"},
    peermac{YType::str, "peerMac"},
    peerwwn{YType::str, "peerWwn"},
    fipkaintvl{YType::uint32, "fipKaIntvl"},
    fcfprio{YType::uint32, "fcfPrio"},
    mode{YType::str, "mode"}
        ,
    fcid_items(std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems>())
{
    fcid_items->parent = this;

    yang_name = "VfcIf-list"; yang_parent_name = "vfc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::~VfcIfList()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| peermac.is_set
	|| peerwwn.is_set
	|| fipkaintvl.is_set
	|| fcfprio.is_set
	|| mode.is_set
	|| (fcid_items !=  nullptr && fcid_items->has_data());
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peermac.yfilter)
	|| ydk::is_set(peerwwn.yfilter)
	|| ydk::is_set(fipkaintvl.yfilter)
	|| ydk::is_set(fcfprio.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (fcid_items !=  nullptr && fcid_items->has_operation());
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/inst-items/vfc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peermac.is_set || is_set(peermac.yfilter)) leaf_name_data.push_back(peermac.get_name_leafdata());
    if (peerwwn.is_set || is_set(peerwwn.yfilter)) leaf_name_data.push_back(peerwwn.get_name_leafdata());
    if (fipkaintvl.is_set || is_set(fipkaintvl.yfilter)) leaf_name_data.push_back(fipkaintvl.get_name_leafdata());
    if (fcfprio.is_set || is_set(fcfprio.yfilter)) leaf_name_data.push_back(fcfprio.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fcid-items")
    {
        if(fcid_items == nullptr)
        {
            fcid_items = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems>();
        }
        return fcid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fcid_items != nullptr)
    {
        _children["fcid-items"] = fcid_items;
    }

    return _children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerMac")
    {
        peermac = value;
        peermac.value_namespace = name_space;
        peermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerWwn")
    {
        peerwwn = value;
        peerwwn.value_namespace = name_space;
        peerwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl = value;
        fipkaintvl.value_namespace = name_space;
        fipkaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio = value;
        fcfprio.value_namespace = name_space;
        fcfprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peerMac")
    {
        peermac.yfilter = yfilter;
    }
    if(value_path == "peerWwn")
    {
        peerwwn.yfilter = yfilter;
    }
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl.yfilter = yfilter;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcid-items" || name == "id" || name == "peerMac" || name == "peerWwn" || name == "fipKaIntvl" || name == "fcfPrio" || name == "mode")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::FcidItems()
    :
    vfclogin_list(this, {"fcid"})
{

    yang_name = "fcid-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::~FcidItems()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfclogin_list.len(); index++)
    {
        if(vfclogin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_operation() const
{
    for (std::size_t index=0; index<vfclogin_list.len(); index++)
    {
        if(vfclogin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcLogin-list")
    {
        auto ent_ = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList>();
        ent_->parent = this;
        vfclogin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfclogin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcLogin-list")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::VfcLoginList()
    :
    fcid{YType::uint32, "fcId"},
    wwn{YType::str, "wwn"}
{

    yang_name = "VfcLogin-list"; yang_parent_name = "fcid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::~VfcLoginList()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_data() const
{
    if (is_presence_container) return true;
    return fcid.is_set
	|| wwn.is_set;
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwn.yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcLogin-list";
    ADD_KEY_TOKEN(fcid, "fcId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwn.is_set || is_set(wwn.yfilter)) leaf_name_data.push_back(wwn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fcId")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwn")
    {
        wwn = value;
        wwn.value_namespace = name_space;
        wwn.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fcId")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwn")
    {
        wwn.yfilter = yfilter;
    }
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcId" || name == "wwn")
        return true;
    return false;
}

System::NpvItems::NpvItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::NpvItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "npv-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::~NpvItems()
{
}

bool System::NpvItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NpvItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NpvItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NpvItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::NpvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NpvItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NpvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::NpvItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    srvif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems>())
    , extif_items(std::make_shared<System::NpvItems::InstItems::ExtifItems>())
{
    srvif_items->parent = this;
    extif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "npv-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::~InstItems()
{
}

bool System::NpvItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (srvif_items !=  nullptr && srvif_items->has_data())
	|| (extif_items !=  nullptr && extif_items->has_data());
}

bool System::NpvItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (srvif_items !=  nullptr && srvif_items->has_operation())
	|| (extif_items !=  nullptr && extif_items->has_operation());
}

std::string System::NpvItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srvif-items")
    {
        if(srvif_items == nullptr)
        {
            srvif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems>();
        }
        return srvif_items;
    }

    if(child_yang_name == "extif-items")
    {
        if(extif_items == nullptr)
        {
            extif_items = std::make_shared<System::NpvItems::InstItems::ExtifItems>();
        }
        return extif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srvif_items != nullptr)
    {
        _children["srvif-items"] = srvif_items;
    }

    if(extif_items != nullptr)
    {
        _children["extif-items"] = extif_items;
    }

    return _children;
}

void System::NpvItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::NpvItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::NpvItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srvif-items" || name == "extif-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvifItems()
    :
    srvif_list(this, {"id"})
{

    yang_name = "srvif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::~SrvifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::has_operation() const
{
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList>();
        ent_->parent = this;
        srvif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvIfList()
    :
    id{YType::str, "id"},
    flags{YType::str, "flags"},
    defaultvsan{YType::uint32, "defaultVsan"},
    defaultextif{YType::str, "defaultExtIf"},
    fcid{YType::uint32, "fcid"},
    fsmst{YType::enumeration, "fsmSt"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"}
        ,
    targetif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems>())
    , vsan_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems>())
    , srvif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_>())
{
    targetif_items->parent = this;
    vsan_items->parent = this;
    srvif_items->parent = this;

    yang_name = "SrvIf-list"; yang_parent_name = "srvif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::~SrvIfList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| flags.is_set
	|| defaultvsan.is_set
	|| defaultextif.is_set
	|| fcid.is_set
	|| fsmst.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| (targetif_items !=  nullptr && targetif_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (srvif_items !=  nullptr && srvif_items->has_data());
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(defaultextif.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| (targetif_items !=  nullptr && targetif_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (srvif_items !=  nullptr && srvif_items->has_operation());
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/srvif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (defaultextif.is_set || is_set(defaultextif.yfilter)) leaf_name_data.push_back(defaultextif.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targetif-items")
    {
        if(targetif_items == nullptr)
        {
            targetif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems>();
        }
        return targetif_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "srvif-items")
    {
        if(srvif_items == nullptr)
        {
            srvif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_>();
        }
        return srvif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(targetif_items != nullptr)
    {
        _children["targetif-items"] = targetif_items;
    }

    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    if(srvif_items != nullptr)
    {
        _children["srvif-items"] = srvif_items;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif = value;
        defaultextif.value_namespace = name_space;
        defaultextif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif.yfilter = yfilter;
    }
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetif-items" || name == "vsan-items" || name == "srvif-items" || name == "id" || name == "flags" || name == "defaultVsan" || name == "defaultExtIf" || name == "fcid" || name == "fsmSt" || name == "wwpn" || name == "wwnn")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetifItems()
    :
    targetif_list(this, {"id"})
{

    yang_name = "targetif-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::~TargetifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_operation() const
{
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targetif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TargetIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList>();
        ent_->parent = this;
        targetif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : targetif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TargetIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::TargetIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "TargetIf-list"; yang_parent_name = "targetif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::~TargetIfList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TargetIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::VsanItems()
    :
    srvvsan_list(this, {"id"})
{

    yang_name = "vsan-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::~VsanItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvvsan_list.len(); index++)
    {
        if(srvvsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<srvvsan_list.len(); index++)
    {
        if(srvvsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvVsan-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList>();
        ent_->parent = this;
        srvvsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvvsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvVsan-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::SrvVsanList()
    :
    id{YType::uint32, "id"}
{

    yang_name = "SrvVsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::~SrvVsanList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvVsan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvifItems_()
    :
    srvifflogi_list(this, {"fcid"})
{

    yang_name = "srvif-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::~SrvifItems_()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvifflogi_list.len(); index++)
    {
        if(srvifflogi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_operation() const
{
    for (std::size_t index=0; index<srvifflogi_list.len(); index++)
    {
        if(srvifflogi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIfFlogi-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList>();
        ent_->parent = this;
        srvifflogi_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvifflogi_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIfFlogi-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::SrvIfFlogiList()
    :
    fcid{YType::uint32, "fcid"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"},
    defaultvsan{YType::uint32, "defaultVsan"},
    defaultextif{YType::str, "defaultExtIf"}
{

    yang_name = "SrvIfFlogi-list"; yang_parent_name = "srvif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::~SrvIfFlogiList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_data() const
{
    if (is_presence_container) return true;
    return fcid.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| defaultvsan.is_set
	|| defaultextif.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(defaultextif.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvIfFlogi-list";
    ADD_KEY_TOKEN(fcid, "fcid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (defaultextif.is_set || is_set(defaultextif.yfilter)) leaf_name_data.push_back(defaultextif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif = value;
        defaultextif.value_namespace = name_space;
        defaultextif.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcid" || name == "wwpn" || name == "wwnn" || name == "defaultVsan" || name == "defaultExtIf")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtifItems()
    :
    extif_list(this, {"id"})
{

    yang_name = "extif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::ExtifItems::~ExtifItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::has_operation() const
{
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::ExtifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList>();
        ent_->parent = this;
        extif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::get_children() const
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

void System::NpvItems::InstItems::ExtifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::ExtIfList()
    :
    id{YType::str, "id"},
    fsmst{YType::enumeration, "fsmSt"},
    numvsan{YType::uint32, "numVsan"},
    defaultvsan{YType::uint32, "defaultVsan"},
    flogivsan{YType::uint32, "flogiVsan"},
    operportmode{YType::str, "operPortMode"},
    logifindex{YType::str, "logIfIndex"},
    flags{YType::str, "flags"},
    fcid{YType::uint32, "fcid"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"}
        ,
    targetif_items(std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems>())
    , vsan_items(std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems>())
{
    targetif_items->parent = this;
    vsan_items->parent = this;

    yang_name = "ExtIf-list"; yang_parent_name = "extif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::~ExtIfList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set
	|| numvsan.is_set
	|| defaultvsan.is_set
	|| flogivsan.is_set
	|| operportmode.is_set
	|| logifindex.is_set
	|| flags.is_set
	|| fcid.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| (targetif_items !=  nullptr && targetif_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data());
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(numvsan.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(flogivsan.yfilter)
	|| ydk::is_set(operportmode.yfilter)
	|| ydk::is_set(logifindex.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| (targetif_items !=  nullptr && targetif_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation());
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/extif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (numvsan.is_set || is_set(numvsan.yfilter)) leaf_name_data.push_back(numvsan.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (flogivsan.is_set || is_set(flogivsan.yfilter)) leaf_name_data.push_back(flogivsan.get_name_leafdata());
    if (operportmode.is_set || is_set(operportmode.yfilter)) leaf_name_data.push_back(operportmode.get_name_leafdata());
    if (logifindex.is_set || is_set(logifindex.yfilter)) leaf_name_data.push_back(logifindex.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targetif-items")
    {
        if(targetif_items == nullptr)
        {
            targetif_items = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems>();
        }
        return targetif_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems>();
        }
        return vsan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(targetif_items != nullptr)
    {
        _children["targetif-items"] = targetif_items;
    }

    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVsan")
    {
        numvsan = value;
        numvsan.value_namespace = name_space;
        numvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flogiVsan")
    {
        flogivsan = value;
        flogivsan.value_namespace = name_space;
        flogivsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortMode")
    {
        operportmode = value;
        operportmode.value_namespace = name_space;
        operportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logIfIndex")
    {
        logifindex = value;
        logifindex.value_namespace = name_space;
        logifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "numVsan")
    {
        numvsan.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "flogiVsan")
    {
        flogivsan.yfilter = yfilter;
    }
    if(value_path == "operPortMode")
    {
        operportmode.yfilter = yfilter;
    }
    if(value_path == "logIfIndex")
    {
        logifindex.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetif-items" || name == "vsan-items" || name == "id" || name == "fsmSt" || name == "numVsan" || name == "defaultVsan" || name == "flogiVsan" || name == "operPortMode" || name == "logIfIndex" || name == "flags" || name == "fcid" || name == "wwpn" || name == "wwnn")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetifItems()
    :
    targetif_list(this, {"id"})
{

    yang_name = "targetif-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::~TargetifItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_operation() const
{
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targetif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TargetIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList>();
        ent_->parent = this;
        targetif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : targetif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TargetIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::TargetIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "TargetIf-list"; yang_parent_name = "targetif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::~TargetIfList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TargetIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::VsanItems()
    :
    extvsan_list(this, {"id"})
{

    yang_name = "vsan-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::~VsanItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extvsan_list.len(); index++)
    {
        if(extvsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<extvsan_list.len(); index++)
    {
        if(extvsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtVsan-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList>();
        ent_->parent = this;
        extvsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extvsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtVsan-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::ExtVsanList()
    :
    id{YType::uint32, "id"},
    fsmst{YType::enumeration, "fsmSt"}
{

    yang_name = "ExtVsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::~ExtVsanList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtVsan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fsmSt")
        return true;
    return false;
}

System::VsanmgrItems::VsanmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    vsan_items(std::make_shared<System::VsanmgrItems::VsanItems>())
    , bdvsancfg_items(std::make_shared<System::VsanmgrItems::BdvsancfgItems>())
    , inst_items(std::make_shared<System::VsanmgrItems::InstItems>())
{
    vsan_items->parent = this;
    bdvsancfg_items->parent = this;
    inst_items->parent = this;

    yang_name = "vsanmgr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::~VsanmgrItems()
{
}

bool System::VsanmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (bdvsancfg_items !=  nullptr && bdvsancfg_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VsanmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (bdvsancfg_items !=  nullptr && bdvsancfg_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VsanmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::VsanmgrItems::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "bdvsancfg-items")
    {
        if(bdvsancfg_items == nullptr)
        {
            bdvsancfg_items = std::make_shared<System::VsanmgrItems::BdvsancfgItems>();
        }
        return bdvsancfg_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VsanmgrItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    if(bdvsancfg_items != nullptr)
    {
        _children["bdvsancfg-items"] = bdvsancfg_items;
    }

    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::VsanmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VsanmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsan-items" || name == "bdvsancfg-items" || name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanItems()
    :
    vsan_list(this, {"encap"})
{

    yang_name = "vsan-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::VsanItems::~VsanItems()
{
}

bool System::VsanmgrItems::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsan_list.len(); index++)
    {
        if(vsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<vsan_list.len(); index++)
    {
        if(vsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vsan-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::VsanItems::VsanList>();
        ent_->parent = this;
        vsan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vsan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vsan-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::VsanList()
    :
    encap{YType::str, "encap"},
    id{YType::uint32, "id"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    lbtype{YType::enumeration, "lbType"},
    vsanname{YType::str, "vsanName"},
    interop{YType::uint16, "interop"},
    name{YType::str, "name"}
        ,
    rtbdvsanmap_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems>())
    , rsvsanifmap_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems>())
    , rsvsanpathatt_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems>())
{
    rtbdvsanmap_items->parent = this;
    rsvsanifmap_items->parent = this;
    rsvsanpathatt_items->parent = this;

    yang_name = "Vsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::VsanItems::VsanList::~VsanList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| id.is_set
	|| adminst.is_set
	|| operst.is_set
	|| lbtype.is_set
	|| vsanname.is_set
	|| interop.is_set
	|| name.is_set
	|| (rtbdvsanmap_items !=  nullptr && rtbdvsanmap_items->has_data())
	|| (rsvsanifmap_items !=  nullptr && rsvsanifmap_items->has_data())
	|| (rsvsanpathatt_items !=  nullptr && rsvsanpathatt_items->has_data());
}

bool System::VsanmgrItems::VsanItems::VsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(lbtype.yfilter)
	|| ydk::is_set(vsanname.yfilter)
	|| ydk::is_set(interop.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtbdvsanmap_items !=  nullptr && rtbdvsanmap_items->has_operation())
	|| (rsvsanifmap_items !=  nullptr && rsvsanifmap_items->has_operation())
	|| (rsvsanpathatt_items !=  nullptr && rsvsanpathatt_items->has_operation());
}

std::string System::VsanmgrItems::VsanItems::VsanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::VsanItems::VsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vsan-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (lbtype.is_set || is_set(lbtype.yfilter)) leaf_name_data.push_back(lbtype.get_name_leafdata());
    if (vsanname.is_set || is_set(vsanname.yfilter)) leaf_name_data.push_back(vsanname.get_name_leafdata());
    if (interop.is_set || is_set(interop.yfilter)) leaf_name_data.push_back(interop.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtBdVsanMap-items")
    {
        if(rtbdvsanmap_items == nullptr)
        {
            rtbdvsanmap_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems>();
        }
        return rtbdvsanmap_items;
    }

    if(child_yang_name == "rsvsanIfMap-items")
    {
        if(rsvsanifmap_items == nullptr)
        {
            rsvsanifmap_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems>();
        }
        return rsvsanifmap_items;
    }

    if(child_yang_name == "rsvsanPathAtt-items")
    {
        if(rsvsanpathatt_items == nullptr)
        {
            rsvsanpathatt_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems>();
        }
        return rsvsanpathatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtbdvsanmap_items != nullptr)
    {
        _children["rtBdVsanMap-items"] = rtbdvsanmap_items;
    }

    if(rsvsanifmap_items != nullptr)
    {
        _children["rsvsanIfMap-items"] = rsvsanifmap_items;
    }

    if(rsvsanpathatt_items != nullptr)
    {
        _children["rsvsanPathAtt-items"] = rsvsanpathatt_items;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lbType")
    {
        lbtype = value;
        lbtype.value_namespace = name_space;
        lbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsanName")
    {
        vsanname = value;
        vsanname.value_namespace = name_space;
        vsanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop")
    {
        interop = value;
        interop.value_namespace = name_space;
        interop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "lbType")
    {
        lbtype.yfilter = yfilter;
    }
    if(value_path == "vsanName")
    {
        vsanname.yfilter = yfilter;
    }
    if(value_path == "interop")
    {
        interop.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtBdVsanMap-items" || name == "rsvsanIfMap-items" || name == "rsvsanPathAtt-items" || name == "encap" || name == "id" || name == "adminSt" || name == "operSt" || name == "lbType" || name == "vsanName" || name == "interop" || name == "name")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::RtBdVsanMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtBdVsanMap-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::~RtBdVsanMapItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtBdVsanMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsvsanIfMapItems()
    :
    rsvsanifmap_list(this, {"tdn"})
{

    yang_name = "rsvsanIfMap-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::~RsvsanIfMapItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvsanifmap_list.len(); index++)
    {
        if(rsvsanifmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsvsanifmap_list.len(); index++)
    {
        if(rsvsanifmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvsanIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVsanIfMap-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList>();
        ent_->parent = this;
        rsvsanifmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvsanifmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVsanIfMap-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::RsVsanIfMapList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsVsanIfMap-list"; yang_parent_name = "rsvsanIfMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::~RsVsanIfMapList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVsanIfMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsvsanPathAttItems()
    :
    rsvsanpathatt_list(this, {"tdn"})
{

    yang_name = "rsvsanPathAtt-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::~RsvsanPathAttItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvsanpathatt_list.len(); index++)
    {
        if(rsvsanpathatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvsanpathatt_list.len(); index++)
    {
        if(rsvsanpathatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvsanPathAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVsanPathAtt-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList>();
        ent_->parent = this;
        rsvsanpathatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvsanpathatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVsanPathAtt-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::RsVsanPathAttList()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    type{YType::enumeration, "type"}
{

    yang_name = "RsVsanPathAtt-list"; yang_parent_name = "rsvsanPathAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::~RsVsanPathAttList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| type.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVsanPathAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "type")
        return true;
    return false;
}

System::VsanmgrItems::BdvsancfgItems::BdvsancfgItems()
    :
    vlanid{YType::uint32, "vlanId"},
    createflag{YType::enumeration, "createFlag"},
    name{YType::str, "name"}
{

    yang_name = "bdvsancfg-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::BdvsancfgItems::~BdvsancfgItems()
{
}

bool System::VsanmgrItems::BdvsancfgItems::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| createflag.is_set
	|| name.is_set;
}

bool System::VsanmgrItems::BdvsancfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(createflag.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VsanmgrItems::BdvsancfgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::BdvsancfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdvsancfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::BdvsancfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (createflag.is_set || is_set(createflag.yfilter)) leaf_name_data.push_back(createflag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::BdvsancfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::BdvsancfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::BdvsancfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createFlag")
    {
        createflag = value;
        createflag.value_namespace = name_space;
        createflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::BdvsancfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "createFlag")
    {
        createflag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::BdvsancfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanId" || name == "createFlag" || name == "name")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::InstItems()
    :
    numconfiguredvsan{YType::uint32, "numConfiguredVsan"},
    numcreatedvsan{YType::uint32, "numCreatedVsan"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    vsanmbr_items(std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems>())
{
    vsanmbr_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::~InstItems()
{
}

bool System::VsanmgrItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return numconfiguredvsan.is_set
	|| numcreatedvsan.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (vsanmbr_items !=  nullptr && vsanmbr_items->has_data());
}

bool System::VsanmgrItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numconfiguredvsan.yfilter)
	|| ydk::is_set(numcreatedvsan.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (vsanmbr_items !=  nullptr && vsanmbr_items->has_operation());
}

std::string System::VsanmgrItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numconfiguredvsan.is_set || is_set(numconfiguredvsan.yfilter)) leaf_name_data.push_back(numconfiguredvsan.get_name_leafdata());
    if (numcreatedvsan.is_set || is_set(numcreatedvsan.yfilter)) leaf_name_data.push_back(numcreatedvsan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsanmbr-items")
    {
        if(vsanmbr_items == nullptr)
        {
            vsanmbr_items = std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems>();
        }
        return vsanmbr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsanmbr_items != nullptr)
    {
        _children["vsanmbr-items"] = vsanmbr_items;
    }

    return _children;
}

void System::VsanmgrItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numConfiguredVsan")
    {
        numconfiguredvsan = value;
        numconfiguredvsan.value_namespace = name_space;
        numconfiguredvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numCreatedVsan")
    {
        numcreatedvsan = value;
        numcreatedvsan.value_namespace = name_space;
        numcreatedvsan.value_namespace_prefix = name_space_prefix;
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

void System::VsanmgrItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numConfiguredVsan")
    {
        numconfiguredvsan.yfilter = yfilter;
    }
    if(value_path == "numCreatedVsan")
    {
        numcreatedvsan.yfilter = yfilter;
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

bool System::VsanmgrItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsanmbr-items" || name == "numConfiguredVsan" || name == "numCreatedVsan" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanmbrItems()
    :
    vsanmbrif_list(this, {"id"})
{

    yang_name = "vsanmbr-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::VsanmbrItems::~VsanmbrItems()
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsanmbrif_list.len(); index++)
    {
        if(vsanmbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_operation() const
{
    for (std::size_t index=0; index<vsanmbrif_list.len(); index++)
    {
        if(vsanmbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanmbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::VsanmbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::InstItems::VsanmbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VsanMbrIf-list")
    {
        auto ent_ = std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList>();
        ent_->parent = this;
        vsanmbrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::InstItems::VsanmbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vsanmbrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VsanmgrItems::InstItems::VsanmbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::InstItems::VsanmbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VsanMbrIf-list")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::VsanMbrIfList()
    :
    id{YType::str, "id"},
    staticvsan{YType::uint32, "staticVsan"},
    allowedvsanbmp{YType::str, "allowedVsanBmp"},
    name{YType::str, "name"}
{

    yang_name = "VsanMbrIf-list"; yang_parent_name = "vsanmbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::~VsanMbrIfList()
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| staticvsan.is_set
	|| allowedvsanbmp.is_set
	|| name.is_set;
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(staticvsan.yfilter)
	|| ydk::is_set(allowedvsanbmp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/inst-items/vsanmbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VsanMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (staticvsan.is_set || is_set(staticvsan.yfilter)) leaf_name_data.push_back(staticvsan.get_name_leafdata());
    if (allowedvsanbmp.is_set || is_set(allowedvsanbmp.yfilter)) leaf_name_data.push_back(allowedvsanbmp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticVsan")
    {
        staticvsan = value;
        staticvsan.value_namespace = name_space;
        staticvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp = value;
        allowedvsanbmp.value_namespace = name_space;
        allowedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "staticVsan")
    {
        staticvsan.yfilter = yfilter;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "staticVsan" || name == "allowedVsanBmp" || name == "name")
        return true;
    return false;
}

System::FmItems::FmItems()
    :
    mplsstatic_items(std::make_shared<System::FmItems::MplsstaticItems>())
    , mplsoam_items(std::make_shared<System::FmItems::MplsoamItems>())
    , srte_items(std::make_shared<System::FmItems::SrteItems>())
    , mplssgmntrtg_items(std::make_shared<System::FmItems::MplssgmntrtgItems>())
    , srv6_items(std::make_shared<System::FmItems::Srv6Items>())
    , mplsldp_items(std::make_shared<System::FmItems::MplsldpItems>())
    , mplsl3vpn_items(std::make_shared<System::FmItems::Mplsl3vpnItems>())
    , mplsevpn_items(std::make_shared<System::FmItems::MplsevpnItems>())
    , evmed_items(std::make_shared<System::FmItems::EvmedItems>())
    , bgp_items(std::make_shared<System::FmItems::BgpItems>())
    , hmm_items(std::make_shared<System::FmItems::HmmItems>())
    , evpn_items(std::make_shared<System::FmItems::EvpnItems>())
    , sflow_items(std::make_shared<System::FmItems::SflowItems>())
    , ngoam_items(std::make_shared<System::FmItems::NgoamItems>())
    , poe_items(std::make_shared<System::FmItems::PoeItems>())
    , msdp_items(std::make_shared<System::FmItems::MsdpItems>())
    , dhcp_items(std::make_shared<System::FmItems::DhcpItems>())
    , ifvlan_items(std::make_shared<System::FmItems::IfvlanItems>())
    , bashshell_items(std::make_shared<System::FmItems::BashshellItems>())
    , netconf_items(std::make_shared<System::FmItems::NetconfItems>())
    , restconf_items(std::make_shared<System::FmItems::RestconfItems>())
    , grpc_items(std::make_shared<System::FmItems::GrpcItems>())
    , scpserver_items(std::make_shared<System::FmItems::ScpserverItems>())
    , lldp_items(std::make_shared<System::FmItems::LldpItems>())
    , lacp_items(std::make_shared<System::FmItems::LacpItems>())
    , nxapi_items(std::make_shared<System::FmItems::NxapiItems>())
    , telnet_items(std::make_shared<System::FmItems::TelnetItems>())
    , ssh_items(std::make_shared<System::FmItems::SshItems>())
    , nxdb_items(std::make_shared<System::FmItems::NxdbItems>())
    , vnsegment_items(std::make_shared<System::FmItems::VnsegmentItems>())
    , tacacsplus_items(std::make_shared<System::FmItems::TacacsplusItems>())
    , ldap_items(std::make_shared<System::FmItems::LdapItems>())
    , scheduler_items(std::make_shared<System::FmItems::SchedulerItems>())
    , imp_items(std::make_shared<System::FmItems::ImpItems>())
    , udld_items(std::make_shared<System::FmItems::UdldItems>())
    , nat_items(std::make_shared<System::FmItems::NatItems>())
    , vrrpv3_items(std::make_shared<System::FmItems::Vrrpv3Items>())
    , vrrp_items(std::make_shared<System::FmItems::VrrpItems>())
    , hsrp_items(std::make_shared<System::FmItems::HsrpItems>())
    , netflow_items(std::make_shared<System::FmItems::NetflowItems>())
    , analytics_items(std::make_shared<System::FmItems::AnalyticsItems>())
    , bfd_items(std::make_shared<System::FmItems::BfdItems>())
    , tunnelif_items(std::make_shared<System::FmItems::TunnelifItems>())
    , nvo_items(std::make_shared<System::FmItems::NvoItems>())
    , pbr_items(std::make_shared<System::FmItems::PbrItems>())
    , pim_items(std::make_shared<System::FmItems::PimItems>())
    , ngmvpn_items(std::make_shared<System::FmItems::NgmvpnItems>())
    , vpc_items(std::make_shared<System::FmItems::VpcItems>())
    , vtp_items(std::make_shared<System::FmItems::VtpItems>())
    , pvlan_items(std::make_shared<System::FmItems::PvlanItems>())
    , ntpd_items(std::make_shared<System::FmItems::NtpdItems>())
    , nbm_items(std::make_shared<System::FmItems::NbmItems>())
    , telemetry_items(std::make_shared<System::FmItems::TelemetryItems>())
    , ospf_items(std::make_shared<System::FmItems::OspfItems>())
    , ospfv3_items(std::make_shared<System::FmItems::Ospfv3Items>())
    , vctrl_items(std::make_shared<System::FmItems::VctrlItems>())
    , macsec_items(std::make_shared<System::FmItems::MacsecItems>())
    , npiv_items(std::make_shared<System::FmItems::NpivItems>())
    , pim6_items(std::make_shared<System::FmItems::Pim6Items>())
    , isis_items(std::make_shared<System::FmItems::IsisItems>())
    , hwtelemetry_items(std::make_shared<System::FmItems::HwtelemetryItems>())
    , itd_items(std::make_shared<System::FmItems::ItdItems>())
    , portsec_items(std::make_shared<System::FmItems::PortsecItems>())
    , flexlink_items(std::make_shared<System::FmItems::FlexlinkItems>())
    , slasender_items(std::make_shared<System::FmItems::SlasenderItems>())
    , slaresponder_items(std::make_shared<System::FmItems::SlaresponderItems>())
    , slatwampserver_items(std::make_shared<System::FmItems::SlatwampserverItems>())
{
    mplsstatic_items->parent = this;
    mplsoam_items->parent = this;
    srte_items->parent = this;
    mplssgmntrtg_items->parent = this;
    srv6_items->parent = this;
    mplsldp_items->parent = this;
    mplsl3vpn_items->parent = this;
    mplsevpn_items->parent = this;
    evmed_items->parent = this;
    bgp_items->parent = this;
    hmm_items->parent = this;
    evpn_items->parent = this;
    sflow_items->parent = this;
    ngoam_items->parent = this;
    poe_items->parent = this;
    msdp_items->parent = this;
    dhcp_items->parent = this;
    ifvlan_items->parent = this;
    bashshell_items->parent = this;
    netconf_items->parent = this;
    restconf_items->parent = this;
    grpc_items->parent = this;
    scpserver_items->parent = this;
    lldp_items->parent = this;
    lacp_items->parent = this;
    nxapi_items->parent = this;
    telnet_items->parent = this;
    ssh_items->parent = this;
    nxdb_items->parent = this;
    vnsegment_items->parent = this;
    tacacsplus_items->parent = this;
    ldap_items->parent = this;
    scheduler_items->parent = this;
    imp_items->parent = this;
    udld_items->parent = this;
    nat_items->parent = this;
    vrrpv3_items->parent = this;
    vrrp_items->parent = this;
    hsrp_items->parent = this;
    netflow_items->parent = this;
    analytics_items->parent = this;
    bfd_items->parent = this;
    tunnelif_items->parent = this;
    nvo_items->parent = this;
    pbr_items->parent = this;
    pim_items->parent = this;
    ngmvpn_items->parent = this;
    vpc_items->parent = this;
    vtp_items->parent = this;
    pvlan_items->parent = this;
    ntpd_items->parent = this;
    nbm_items->parent = this;
    telemetry_items->parent = this;
    ospf_items->parent = this;
    ospfv3_items->parent = this;
    vctrl_items->parent = this;
    macsec_items->parent = this;
    npiv_items->parent = this;
    pim6_items->parent = this;
    isis_items->parent = this;
    hwtelemetry_items->parent = this;
    itd_items->parent = this;
    portsec_items->parent = this;
    flexlink_items->parent = this;
    slasender_items->parent = this;
    slaresponder_items->parent = this;
    slatwampserver_items->parent = this;

    yang_name = "fm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::~FmItems()
{
}

bool System::FmItems::has_data() const
{
    if (is_presence_container) return true;
    return (mplsstatic_items !=  nullptr && mplsstatic_items->has_data())
	|| (mplsoam_items !=  nullptr && mplsoam_items->has_data())
	|| (srte_items !=  nullptr && srte_items->has_data())
	|| (mplssgmntrtg_items !=  nullptr && mplssgmntrtg_items->has_data())
	|| (srv6_items !=  nullptr && srv6_items->has_data())
	|| (mplsldp_items !=  nullptr && mplsldp_items->has_data())
	|| (mplsl3vpn_items !=  nullptr && mplsl3vpn_items->has_data())
	|| (mplsevpn_items !=  nullptr && mplsevpn_items->has_data())
	|| (evmed_items !=  nullptr && evmed_items->has_data())
	|| (bgp_items !=  nullptr && bgp_items->has_data())
	|| (hmm_items !=  nullptr && hmm_items->has_data())
	|| (evpn_items !=  nullptr && evpn_items->has_data())
	|| (sflow_items !=  nullptr && sflow_items->has_data())
	|| (ngoam_items !=  nullptr && ngoam_items->has_data())
	|| (poe_items !=  nullptr && poe_items->has_data())
	|| (msdp_items !=  nullptr && msdp_items->has_data())
	|| (dhcp_items !=  nullptr && dhcp_items->has_data())
	|| (ifvlan_items !=  nullptr && ifvlan_items->has_data())
	|| (bashshell_items !=  nullptr && bashshell_items->has_data())
	|| (netconf_items !=  nullptr && netconf_items->has_data())
	|| (restconf_items !=  nullptr && restconf_items->has_data())
	|| (grpc_items !=  nullptr && grpc_items->has_data())
	|| (scpserver_items !=  nullptr && scpserver_items->has_data())
	|| (lldp_items !=  nullptr && lldp_items->has_data())
	|| (lacp_items !=  nullptr && lacp_items->has_data())
	|| (nxapi_items !=  nullptr && nxapi_items->has_data())
	|| (telnet_items !=  nullptr && telnet_items->has_data())
	|| (ssh_items !=  nullptr && ssh_items->has_data())
	|| (nxdb_items !=  nullptr && nxdb_items->has_data())
	|| (vnsegment_items !=  nullptr && vnsegment_items->has_data())
	|| (tacacsplus_items !=  nullptr && tacacsplus_items->has_data())
	|| (ldap_items !=  nullptr && ldap_items->has_data())
	|| (scheduler_items !=  nullptr && scheduler_items->has_data())
	|| (imp_items !=  nullptr && imp_items->has_data())
	|| (udld_items !=  nullptr && udld_items->has_data())
	|| (nat_items !=  nullptr && nat_items->has_data())
	|| (vrrpv3_items !=  nullptr && vrrpv3_items->has_data())
	|| (vrrp_items !=  nullptr && vrrp_items->has_data())
	|| (hsrp_items !=  nullptr && hsrp_items->has_data())
	|| (netflow_items !=  nullptr && netflow_items->has_data())
	|| (analytics_items !=  nullptr && analytics_items->has_data())
	|| (bfd_items !=  nullptr && bfd_items->has_data())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_data())
	|| (nvo_items !=  nullptr && nvo_items->has_data())
	|| (pbr_items !=  nullptr && pbr_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data())
	|| (ngmvpn_items !=  nullptr && ngmvpn_items->has_data())
	|| (vpc_items !=  nullptr && vpc_items->has_data())
	|| (vtp_items !=  nullptr && vtp_items->has_data())
	|| (pvlan_items !=  nullptr && pvlan_items->has_data())
	|| (ntpd_items !=  nullptr && ntpd_items->has_data())
	|| (nbm_items !=  nullptr && nbm_items->has_data())
	|| (telemetry_items !=  nullptr && telemetry_items->has_data())
	|| (ospf_items !=  nullptr && ospf_items->has_data())
	|| (ospfv3_items !=  nullptr && ospfv3_items->has_data())
	|| (vctrl_items !=  nullptr && vctrl_items->has_data())
	|| (macsec_items !=  nullptr && macsec_items->has_data())
	|| (npiv_items !=  nullptr && npiv_items->has_data())
	|| (pim6_items !=  nullptr && pim6_items->has_data())
	|| (isis_items !=  nullptr && isis_items->has_data())
	|| (hwtelemetry_items !=  nullptr && hwtelemetry_items->has_data())
	|| (itd_items !=  nullptr && itd_items->has_data())
	|| (portsec_items !=  nullptr && portsec_items->has_data())
	|| (flexlink_items !=  nullptr && flexlink_items->has_data())
	|| (slasender_items !=  nullptr && slasender_items->has_data())
	|| (slaresponder_items !=  nullptr && slaresponder_items->has_data())
	|| (slatwampserver_items !=  nullptr && slatwampserver_items->has_data());
}

bool System::FmItems::has_operation() const
{
    return is_set(yfilter)
	|| (mplsstatic_items !=  nullptr && mplsstatic_items->has_operation())
	|| (mplsoam_items !=  nullptr && mplsoam_items->has_operation())
	|| (srte_items !=  nullptr && srte_items->has_operation())
	|| (mplssgmntrtg_items !=  nullptr && mplssgmntrtg_items->has_operation())
	|| (srv6_items !=  nullptr && srv6_items->has_operation())
	|| (mplsldp_items !=  nullptr && mplsldp_items->has_operation())
	|| (mplsl3vpn_items !=  nullptr && mplsl3vpn_items->has_operation())
	|| (mplsevpn_items !=  nullptr && mplsevpn_items->has_operation())
	|| (evmed_items !=  nullptr && evmed_items->has_operation())
	|| (bgp_items !=  nullptr && bgp_items->has_operation())
	|| (hmm_items !=  nullptr && hmm_items->has_operation())
	|| (evpn_items !=  nullptr && evpn_items->has_operation())
	|| (sflow_items !=  nullptr && sflow_items->has_operation())
	|| (ngoam_items !=  nullptr && ngoam_items->has_operation())
	|| (poe_items !=  nullptr && poe_items->has_operation())
	|| (msdp_items !=  nullptr && msdp_items->has_operation())
	|| (dhcp_items !=  nullptr && dhcp_items->has_operation())
	|| (ifvlan_items !=  nullptr && ifvlan_items->has_operation())
	|| (bashshell_items !=  nullptr && bashshell_items->has_operation())
	|| (netconf_items !=  nullptr && netconf_items->has_operation())
	|| (restconf_items !=  nullptr && restconf_items->has_operation())
	|| (grpc_items !=  nullptr && grpc_items->has_operation())
	|| (scpserver_items !=  nullptr && scpserver_items->has_operation())
	|| (lldp_items !=  nullptr && lldp_items->has_operation())
	|| (lacp_items !=  nullptr && lacp_items->has_operation())
	|| (nxapi_items !=  nullptr && nxapi_items->has_operation())
	|| (telnet_items !=  nullptr && telnet_items->has_operation())
	|| (ssh_items !=  nullptr && ssh_items->has_operation())
	|| (nxdb_items !=  nullptr && nxdb_items->has_operation())
	|| (vnsegment_items !=  nullptr && vnsegment_items->has_operation())
	|| (tacacsplus_items !=  nullptr && tacacsplus_items->has_operation())
	|| (ldap_items !=  nullptr && ldap_items->has_operation())
	|| (scheduler_items !=  nullptr && scheduler_items->has_operation())
	|| (imp_items !=  nullptr && imp_items->has_operation())
	|| (udld_items !=  nullptr && udld_items->has_operation())
	|| (nat_items !=  nullptr && nat_items->has_operation())
	|| (vrrpv3_items !=  nullptr && vrrpv3_items->has_operation())
	|| (vrrp_items !=  nullptr && vrrp_items->has_operation())
	|| (hsrp_items !=  nullptr && hsrp_items->has_operation())
	|| (netflow_items !=  nullptr && netflow_items->has_operation())
	|| (analytics_items !=  nullptr && analytics_items->has_operation())
	|| (bfd_items !=  nullptr && bfd_items->has_operation())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_operation())
	|| (nvo_items !=  nullptr && nvo_items->has_operation())
	|| (pbr_items !=  nullptr && pbr_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation())
	|| (ngmvpn_items !=  nullptr && ngmvpn_items->has_operation())
	|| (vpc_items !=  nullptr && vpc_items->has_operation())
	|| (vtp_items !=  nullptr && vtp_items->has_operation())
	|| (pvlan_items !=  nullptr && pvlan_items->has_operation())
	|| (ntpd_items !=  nullptr && ntpd_items->has_operation())
	|| (nbm_items !=  nullptr && nbm_items->has_operation())
	|| (telemetry_items !=  nullptr && telemetry_items->has_operation())
	|| (ospf_items !=  nullptr && ospf_items->has_operation())
	|| (ospfv3_items !=  nullptr && ospfv3_items->has_operation())
	|| (vctrl_items !=  nullptr && vctrl_items->has_operation())
	|| (macsec_items !=  nullptr && macsec_items->has_operation())
	|| (npiv_items !=  nullptr && npiv_items->has_operation())
	|| (pim6_items !=  nullptr && pim6_items->has_operation())
	|| (isis_items !=  nullptr && isis_items->has_operation())
	|| (hwtelemetry_items !=  nullptr && hwtelemetry_items->has_operation())
	|| (itd_items !=  nullptr && itd_items->has_operation())
	|| (portsec_items !=  nullptr && portsec_items->has_operation())
	|| (flexlink_items !=  nullptr && flexlink_items->has_operation())
	|| (slasender_items !=  nullptr && slasender_items->has_operation())
	|| (slaresponder_items !=  nullptr && slaresponder_items->has_operation())
	|| (slatwampserver_items !=  nullptr && slatwampserver_items->has_operation());
}

std::string System::FmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsstatic-items")
    {
        if(mplsstatic_items == nullptr)
        {
            mplsstatic_items = std::make_shared<System::FmItems::MplsstaticItems>();
        }
        return mplsstatic_items;
    }

    if(child_yang_name == "mplsoam-items")
    {
        if(mplsoam_items == nullptr)
        {
            mplsoam_items = std::make_shared<System::FmItems::MplsoamItems>();
        }
        return mplsoam_items;
    }

    if(child_yang_name == "srte-items")
    {
        if(srte_items == nullptr)
        {
            srte_items = std::make_shared<System::FmItems::SrteItems>();
        }
        return srte_items;
    }

    if(child_yang_name == "mplssgmntrtg-items")
    {
        if(mplssgmntrtg_items == nullptr)
        {
            mplssgmntrtg_items = std::make_shared<System::FmItems::MplssgmntrtgItems>();
        }
        return mplssgmntrtg_items;
    }

    if(child_yang_name == "srv6-items")
    {
        if(srv6_items == nullptr)
        {
            srv6_items = std::make_shared<System::FmItems::Srv6Items>();
        }
        return srv6_items;
    }

    if(child_yang_name == "mplsldp-items")
    {
        if(mplsldp_items == nullptr)
        {
            mplsldp_items = std::make_shared<System::FmItems::MplsldpItems>();
        }
        return mplsldp_items;
    }

    if(child_yang_name == "mplsl3vpn-items")
    {
        if(mplsl3vpn_items == nullptr)
        {
            mplsl3vpn_items = std::make_shared<System::FmItems::Mplsl3vpnItems>();
        }
        return mplsl3vpn_items;
    }

    if(child_yang_name == "mplsevpn-items")
    {
        if(mplsevpn_items == nullptr)
        {
            mplsevpn_items = std::make_shared<System::FmItems::MplsevpnItems>();
        }
        return mplsevpn_items;
    }

    if(child_yang_name == "evmed-items")
    {
        if(evmed_items == nullptr)
        {
            evmed_items = std::make_shared<System::FmItems::EvmedItems>();
        }
        return evmed_items;
    }

    if(child_yang_name == "bgp-items")
    {
        if(bgp_items == nullptr)
        {
            bgp_items = std::make_shared<System::FmItems::BgpItems>();
        }
        return bgp_items;
    }

    if(child_yang_name == "hmm-items")
    {
        if(hmm_items == nullptr)
        {
            hmm_items = std::make_shared<System::FmItems::HmmItems>();
        }
        return hmm_items;
    }

    if(child_yang_name == "evpn-items")
    {
        if(evpn_items == nullptr)
        {
            evpn_items = std::make_shared<System::FmItems::EvpnItems>();
        }
        return evpn_items;
    }

    if(child_yang_name == "sflow-items")
    {
        if(sflow_items == nullptr)
        {
            sflow_items = std::make_shared<System::FmItems::SflowItems>();
        }
        return sflow_items;
    }

    if(child_yang_name == "ngoam-items")
    {
        if(ngoam_items == nullptr)
        {
            ngoam_items = std::make_shared<System::FmItems::NgoamItems>();
        }
        return ngoam_items;
    }

    if(child_yang_name == "poe-items")
    {
        if(poe_items == nullptr)
        {
            poe_items = std::make_shared<System::FmItems::PoeItems>();
        }
        return poe_items;
    }

    if(child_yang_name == "msdp-items")
    {
        if(msdp_items == nullptr)
        {
            msdp_items = std::make_shared<System::FmItems::MsdpItems>();
        }
        return msdp_items;
    }

    if(child_yang_name == "dhcp-items")
    {
        if(dhcp_items == nullptr)
        {
            dhcp_items = std::make_shared<System::FmItems::DhcpItems>();
        }
        return dhcp_items;
    }

    if(child_yang_name == "ifvlan-items")
    {
        if(ifvlan_items == nullptr)
        {
            ifvlan_items = std::make_shared<System::FmItems::IfvlanItems>();
        }
        return ifvlan_items;
    }

    if(child_yang_name == "bashshell-items")
    {
        if(bashshell_items == nullptr)
        {
            bashshell_items = std::make_shared<System::FmItems::BashshellItems>();
        }
        return bashshell_items;
    }

    if(child_yang_name == "netconf-items")
    {
        if(netconf_items == nullptr)
        {
            netconf_items = std::make_shared<System::FmItems::NetconfItems>();
        }
        return netconf_items;
    }

    if(child_yang_name == "restconf-items")
    {
        if(restconf_items == nullptr)
        {
            restconf_items = std::make_shared<System::FmItems::RestconfItems>();
        }
        return restconf_items;
    }

    if(child_yang_name == "grpc-items")
    {
        if(grpc_items == nullptr)
        {
            grpc_items = std::make_shared<System::FmItems::GrpcItems>();
        }
        return grpc_items;
    }

    if(child_yang_name == "scpserver-items")
    {
        if(scpserver_items == nullptr)
        {
            scpserver_items = std::make_shared<System::FmItems::ScpserverItems>();
        }
        return scpserver_items;
    }

    if(child_yang_name == "lldp-items")
    {
        if(lldp_items == nullptr)
        {
            lldp_items = std::make_shared<System::FmItems::LldpItems>();
        }
        return lldp_items;
    }

    if(child_yang_name == "lacp-items")
    {
        if(lacp_items == nullptr)
        {
            lacp_items = std::make_shared<System::FmItems::LacpItems>();
        }
        return lacp_items;
    }

    if(child_yang_name == "nxapi-items")
    {
        if(nxapi_items == nullptr)
        {
            nxapi_items = std::make_shared<System::FmItems::NxapiItems>();
        }
        return nxapi_items;
    }

    if(child_yang_name == "telnet-items")
    {
        if(telnet_items == nullptr)
        {
            telnet_items = std::make_shared<System::FmItems::TelnetItems>();
        }
        return telnet_items;
    }

    if(child_yang_name == "ssh-items")
    {
        if(ssh_items == nullptr)
        {
            ssh_items = std::make_shared<System::FmItems::SshItems>();
        }
        return ssh_items;
    }

    if(child_yang_name == "nxdb-items")
    {
        if(nxdb_items == nullptr)
        {
            nxdb_items = std::make_shared<System::FmItems::NxdbItems>();
        }
        return nxdb_items;
    }

    if(child_yang_name == "vnsegment-items")
    {
        if(vnsegment_items == nullptr)
        {
            vnsegment_items = std::make_shared<System::FmItems::VnsegmentItems>();
        }
        return vnsegment_items;
    }

    if(child_yang_name == "tacacsplus-items")
    {
        if(tacacsplus_items == nullptr)
        {
            tacacsplus_items = std::make_shared<System::FmItems::TacacsplusItems>();
        }
        return tacacsplus_items;
    }

    if(child_yang_name == "ldap-items")
    {
        if(ldap_items == nullptr)
        {
            ldap_items = std::make_shared<System::FmItems::LdapItems>();
        }
        return ldap_items;
    }

    if(child_yang_name == "scheduler-items")
    {
        if(scheduler_items == nullptr)
        {
            scheduler_items = std::make_shared<System::FmItems::SchedulerItems>();
        }
        return scheduler_items;
    }

    if(child_yang_name == "imp-items")
    {
        if(imp_items == nullptr)
        {
            imp_items = std::make_shared<System::FmItems::ImpItems>();
        }
        return imp_items;
    }

    if(child_yang_name == "udld-items")
    {
        if(udld_items == nullptr)
        {
            udld_items = std::make_shared<System::FmItems::UdldItems>();
        }
        return udld_items;
    }

    if(child_yang_name == "nat-items")
    {
        if(nat_items == nullptr)
        {
            nat_items = std::make_shared<System::FmItems::NatItems>();
        }
        return nat_items;
    }

    if(child_yang_name == "vrrpv3-items")
    {
        if(vrrpv3_items == nullptr)
        {
            vrrpv3_items = std::make_shared<System::FmItems::Vrrpv3Items>();
        }
        return vrrpv3_items;
    }

    if(child_yang_name == "vrrp-items")
    {
        if(vrrp_items == nullptr)
        {
            vrrp_items = std::make_shared<System::FmItems::VrrpItems>();
        }
        return vrrp_items;
    }

    if(child_yang_name == "hsrp-items")
    {
        if(hsrp_items == nullptr)
        {
            hsrp_items = std::make_shared<System::FmItems::HsrpItems>();
        }
        return hsrp_items;
    }

    if(child_yang_name == "netflow-items")
    {
        if(netflow_items == nullptr)
        {
            netflow_items = std::make_shared<System::FmItems::NetflowItems>();
        }
        return netflow_items;
    }

    if(child_yang_name == "analytics-items")
    {
        if(analytics_items == nullptr)
        {
            analytics_items = std::make_shared<System::FmItems::AnalyticsItems>();
        }
        return analytics_items;
    }

    if(child_yang_name == "bfd-items")
    {
        if(bfd_items == nullptr)
        {
            bfd_items = std::make_shared<System::FmItems::BfdItems>();
        }
        return bfd_items;
    }

    if(child_yang_name == "tunnelif-items")
    {
        if(tunnelif_items == nullptr)
        {
            tunnelif_items = std::make_shared<System::FmItems::TunnelifItems>();
        }
        return tunnelif_items;
    }

    if(child_yang_name == "nvo-items")
    {
        if(nvo_items == nullptr)
        {
            nvo_items = std::make_shared<System::FmItems::NvoItems>();
        }
        return nvo_items;
    }

    if(child_yang_name == "pbr-items")
    {
        if(pbr_items == nullptr)
        {
            pbr_items = std::make_shared<System::FmItems::PbrItems>();
        }
        return pbr_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::FmItems::PimItems>();
        }
        return pim_items;
    }

    if(child_yang_name == "ngmvpn-items")
    {
        if(ngmvpn_items == nullptr)
        {
            ngmvpn_items = std::make_shared<System::FmItems::NgmvpnItems>();
        }
        return ngmvpn_items;
    }

    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::FmItems::VpcItems>();
        }
        return vpc_items;
    }

    if(child_yang_name == "vtp-items")
    {
        if(vtp_items == nullptr)
        {
            vtp_items = std::make_shared<System::FmItems::VtpItems>();
        }
        return vtp_items;
    }

    if(child_yang_name == "pvlan-items")
    {
        if(pvlan_items == nullptr)
        {
            pvlan_items = std::make_shared<System::FmItems::PvlanItems>();
        }
        return pvlan_items;
    }

    if(child_yang_name == "ntpd-items")
    {
        if(ntpd_items == nullptr)
        {
            ntpd_items = std::make_shared<System::FmItems::NtpdItems>();
        }
        return ntpd_items;
    }

    if(child_yang_name == "nbm-items")
    {
        if(nbm_items == nullptr)
        {
            nbm_items = std::make_shared<System::FmItems::NbmItems>();
        }
        return nbm_items;
    }

    if(child_yang_name == "telemetry-items")
    {
        if(telemetry_items == nullptr)
        {
            telemetry_items = std::make_shared<System::FmItems::TelemetryItems>();
        }
        return telemetry_items;
    }

    if(child_yang_name == "ospf-items")
    {
        if(ospf_items == nullptr)
        {
            ospf_items = std::make_shared<System::FmItems::OspfItems>();
        }
        return ospf_items;
    }

    if(child_yang_name == "ospfv3-items")
    {
        if(ospfv3_items == nullptr)
        {
            ospfv3_items = std::make_shared<System::FmItems::Ospfv3Items>();
        }
        return ospfv3_items;
    }

    if(child_yang_name == "vctrl-items")
    {
        if(vctrl_items == nullptr)
        {
            vctrl_items = std::make_shared<System::FmItems::VctrlItems>();
        }
        return vctrl_items;
    }

    if(child_yang_name == "macsec-items")
    {
        if(macsec_items == nullptr)
        {
            macsec_items = std::make_shared<System::FmItems::MacsecItems>();
        }
        return macsec_items;
    }

    if(child_yang_name == "npiv-items")
    {
        if(npiv_items == nullptr)
        {
            npiv_items = std::make_shared<System::FmItems::NpivItems>();
        }
        return npiv_items;
    }

    if(child_yang_name == "pim6-items")
    {
        if(pim6_items == nullptr)
        {
            pim6_items = std::make_shared<System::FmItems::Pim6Items>();
        }
        return pim6_items;
    }

    if(child_yang_name == "isis-items")
    {
        if(isis_items == nullptr)
        {
            isis_items = std::make_shared<System::FmItems::IsisItems>();
        }
        return isis_items;
    }

    if(child_yang_name == "hwtelemetry-items")
    {
        if(hwtelemetry_items == nullptr)
        {
            hwtelemetry_items = std::make_shared<System::FmItems::HwtelemetryItems>();
        }
        return hwtelemetry_items;
    }

    if(child_yang_name == "itd-items")
    {
        if(itd_items == nullptr)
        {
            itd_items = std::make_shared<System::FmItems::ItdItems>();
        }
        return itd_items;
    }

    if(child_yang_name == "portsec-items")
    {
        if(portsec_items == nullptr)
        {
            portsec_items = std::make_shared<System::FmItems::PortsecItems>();
        }
        return portsec_items;
    }

    if(child_yang_name == "flexlink-items")
    {
        if(flexlink_items == nullptr)
        {
            flexlink_items = std::make_shared<System::FmItems::FlexlinkItems>();
        }
        return flexlink_items;
    }

    if(child_yang_name == "slasender-items")
    {
        if(slasender_items == nullptr)
        {
            slasender_items = std::make_shared<System::FmItems::SlasenderItems>();
        }
        return slasender_items;
    }

    if(child_yang_name == "slaresponder-items")
    {
        if(slaresponder_items == nullptr)
        {
            slaresponder_items = std::make_shared<System::FmItems::SlaresponderItems>();
        }
        return slaresponder_items;
    }

    if(child_yang_name == "slatwampserver-items")
    {
        if(slatwampserver_items == nullptr)
        {
            slatwampserver_items = std::make_shared<System::FmItems::SlatwampserverItems>();
        }
        return slatwampserver_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mplsstatic_items != nullptr)
    {
        _children["mplsstatic-items"] = mplsstatic_items;
    }

    if(mplsoam_items != nullptr)
    {
        _children["mplsoam-items"] = mplsoam_items;
    }

    if(srte_items != nullptr)
    {
        _children["srte-items"] = srte_items;
    }

    if(mplssgmntrtg_items != nullptr)
    {
        _children["mplssgmntrtg-items"] = mplssgmntrtg_items;
    }

    if(srv6_items != nullptr)
    {
        _children["srv6-items"] = srv6_items;
    }

    if(mplsldp_items != nullptr)
    {
        _children["mplsldp-items"] = mplsldp_items;
    }

    if(mplsl3vpn_items != nullptr)
    {
        _children["mplsl3vpn-items"] = mplsl3vpn_items;
    }

    if(mplsevpn_items != nullptr)
    {
        _children["mplsevpn-items"] = mplsevpn_items;
    }

    if(evmed_items != nullptr)
    {
        _children["evmed-items"] = evmed_items;
    }

    if(bgp_items != nullptr)
    {
        _children["bgp-items"] = bgp_items;
    }

    if(hmm_items != nullptr)
    {
        _children["hmm-items"] = hmm_items;
    }

    if(evpn_items != nullptr)
    {
        _children["evpn-items"] = evpn_items;
    }

    if(sflow_items != nullptr)
    {
        _children["sflow-items"] = sflow_items;
    }

    if(ngoam_items != nullptr)
    {
        _children["ngoam-items"] = ngoam_items;
    }

    if(poe_items != nullptr)
    {
        _children["poe-items"] = poe_items;
    }

    if(msdp_items != nullptr)
    {
        _children["msdp-items"] = msdp_items;
    }

    if(dhcp_items != nullptr)
    {
        _children["dhcp-items"] = dhcp_items;
    }

    if(ifvlan_items != nullptr)
    {
        _children["ifvlan-items"] = ifvlan_items;
    }

    if(bashshell_items != nullptr)
    {
        _children["bashshell-items"] = bashshell_items;
    }

    if(netconf_items != nullptr)
    {
        _children["netconf-items"] = netconf_items;
    }

    if(restconf_items != nullptr)
    {
        _children["restconf-items"] = restconf_items;
    }

    if(grpc_items != nullptr)
    {
        _children["grpc-items"] = grpc_items;
    }

    if(scpserver_items != nullptr)
    {
        _children["scpserver-items"] = scpserver_items;
    }

    if(lldp_items != nullptr)
    {
        _children["lldp-items"] = lldp_items;
    }

    if(lacp_items != nullptr)
    {
        _children["lacp-items"] = lacp_items;
    }

    if(nxapi_items != nullptr)
    {
        _children["nxapi-items"] = nxapi_items;
    }

    if(telnet_items != nullptr)
    {
        _children["telnet-items"] = telnet_items;
    }

    if(ssh_items != nullptr)
    {
        _children["ssh-items"] = ssh_items;
    }

    if(nxdb_items != nullptr)
    {
        _children["nxdb-items"] = nxdb_items;
    }

    if(vnsegment_items != nullptr)
    {
        _children["vnsegment-items"] = vnsegment_items;
    }

    if(tacacsplus_items != nullptr)
    {
        _children["tacacsplus-items"] = tacacsplus_items;
    }

    if(ldap_items != nullptr)
    {
        _children["ldap-items"] = ldap_items;
    }

    if(scheduler_items != nullptr)
    {
        _children["scheduler-items"] = scheduler_items;
    }

    if(imp_items != nullptr)
    {
        _children["imp-items"] = imp_items;
    }

    if(udld_items != nullptr)
    {
        _children["udld-items"] = udld_items;
    }

    if(nat_items != nullptr)
    {
        _children["nat-items"] = nat_items;
    }

    if(vrrpv3_items != nullptr)
    {
        _children["vrrpv3-items"] = vrrpv3_items;
    }

    if(vrrp_items != nullptr)
    {
        _children["vrrp-items"] = vrrp_items;
    }

    if(hsrp_items != nullptr)
    {
        _children["hsrp-items"] = hsrp_items;
    }

    if(netflow_items != nullptr)
    {
        _children["netflow-items"] = netflow_items;
    }

    if(analytics_items != nullptr)
    {
        _children["analytics-items"] = analytics_items;
    }

    if(bfd_items != nullptr)
    {
        _children["bfd-items"] = bfd_items;
    }

    if(tunnelif_items != nullptr)
    {
        _children["tunnelif-items"] = tunnelif_items;
    }

    if(nvo_items != nullptr)
    {
        _children["nvo-items"] = nvo_items;
    }

    if(pbr_items != nullptr)
    {
        _children["pbr-items"] = pbr_items;
    }

    if(pim_items != nullptr)
    {
        _children["pim-items"] = pim_items;
    }

    if(ngmvpn_items != nullptr)
    {
        _children["ngmvpn-items"] = ngmvpn_items;
    }

    if(vpc_items != nullptr)
    {
        _children["vpc-items"] = vpc_items;
    }

    if(vtp_items != nullptr)
    {
        _children["vtp-items"] = vtp_items;
    }

    if(pvlan_items != nullptr)
    {
        _children["pvlan-items"] = pvlan_items;
    }

    if(ntpd_items != nullptr)
    {
        _children["ntpd-items"] = ntpd_items;
    }

    if(nbm_items != nullptr)
    {
        _children["nbm-items"] = nbm_items;
    }

    if(telemetry_items != nullptr)
    {
        _children["telemetry-items"] = telemetry_items;
    }

    if(ospf_items != nullptr)
    {
        _children["ospf-items"] = ospf_items;
    }

    if(ospfv3_items != nullptr)
    {
        _children["ospfv3-items"] = ospfv3_items;
    }

    if(vctrl_items != nullptr)
    {
        _children["vctrl-items"] = vctrl_items;
    }

    if(macsec_items != nullptr)
    {
        _children["macsec-items"] = macsec_items;
    }

    if(npiv_items != nullptr)
    {
        _children["npiv-items"] = npiv_items;
    }

    if(pim6_items != nullptr)
    {
        _children["pim6-items"] = pim6_items;
    }

    if(isis_items != nullptr)
    {
        _children["isis-items"] = isis_items;
    }

    if(hwtelemetry_items != nullptr)
    {
        _children["hwtelemetry-items"] = hwtelemetry_items;
    }

    if(itd_items != nullptr)
    {
        _children["itd-items"] = itd_items;
    }

    if(portsec_items != nullptr)
    {
        _children["portsec-items"] = portsec_items;
    }

    if(flexlink_items != nullptr)
    {
        _children["flexlink-items"] = flexlink_items;
    }

    if(slasender_items != nullptr)
    {
        _children["slasender-items"] = slasender_items;
    }

    if(slaresponder_items != nullptr)
    {
        _children["slaresponder-items"] = slaresponder_items;
    }

    if(slatwampserver_items != nullptr)
    {
        _children["slatwampserver-items"] = slatwampserver_items;
    }

    return _children;
}

void System::FmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsstatic-items" || name == "mplsoam-items" || name == "srte-items" || name == "mplssgmntrtg-items" || name == "srv6-items" || name == "mplsldp-items" || name == "mplsl3vpn-items" || name == "mplsevpn-items" || name == "evmed-items" || name == "bgp-items" || name == "hmm-items" || name == "evpn-items" || name == "sflow-items" || name == "ngoam-items" || name == "poe-items" || name == "msdp-items" || name == "dhcp-items" || name == "ifvlan-items" || name == "bashshell-items" || name == "netconf-items" || name == "restconf-items" || name == "grpc-items" || name == "scpserver-items" || name == "lldp-items" || name == "lacp-items" || name == "nxapi-items" || name == "telnet-items" || name == "ssh-items" || name == "nxdb-items" || name == "vnsegment-items" || name == "tacacsplus-items" || name == "ldap-items" || name == "scheduler-items" || name == "imp-items" || name == "udld-items" || name == "nat-items" || name == "vrrpv3-items" || name == "vrrp-items" || name == "hsrp-items" || name == "netflow-items" || name == "analytics-items" || name == "bfd-items" || name == "tunnelif-items" || name == "nvo-items" || name == "pbr-items" || name == "pim-items" || name == "ngmvpn-items" || name == "vpc-items" || name == "vtp-items" || name == "pvlan-items" || name == "ntpd-items" || name == "nbm-items" || name == "telemetry-items" || name == "ospf-items" || name == "ospfv3-items" || name == "vctrl-items" || name == "macsec-items" || name == "npiv-items" || name == "pim6-items" || name == "isis-items" || name == "hwtelemetry-items" || name == "itd-items" || name == "portsec-items" || name == "flexlink-items" || name == "slasender-items" || name == "slaresponder-items" || name == "slatwampserver-items")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::MplsstaticItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsstaticItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsstatic-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::~MplsstaticItems()
{
}

bool System::FmItems::MplsstaticItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsstaticItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsstaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsstatic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsstaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsstaticItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsstaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplsstaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsstaticItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsstaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsstatic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsstaticItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsstatic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsstaticItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsstaticItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplsstaticItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsstaticItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsstatic-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsoamItems::MplsoamItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsoamItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsoam-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::~MplsoamItems()
{
}

bool System::FmItems::MplsoamItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsoamItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsoamItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplsoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsoamItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsoamItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsoamItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsoamItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsoamItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsoamItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplsoamItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsoamItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsoamItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsoam-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SrteItems::SrteItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::SrteItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "srte-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SrteItems::~SrteItems()
{
}

bool System::FmItems::SrteItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SrteItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SrteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SrteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SrteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SrteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SrteItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SrteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SrteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::SrteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::SrteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::SrteItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "srte-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SrteItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SrteItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SrteItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SrteItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/srte-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SrteItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SrteItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SrteItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SrteItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SrteItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SrteItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SrteItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SrteItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/srte-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SrteItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::MplssgmntrtgItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplssgmntrtg-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::~MplssgmntrtgItems()
{
}

bool System::FmItems::MplssgmntrtgItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplssgmntrtgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplssgmntrtgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplssgmntrtg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplssgmntrtgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplssgmntrtgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplssgmntrtgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplssgmntrtgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplssgmntrtgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplssgmntrtg-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplssgmntrtg-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplssgmntrtgItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplssgmntrtgItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplssgmntrtg-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Srv6Items::Srv6Items()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::Srv6Items::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "srv6-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Srv6Items::~Srv6Items()
{
}

bool System::FmItems::Srv6Items::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Srv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Srv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Srv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Srv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Srv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Srv6Items::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Srv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Srv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Srv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::Srv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::Srv6Items::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "srv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Srv6Items::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Srv6Items::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Srv6Items::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Srv6Items::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/srv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Srv6Items::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Srv6Items::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Srv6Items::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Srv6Items::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Srv6Items::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Srv6Items::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Srv6Items::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/srv6-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsldpItems::MplsldpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsldpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsldp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsldpItems::~MplsldpItems()
{
}

bool System::FmItems::MplsldpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsldpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsldpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MplsldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsldpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsldpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsldpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsldpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsldpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsldpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsldpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsldpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsldpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MplsldpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsldpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsldpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsldp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Mplsl3vpnItems::Mplsl3vpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::Mplsl3vpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsl3vpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Mplsl3vpnItems::~Mplsl3vpnItems()
{
}

bool System::FmItems::Mplsl3vpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Mplsl3vpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Mplsl3vpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Mplsl3vpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsl3vpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Mplsl3vpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Mplsl3vpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Mplsl3vpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Mplsl3vpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Mplsl3vpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Mplsl3vpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::Mplsl3vpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsl3vpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Mplsl3vpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsl3vpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Mplsl3vpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Mplsl3vpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Mplsl3vpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsl3vpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsevpnItems::MplsevpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
{

    yang_name = "mplsevpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsevpnItems::~MplsevpnItems()
{
}

bool System::FmItems::MplsevpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set;
}

bool System::FmItems::MplsevpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter);
}

std::string System::FmItems::MplsevpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsevpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsevpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsevpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MplsevpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MplsevpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MplsevpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsevpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsevpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::EvmedItems::EvmedItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::EvmedItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "evmed-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvmedItems::~EvmedItems()
{
}

bool System::FmItems::EvmedItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::EvmedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::EvmedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvmedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evmed-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvmedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvmedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::EvmedItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvmedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::EvmedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::EvmedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::EvmedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::EvmedItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "evmed-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvmedItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::EvmedItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::EvmedItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::EvmedItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evmed-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvmedItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvmedItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvmedItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvmedItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::EvmedItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::EvmedItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::EvmedItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evmed-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::BgpItems::BgpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BgpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bgp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::~BgpItems()
{
}

bool System::FmItems::BgpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BgpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BgpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BgpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BgpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BgpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::BgpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BgpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BgpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BgpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bgp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BgpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BgpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BgpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bgp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BgpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::BgpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BgpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::BgpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BgpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BgpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bgp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HmmItems::HmmItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HmmItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hmm-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::~HmmItems()
{
}

bool System::FmItems::HmmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HmmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HmmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HmmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HmmItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HmmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::HmmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HmmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HmmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HmmItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hmm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HmmItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HmmItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HmmItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hmm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HmmItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::HmmItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HmmItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::HmmItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HmmItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HmmItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hmm-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::EvpnItems::EvpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::EvpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "evpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::~EvpnItems()
{
}

bool System::FmItems::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::EvpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::EvpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::EvpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::EvpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::EvpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::EvpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::EvpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::EvpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SflowItems::SflowItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::SflowItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "sflow-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SflowItems::~SflowItems()
{
}

bool System::FmItems::SflowItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SflowItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SflowItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SflowItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sflow-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SflowItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SflowItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SflowItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SflowItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SflowItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::SflowItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::SflowItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::SflowItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "sflow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SflowItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SflowItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SflowItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SflowItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/sflow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SflowItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SflowItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SflowItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SflowItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SflowItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SflowItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SflowItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SflowItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/sflow-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SflowItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NgoamItems::NgoamItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NgoamItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ngoam-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::~NgoamItems()
{
}

bool System::FmItems::NgoamItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NgoamItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NgoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NgoamItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NgoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NgoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NgoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NgoamItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NgoamItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NgoamItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NgoamItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgoamItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgoamItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NgoamItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NgoamItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NgoamItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngoam-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PoeItems::PoeItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PoeItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "poe-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PoeItems::~PoeItems()
{
}

bool System::FmItems::PoeItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PoeItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PoeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PoeItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PoeItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PoeItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PoeItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PoeItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PoeItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PoeItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PoeItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PoeItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PoeItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PoeItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PoeItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PoeItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/poe-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PoeItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MsdpItems::MsdpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::MsdpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "msdp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MsdpItems::~MsdpItems()
{
}

bool System::FmItems::MsdpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MsdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MsdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MsdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MsdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MsdpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MsdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MsdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::MsdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::MsdpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "msdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MsdpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MsdpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MsdpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MsdpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/msdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MsdpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MsdpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MsdpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MsdpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MsdpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MsdpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MsdpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/msdp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::DhcpItems::DhcpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::DhcpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "dhcp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::DhcpItems::~DhcpItems()
{
}

bool System::FmItems::DhcpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::DhcpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::DhcpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::DhcpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::DhcpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::DhcpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::DhcpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::DhcpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::DhcpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::DhcpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::DhcpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::DhcpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "dhcp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::DhcpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::DhcpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::DhcpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::DhcpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/dhcp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::DhcpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::DhcpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::DhcpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::DhcpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::DhcpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::DhcpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::DhcpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/dhcp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::IfvlanItems::IfvlanItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::IfvlanItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ifvlan-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IfvlanItems::~IfvlanItems()
{
}

bool System::FmItems::IfvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::IfvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::IfvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IfvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IfvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IfvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::IfvlanItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IfvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::IfvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::IfvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::IfvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::IfvlanItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ifvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IfvlanItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::IfvlanItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::IfvlanItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::IfvlanItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ifvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IfvlanItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IfvlanItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IfvlanItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IfvlanItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::IfvlanItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::IfvlanItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::IfvlanItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ifvlan-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::BashshellItems::BashshellItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BashshellItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bashshell-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BashshellItems::~BashshellItems()
{
}

bool System::FmItems::BashshellItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BashshellItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BashshellItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BashshellItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bashshell-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BashshellItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BashshellItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BashshellItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BashshellItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::BashshellItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BashshellItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BashshellItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BashshellItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bashshell-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BashshellItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BashshellItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BashshellItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BashshellItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bashshell-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BashshellItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BashshellItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BashshellItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BashshellItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::BashshellItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BashshellItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BashshellItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bashshell-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NetconfItems::NetconfItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NetconfItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "netconf-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetconfItems::~NetconfItems()
{
}

bool System::FmItems::NetconfItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NetconfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NetconfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetconfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetconfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetconfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NetconfItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetconfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NetconfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NetconfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NetconfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NetconfItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "netconf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetconfItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NetconfItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NetconfItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NetconfItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/netconf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetconfItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetconfItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetconfItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetconfItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NetconfItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NetconfItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NetconfItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/netconf-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::RestconfItems::RestconfItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::RestconfItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "restconf-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::RestconfItems::~RestconfItems()
{
}

bool System::FmItems::RestconfItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::RestconfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::RestconfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::RestconfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restconf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::RestconfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::RestconfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::RestconfItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::RestconfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::RestconfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::RestconfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::RestconfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::RestconfItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "restconf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::RestconfItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::RestconfItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::RestconfItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::RestconfItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/restconf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::RestconfItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::RestconfItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::RestconfItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::RestconfItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::RestconfItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::RestconfItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::RestconfItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/restconf-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::GrpcItems::GrpcItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::GrpcItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "grpc-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::GrpcItems::~GrpcItems()
{
}

bool System::FmItems::GrpcItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::GrpcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::GrpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::GrpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::GrpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::GrpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::GrpcItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::GrpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::GrpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::GrpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::GrpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::GrpcItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "grpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::GrpcItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::GrpcItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::GrpcItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::GrpcItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/grpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::GrpcItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::GrpcItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::GrpcItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::GrpcItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::GrpcItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::GrpcItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::GrpcItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/grpc-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ScpserverItems::ScpserverItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::ScpserverItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "scpserver-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ScpserverItems::~ScpserverItems()
{
}

bool System::FmItems::ScpserverItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::ScpserverItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::ScpserverItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ScpserverItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scpserver-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ScpserverItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ScpserverItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::ScpserverItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ScpserverItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::ScpserverItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::ScpserverItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::ScpserverItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ScpserverItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "scpserver-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ScpserverItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::ScpserverItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::ScpserverItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::ScpserverItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/scpserver-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ScpserverItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ScpserverItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ScpserverItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ScpserverItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::ScpserverItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::ScpserverItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::ScpserverItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/scpserver-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::LldpItems::LldpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::LldpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "lldp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LldpItems::~LldpItems()
{
}

bool System::FmItems::LldpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::LldpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::LldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::LldpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::LldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::LldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::LldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::LldpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "lldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LldpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::LldpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::LldpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::LldpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LldpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LldpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LldpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::LldpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LldpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::LldpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::LldpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::LldpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lldp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::LldpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::LacpItems::LacpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::LacpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "lacp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LacpItems::~LacpItems()
{
}

bool System::FmItems::LacpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::LacpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::LacpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LacpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LacpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LacpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::LacpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LacpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::LacpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::LacpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::LacpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::LacpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "lacp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LacpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::LacpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::LacpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::LacpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lacp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LacpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LacpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LacpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::LacpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LacpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::LacpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::LacpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::LacpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/lacp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::LacpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NxapiItems::NxapiItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NxapiItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nxapi-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxapiItems::~NxapiItems()
{
}

bool System::FmItems::NxapiItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NxapiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NxapiItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxapiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nxapi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxapiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxapiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NxapiItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxapiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NxapiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NxapiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NxapiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NxapiItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nxapi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxapiItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NxapiItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NxapiItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NxapiItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxapi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxapiItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxapiItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxapiItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxapiItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NxapiItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NxapiItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NxapiItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxapi-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TelnetItems::TelnetItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "telnet-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelnetItems::~TelnetItems()
{
}

bool System::FmItems::TelnetItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set;
}

bool System::FmItems::TelnetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TelnetItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelnetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelnetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelnetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelnetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TelnetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::TelnetItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::TelnetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SshItems::SshItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ssh-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SshItems::~SshItems()
{
}

bool System::FmItems::SshItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set;
}

bool System::FmItems::SshItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SshItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SshItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SshItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SshItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SshItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SshItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FmItems::SshItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FmItems::SshItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NxdbItems::NxdbItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NxdbItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nxdb-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxdbItems::~NxdbItems()
{
}

bool System::FmItems::NxdbItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NxdbItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NxdbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxdbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nxdb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxdbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxdbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NxdbItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxdbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NxdbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NxdbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NxdbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NxdbItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nxdb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxdbItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NxdbItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NxdbItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NxdbItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxdb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxdbItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxdbItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxdbItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxdbItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NxdbItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NxdbItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NxdbItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nxdb-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VnsegmentItems::VnsegmentItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VnsegmentItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vnsegment-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VnsegmentItems::~VnsegmentItems()
{
}

bool System::FmItems::VnsegmentItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VnsegmentItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VnsegmentItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VnsegmentItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnsegment-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VnsegmentItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VnsegmentItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VnsegmentItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VnsegmentItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VnsegmentItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VnsegmentItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VnsegmentItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VnsegmentItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vnsegment-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VnsegmentItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VnsegmentItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VnsegmentItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VnsegmentItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vnsegment-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VnsegmentItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VnsegmentItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VnsegmentItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VnsegmentItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VnsegmentItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VnsegmentItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VnsegmentItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}


}
}

