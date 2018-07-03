
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_21.hpp"
#include "Cisco_NX_OS_device_22.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::RsNhAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsNhAtt-list"; yang_parent_name = "rsnhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::~RsNhAttList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsNhAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DtepItems()
    :
    dtep_list(this, {"id"})
{

    yang_name = "dtep-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::~DtepItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dtep_list.len(); index++)
    {
        if(dtep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::has_operation() const
{
    for (std::size_t index=0; index<dtep_list.len(); index++)
    {
        if(dtep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DTEp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList>();
        c->parent = this;
        dtep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dtep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DTEp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::DTEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    encapt{YType::enumeration, "encapt"},
    type{YType::str, "type"},
    role{YType::enumeration, "role"}
{

    yang_name = "DTEp-list"; yang_parent_name = "dtep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::~DTEpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| encapt.is_set
	|| type.is_set
	|| role.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapt.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DTEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapt.is_set || is_set(encapt.yfilter)) leaf_name_data.push_back(encapt.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "encapt")
    {
        encapt = value;
        encapt.value_namespace = name_space;
        encapt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapt")
    {
        encapt.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "encapt" || name == "type" || name == "role")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::LspgenItems()
    :
    initintvl{YType::uint32, "initIntvl"},
    secintvl{YType::uint32, "secIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "lspgen-items"; yang_parent_name = "DomLvl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::~LspgenItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::has_data() const
{
    if (is_presence_container) return true;
    return initintvl.is_set
	|| secintvl.is_set
	|| maxintvl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(secintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspgen-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (secintvl.is_set || is_set(secintvl.yfilter)) leaf_name_data.push_back(secintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secIntvl")
    {
        secintvl = value;
        secintvl.value_namespace = name_space;
        secintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "secIntvl")
    {
        secintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initIntvl" || name == "secIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::SpfcompItems()
    :
    initintvl{YType::uint32, "initIntvl"},
    secintvl{YType::uint32, "secIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "spfcomp-items"; yang_parent_name = "DomLvl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::~SpfcompItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::has_data() const
{
    if (is_presence_container) return true;
    return initintvl.is_set
	|| secintvl.is_set
	|| maxintvl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(secintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfcomp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (secintvl.is_set || is_set(secintvl.yfilter)) leaf_name_data.push_back(secintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secIntvl")
    {
        secintvl = value;
        secintvl.value_namespace = name_space;
        secintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "secIntvl")
    {
        secintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initIntvl" || name == "secIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtsumItems()
    :
    rtsum_list(this, {"addr"})
{

    yang_name = "rtsum-items"; yang_parent_name = "DomLvl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::~RtsumItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtsum_list.len(); index++)
    {
        if(rtsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::has_operation() const
{
    for (std::size_t index=0; index<rtsum_list.len(); index++)
    {
        if(rtsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSum-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList>();
        c->parent = this;
        rtsum_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtsum_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSum-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::RtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "RtSum-list"; yang_parent_name = "rtsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::~RtSumList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::AfItems()
    :
    domaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::~AfItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList>();
        c->parent = this;
        domaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DomAfList()
    :
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    mttype{YType::enumeration, "mtType"},
    dist{YType::uint8, "dist"},
    maxecmp{YType::uint8, "maxEcmp"},
    definforig{YType::str, "defInfOrig"},
    definforigrtmap{YType::str, "defInfOrigRtMap"},
    enablebfd{YType::boolean, "enableBfd"},
    name{YType::str, "name"}
{

    yang_name = "DomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::~DomAfList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ctrl.is_set
	|| mttype.is_set
	|| dist.is_set
	|| maxecmp.is_set
	|| definforig.is_set
	|| definforigrtmap.is_set
	|| enablebfd.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mttype.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(maxecmp.yfilter)
	|| ydk::is_set(definforig.yfilter)
	|| ydk::is_set(definforigrtmap.yfilter)
	|| ydk::is_set(enablebfd.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mttype.is_set || is_set(mttype.yfilter)) leaf_name_data.push_back(mttype.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (maxecmp.is_set || is_set(maxecmp.yfilter)) leaf_name_data.push_back(maxecmp.get_name_leafdata());
    if (definforig.is_set || is_set(definforig.yfilter)) leaf_name_data.push_back(definforig.get_name_leafdata());
    if (definforigrtmap.is_set || is_set(definforigrtmap.yfilter)) leaf_name_data.push_back(definforigrtmap.get_name_leafdata());
    if (enablebfd.is_set || is_set(enablebfd.yfilter)) leaf_name_data.push_back(enablebfd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtType")
    {
        mttype = value;
        mttype.value_namespace = name_space;
        mttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp = value;
        maxecmp.value_namespace = name_space;
        maxecmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defInfOrig")
    {
        definforig = value;
        definforig.value_namespace = name_space;
        definforig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defInfOrigRtMap")
    {
        definforigrtmap = value;
        definforigrtmap.value_namespace = name_space;
        definforigrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableBfd")
    {
        enablebfd = value;
        enablebfd.value_namespace = name_space;
        enablebfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "mtType")
    {
        mttype.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp.yfilter = yfilter;
    }
    if(value_path == "defInfOrig")
    {
        definforig.yfilter = yfilter;
    }
    if(value_path == "defInfOrigRtMap")
    {
        definforigrtmap.yfilter = yfilter;
    }
    if(value_path == "enableBfd")
    {
        enablebfd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ctrl" || name == "mtType" || name == "dist" || name == "maxEcmp" || name == "defInfOrig" || name == "defInfOrigRtMap" || name == "enableBfd" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmtreeItems()
    :
    fmcasttree_list(this, {"id"})
{

    yang_name = "fmtree-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::~FmtreeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fmcasttree_list.len(); index++)
    {
        if(fmcasttree_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::has_operation() const
{
    for (std::size_t index=0; index<fmcasttree_list.len(); index++)
    {
        if(fmcasttree_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmtree-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FmcastTree-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList>();
        c->parent = this;
        fmcasttree_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fmcasttree_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FmcastTree-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::FmcastTreeList()
    :
    id{YType::uint8, "id"},
    origin{YType::enumeration, "origin"},
    root{YType::str, "root"},
    operst{YType::enumeration, "operSt"},
    diameter{YType::uint16, "diameter"},
    diaalert{YType::enumeration, "diaAlert"},
    rootport{YType::str, "rootPort"},
    name{YType::str, "name"}
        ,
    node_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems>())
    , oifleaf_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems>())
    , oifspine_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems>())
{
    node_items->parent = this;
    oifleaf_items->parent = this;
    oifspine_items->parent = this;

    yang_name = "FmcastTree-list"; yang_parent_name = "fmtree-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::~FmcastTreeList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| origin.is_set
	|| root.is_set
	|| operst.is_set
	|| diameter.is_set
	|| diaalert.is_set
	|| rootport.is_set
	|| name.is_set
	|| (node_items !=  nullptr && node_items->has_data())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(root.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(diaalert.yfilter)
	|| ydk::is_set(rootport.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_operation())
	|| (oifspine_items !=  nullptr && oifspine_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FmcastTree-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (diaalert.is_set || is_set(diaalert.yfilter)) leaf_name_data.push_back(diaalert.get_name_leafdata());
    if (rootport.is_set || is_set(rootport.yfilter)) leaf_name_data.push_back(rootport.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "oifleaf-items")
    {
        if(oifleaf_items == nullptr)
        {
            oifleaf_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems>();
        }
        return oifleaf_items;
    }

    if(child_yang_name == "oifspine-items")
    {
        if(oifspine_items == nullptr)
        {
            oifspine_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems>();
        }
        return oifspine_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        children["oifspine-items"] = oifspine_items;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diaAlert")
    {
        diaalert = value;
        diaalert.value_namespace = name_space;
        diaalert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPort")
    {
        rootport = value;
        rootport.value_namespace = name_space;
        rootport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "diaAlert")
    {
        diaalert.yfilter = yfilter;
    }
    if(value_path == "rootPort")
    {
        rootport.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "oifleaf-items" || name == "oifspine-items" || name == "id" || name == "origin" || name == "root" || name == "operSt" || name == "diameter" || name == "diaAlert" || name == "rootPort" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeItems()
    :
    nodeidrec_list(this, {"addr"})
{

    yang_name = "node-items"; yang_parent_name = "FmcastTree-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::~NodeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList>();
        c->parent = this;
        nodeidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodeidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::NodeIdRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "NodeIdRec-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::~NodeIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeIdRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifleafItems()
    :
    oiflistleaf_list(this, {"idx"})
{

    yang_name = "oifleaf-items"; yang_parent_name = "FmcastTree-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::~OifleafItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifleaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList>();
        c->parent = this;
        oiflistleaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistleaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListLeaf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::OifListLeafList()
    :
    idx{YType::uint8, "idx"},
    oiflist{YType::str, "oifList"},
    name{YType::str, "name"}
{

    yang_name = "OifListLeaf-list"; yang_parent_name = "oifleaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::~OifListLeafList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| oiflist.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(oiflist.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListLeaf-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (oiflist.is_set || is_set(oiflist.yfilter)) leaf_name_data.push_back(oiflist.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifList")
    {
        oiflist = value;
        oiflist.value_namespace = name_space;
        oiflist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "oifList")
    {
        oiflist.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "oifList" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifspineItems()
    :
    oiflistspine_list(this, {"idx"})
{

    yang_name = "oifspine-items"; yang_parent_name = "FmcastTree-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::~OifspineItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifspine-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList>();
        c->parent = this;
        oiflistspine_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistspine_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListSpine-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::OifListSpineList()
    :
    idx{YType::uint8, "idx"},
    oiflist{YType::str, "oifList"},
    name{YType::str, "name"}
{

    yang_name = "OifListSpine-list"; yang_parent_name = "oifspine-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::~OifListSpineList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| oiflist.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(oiflist.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListSpine-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (oiflist.is_set || is_set(oiflist.yfilter)) leaf_name_data.push_back(oiflist.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifList")
    {
        oiflist = value;
        oiflist.value_namespace = name_space;
        oiflist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "oifList")
    {
        oiflist.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "oifList" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::GrItems()
    :
    adminst{YType::enumeration, "adminSt"},
    grt3intvl{YType::uint16, "grT3Intvl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "gr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::~GrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| grt3intvl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(grt3intvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (grt3intvl.is_set || is_set(grt3intvl.yfilter)) leaf_name_data.push_back(grt3intvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grT3Intvl")
    {
        grt3intvl = value;
        grt3intvl.value_namespace = name_space;
        grt3intvl.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "grT3Intvl")
    {
        grt3intvl.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "grT3Intvl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    cktt{YType::enumeration, "cktT"},
    metric{YType::uint32, "metric"},
    ctrl{YType::str, "ctrl"},
    v4enable{YType::boolean, "v4enable"},
    v6enable{YType::boolean, "v6enable"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authcheckp2p{YType::boolean, "authCheckP2P"},
    networktypep2p{YType::boolean, "networkTypeP2P"},
    lsprefreshintvl{YType::uint32, "lspRefreshIntvl"},
    retransinterval{YType::uint16, "retransInterval"},
    retransthrottleinterval{YType::uint16, "retransThrottleInterval"},
    v4bfd{YType::enumeration, "v4Bfd"},
    v6bfd{YType::enumeration, "v6Bfd"},
    iibidx{YType::uint16, "iibIdx"},
    localcktid{YType::uint16, "localCktId"},
    extdlocalcktid{YType::uint32, "extdLocalCktId"},
    p2pcktid{YType::str, "p2pCktId"},
    initerror{YType::boolean, "initError"},
    iibupctrl{YType::boolean, "iibUpCtrl"},
    iibstate{YType::str, "iibState"},
    nextiihts{YType::str, "nextIIHTs"}
        ,
    adj_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>())
    , meshgrp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems>())
    , lvl_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems>())
    , traffic_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems>())
    , rtvrfmbr_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    meshgrp_items->parent = this;
    lvl_items->parent = this;
    traffic_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| cktt.is_set
	|| metric.is_set
	|| ctrl.is_set
	|| v4enable.is_set
	|| v6enable.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authcheckp2p.is_set
	|| networktypep2p.is_set
	|| lsprefreshintvl.is_set
	|| retransinterval.is_set
	|| retransthrottleinterval.is_set
	|| v4bfd.is_set
	|| v6bfd.is_set
	|| iibidx.is_set
	|| localcktid.is_set
	|| extdlocalcktid.is_set
	|| p2pcktid.is_set
	|| initerror.is_set
	|| iibupctrl.is_set
	|| iibstate.is_set
	|| nextiihts.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_data())
	|| (lvl_items !=  nullptr && lvl_items->has_data())
	|| (traffic_items !=  nullptr && traffic_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(cktt.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(v4enable.yfilter)
	|| ydk::is_set(v6enable.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authcheckp2p.yfilter)
	|| ydk::is_set(networktypep2p.yfilter)
	|| ydk::is_set(lsprefreshintvl.yfilter)
	|| ydk::is_set(retransinterval.yfilter)
	|| ydk::is_set(retransthrottleinterval.yfilter)
	|| ydk::is_set(v4bfd.yfilter)
	|| ydk::is_set(v6bfd.yfilter)
	|| ydk::is_set(iibidx.yfilter)
	|| ydk::is_set(localcktid.yfilter)
	|| ydk::is_set(extdlocalcktid.yfilter)
	|| ydk::is_set(p2pcktid.yfilter)
	|| ydk::is_set(initerror.yfilter)
	|| ydk::is_set(iibupctrl.yfilter)
	|| ydk::is_set(iibstate.yfilter)
	|| ydk::is_set(nextiihts.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_operation())
	|| (lvl_items !=  nullptr && lvl_items->has_operation())
	|| (traffic_items !=  nullptr && traffic_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (cktt.is_set || is_set(cktt.yfilter)) leaf_name_data.push_back(cktt.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (v4enable.is_set || is_set(v4enable.yfilter)) leaf_name_data.push_back(v4enable.get_name_leafdata());
    if (v6enable.is_set || is_set(v6enable.yfilter)) leaf_name_data.push_back(v6enable.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authcheckp2p.is_set || is_set(authcheckp2p.yfilter)) leaf_name_data.push_back(authcheckp2p.get_name_leafdata());
    if (networktypep2p.is_set || is_set(networktypep2p.yfilter)) leaf_name_data.push_back(networktypep2p.get_name_leafdata());
    if (lsprefreshintvl.is_set || is_set(lsprefreshintvl.yfilter)) leaf_name_data.push_back(lsprefreshintvl.get_name_leafdata());
    if (retransinterval.is_set || is_set(retransinterval.yfilter)) leaf_name_data.push_back(retransinterval.get_name_leafdata());
    if (retransthrottleinterval.is_set || is_set(retransthrottleinterval.yfilter)) leaf_name_data.push_back(retransthrottleinterval.get_name_leafdata());
    if (v4bfd.is_set || is_set(v4bfd.yfilter)) leaf_name_data.push_back(v4bfd.get_name_leafdata());
    if (v6bfd.is_set || is_set(v6bfd.yfilter)) leaf_name_data.push_back(v6bfd.get_name_leafdata());
    if (iibidx.is_set || is_set(iibidx.yfilter)) leaf_name_data.push_back(iibidx.get_name_leafdata());
    if (localcktid.is_set || is_set(localcktid.yfilter)) leaf_name_data.push_back(localcktid.get_name_leafdata());
    if (extdlocalcktid.is_set || is_set(extdlocalcktid.yfilter)) leaf_name_data.push_back(extdlocalcktid.get_name_leafdata());
    if (p2pcktid.is_set || is_set(p2pcktid.yfilter)) leaf_name_data.push_back(p2pcktid.get_name_leafdata());
    if (initerror.is_set || is_set(initerror.yfilter)) leaf_name_data.push_back(initerror.get_name_leafdata());
    if (iibupctrl.is_set || is_set(iibupctrl.yfilter)) leaf_name_data.push_back(iibupctrl.get_name_leafdata());
    if (iibstate.is_set || is_set(iibstate.yfilter)) leaf_name_data.push_back(iibstate.get_name_leafdata());
    if (nextiihts.is_set || is_set(nextiihts.yfilter)) leaf_name_data.push_back(nextiihts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "meshgrp-items")
    {
        if(meshgrp_items == nullptr)
        {
            meshgrp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems>();
        }
        return meshgrp_items;
    }

    if(child_yang_name == "lvl-items")
    {
        if(lvl_items == nullptr)
        {
            lvl_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems>();
        }
        return lvl_items;
    }

    if(child_yang_name == "traffic-items")
    {
        if(traffic_items == nullptr)
        {
            traffic_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems>();
        }
        return traffic_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(meshgrp_items != nullptr)
    {
        children["meshgrp-items"] = meshgrp_items;
    }

    if(lvl_items != nullptr)
    {
        children["lvl-items"] = lvl_items;
    }

    if(traffic_items != nullptr)
    {
        children["traffic-items"] = traffic_items;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cktT")
    {
        cktt = value;
        cktt.value_namespace = name_space;
        cktt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4enable")
    {
        v4enable = value;
        v4enable.value_namespace = name_space;
        v4enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6enable")
    {
        v6enable = value;
        v6enable.value_namespace = name_space;
        v6enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1 = value;
        authchecklvl1.value_namespace = name_space;
        authchecklvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2 = value;
        authchecklvl2.value_namespace = name_space;
        authchecklvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckP2P")
    {
        authcheckp2p = value;
        authcheckp2p.value_namespace = name_space;
        authcheckp2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p = value;
        networktypep2p.value_namespace = name_space;
        networktypep2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl = value;
        lsprefreshintvl.value_namespace = name_space;
        lsprefreshintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransInterval")
    {
        retransinterval = value;
        retransinterval.value_namespace = name_space;
        retransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval = value;
        retransthrottleinterval.value_namespace = name_space;
        retransthrottleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4Bfd")
    {
        v4bfd = value;
        v4bfd.value_namespace = name_space;
        v4bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6Bfd")
    {
        v6bfd = value;
        v6bfd.value_namespace = name_space;
        v6bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iibIdx")
    {
        iibidx = value;
        iibidx.value_namespace = name_space;
        iibidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localCktId")
    {
        localcktid = value;
        localcktid.value_namespace = name_space;
        localcktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extdLocalCktId")
    {
        extdlocalcktid = value;
        extdlocalcktid.value_namespace = name_space;
        extdlocalcktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pCktId")
    {
        p2pcktid = value;
        p2pcktid.value_namespace = name_space;
        p2pcktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initError")
    {
        initerror = value;
        initerror.value_namespace = name_space;
        initerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iibUpCtrl")
    {
        iibupctrl = value;
        iibupctrl.value_namespace = name_space;
        iibupctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iibState")
    {
        iibstate = value;
        iibstate.value_namespace = name_space;
        iibstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextIIHTs")
    {
        nextiihts = value;
        nextiihts.value_namespace = name_space;
        nextiihts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cktT")
    {
        cktt.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "v4enable")
    {
        v4enable.yfilter = yfilter;
    }
    if(value_path == "v6enable")
    {
        v6enable.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2.yfilter = yfilter;
    }
    if(value_path == "authCheckP2P")
    {
        authcheckp2p.yfilter = yfilter;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p.yfilter = yfilter;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl.yfilter = yfilter;
    }
    if(value_path == "retransInterval")
    {
        retransinterval.yfilter = yfilter;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval.yfilter = yfilter;
    }
    if(value_path == "v4Bfd")
    {
        v4bfd.yfilter = yfilter;
    }
    if(value_path == "v6Bfd")
    {
        v6bfd.yfilter = yfilter;
    }
    if(value_path == "iibIdx")
    {
        iibidx.yfilter = yfilter;
    }
    if(value_path == "localCktId")
    {
        localcktid.yfilter = yfilter;
    }
    if(value_path == "extdLocalCktId")
    {
        extdlocalcktid.yfilter = yfilter;
    }
    if(value_path == "p2pCktId")
    {
        p2pcktid.yfilter = yfilter;
    }
    if(value_path == "initError")
    {
        initerror.yfilter = yfilter;
    }
    if(value_path == "iibUpCtrl")
    {
        iibupctrl.yfilter = yfilter;
    }
    if(value_path == "iibState")
    {
        iibstate.yfilter = yfilter;
    }
    if(value_path == "nextIIHTs")
    {
        nextiihts.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "meshgrp-items" || name == "lvl-items" || name == "traffic-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "cktT" || name == "metric" || name == "ctrl" || name == "v4enable" || name == "v6enable" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authCheckP2P" || name == "networkTypeP2P" || name == "lspRefreshIntvl" || name == "retransInterval" || name == "retransThrottleInterval" || name == "v4Bfd" || name == "v6Bfd" || name == "iibIdx" || name == "localCktId" || name == "extdLocalCktId" || name == "p2pCktId" || name == "initError" || name == "iibUpCtrl" || name == "iibState" || name == "nextIIHTs")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"type", "sysid"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    type{YType::enumeration, "type"},
    sysid{YType::str, "sysId"},
    operst{YType::enumeration, "operSt"},
    holdexpts{YType::str, "holdExpTs"},
    ckttype{YType::enumeration, "cktType"},
    peercktid{YType::uint8, "peerCktId"},
    lanid{YType::uint8, "lanId"},
    peercktprio{YType::uint8, "peerCktPrio"},
    peergrflags{YType::str, "peerGrFlags"},
    numadjtrans{YType::uint32, "numAdjTrans"},
    lasttrans{YType::str, "lastTrans"},
    name{YType::str, "name"}
        ,
    addr_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems>())
{
    addr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| sysid.is_set
	|| operst.is_set
	|| holdexpts.is_set
	|| ckttype.is_set
	|| peercktid.is_set
	|| lanid.is_set
	|| peercktprio.is_set
	|| peergrflags.is_set
	|| numadjtrans.is_set
	|| lasttrans.is_set
	|| name.is_set
	|| (addr_items !=  nullptr && addr_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(holdexpts.yfilter)
	|| ydk::is_set(ckttype.yfilter)
	|| ydk::is_set(peercktid.yfilter)
	|| ydk::is_set(lanid.yfilter)
	|| ydk::is_set(peercktprio.yfilter)
	|| ydk::is_set(peergrflags.yfilter)
	|| ydk::is_set(numadjtrans.yfilter)
	|| ydk::is_set(lasttrans.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(sysid, "sysId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (holdexpts.is_set || is_set(holdexpts.yfilter)) leaf_name_data.push_back(holdexpts.get_name_leafdata());
    if (ckttype.is_set || is_set(ckttype.yfilter)) leaf_name_data.push_back(ckttype.get_name_leafdata());
    if (peercktid.is_set || is_set(peercktid.yfilter)) leaf_name_data.push_back(peercktid.get_name_leafdata());
    if (lanid.is_set || is_set(lanid.yfilter)) leaf_name_data.push_back(lanid.get_name_leafdata());
    if (peercktprio.is_set || is_set(peercktprio.yfilter)) leaf_name_data.push_back(peercktprio.get_name_leafdata());
    if (peergrflags.is_set || is_set(peergrflags.yfilter)) leaf_name_data.push_back(peergrflags.get_name_leafdata());
    if (numadjtrans.is_set || is_set(numadjtrans.yfilter)) leaf_name_data.push_back(numadjtrans.get_name_leafdata());
    if (lasttrans.is_set || is_set(lasttrans.yfilter)) leaf_name_data.push_back(lasttrans.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems>();
        }
        return addr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr_items != nullptr)
    {
        children["addr-items"] = addr_items;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdExpTs")
    {
        holdexpts = value;
        holdexpts.value_namespace = name_space;
        holdexpts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cktType")
    {
        ckttype = value;
        ckttype.value_namespace = name_space;
        ckttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCktId")
    {
        peercktid = value;
        peercktid.value_namespace = name_space;
        peercktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanId")
    {
        lanid = value;
        lanid.value_namespace = name_space;
        lanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCktPrio")
    {
        peercktprio = value;
        peercktprio.value_namespace = name_space;
        peercktprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerGrFlags")
    {
        peergrflags = value;
        peergrflags.value_namespace = name_space;
        peergrflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAdjTrans")
    {
        numadjtrans = value;
        numadjtrans.value_namespace = name_space;
        numadjtrans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTrans")
    {
        lasttrans = value;
        lasttrans.value_namespace = name_space;
        lasttrans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "holdExpTs")
    {
        holdexpts.yfilter = yfilter;
    }
    if(value_path == "cktType")
    {
        ckttype.yfilter = yfilter;
    }
    if(value_path == "peerCktId")
    {
        peercktid.yfilter = yfilter;
    }
    if(value_path == "lanId")
    {
        lanid.yfilter = yfilter;
    }
    if(value_path == "peerCktPrio")
    {
        peercktprio.yfilter = yfilter;
    }
    if(value_path == "peerGrFlags")
    {
        peergrflags.yfilter = yfilter;
    }
    if(value_path == "numAdjTrans")
    {
        numadjtrans.yfilter = yfilter;
    }
    if(value_path == "lastTrans")
    {
        lasttrans.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "type" || name == "sysId" || name == "operSt" || name == "holdExpTs" || name == "cktType" || name == "peerCktId" || name == "lanId" || name == "peerCktPrio" || name == "peerGrFlags" || name == "numAdjTrans" || name == "lastTrans" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::AddrItems()
    :
    peeripaddr_list(this, {"addr"})
{

    yang_name = "addr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::~AddrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peeripaddr_list.len(); index++)
    {
        if(peeripaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<peeripaddr_list.len(); index++)
    {
        if(peeripaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerIpAddr-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList>();
        c->parent = this;
        peeripaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peeripaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerIpAddr-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::PeerIpAddrList()
    :
    addr{YType::str, "addr"}
{

    yang_name = "PeerIpAddr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::~PeerIpAddrList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerIpAddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshgrpItems()
    :
    meshgrp_list(this, {"id"})
{

    yang_name = "meshgrp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_operation() const
{
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meshgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MeshGrp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList>();
        c->parent = this;
        meshgrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : meshgrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MeshGrp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::MeshGrpList()
    :
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "MeshGrp-list"; yang_parent_name = "meshgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::~MeshGrpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MeshGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctrl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::LvlItems()
    :
    iflvl_list(this, {"type"})
{

    yang_name = "lvl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::~LvlItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::has_operation() const
{
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lvl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfLvl-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList>();
        c->parent = this;
        iflvl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iflvl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfLvl-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::IfLvlList()
    :
    type{YType::enumeration, "type"},
    priority{YType::uint8, "priority"},
    hellointvl{YType::uint16, "helloIntvl"},
    hellomult{YType::uint16, "helloMult"},
    csnpintvl{YType::uint16, "csnpIntvl"},
    mt0metric{YType::uint32, "mt0Metric"},
    mt2metric{YType::uint32, "mt2Metric"},
    authtype{YType::enumeration, "authType"},
    authkey{YType::str, "authKey"},
    protoerror{YType::boolean, "protoError"},
    nextcsnpts{YType::str, "nextCsnpTs"},
    name{YType::str, "name"}
{

    yang_name = "IfLvl-list"; yang_parent_name = "lvl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::~IfLvlList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| priority.is_set
	|| hellointvl.is_set
	|| hellomult.is_set
	|| csnpintvl.is_set
	|| mt0metric.is_set
	|| mt2metric.is_set
	|| authtype.is_set
	|| authkey.is_set
	|| protoerror.is_set
	|| nextcsnpts.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(hellomult.yfilter)
	|| ydk::is_set(csnpintvl.yfilter)
	|| ydk::is_set(mt0metric.yfilter)
	|| ydk::is_set(mt2metric.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(protoerror.yfilter)
	|| ydk::is_set(nextcsnpts.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfLvl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (hellomult.is_set || is_set(hellomult.yfilter)) leaf_name_data.push_back(hellomult.get_name_leafdata());
    if (csnpintvl.is_set || is_set(csnpintvl.yfilter)) leaf_name_data.push_back(csnpintvl.get_name_leafdata());
    if (mt0metric.is_set || is_set(mt0metric.yfilter)) leaf_name_data.push_back(mt0metric.get_name_leafdata());
    if (mt2metric.is_set || is_set(mt2metric.yfilter)) leaf_name_data.push_back(mt2metric.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (protoerror.is_set || is_set(protoerror.yfilter)) leaf_name_data.push_back(protoerror.get_name_leafdata());
    if (nextcsnpts.is_set || is_set(nextcsnpts.yfilter)) leaf_name_data.push_back(nextcsnpts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMult")
    {
        hellomult = value;
        hellomult.value_namespace = name_space;
        hellomult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvl")
    {
        csnpintvl = value;
        csnpintvl.value_namespace = name_space;
        csnpintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0Metric")
    {
        mt0metric = value;
        mt0metric.value_namespace = name_space;
        mt0metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2Metric")
    {
        mt2metric = value;
        mt2metric.value_namespace = name_space;
        mt2metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoError")
    {
        protoerror = value;
        protoerror.value_namespace = name_space;
        protoerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCsnpTs")
    {
        nextcsnpts = value;
        nextcsnpts.value_namespace = name_space;
        nextcsnpts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "helloMult")
    {
        hellomult.yfilter = yfilter;
    }
    if(value_path == "csnpIntvl")
    {
        csnpintvl.yfilter = yfilter;
    }
    if(value_path == "mt0Metric")
    {
        mt0metric.yfilter = yfilter;
    }
    if(value_path == "mt2Metric")
    {
        mt2metric.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "protoError")
    {
        protoerror.yfilter = yfilter;
    }
    if(value_path == "nextCsnpTs")
    {
        nextcsnpts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "priority" || name == "helloIntvl" || name == "helloMult" || name == "csnpIntvl" || name == "mt0Metric" || name == "mt2Metric" || name == "authType" || name == "authKey" || name == "protoError" || name == "nextCsnpTs" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::TrafficItems()
    :
    p2piihpktstx{YType::uint32, "p2pIIHPktsTx"},
    p2piihpktsrx{YType::uint32, "p2pIIHPktsRx"},
    p2piihpktsautherr{YType::uint32, "p2pIIHPktsAuthErr"},
    p2piihpktsmiscerr{YType::uint32, "p2pIIHPktsMiscErr"},
    laniihpktstx{YType::uint32, "lanIIHPktsTx"},
    laniihpktsrx{YType::uint32, "lanIIHPktsRx"},
    laniihpktsautherr{YType::uint32, "lanIIHPktsAuthErr"},
    laniihpktsmiscerr{YType::uint32, "lanIIHPktsMiscErr"},
    csnppktstx{YType::uint32, "csnpPktsTx"},
    csnppktsrx{YType::uint32, "csnpPktsRx"},
    fastcsnppktsrx{YType::uint32, "fastCsnpPktsRx"},
    csnppktsautherr{YType::uint32, "csnpPktsAuthErr"},
    csnppktsmiscerr{YType::uint32, "csnpPktsMiscErr"},
    psnppktstx{YType::uint32, "psnpPktsTx"},
    psnppktsrx{YType::uint32, "psnpPktsRx"},
    psnppktsautherr{YType::uint32, "psnpPktsAuthErr"},
    psnppktsmiscerr{YType::uint32, "psnpPktsMiscErr"},
    lsppktstx{YType::uint32, "lspPktsTx"},
    lsppktsretx{YType::uint32, "lspPktsRetx"},
    lsppktsrx{YType::uint32, "lspPktsRx"},
    fastlsppktsrx{YType::uint32, "fastLspPktsRx"},
    lsppktsautherr{YType::uint32, "lspPktsAuthErr"},
    lsppktsmiscerr{YType::uint32, "lspPktsMiscErr"}
{

    yang_name = "traffic-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::~TrafficItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_data() const
{
    if (is_presence_container) return true;
    return p2piihpktstx.is_set
	|| p2piihpktsrx.is_set
	|| p2piihpktsautherr.is_set
	|| p2piihpktsmiscerr.is_set
	|| laniihpktstx.is_set
	|| laniihpktsrx.is_set
	|| laniihpktsautherr.is_set
	|| laniihpktsmiscerr.is_set
	|| csnppktstx.is_set
	|| csnppktsrx.is_set
	|| fastcsnppktsrx.is_set
	|| csnppktsautherr.is_set
	|| csnppktsmiscerr.is_set
	|| psnppktstx.is_set
	|| psnppktsrx.is_set
	|| psnppktsautherr.is_set
	|| psnppktsmiscerr.is_set
	|| lsppktstx.is_set
	|| lsppktsretx.is_set
	|| lsppktsrx.is_set
	|| fastlsppktsrx.is_set
	|| lsppktsautherr.is_set
	|| lsppktsmiscerr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2piihpktstx.yfilter)
	|| ydk::is_set(p2piihpktsrx.yfilter)
	|| ydk::is_set(p2piihpktsautherr.yfilter)
	|| ydk::is_set(p2piihpktsmiscerr.yfilter)
	|| ydk::is_set(laniihpktstx.yfilter)
	|| ydk::is_set(laniihpktsrx.yfilter)
	|| ydk::is_set(laniihpktsautherr.yfilter)
	|| ydk::is_set(laniihpktsmiscerr.yfilter)
	|| ydk::is_set(csnppktstx.yfilter)
	|| ydk::is_set(csnppktsrx.yfilter)
	|| ydk::is_set(fastcsnppktsrx.yfilter)
	|| ydk::is_set(csnppktsautherr.yfilter)
	|| ydk::is_set(csnppktsmiscerr.yfilter)
	|| ydk::is_set(psnppktstx.yfilter)
	|| ydk::is_set(psnppktsrx.yfilter)
	|| ydk::is_set(psnppktsautherr.yfilter)
	|| ydk::is_set(psnppktsmiscerr.yfilter)
	|| ydk::is_set(lsppktstx.yfilter)
	|| ydk::is_set(lsppktsretx.yfilter)
	|| ydk::is_set(lsppktsrx.yfilter)
	|| ydk::is_set(fastlsppktsrx.yfilter)
	|| ydk::is_set(lsppktsautherr.yfilter)
	|| ydk::is_set(lsppktsmiscerr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2piihpktstx.is_set || is_set(p2piihpktstx.yfilter)) leaf_name_data.push_back(p2piihpktstx.get_name_leafdata());
    if (p2piihpktsrx.is_set || is_set(p2piihpktsrx.yfilter)) leaf_name_data.push_back(p2piihpktsrx.get_name_leafdata());
    if (p2piihpktsautherr.is_set || is_set(p2piihpktsautherr.yfilter)) leaf_name_data.push_back(p2piihpktsautherr.get_name_leafdata());
    if (p2piihpktsmiscerr.is_set || is_set(p2piihpktsmiscerr.yfilter)) leaf_name_data.push_back(p2piihpktsmiscerr.get_name_leafdata());
    if (laniihpktstx.is_set || is_set(laniihpktstx.yfilter)) leaf_name_data.push_back(laniihpktstx.get_name_leafdata());
    if (laniihpktsrx.is_set || is_set(laniihpktsrx.yfilter)) leaf_name_data.push_back(laniihpktsrx.get_name_leafdata());
    if (laniihpktsautherr.is_set || is_set(laniihpktsautherr.yfilter)) leaf_name_data.push_back(laniihpktsautherr.get_name_leafdata());
    if (laniihpktsmiscerr.is_set || is_set(laniihpktsmiscerr.yfilter)) leaf_name_data.push_back(laniihpktsmiscerr.get_name_leafdata());
    if (csnppktstx.is_set || is_set(csnppktstx.yfilter)) leaf_name_data.push_back(csnppktstx.get_name_leafdata());
    if (csnppktsrx.is_set || is_set(csnppktsrx.yfilter)) leaf_name_data.push_back(csnppktsrx.get_name_leafdata());
    if (fastcsnppktsrx.is_set || is_set(fastcsnppktsrx.yfilter)) leaf_name_data.push_back(fastcsnppktsrx.get_name_leafdata());
    if (csnppktsautherr.is_set || is_set(csnppktsautherr.yfilter)) leaf_name_data.push_back(csnppktsautherr.get_name_leafdata());
    if (csnppktsmiscerr.is_set || is_set(csnppktsmiscerr.yfilter)) leaf_name_data.push_back(csnppktsmiscerr.get_name_leafdata());
    if (psnppktstx.is_set || is_set(psnppktstx.yfilter)) leaf_name_data.push_back(psnppktstx.get_name_leafdata());
    if (psnppktsrx.is_set || is_set(psnppktsrx.yfilter)) leaf_name_data.push_back(psnppktsrx.get_name_leafdata());
    if (psnppktsautherr.is_set || is_set(psnppktsautherr.yfilter)) leaf_name_data.push_back(psnppktsautherr.get_name_leafdata());
    if (psnppktsmiscerr.is_set || is_set(psnppktsmiscerr.yfilter)) leaf_name_data.push_back(psnppktsmiscerr.get_name_leafdata());
    if (lsppktstx.is_set || is_set(lsppktstx.yfilter)) leaf_name_data.push_back(lsppktstx.get_name_leafdata());
    if (lsppktsretx.is_set || is_set(lsppktsretx.yfilter)) leaf_name_data.push_back(lsppktsretx.get_name_leafdata());
    if (lsppktsrx.is_set || is_set(lsppktsrx.yfilter)) leaf_name_data.push_back(lsppktsrx.get_name_leafdata());
    if (fastlsppktsrx.is_set || is_set(fastlsppktsrx.yfilter)) leaf_name_data.push_back(fastlsppktsrx.get_name_leafdata());
    if (lsppktsautherr.is_set || is_set(lsppktsautherr.yfilter)) leaf_name_data.push_back(lsppktsautherr.get_name_leafdata());
    if (lsppktsmiscerr.is_set || is_set(lsppktsmiscerr.yfilter)) leaf_name_data.push_back(lsppktsmiscerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2pIIHPktsTx")
    {
        p2piihpktstx = value;
        p2piihpktstx.value_namespace = name_space;
        p2piihpktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pIIHPktsRx")
    {
        p2piihpktsrx = value;
        p2piihpktsrx.value_namespace = name_space;
        p2piihpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pIIHPktsAuthErr")
    {
        p2piihpktsautherr = value;
        p2piihpktsautherr.value_namespace = name_space;
        p2piihpktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pIIHPktsMiscErr")
    {
        p2piihpktsmiscerr = value;
        p2piihpktsmiscerr.value_namespace = name_space;
        p2piihpktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsTx")
    {
        laniihpktstx = value;
        laniihpktstx.value_namespace = name_space;
        laniihpktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsRx")
    {
        laniihpktsrx = value;
        laniihpktsrx.value_namespace = name_space;
        laniihpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsAuthErr")
    {
        laniihpktsautherr = value;
        laniihpktsautherr.value_namespace = name_space;
        laniihpktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsMiscErr")
    {
        laniihpktsmiscerr = value;
        laniihpktsmiscerr.value_namespace = name_space;
        laniihpktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsTx")
    {
        csnppktstx = value;
        csnppktstx.value_namespace = name_space;
        csnppktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsRx")
    {
        csnppktsrx = value;
        csnppktsrx.value_namespace = name_space;
        csnppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastCsnpPktsRx")
    {
        fastcsnppktsrx = value;
        fastcsnppktsrx.value_namespace = name_space;
        fastcsnppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsAuthErr")
    {
        csnppktsautherr = value;
        csnppktsautherr.value_namespace = name_space;
        csnppktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsMiscErr")
    {
        csnppktsmiscerr = value;
        csnppktsmiscerr.value_namespace = name_space;
        csnppktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsTx")
    {
        psnppktstx = value;
        psnppktstx.value_namespace = name_space;
        psnppktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsRx")
    {
        psnppktsrx = value;
        psnppktsrx.value_namespace = name_space;
        psnppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsAuthErr")
    {
        psnppktsautherr = value;
        psnppktsautherr.value_namespace = name_space;
        psnppktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsMiscErr")
    {
        psnppktsmiscerr = value;
        psnppktsmiscerr.value_namespace = name_space;
        psnppktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsTx")
    {
        lsppktstx = value;
        lsppktstx.value_namespace = name_space;
        lsppktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsRetx")
    {
        lsppktsretx = value;
        lsppktsretx.value_namespace = name_space;
        lsppktsretx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsRx")
    {
        lsppktsrx = value;
        lsppktsrx.value_namespace = name_space;
        lsppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastLspPktsRx")
    {
        fastlsppktsrx = value;
        fastlsppktsrx.value_namespace = name_space;
        fastlsppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsAuthErr")
    {
        lsppktsautherr = value;
        lsppktsautherr.value_namespace = name_space;
        lsppktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsMiscErr")
    {
        lsppktsmiscerr = value;
        lsppktsmiscerr.value_namespace = name_space;
        lsppktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2pIIHPktsTx")
    {
        p2piihpktstx.yfilter = yfilter;
    }
    if(value_path == "p2pIIHPktsRx")
    {
        p2piihpktsrx.yfilter = yfilter;
    }
    if(value_path == "p2pIIHPktsAuthErr")
    {
        p2piihpktsautherr.yfilter = yfilter;
    }
    if(value_path == "p2pIIHPktsMiscErr")
    {
        p2piihpktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsTx")
    {
        laniihpktstx.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsRx")
    {
        laniihpktsrx.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsAuthErr")
    {
        laniihpktsautherr.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsMiscErr")
    {
        laniihpktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "csnpPktsTx")
    {
        csnppktstx.yfilter = yfilter;
    }
    if(value_path == "csnpPktsRx")
    {
        csnppktsrx.yfilter = yfilter;
    }
    if(value_path == "fastCsnpPktsRx")
    {
        fastcsnppktsrx.yfilter = yfilter;
    }
    if(value_path == "csnpPktsAuthErr")
    {
        csnppktsautherr.yfilter = yfilter;
    }
    if(value_path == "csnpPktsMiscErr")
    {
        csnppktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "psnpPktsTx")
    {
        psnppktstx.yfilter = yfilter;
    }
    if(value_path == "psnpPktsRx")
    {
        psnppktsrx.yfilter = yfilter;
    }
    if(value_path == "psnpPktsAuthErr")
    {
        psnppktsautherr.yfilter = yfilter;
    }
    if(value_path == "psnpPktsMiscErr")
    {
        psnppktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "lspPktsTx")
    {
        lsppktstx.yfilter = yfilter;
    }
    if(value_path == "lspPktsRetx")
    {
        lsppktsretx.yfilter = yfilter;
    }
    if(value_path == "lspPktsRx")
    {
        lsppktsrx.yfilter = yfilter;
    }
    if(value_path == "fastLspPktsRx")
    {
        fastlsppktsrx.yfilter = yfilter;
    }
    if(value_path == "lspPktsAuthErr")
    {
        lsppktsautherr.yfilter = yfilter;
    }
    if(value_path == "lspPktsMiscErr")
    {
        lsppktsmiscerr.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2pIIHPktsTx" || name == "p2pIIHPktsRx" || name == "p2pIIHPktsAuthErr" || name == "p2pIIHPktsMiscErr" || name == "lanIIHPktsTx" || name == "lanIIHPktsRx" || name == "lanIIHPktsAuthErr" || name == "lanIIHPktsMiscErr" || name == "csnpPktsTx" || name == "csnpPktsRx" || name == "fastCsnpPktsRx" || name == "csnpPktsAuthErr" || name == "csnpPktsMiscErr" || name == "psnpPktsTx" || name == "psnpPktsRx" || name == "psnpPktsAuthErr" || name == "psnpPktsMiscErr" || name == "lspPktsTx" || name == "lspPktsRetx" || name == "lspPktsRx" || name == "fastLspPktsRx" || name == "lspPktsAuthErr" || name == "lspPktsMiscErr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::IntraleakItems()
    :
    source{YType::enumeration, "source"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "intraleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::~IntraleakItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intraleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::~InterleakItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interleakp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| asn.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::LeakctrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    max{YType::uint16, "max"},
    thresh{YType::uint8, "thresh"},
    retries{YType::uint16, "retries"},
    duration{YType::uint16, "duration"}
{

    yang_name = "leakctrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::~LeakctrlItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| max.is_set
	|| thresh.is_set
	|| retries.is_set
	|| duration.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leakctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "max" || name == "thresh" || name == "retries" || name == "duration")
        return true;
    return false;
}

System::IsisItems::IfItems::IfItems()
    :
    internalif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "isis-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::IfItems::~IfItems()
{
}

bool System::IsisItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalIf-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList>();
        c->parent = this;
        internalif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : internalif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalIf-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::InternalIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    cktt{YType::enumeration, "cktT"},
    metric{YType::uint32, "metric"},
    ctrl{YType::str, "ctrl"},
    v4enable{YType::boolean, "v4enable"},
    v6enable{YType::boolean, "v6enable"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authcheckp2p{YType::boolean, "authCheckP2P"},
    networktypep2p{YType::boolean, "networkTypeP2P"},
    lsprefreshintvl{YType::uint32, "lspRefreshIntvl"},
    retransinterval{YType::uint16, "retransInterval"},
    retransthrottleinterval{YType::uint16, "retransThrottleInterval"},
    v4bfd{YType::enumeration, "v4Bfd"},
    v6bfd{YType::enumeration, "v6Bfd"},
    iibidx{YType::uint16, "iibIdx"},
    localcktid{YType::uint16, "localCktId"},
    extdlocalcktid{YType::uint32, "extdLocalCktId"},
    p2pcktid{YType::str, "p2pCktId"},
    initerror{YType::boolean, "initError"},
    iibupctrl{YType::boolean, "iibUpCtrl"},
    iibstate{YType::str, "iibState"},
    nextiihts{YType::str, "nextIIHTs"},
    instance{YType::str, "instance"},
    dom{YType::str, "dom"}
        ,
    meshgrp_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::MeshgrpItems>())
    , lvl_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems>())
    , traffic_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::TrafficItems>())
    , rtvrfmbr_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems>())
{
    meshgrp_items->parent = this;
    lvl_items->parent = this;
    traffic_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "InternalIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::IfItems::InternalIfList::~InternalIfList()
{
}

bool System::IsisItems::IfItems::InternalIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| cktt.is_set
	|| metric.is_set
	|| ctrl.is_set
	|| v4enable.is_set
	|| v6enable.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authcheckp2p.is_set
	|| networktypep2p.is_set
	|| lsprefreshintvl.is_set
	|| retransinterval.is_set
	|| retransthrottleinterval.is_set
	|| v4bfd.is_set
	|| v6bfd.is_set
	|| iibidx.is_set
	|| localcktid.is_set
	|| extdlocalcktid.is_set
	|| p2pcktid.is_set
	|| initerror.is_set
	|| iibupctrl.is_set
	|| iibstate.is_set
	|| nextiihts.is_set
	|| instance.is_set
	|| dom.is_set
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_data())
	|| (lvl_items !=  nullptr && lvl_items->has_data())
	|| (traffic_items !=  nullptr && traffic_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IsisItems::IfItems::InternalIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(cktt.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(v4enable.yfilter)
	|| ydk::is_set(v6enable.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authcheckp2p.yfilter)
	|| ydk::is_set(networktypep2p.yfilter)
	|| ydk::is_set(lsprefreshintvl.yfilter)
	|| ydk::is_set(retransinterval.yfilter)
	|| ydk::is_set(retransthrottleinterval.yfilter)
	|| ydk::is_set(v4bfd.yfilter)
	|| ydk::is_set(v6bfd.yfilter)
	|| ydk::is_set(iibidx.yfilter)
	|| ydk::is_set(localcktid.yfilter)
	|| ydk::is_set(extdlocalcktid.yfilter)
	|| ydk::is_set(p2pcktid.yfilter)
	|| ydk::is_set(initerror.yfilter)
	|| ydk::is_set(iibupctrl.yfilter)
	|| ydk::is_set(iibstate.yfilter)
	|| ydk::is_set(nextiihts.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(dom.yfilter)
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_operation())
	|| (lvl_items !=  nullptr && lvl_items->has_operation())
	|| (traffic_items !=  nullptr && traffic_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IsisItems::IfItems::InternalIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::IfItems::InternalIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (cktt.is_set || is_set(cktt.yfilter)) leaf_name_data.push_back(cktt.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (v4enable.is_set || is_set(v4enable.yfilter)) leaf_name_data.push_back(v4enable.get_name_leafdata());
    if (v6enable.is_set || is_set(v6enable.yfilter)) leaf_name_data.push_back(v6enable.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authcheckp2p.is_set || is_set(authcheckp2p.yfilter)) leaf_name_data.push_back(authcheckp2p.get_name_leafdata());
    if (networktypep2p.is_set || is_set(networktypep2p.yfilter)) leaf_name_data.push_back(networktypep2p.get_name_leafdata());
    if (lsprefreshintvl.is_set || is_set(lsprefreshintvl.yfilter)) leaf_name_data.push_back(lsprefreshintvl.get_name_leafdata());
    if (retransinterval.is_set || is_set(retransinterval.yfilter)) leaf_name_data.push_back(retransinterval.get_name_leafdata());
    if (retransthrottleinterval.is_set || is_set(retransthrottleinterval.yfilter)) leaf_name_data.push_back(retransthrottleinterval.get_name_leafdata());
    if (v4bfd.is_set || is_set(v4bfd.yfilter)) leaf_name_data.push_back(v4bfd.get_name_leafdata());
    if (v6bfd.is_set || is_set(v6bfd.yfilter)) leaf_name_data.push_back(v6bfd.get_name_leafdata());
    if (iibidx.is_set || is_set(iibidx.yfilter)) leaf_name_data.push_back(iibidx.get_name_leafdata());
    if (localcktid.is_set || is_set(localcktid.yfilter)) leaf_name_data.push_back(localcktid.get_name_leafdata());
    if (extdlocalcktid.is_set || is_set(extdlocalcktid.yfilter)) leaf_name_data.push_back(extdlocalcktid.get_name_leafdata());
    if (p2pcktid.is_set || is_set(p2pcktid.yfilter)) leaf_name_data.push_back(p2pcktid.get_name_leafdata());
    if (initerror.is_set || is_set(initerror.yfilter)) leaf_name_data.push_back(initerror.get_name_leafdata());
    if (iibupctrl.is_set || is_set(iibupctrl.yfilter)) leaf_name_data.push_back(iibupctrl.get_name_leafdata());
    if (iibstate.is_set || is_set(iibstate.yfilter)) leaf_name_data.push_back(iibstate.get_name_leafdata());
    if (nextiihts.is_set || is_set(nextiihts.yfilter)) leaf_name_data.push_back(nextiihts.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (dom.is_set || is_set(dom.yfilter)) leaf_name_data.push_back(dom.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "meshgrp-items")
    {
        if(meshgrp_items == nullptr)
        {
            meshgrp_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::MeshgrpItems>();
        }
        return meshgrp_items;
    }

    if(child_yang_name == "lvl-items")
    {
        if(lvl_items == nullptr)
        {
            lvl_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems>();
        }
        return lvl_items;
    }

    if(child_yang_name == "traffic-items")
    {
        if(traffic_items == nullptr)
        {
            traffic_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::TrafficItems>();
        }
        return traffic_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(meshgrp_items != nullptr)
    {
        children["meshgrp-items"] = meshgrp_items;
    }

    if(lvl_items != nullptr)
    {
        children["lvl-items"] = lvl_items;
    }

    if(traffic_items != nullptr)
    {
        children["traffic-items"] = traffic_items;
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

void System::IsisItems::IfItems::InternalIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cktT")
    {
        cktt = value;
        cktt.value_namespace = name_space;
        cktt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4enable")
    {
        v4enable = value;
        v4enable.value_namespace = name_space;
        v4enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6enable")
    {
        v6enable = value;
        v6enable.value_namespace = name_space;
        v6enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1 = value;
        authchecklvl1.value_namespace = name_space;
        authchecklvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2 = value;
        authchecklvl2.value_namespace = name_space;
        authchecklvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authCheckP2P")
    {
        authcheckp2p = value;
        authcheckp2p.value_namespace = name_space;
        authcheckp2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p = value;
        networktypep2p.value_namespace = name_space;
        networktypep2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl = value;
        lsprefreshintvl.value_namespace = name_space;
        lsprefreshintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransInterval")
    {
        retransinterval = value;
        retransinterval.value_namespace = name_space;
        retransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval = value;
        retransthrottleinterval.value_namespace = name_space;
        retransthrottleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4Bfd")
    {
        v4bfd = value;
        v4bfd.value_namespace = name_space;
        v4bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6Bfd")
    {
        v6bfd = value;
        v6bfd.value_namespace = name_space;
        v6bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iibIdx")
    {
        iibidx = value;
        iibidx.value_namespace = name_space;
        iibidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localCktId")
    {
        localcktid = value;
        localcktid.value_namespace = name_space;
        localcktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extdLocalCktId")
    {
        extdlocalcktid = value;
        extdlocalcktid.value_namespace = name_space;
        extdlocalcktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pCktId")
    {
        p2pcktid = value;
        p2pcktid.value_namespace = name_space;
        p2pcktid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initError")
    {
        initerror = value;
        initerror.value_namespace = name_space;
        initerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iibUpCtrl")
    {
        iibupctrl = value;
        iibupctrl.value_namespace = name_space;
        iibupctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iibState")
    {
        iibstate = value;
        iibstate.value_namespace = name_space;
        iibstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextIIHTs")
    {
        nextiihts = value;
        nextiihts.value_namespace = name_space;
        nextiihts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dom")
    {
        dom = value;
        dom.value_namespace = name_space;
        dom.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cktT")
    {
        cktt.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "v4enable")
    {
        v4enable.yfilter = yfilter;
    }
    if(value_path == "v6enable")
    {
        v6enable.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2.yfilter = yfilter;
    }
    if(value_path == "authCheckP2P")
    {
        authcheckp2p.yfilter = yfilter;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p.yfilter = yfilter;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl.yfilter = yfilter;
    }
    if(value_path == "retransInterval")
    {
        retransinterval.yfilter = yfilter;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval.yfilter = yfilter;
    }
    if(value_path == "v4Bfd")
    {
        v4bfd.yfilter = yfilter;
    }
    if(value_path == "v6Bfd")
    {
        v6bfd.yfilter = yfilter;
    }
    if(value_path == "iibIdx")
    {
        iibidx.yfilter = yfilter;
    }
    if(value_path == "localCktId")
    {
        localcktid.yfilter = yfilter;
    }
    if(value_path == "extdLocalCktId")
    {
        extdlocalcktid.yfilter = yfilter;
    }
    if(value_path == "p2pCktId")
    {
        p2pcktid.yfilter = yfilter;
    }
    if(value_path == "initError")
    {
        initerror.yfilter = yfilter;
    }
    if(value_path == "iibUpCtrl")
    {
        iibupctrl.yfilter = yfilter;
    }
    if(value_path == "iibState")
    {
        iibstate.yfilter = yfilter;
    }
    if(value_path == "nextIIHTs")
    {
        nextiihts.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "dom")
    {
        dom.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meshgrp-items" || name == "lvl-items" || name == "traffic-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "cktT" || name == "metric" || name == "ctrl" || name == "v4enable" || name == "v6enable" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authCheckP2P" || name == "networkTypeP2P" || name == "lspRefreshIntvl" || name == "retransInterval" || name == "retransThrottleInterval" || name == "v4Bfd" || name == "v6Bfd" || name == "iibIdx" || name == "localCktId" || name == "extdLocalCktId" || name == "p2pCktId" || name == "initError" || name == "iibUpCtrl" || name == "iibState" || name == "nextIIHTs" || name == "instance" || name == "dom")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshgrpItems()
    :
    meshgrp_list(this, {"id"})
{

    yang_name = "meshgrp-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_operation() const
{
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meshgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MeshGrp-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList>();
        c->parent = this;
        meshgrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : meshgrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MeshGrp-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::MeshGrpList()
    :
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "MeshGrp-list"; yang_parent_name = "meshgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::~MeshGrpList()
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MeshGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
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

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctrl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::LvlItems::LvlItems()
    :
    iflvl_list(this, {"type"})
{

    yang_name = "lvl-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::LvlItems::~LvlItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::has_operation() const
{
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::LvlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lvl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::LvlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfLvl-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList>();
        c->parent = this;
        iflvl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iflvl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfLvl-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::IfLvlList()
    :
    type{YType::enumeration, "type"},
    priority{YType::uint8, "priority"},
    hellointvl{YType::uint16, "helloIntvl"},
    hellomult{YType::uint16, "helloMult"},
    csnpintvl{YType::uint16, "csnpIntvl"},
    mt0metric{YType::uint32, "mt0Metric"},
    mt2metric{YType::uint32, "mt2Metric"},
    authtype{YType::enumeration, "authType"},
    authkey{YType::str, "authKey"},
    protoerror{YType::boolean, "protoError"},
    nextcsnpts{YType::str, "nextCsnpTs"},
    name{YType::str, "name"}
{

    yang_name = "IfLvl-list"; yang_parent_name = "lvl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::~IfLvlList()
{
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| priority.is_set
	|| hellointvl.is_set
	|| hellomult.is_set
	|| csnpintvl.is_set
	|| mt0metric.is_set
	|| mt2metric.is_set
	|| authtype.is_set
	|| authkey.is_set
	|| protoerror.is_set
	|| nextcsnpts.is_set
	|| name.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(hellomult.yfilter)
	|| ydk::is_set(csnpintvl.yfilter)
	|| ydk::is_set(mt0metric.yfilter)
	|| ydk::is_set(mt2metric.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(protoerror.yfilter)
	|| ydk::is_set(nextcsnpts.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfLvl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (hellomult.is_set || is_set(hellomult.yfilter)) leaf_name_data.push_back(hellomult.get_name_leafdata());
    if (csnpintvl.is_set || is_set(csnpintvl.yfilter)) leaf_name_data.push_back(csnpintvl.get_name_leafdata());
    if (mt0metric.is_set || is_set(mt0metric.yfilter)) leaf_name_data.push_back(mt0metric.get_name_leafdata());
    if (mt2metric.is_set || is_set(mt2metric.yfilter)) leaf_name_data.push_back(mt2metric.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (protoerror.is_set || is_set(protoerror.yfilter)) leaf_name_data.push_back(protoerror.get_name_leafdata());
    if (nextcsnpts.is_set || is_set(nextcsnpts.yfilter)) leaf_name_data.push_back(nextcsnpts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMult")
    {
        hellomult = value;
        hellomult.value_namespace = name_space;
        hellomult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvl")
    {
        csnpintvl = value;
        csnpintvl.value_namespace = name_space;
        csnpintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0Metric")
    {
        mt0metric = value;
        mt0metric.value_namespace = name_space;
        mt0metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2Metric")
    {
        mt2metric = value;
        mt2metric.value_namespace = name_space;
        mt2metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoError")
    {
        protoerror = value;
        protoerror.value_namespace = name_space;
        protoerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCsnpTs")
    {
        nextcsnpts = value;
        nextcsnpts.value_namespace = name_space;
        nextcsnpts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "helloMult")
    {
        hellomult.yfilter = yfilter;
    }
    if(value_path == "csnpIntvl")
    {
        csnpintvl.yfilter = yfilter;
    }
    if(value_path == "mt0Metric")
    {
        mt0metric.yfilter = yfilter;
    }
    if(value_path == "mt2Metric")
    {
        mt2metric.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "protoError")
    {
        protoerror.yfilter = yfilter;
    }
    if(value_path == "nextCsnpTs")
    {
        nextcsnpts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "priority" || name == "helloIntvl" || name == "helloMult" || name == "csnpIntvl" || name == "mt0Metric" || name == "mt2Metric" || name == "authType" || name == "authKey" || name == "protoError" || name == "nextCsnpTs" || name == "name")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::TrafficItems::TrafficItems()
    :
    p2piihpktstx{YType::uint32, "p2pIIHPktsTx"},
    p2piihpktsrx{YType::uint32, "p2pIIHPktsRx"},
    p2piihpktsautherr{YType::uint32, "p2pIIHPktsAuthErr"},
    p2piihpktsmiscerr{YType::uint32, "p2pIIHPktsMiscErr"},
    laniihpktstx{YType::uint32, "lanIIHPktsTx"},
    laniihpktsrx{YType::uint32, "lanIIHPktsRx"},
    laniihpktsautherr{YType::uint32, "lanIIHPktsAuthErr"},
    laniihpktsmiscerr{YType::uint32, "lanIIHPktsMiscErr"},
    csnppktstx{YType::uint32, "csnpPktsTx"},
    csnppktsrx{YType::uint32, "csnpPktsRx"},
    fastcsnppktsrx{YType::uint32, "fastCsnpPktsRx"},
    csnppktsautherr{YType::uint32, "csnpPktsAuthErr"},
    csnppktsmiscerr{YType::uint32, "csnpPktsMiscErr"},
    psnppktstx{YType::uint32, "psnpPktsTx"},
    psnppktsrx{YType::uint32, "psnpPktsRx"},
    psnppktsautherr{YType::uint32, "psnpPktsAuthErr"},
    psnppktsmiscerr{YType::uint32, "psnpPktsMiscErr"},
    lsppktstx{YType::uint32, "lspPktsTx"},
    lsppktsretx{YType::uint32, "lspPktsRetx"},
    lsppktsrx{YType::uint32, "lspPktsRx"},
    fastlsppktsrx{YType::uint32, "fastLspPktsRx"},
    lsppktsautherr{YType::uint32, "lspPktsAuthErr"},
    lsppktsmiscerr{YType::uint32, "lspPktsMiscErr"}
{

    yang_name = "traffic-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::TrafficItems::~TrafficItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_data() const
{
    if (is_presence_container) return true;
    return p2piihpktstx.is_set
	|| p2piihpktsrx.is_set
	|| p2piihpktsautherr.is_set
	|| p2piihpktsmiscerr.is_set
	|| laniihpktstx.is_set
	|| laniihpktsrx.is_set
	|| laniihpktsautherr.is_set
	|| laniihpktsmiscerr.is_set
	|| csnppktstx.is_set
	|| csnppktsrx.is_set
	|| fastcsnppktsrx.is_set
	|| csnppktsautherr.is_set
	|| csnppktsmiscerr.is_set
	|| psnppktstx.is_set
	|| psnppktsrx.is_set
	|| psnppktsautherr.is_set
	|| psnppktsmiscerr.is_set
	|| lsppktstx.is_set
	|| lsppktsretx.is_set
	|| lsppktsrx.is_set
	|| fastlsppktsrx.is_set
	|| lsppktsautherr.is_set
	|| lsppktsmiscerr.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2piihpktstx.yfilter)
	|| ydk::is_set(p2piihpktsrx.yfilter)
	|| ydk::is_set(p2piihpktsautherr.yfilter)
	|| ydk::is_set(p2piihpktsmiscerr.yfilter)
	|| ydk::is_set(laniihpktstx.yfilter)
	|| ydk::is_set(laniihpktsrx.yfilter)
	|| ydk::is_set(laniihpktsautherr.yfilter)
	|| ydk::is_set(laniihpktsmiscerr.yfilter)
	|| ydk::is_set(csnppktstx.yfilter)
	|| ydk::is_set(csnppktsrx.yfilter)
	|| ydk::is_set(fastcsnppktsrx.yfilter)
	|| ydk::is_set(csnppktsautherr.yfilter)
	|| ydk::is_set(csnppktsmiscerr.yfilter)
	|| ydk::is_set(psnppktstx.yfilter)
	|| ydk::is_set(psnppktsrx.yfilter)
	|| ydk::is_set(psnppktsautherr.yfilter)
	|| ydk::is_set(psnppktsmiscerr.yfilter)
	|| ydk::is_set(lsppktstx.yfilter)
	|| ydk::is_set(lsppktsretx.yfilter)
	|| ydk::is_set(lsppktsrx.yfilter)
	|| ydk::is_set(fastlsppktsrx.yfilter)
	|| ydk::is_set(lsppktsautherr.yfilter)
	|| ydk::is_set(lsppktsmiscerr.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::TrafficItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::TrafficItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2piihpktstx.is_set || is_set(p2piihpktstx.yfilter)) leaf_name_data.push_back(p2piihpktstx.get_name_leafdata());
    if (p2piihpktsrx.is_set || is_set(p2piihpktsrx.yfilter)) leaf_name_data.push_back(p2piihpktsrx.get_name_leafdata());
    if (p2piihpktsautherr.is_set || is_set(p2piihpktsautherr.yfilter)) leaf_name_data.push_back(p2piihpktsautherr.get_name_leafdata());
    if (p2piihpktsmiscerr.is_set || is_set(p2piihpktsmiscerr.yfilter)) leaf_name_data.push_back(p2piihpktsmiscerr.get_name_leafdata());
    if (laniihpktstx.is_set || is_set(laniihpktstx.yfilter)) leaf_name_data.push_back(laniihpktstx.get_name_leafdata());
    if (laniihpktsrx.is_set || is_set(laniihpktsrx.yfilter)) leaf_name_data.push_back(laniihpktsrx.get_name_leafdata());
    if (laniihpktsautherr.is_set || is_set(laniihpktsautherr.yfilter)) leaf_name_data.push_back(laniihpktsautherr.get_name_leafdata());
    if (laniihpktsmiscerr.is_set || is_set(laniihpktsmiscerr.yfilter)) leaf_name_data.push_back(laniihpktsmiscerr.get_name_leafdata());
    if (csnppktstx.is_set || is_set(csnppktstx.yfilter)) leaf_name_data.push_back(csnppktstx.get_name_leafdata());
    if (csnppktsrx.is_set || is_set(csnppktsrx.yfilter)) leaf_name_data.push_back(csnppktsrx.get_name_leafdata());
    if (fastcsnppktsrx.is_set || is_set(fastcsnppktsrx.yfilter)) leaf_name_data.push_back(fastcsnppktsrx.get_name_leafdata());
    if (csnppktsautherr.is_set || is_set(csnppktsautherr.yfilter)) leaf_name_data.push_back(csnppktsautherr.get_name_leafdata());
    if (csnppktsmiscerr.is_set || is_set(csnppktsmiscerr.yfilter)) leaf_name_data.push_back(csnppktsmiscerr.get_name_leafdata());
    if (psnppktstx.is_set || is_set(psnppktstx.yfilter)) leaf_name_data.push_back(psnppktstx.get_name_leafdata());
    if (psnppktsrx.is_set || is_set(psnppktsrx.yfilter)) leaf_name_data.push_back(psnppktsrx.get_name_leafdata());
    if (psnppktsautherr.is_set || is_set(psnppktsautherr.yfilter)) leaf_name_data.push_back(psnppktsautherr.get_name_leafdata());
    if (psnppktsmiscerr.is_set || is_set(psnppktsmiscerr.yfilter)) leaf_name_data.push_back(psnppktsmiscerr.get_name_leafdata());
    if (lsppktstx.is_set || is_set(lsppktstx.yfilter)) leaf_name_data.push_back(lsppktstx.get_name_leafdata());
    if (lsppktsretx.is_set || is_set(lsppktsretx.yfilter)) leaf_name_data.push_back(lsppktsretx.get_name_leafdata());
    if (lsppktsrx.is_set || is_set(lsppktsrx.yfilter)) leaf_name_data.push_back(lsppktsrx.get_name_leafdata());
    if (fastlsppktsrx.is_set || is_set(fastlsppktsrx.yfilter)) leaf_name_data.push_back(fastlsppktsrx.get_name_leafdata());
    if (lsppktsautherr.is_set || is_set(lsppktsautherr.yfilter)) leaf_name_data.push_back(lsppktsautherr.get_name_leafdata());
    if (lsppktsmiscerr.is_set || is_set(lsppktsmiscerr.yfilter)) leaf_name_data.push_back(lsppktsmiscerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::TrafficItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::TrafficItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::TrafficItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2pIIHPktsTx")
    {
        p2piihpktstx = value;
        p2piihpktstx.value_namespace = name_space;
        p2piihpktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pIIHPktsRx")
    {
        p2piihpktsrx = value;
        p2piihpktsrx.value_namespace = name_space;
        p2piihpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pIIHPktsAuthErr")
    {
        p2piihpktsautherr = value;
        p2piihpktsautherr.value_namespace = name_space;
        p2piihpktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2pIIHPktsMiscErr")
    {
        p2piihpktsmiscerr = value;
        p2piihpktsmiscerr.value_namespace = name_space;
        p2piihpktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsTx")
    {
        laniihpktstx = value;
        laniihpktstx.value_namespace = name_space;
        laniihpktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsRx")
    {
        laniihpktsrx = value;
        laniihpktsrx.value_namespace = name_space;
        laniihpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsAuthErr")
    {
        laniihpktsautherr = value;
        laniihpktsautherr.value_namespace = name_space;
        laniihpktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanIIHPktsMiscErr")
    {
        laniihpktsmiscerr = value;
        laniihpktsmiscerr.value_namespace = name_space;
        laniihpktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsTx")
    {
        csnppktstx = value;
        csnppktstx.value_namespace = name_space;
        csnppktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsRx")
    {
        csnppktsrx = value;
        csnppktsrx.value_namespace = name_space;
        csnppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastCsnpPktsRx")
    {
        fastcsnppktsrx = value;
        fastcsnppktsrx.value_namespace = name_space;
        fastcsnppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsAuthErr")
    {
        csnppktsautherr = value;
        csnppktsautherr.value_namespace = name_space;
        csnppktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpPktsMiscErr")
    {
        csnppktsmiscerr = value;
        csnppktsmiscerr.value_namespace = name_space;
        csnppktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsTx")
    {
        psnppktstx = value;
        psnppktstx.value_namespace = name_space;
        psnppktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsRx")
    {
        psnppktsrx = value;
        psnppktsrx.value_namespace = name_space;
        psnppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsAuthErr")
    {
        psnppktsautherr = value;
        psnppktsautherr.value_namespace = name_space;
        psnppktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnpPktsMiscErr")
    {
        psnppktsmiscerr = value;
        psnppktsmiscerr.value_namespace = name_space;
        psnppktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsTx")
    {
        lsppktstx = value;
        lsppktstx.value_namespace = name_space;
        lsppktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsRetx")
    {
        lsppktsretx = value;
        lsppktsretx.value_namespace = name_space;
        lsppktsretx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsRx")
    {
        lsppktsrx = value;
        lsppktsrx.value_namespace = name_space;
        lsppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastLspPktsRx")
    {
        fastlsppktsrx = value;
        fastlsppktsrx.value_namespace = name_space;
        fastlsppktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsAuthErr")
    {
        lsppktsautherr = value;
        lsppktsautherr.value_namespace = name_space;
        lsppktsautherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspPktsMiscErr")
    {
        lsppktsmiscerr = value;
        lsppktsmiscerr.value_namespace = name_space;
        lsppktsmiscerr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::TrafficItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2pIIHPktsTx")
    {
        p2piihpktstx.yfilter = yfilter;
    }
    if(value_path == "p2pIIHPktsRx")
    {
        p2piihpktsrx.yfilter = yfilter;
    }
    if(value_path == "p2pIIHPktsAuthErr")
    {
        p2piihpktsautherr.yfilter = yfilter;
    }
    if(value_path == "p2pIIHPktsMiscErr")
    {
        p2piihpktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsTx")
    {
        laniihpktstx.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsRx")
    {
        laniihpktsrx.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsAuthErr")
    {
        laniihpktsautherr.yfilter = yfilter;
    }
    if(value_path == "lanIIHPktsMiscErr")
    {
        laniihpktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "csnpPktsTx")
    {
        csnppktstx.yfilter = yfilter;
    }
    if(value_path == "csnpPktsRx")
    {
        csnppktsrx.yfilter = yfilter;
    }
    if(value_path == "fastCsnpPktsRx")
    {
        fastcsnppktsrx.yfilter = yfilter;
    }
    if(value_path == "csnpPktsAuthErr")
    {
        csnppktsautherr.yfilter = yfilter;
    }
    if(value_path == "csnpPktsMiscErr")
    {
        csnppktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "psnpPktsTx")
    {
        psnppktstx.yfilter = yfilter;
    }
    if(value_path == "psnpPktsRx")
    {
        psnppktsrx.yfilter = yfilter;
    }
    if(value_path == "psnpPktsAuthErr")
    {
        psnppktsautherr.yfilter = yfilter;
    }
    if(value_path == "psnpPktsMiscErr")
    {
        psnppktsmiscerr.yfilter = yfilter;
    }
    if(value_path == "lspPktsTx")
    {
        lsppktstx.yfilter = yfilter;
    }
    if(value_path == "lspPktsRetx")
    {
        lsppktsretx.yfilter = yfilter;
    }
    if(value_path == "lspPktsRx")
    {
        lsppktsrx.yfilter = yfilter;
    }
    if(value_path == "fastLspPktsRx")
    {
        fastlsppktsrx.yfilter = yfilter;
    }
    if(value_path == "lspPktsAuthErr")
    {
        lsppktsautherr.yfilter = yfilter;
    }
    if(value_path == "lspPktsMiscErr")
    {
        lsppktsmiscerr.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2pIIHPktsTx" || name == "p2pIIHPktsRx" || name == "p2pIIHPktsAuthErr" || name == "p2pIIHPktsMiscErr" || name == "lanIIHPktsTx" || name == "lanIIHPktsRx" || name == "lanIIHPktsAuthErr" || name == "lanIIHPktsMiscErr" || name == "csnpPktsTx" || name == "csnpPktsRx" || name == "fastCsnpPktsRx" || name == "csnpPktsAuthErr" || name == "csnpPktsMiscErr" || name == "psnpPktsTx" || name == "psnpPktsRx" || name == "psnpPktsAuthErr" || name == "psnpPktsMiscErr" || name == "lspPktsTx" || name == "lspPktsRetx" || name == "lspPktsRx" || name == "fastLspPktsRx" || name == "lspPktsAuthErr" || name == "lspPktsMiscErr")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_children() const
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

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LacpItems::LacpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::LacpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "lacp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LacpItems::~LacpItems()
{
}

bool System::LacpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::LacpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::LacpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LacpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::LacpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::LacpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LacpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LacpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::LacpItems::InstItems::InstItems()
    :
    adminprio{YType::uint16, "adminPrio"},
    adminsysmac{YType::str, "adminSysMac"},
    adminrole{YType::enumeration, "adminRole"},
    lacpctrl{YType::str, "lacpctrl"},
    operprio{YType::uint16, "operPrio"},
    sysmac{YType::str, "sysMac"},
    operrole{YType::enumeration, "operRole"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::LacpItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "lacp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LacpItems::InstItems::~InstItems()
{
}

bool System::LacpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return adminprio.is_set
	|| adminsysmac.is_set
	|| adminrole.is_set
	|| lacpctrl.is_set
	|| operprio.is_set
	|| sysmac.is_set
	|| operrole.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::LacpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminprio.yfilter)
	|| ydk::is_set(adminsysmac.yfilter)
	|| ydk::is_set(adminrole.yfilter)
	|| ydk::is_set(lacpctrl.yfilter)
	|| ydk::is_set(operprio.yfilter)
	|| ydk::is_set(sysmac.yfilter)
	|| ydk::is_set(operrole.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::LacpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lacp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LacpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminprio.is_set || is_set(adminprio.yfilter)) leaf_name_data.push_back(adminprio.get_name_leafdata());
    if (adminsysmac.is_set || is_set(adminsysmac.yfilter)) leaf_name_data.push_back(adminsysmac.get_name_leafdata());
    if (adminrole.is_set || is_set(adminrole.yfilter)) leaf_name_data.push_back(adminrole.get_name_leafdata());
    if (lacpctrl.is_set || is_set(lacpctrl.yfilter)) leaf_name_data.push_back(lacpctrl.get_name_leafdata());
    if (operprio.is_set || is_set(operprio.yfilter)) leaf_name_data.push_back(operprio.get_name_leafdata());
    if (sysmac.is_set || is_set(sysmac.yfilter)) leaf_name_data.push_back(sysmac.get_name_leafdata());
    if (operrole.is_set || is_set(operrole.yfilter)) leaf_name_data.push_back(operrole.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::LacpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::LacpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminPrio")
    {
        adminprio = value;
        adminprio.value_namespace = name_space;
        adminprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSysMac")
    {
        adminsysmac = value;
        adminsysmac.value_namespace = name_space;
        adminsysmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminRole")
    {
        adminrole = value;
        adminrole.value_namespace = name_space;
        adminrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpctrl")
    {
        lacpctrl = value;
        lacpctrl.value_namespace = name_space;
        lacpctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPrio")
    {
        operprio = value;
        operprio.value_namespace = name_space;
        operprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysMac")
    {
        sysmac = value;
        sysmac.value_namespace = name_space;
        sysmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRole")
    {
        operrole = value;
        operrole.value_namespace = name_space;
        operrole.value_namespace_prefix = name_space_prefix;
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

void System::LacpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminPrio")
    {
        adminprio.yfilter = yfilter;
    }
    if(value_path == "adminSysMac")
    {
        adminsysmac.yfilter = yfilter;
    }
    if(value_path == "adminRole")
    {
        adminrole.yfilter = yfilter;
    }
    if(value_path == "lacpctrl")
    {
        lacpctrl.yfilter = yfilter;
    }
    if(value_path == "operPrio")
    {
        operprio.yfilter = yfilter;
    }
    if(value_path == "sysMac")
    {
        sysmac.yfilter = yfilter;
    }
    if(value_path == "operRole")
    {
        operrole.yfilter = yfilter;
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

bool System::LacpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "adminPrio" || name == "adminSysMac" || name == "adminRole" || name == "lacpctrl" || name == "operPrio" || name == "sysMac" || name == "operRole" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LacpItems::InstItems::IfItems::~IfItems()
{
}

bool System::LacpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LacpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LacpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lacp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LacpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::LacpItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::get_children() const
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

void System::LacpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LacpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LacpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    prio{YType::uint16, "prio"},
    txrate{YType::enumeration, "txRate"},
    activityflags{YType::str, "activityFlags"},
    lastactive{YType::str, "lastActive"},
    port{YType::uint16, "port"},
    operprio{YType::uint16, "operPrio"},
    key{YType::uint16, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    adj_items(std::make_shared<System::LacpItems::InstItems::IfItems::IfList::AdjItems>())
    , ifstats_items(std::make_shared<System::LacpItems::InstItems::IfItems::IfList::IfstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    ifstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LacpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| prio.is_set
	|| txrate.is_set
	|| activityflags.is_set
	|| lastactive.is_set
	|| port.is_set
	|| operprio.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::LacpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(txrate.yfilter)
	|| ydk::is_set(activityflags.yfilter)
	|| ydk::is_set(lastactive.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(operprio.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::LacpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lacp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LacpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (txrate.is_set || is_set(txrate.yfilter)) leaf_name_data.push_back(txrate.get_name_leafdata());
    if (activityflags.is_set || is_set(activityflags.yfilter)) leaf_name_data.push_back(activityflags.get_name_leafdata());
    if (lastactive.is_set || is_set(lastactive.yfilter)) leaf_name_data.push_back(lastactive.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (operprio.is_set || is_set(operprio.yfilter)) leaf_name_data.push_back(operprio.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::IfList::get_children() const
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

void System::LacpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txRate")
    {
        txrate = value;
        txrate.value_namespace = name_space;
        txrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activityFlags")
    {
        activityflags = value;
        activityflags.value_namespace = name_space;
        activityflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastActive")
    {
        lastactive = value;
        lastactive.value_namespace = name_space;
        lastactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPrio")
    {
        operprio = value;
        operprio.value_namespace = name_space;
        operprio.value_namespace_prefix = name_space_prefix;
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

void System::LacpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "txRate")
    {
        txrate.yfilter = yfilter;
    }
    if(value_path == "activityFlags")
    {
        activityflags.yfilter = yfilter;
    }
    if(value_path == "lastActive")
    {
        lastactive.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "operPrio")
    {
        operprio.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
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

bool System::LacpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "prio" || name == "txRate" || name == "activityFlags" || name == "lastActive" || name == "port" || name == "operPrio" || name == "key" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::AdjItems::AdjItems()
    :
    sysprio{YType::uint16, "sysPrio"},
    sysid{YType::str, "sysId"},
    port{YType::uint16, "port"},
    portprio{YType::uint16, "portPrio"},
    activityflags{YType::str, "activityFlags"},
    key{YType::uint16, "key"},
    name{YType::str, "name"}
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    return sysprio.is_set
	|| sysid.is_set
	|| port.is_set
	|| portprio.is_set
	|| activityflags.is_set
	|| key.is_set
	|| name.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::AdjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysprio.yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(portprio.yfilter)
	|| ydk::is_set(activityflags.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysprio.is_set || is_set(sysprio.yfilter)) leaf_name_data.push_back(sysprio.get_name_leafdata());
    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (portprio.is_set || is_set(portprio.yfilter)) leaf_name_data.push_back(portprio.get_name_leafdata());
    if (activityflags.is_set || is_set(activityflags.yfilter)) leaf_name_data.push_back(activityflags.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LacpItems::InstItems::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysPrio")
    {
        sysprio = value;
        sysprio.value_namespace = name_space;
        sysprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPrio")
    {
        portprio = value;
        portprio.value_namespace = name_space;
        portprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activityFlags")
    {
        activityflags = value;
        activityflags.value_namespace = name_space;
        activityflags.value_namespace_prefix = name_space_prefix;
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
}

void System::LacpItems::InstItems::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysPrio")
    {
        sysprio.yfilter = yfilter;
    }
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "portPrio")
    {
        portprio.yfilter = yfilter;
    }
    if(value_path == "activityFlags")
    {
        activityflags.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::LacpItems::InstItems::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysPrio" || name == "sysId" || name == "port" || name == "portPrio" || name == "activityFlags" || name == "key" || name == "name")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    pdusent{YType::uint64, "pduSent"},
    pdurcvd{YType::uint64, "pduRcvd"},
    markersent{YType::uint64, "markerSent"},
    markerrcvd{YType::uint64, "markerRcvd"},
    markerrspsent{YType::uint64, "markerRspSent"},
    markerrsprcvd{YType::uint64, "markerRspRcvd"},
    errpktrcvd{YType::uint64, "errPktRcvd"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pdusent.is_set
	|| pdurcvd.is_set
	|| markersent.is_set
	|| markerrcvd.is_set
	|| markerrspsent.is_set
	|| markerrsprcvd.is_set
	|| errpktrcvd.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdusent.yfilter)
	|| ydk::is_set(pdurcvd.yfilter)
	|| ydk::is_set(markersent.yfilter)
	|| ydk::is_set(markerrcvd.yfilter)
	|| ydk::is_set(markerrspsent.yfilter)
	|| ydk::is_set(markerrsprcvd.yfilter)
	|| ydk::is_set(errpktrcvd.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdusent.is_set || is_set(pdusent.yfilter)) leaf_name_data.push_back(pdusent.get_name_leafdata());
    if (pdurcvd.is_set || is_set(pdurcvd.yfilter)) leaf_name_data.push_back(pdurcvd.get_name_leafdata());
    if (markersent.is_set || is_set(markersent.yfilter)) leaf_name_data.push_back(markersent.get_name_leafdata());
    if (markerrcvd.is_set || is_set(markerrcvd.yfilter)) leaf_name_data.push_back(markerrcvd.get_name_leafdata());
    if (markerrspsent.is_set || is_set(markerrspsent.yfilter)) leaf_name_data.push_back(markerrspsent.get_name_leafdata());
    if (markerrsprcvd.is_set || is_set(markerrsprcvd.yfilter)) leaf_name_data.push_back(markerrsprcvd.get_name_leafdata());
    if (errpktrcvd.is_set || is_set(errpktrcvd.yfilter)) leaf_name_data.push_back(errpktrcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pduSent")
    {
        pdusent = value;
        pdusent.value_namespace = name_space;
        pdusent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pduRcvd")
    {
        pdurcvd = value;
        pdurcvd.value_namespace = name_space;
        pdurcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerSent")
    {
        markersent = value;
        markersent.value_namespace = name_space;
        markersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerRcvd")
    {
        markerrcvd = value;
        markerrcvd.value_namespace = name_space;
        markerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerRspSent")
    {
        markerrspsent = value;
        markerrspsent.value_namespace = name_space;
        markerrspsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerRspRcvd")
    {
        markerrsprcvd = value;
        markerrsprcvd.value_namespace = name_space;
        markerrsprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd = value;
        errpktrcvd.value_namespace = name_space;
        errpktrcvd.value_namespace_prefix = name_space_prefix;
    }
}

void System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pduSent")
    {
        pdusent.yfilter = yfilter;
    }
    if(value_path == "pduRcvd")
    {
        pdurcvd.yfilter = yfilter;
    }
    if(value_path == "markerSent")
    {
        markersent.yfilter = yfilter;
    }
    if(value_path == "markerRcvd")
    {
        markerrcvd.yfilter = yfilter;
    }
    if(value_path == "markerRspSent")
    {
        markerrspsent.yfilter = yfilter;
    }
    if(value_path == "markerRspRcvd")
    {
        markerrsprcvd.yfilter = yfilter;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd.yfilter = yfilter;
    }
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pduSent" || name == "pduRcvd" || name == "markerSent" || name == "markerRcvd" || name == "markerRspSent" || name == "markerRspRcvd" || name == "errPktRcvd")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtItems()
    :
    mgmtif_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MgmtItems::~MgmtItems()
{
}

bool System::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtif_list.len(); index++)
    {
        if(mgmtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtif_list.len(); index++)
    {
        if(mgmtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MgmtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtIf-list")
    {
        auto c = std::make_shared<System::MgmtItems::MgmtIfList>();
        c->parent = this;
        mgmtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtIf-list")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::MgmtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    switchingst{YType::enumeration, "switchingSt"},
    adminst{YType::enumeration, "adminSt"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    autoneg{YType::enumeration, "autoNeg"},
    mtu{YType::uint32, "mtu"},
    snmptrapst{YType::enumeration, "snmpTrapSt"}
        ,
    mgmt_items(std::make_shared<System::MgmtItems::MgmtIfList::MgmtItems_>())
    , portcap_items(std::make_shared<System::MgmtItems::MgmtIfList::PortcapItems>())
    , rtrtdmgmtconf_items(std::make_shared<System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems>())
    , rtvrfmbr_items(std::make_shared<System::MgmtItems::MgmtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems>())
    , dbgifin_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfInItems>())
    , dbgifout_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfOutItems>())
    , dbgipin_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIpInItems>())
    , dbgdot1d_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgDot1dItems>())
    , dbgetherstats_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgEtherStatsItems>())
    , dbgdot3stats_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgDot3StatsItems>())
    , dbgifhcin_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCInItems>())
    , dbgifhcout_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCOutItems>())
    , dbgipv6ifstats_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems>())
    , dbgifstorm_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfStormItems>())
{
    mgmt_items->parent = this;
    portcap_items->parent = this;
    rtrtdmgmtconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;
    dbgifin_items->parent = this;
    dbgifout_items->parent = this;
    dbgipin_items->parent = this;
    dbgdot1d_items->parent = this;
    dbgetherstats_items->parent = this;
    dbgdot3stats_items->parent = this;
    dbgifhcin_items->parent = this;
    dbgifhcout_items->parent = this;
    dbgipv6ifstats_items->parent = this;
    dbgifstorm_items->parent = this;

    yang_name = "MgmtIf-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MgmtItems::MgmtIfList::~MgmtIfList()
{
}

bool System::MgmtItems::MgmtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| switchingst.is_set
	|| adminst.is_set
	|| speed.is_set
	|| duplex.is_set
	|| autoneg.is_set
	|| mtu.is_set
	|| snmptrapst.is_set
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (portcap_items !=  nullptr && portcap_items->has_data())
	|| (rtrtdmgmtconf_items !=  nullptr && rtrtdmgmtconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_data())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_data())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_data())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_data())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_data())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_data())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_data())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_data())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_data())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_data());
}

bool System::MgmtItems::MgmtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(switchingst.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (portcap_items !=  nullptr && portcap_items->has_operation())
	|| (rtrtdmgmtconf_items !=  nullptr && rtrtdmgmtconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_operation())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_operation())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_operation())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_operation())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_operation())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_operation())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_operation())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_operation())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_operation())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_operation());
}

std::string System::MgmtItems::MgmtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mgmt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MgmtItems::MgmtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (switchingst.is_set || is_set(switchingst.yfilter)) leaf_name_data.push_back(switchingst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::MgmtItems::MgmtIfList::MgmtItems_>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "portcap-items")
    {
        if(portcap_items == nullptr)
        {
            portcap_items = std::make_shared<System::MgmtItems::MgmtIfList::PortcapItems>();
        }
        return portcap_items;
    }

    if(child_yang_name == "rtrtdMgmtConf-items")
    {
        if(rtrtdmgmtconf_items == nullptr)
        {
            rtrtdmgmtconf_items = std::make_shared<System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems>();
        }
        return rtrtdmgmtconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MgmtItems::MgmtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "dbgIfIn-items")
    {
        if(dbgifin_items == nullptr)
        {
            dbgifin_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfInItems>();
        }
        return dbgifin_items;
    }

    if(child_yang_name == "dbgIfOut-items")
    {
        if(dbgifout_items == nullptr)
        {
            dbgifout_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfOutItems>();
        }
        return dbgifout_items;
    }

    if(child_yang_name == "dbgIpIn-items")
    {
        if(dbgipin_items == nullptr)
        {
            dbgipin_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIpInItems>();
        }
        return dbgipin_items;
    }

    if(child_yang_name == "dbgDot1d-items")
    {
        if(dbgdot1d_items == nullptr)
        {
            dbgdot1d_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgDot1dItems>();
        }
        return dbgdot1d_items;
    }

    if(child_yang_name == "dbgEtherStats-items")
    {
        if(dbgetherstats_items == nullptr)
        {
            dbgetherstats_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgEtherStatsItems>();
        }
        return dbgetherstats_items;
    }

    if(child_yang_name == "dbgDot3Stats-items")
    {
        if(dbgdot3stats_items == nullptr)
        {
            dbgdot3stats_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgDot3StatsItems>();
        }
        return dbgdot3stats_items;
    }

    if(child_yang_name == "dbgIfHCIn-items")
    {
        if(dbgifhcin_items == nullptr)
        {
            dbgifhcin_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCInItems>();
        }
        return dbgifhcin_items;
    }

    if(child_yang_name == "dbgIfHCOut-items")
    {
        if(dbgifhcout_items == nullptr)
        {
            dbgifhcout_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCOutItems>();
        }
        return dbgifhcout_items;
    }

    if(child_yang_name == "dbgIpv6IfStats-items")
    {
        if(dbgipv6ifstats_items == nullptr)
        {
            dbgipv6ifstats_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems>();
        }
        return dbgipv6ifstats_items;
    }

    if(child_yang_name == "dbgIfStorm-items")
    {
        if(dbgifstorm_items == nullptr)
        {
            dbgifstorm_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfStormItems>();
        }
        return dbgifstorm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mgmt_items != nullptr)
    {
        children["mgmt-items"] = mgmt_items;
    }

    if(portcap_items != nullptr)
    {
        children["portcap-items"] = portcap_items;
    }

    if(rtrtdmgmtconf_items != nullptr)
    {
        children["rtrtdMgmtConf-items"] = rtrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(dbgifin_items != nullptr)
    {
        children["dbgIfIn-items"] = dbgifin_items;
    }

    if(dbgifout_items != nullptr)
    {
        children["dbgIfOut-items"] = dbgifout_items;
    }

    if(dbgipin_items != nullptr)
    {
        children["dbgIpIn-items"] = dbgipin_items;
    }

    if(dbgdot1d_items != nullptr)
    {
        children["dbgDot1d-items"] = dbgdot1d_items;
    }

    if(dbgetherstats_items != nullptr)
    {
        children["dbgEtherStats-items"] = dbgetherstats_items;
    }

    if(dbgdot3stats_items != nullptr)
    {
        children["dbgDot3Stats-items"] = dbgdot3stats_items;
    }

    if(dbgifhcin_items != nullptr)
    {
        children["dbgIfHCIn-items"] = dbgifhcin_items;
    }

    if(dbgifhcout_items != nullptr)
    {
        children["dbgIfHCOut-items"] = dbgifhcout_items;
    }

    if(dbgipv6ifstats_items != nullptr)
    {
        children["dbgIpv6IfStats-items"] = dbgipv6ifstats_items;
    }

    if(dbgifstorm_items != nullptr)
    {
        children["dbgIfStorm-items"] = dbgifstorm_items;
    }

    return children;
}

void System::MgmtItems::MgmtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "switchingSt")
    {
        switchingst = value;
        switchingst.value_namespace = name_space;
        switchingst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoNeg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst = value;
        snmptrapst.value_namespace = name_space;
        snmptrapst.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "switchingSt")
    {
        switchingst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "autoNeg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgmt-items" || name == "portcap-items" || name == "rtrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "name" || name == "descr" || name == "switchingSt" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::MgmtItems_::MgmtItems_()
    :
    ossum{YType::enumeration, "osSum"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    operspeed{YType::enumeration, "operSpeed"},
    operduplex{YType::enumeration, "operDuplex"},
    operphylayer{YType::enumeration, "operPhyLayer"},
    backplanemac{YType::str, "backplaneMac"},
    operroutermac{YType::str, "operRouterMac"},
    portinitevalflag{YType::uint8, "portInitEvalFlag"},
    opermtu{YType::uint32, "operMtu"},
    iod{YType::uint64, "iod"},
    vdcid{YType::uint16, "vdcId"},
    createsig{YType::uint32, "createSig"},
    lastlinkstchg{YType::str, "lastLinkStChg"}
{

    yang_name = "mgmt-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::MgmtItems_::~MgmtItems_()
{
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_data() const
{
    if (is_presence_container) return true;
    return ossum.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| operspeed.is_set
	|| operduplex.is_set
	|| operphylayer.is_set
	|| backplanemac.is_set
	|| operroutermac.is_set
	|| portinitevalflag.is_set
	|| opermtu.is_set
	|| iod.is_set
	|| vdcid.is_set
	|| createsig.is_set
	|| lastlinkstchg.is_set;
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ossum.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(operspeed.yfilter)
	|| ydk::is_set(operduplex.yfilter)
	|| ydk::is_set(operphylayer.yfilter)
	|| ydk::is_set(backplanemac.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(portinitevalflag.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(createsig.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter);
}

std::string System::MgmtItems::MgmtIfList::MgmtItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::MgmtItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ossum.is_set || is_set(ossum.yfilter)) leaf_name_data.push_back(ossum.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (operspeed.is_set || is_set(operspeed.yfilter)) leaf_name_data.push_back(operspeed.get_name_leafdata());
    if (operduplex.is_set || is_set(operduplex.yfilter)) leaf_name_data.push_back(operduplex.get_name_leafdata());
    if (operphylayer.is_set || is_set(operphylayer.yfilter)) leaf_name_data.push_back(operphylayer.get_name_leafdata());
    if (backplanemac.is_set || is_set(backplanemac.yfilter)) leaf_name_data.push_back(backplanemac.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (portinitevalflag.is_set || is_set(portinitevalflag.yfilter)) leaf_name_data.push_back(portinitevalflag.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (createsig.is_set || is_set(createsig.yfilter)) leaf_name_data.push_back(createsig.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::MgmtItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::MgmtItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::MgmtItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "osSum")
    {
        ossum = value;
        ossum.value_namespace = name_space;
        ossum.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSpeed")
    {
        operspeed = value;
        operspeed.value_namespace = name_space;
        operspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDuplex")
    {
        operduplex = value;
        operduplex.value_namespace = name_space;
        operduplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPhyLayer")
    {
        operphylayer = value;
        operphylayer.value_namespace = name_space;
        operphylayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac = value;
        backplanemac.value_namespace = name_space;
        backplanemac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac = value;
        operroutermac.value_namespace = name_space;
        operroutermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portInitEvalFlag")
    {
        portinitevalflag = value;
        portinitevalflag.value_namespace = name_space;
        portinitevalflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createSig")
    {
        createsig = value;
        createsig.value_namespace = name_space;
        createsig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::MgmtItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "osSum")
    {
        ossum.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operSpeed")
    {
        operspeed.yfilter = yfilter;
    }
    if(value_path == "operDuplex")
    {
        operduplex.yfilter = yfilter;
    }
    if(value_path == "operPhyLayer")
    {
        operphylayer.yfilter = yfilter;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac.yfilter = yfilter;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac.yfilter = yfilter;
    }
    if(value_path == "portInitEvalFlag")
    {
        portinitevalflag.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "createSig")
    {
        createsig.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "osSum" || name == "operSt" || name == "operStQual" || name == "operSpeed" || name == "operDuplex" || name == "operPhyLayer" || name == "backplaneMac" || name == "operRouterMac" || name == "portInitEvalFlag" || name == "operMtu" || name == "iod" || name == "vdcId" || name == "createSig" || name == "lastLinkStChg")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::PortcapItems::PortcapItems()
    :
    portcap{YType::uint32, "portCap"}
{

    yang_name = "portcap-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::PortcapItems::~PortcapItems()
{
}

bool System::MgmtItems::MgmtIfList::PortcapItems::has_data() const
{
    if (is_presence_container) return true;
    return portcap.is_set;
}

bool System::MgmtItems::MgmtIfList::PortcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(portcap.yfilter);
}

std::string System::MgmtItems::MgmtIfList::PortcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::PortcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portcap.is_set || is_set(portcap.yfilter)) leaf_name_data.push_back(portcap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::PortcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portCap")
    {
        portcap = value;
        portcap.value_namespace = name_space;
        portcap.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::PortcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portCap")
    {
        portcap.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::PortcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portCap")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::RtrtdMgmtConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtrtdMgmtConf-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::~RtrtdMgmtConfItems()
{
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtdMgmtConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MgmtItems::MgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_children() const
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

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfInItems::DbgIfInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    unknownprotos{YType::uint64, "unknownProtos"},
    unknownetype{YType::uint64, "unknownEtype"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    nobuffer{YType::uint64, "noBuffer"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfIn-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfInItems::~DbgIfInItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| unknownprotos.is_set
	|| unknownetype.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| nobuffer.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(unknownprotos.yfilter)
	|| ydk::is_set(unknownetype.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(nobuffer.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (unknownprotos.is_set || is_set(unknownprotos.yfilter)) leaf_name_data.push_back(unknownprotos.get_name_leafdata());
    if (unknownetype.is_set || is_set(unknownetype.yfilter)) leaf_name_data.push_back(unknownetype.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (nobuffer.is_set || is_set(nobuffer.yfilter)) leaf_name_data.push_back(nobuffer.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIfInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos = value;
        unknownprotos.value_namespace = name_space;
        unknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype = value;
        unknownetype.value_namespace = name_space;
        unknownetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noBuffer")
    {
        nobuffer = value;
        nobuffer.value_namespace = name_space;
        nobuffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos.yfilter = yfilter;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "noBuffer")
    {
        nobuffer.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "unknownProtos" || name == "unknownEtype" || name == "broadcastPkts" || name == "multicastPkts" || name == "noBuffer" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfOutItems::DbgIfOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    qlen{YType::uint64, "qLen"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfOut-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfOutItems::~DbgIfOutItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| qlen.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(qlen.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (qlen.is_set || is_set(qlen.yfilter)) leaf_name_data.push_back(qlen.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIfOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qLen")
    {
        qlen = value;
        qlen.value_namespace = name_space;
        qlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "qLen")
    {
        qlen.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "qLen" || name == "broadcastPkts" || name == "multicastPkts" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIpInItems::DbgIpInItems()
    :
    receives{YType::uint64, "receives"},
    hdrerrors{YType::uint64, "hdrErrors"},
    forwdatagrams{YType::uint64, "forwDatagrams"},
    discards{YType::uint64, "discards"}
{

    yang_name = "dbgIpIn-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIpInItems::~DbgIpInItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIpInItems::has_data() const
{
    if (is_presence_container) return true;
    return receives.is_set
	|| hdrerrors.is_set
	|| forwdatagrams.is_set
	|| discards.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIpInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receives.yfilter)
	|| ydk::is_set(hdrerrors.yfilter)
	|| ydk::is_set(forwdatagrams.yfilter)
	|| ydk::is_set(discards.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIpInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIpInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receives.is_set || is_set(receives.yfilter)) leaf_name_data.push_back(receives.get_name_leafdata());
    if (hdrerrors.is_set || is_set(hdrerrors.yfilter)) leaf_name_data.push_back(hdrerrors.get_name_leafdata());
    if (forwdatagrams.is_set || is_set(forwdatagrams.yfilter)) leaf_name_data.push_back(forwdatagrams.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIpInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receives")
    {
        receives = value;
        receives.value_namespace = name_space;
        receives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors = value;
        hdrerrors.value_namespace = name_space;
        hdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams = value;
        forwdatagrams.value_namespace = name_space;
        forwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIpInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receives")
    {
        receives.yfilter = yfilter;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors.yfilter = yfilter;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIpInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receives" || name == "hdrErrors" || name == "forwDatagrams" || name == "discards")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgDot1dItems::DbgDot1dItems()
    :
    baseportdelayexceededdiscards{YType::uint64, "basePortDelayExceededDiscards"},
    baseportmtuexceededdiscards{YType::uint64, "basePortMtuExceededDiscards"},
    tpportinframes{YType::uint64, "tpPortInFrames"},
    tpportoutframes{YType::uint64, "tpPortOutFrames"},
    portindiscards{YType::uint64, "portInDiscards"}
{

    yang_name = "dbgDot1d-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgDot1dItems::~DbgDot1dItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgDot1dItems::has_data() const
{
    if (is_presence_container) return true;
    return baseportdelayexceededdiscards.is_set
	|| baseportmtuexceededdiscards.is_set
	|| tpportinframes.is_set
	|| tpportoutframes.is_set
	|| portindiscards.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgDot1dItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(baseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(tpportinframes.yfilter)
	|| ydk::is_set(tpportoutframes.yfilter)
	|| ydk::is_set(portindiscards.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgDot1dItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot1d-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgDot1dItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baseportdelayexceededdiscards.is_set || is_set(baseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(baseportdelayexceededdiscards.get_name_leafdata());
    if (baseportmtuexceededdiscards.is_set || is_set(baseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(baseportmtuexceededdiscards.get_name_leafdata());
    if (tpportinframes.is_set || is_set(tpportinframes.yfilter)) leaf_name_data.push_back(tpportinframes.get_name_leafdata());
    if (tpportoutframes.is_set || is_set(tpportoutframes.yfilter)) leaf_name_data.push_back(tpportoutframes.get_name_leafdata());
    if (portindiscards.is_set || is_set(portindiscards.yfilter)) leaf_name_data.push_back(portindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgDot1dItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards = value;
        baseportdelayexceededdiscards.value_namespace = name_space;
        baseportdelayexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards = value;
        baseportmtuexceededdiscards.value_namespace = name_space;
        baseportmtuexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes = value;
        tpportinframes.value_namespace = name_space;
        tpportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes = value;
        tpportoutframes.value_namespace = name_space;
        tpportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards = value;
        portindiscards.value_namespace = name_space;
        portindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgDot1dItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes.yfilter = yfilter;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes.yfilter = yfilter;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgDot1dItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basePortDelayExceededDiscards" || name == "basePortMtuExceededDiscards" || name == "tpPortInFrames" || name == "tpPortOutFrames" || name == "portInDiscards")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgEtherStatsItems::DbgEtherStatsItems()
    :
    dropevents{YType::uint64, "dropEvents"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    undersizepkts{YType::uint64, "undersizePkts"},
    fragments{YType::uint64, "fragments"},
    pkts64octets{YType::uint64, "pkts64Octets"},
    pkts65to127octets{YType::uint64, "pkts65to127Octets"},
    pkts128to255octets{YType::uint64, "pkts128to255Octets"},
    pkts256to511octets{YType::uint64, "pkts256to511Octets"},
    pkts512to1023octets{YType::uint64, "pkts512to1023Octets"},
    pkts1024to1518octets{YType::uint64, "pkts1024to1518Octets"},
    oversizepkts{YType::uint64, "oversizePkts"},
    jabbers{YType::uint64, "jabbers"},
    octets{YType::uint64, "octets"},
    pkts{YType::uint64, "pkts"},
    collisions{YType::uint64, "collisions"},
    crcalignerrors{YType::uint64, "cRCAlignErrors"},
    txnoerrors{YType::uint64, "tXNoErrors"},
    rxnoerrors{YType::uint64, "rXNoErrors"},
    rxoversizepkts{YType::uint64, "rxOversizePkts"},
    txoversizepkts{YType::uint64, "txOversizePkts"},
    overrun{YType::uint64, "overrun"},
    underrun{YType::uint64, "underrun"},
    ignored{YType::uint64, "ignored"},
    watchdog{YType::uint64, "watchdog"},
    ifdowndrop{YType::uint64, "ifdowndrop"}
{

    yang_name = "dbgEtherStats-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgEtherStatsItems::~DbgEtherStatsItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgEtherStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return dropevents.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set
	|| undersizepkts.is_set
	|| fragments.is_set
	|| pkts64octets.is_set
	|| pkts65to127octets.is_set
	|| pkts128to255octets.is_set
	|| pkts256to511octets.is_set
	|| pkts512to1023octets.is_set
	|| pkts1024to1518octets.is_set
	|| oversizepkts.is_set
	|| jabbers.is_set
	|| octets.is_set
	|| pkts.is_set
	|| collisions.is_set
	|| crcalignerrors.is_set
	|| txnoerrors.is_set
	|| rxnoerrors.is_set
	|| rxoversizepkts.is_set
	|| txoversizepkts.is_set
	|| overrun.is_set
	|| underrun.is_set
	|| ignored.is_set
	|| watchdog.is_set
	|| ifdowndrop.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgEtherStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropevents.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(undersizepkts.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(pkts64octets.yfilter)
	|| ydk::is_set(pkts65to127octets.yfilter)
	|| ydk::is_set(pkts128to255octets.yfilter)
	|| ydk::is_set(pkts256to511octets.yfilter)
	|| ydk::is_set(pkts512to1023octets.yfilter)
	|| ydk::is_set(pkts1024to1518octets.yfilter)
	|| ydk::is_set(oversizepkts.yfilter)
	|| ydk::is_set(jabbers.yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(pkts.yfilter)
	|| ydk::is_set(collisions.yfilter)
	|| ydk::is_set(crcalignerrors.yfilter)
	|| ydk::is_set(txnoerrors.yfilter)
	|| ydk::is_set(rxnoerrors.yfilter)
	|| ydk::is_set(rxoversizepkts.yfilter)
	|| ydk::is_set(txoversizepkts.yfilter)
	|| ydk::is_set(overrun.yfilter)
	|| ydk::is_set(underrun.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(watchdog.yfilter)
	|| ydk::is_set(ifdowndrop.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEtherStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropevents.is_set || is_set(dropevents.yfilter)) leaf_name_data.push_back(dropevents.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (undersizepkts.is_set || is_set(undersizepkts.yfilter)) leaf_name_data.push_back(undersizepkts.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (pkts64octets.is_set || is_set(pkts64octets.yfilter)) leaf_name_data.push_back(pkts64octets.get_name_leafdata());
    if (pkts65to127octets.is_set || is_set(pkts65to127octets.yfilter)) leaf_name_data.push_back(pkts65to127octets.get_name_leafdata());
    if (pkts128to255octets.is_set || is_set(pkts128to255octets.yfilter)) leaf_name_data.push_back(pkts128to255octets.get_name_leafdata());
    if (pkts256to511octets.is_set || is_set(pkts256to511octets.yfilter)) leaf_name_data.push_back(pkts256to511octets.get_name_leafdata());
    if (pkts512to1023octets.is_set || is_set(pkts512to1023octets.yfilter)) leaf_name_data.push_back(pkts512to1023octets.get_name_leafdata());
    if (pkts1024to1518octets.is_set || is_set(pkts1024to1518octets.yfilter)) leaf_name_data.push_back(pkts1024to1518octets.get_name_leafdata());
    if (oversizepkts.is_set || is_set(oversizepkts.yfilter)) leaf_name_data.push_back(oversizepkts.get_name_leafdata());
    if (jabbers.is_set || is_set(jabbers.yfilter)) leaf_name_data.push_back(jabbers.get_name_leafdata());
    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (pkts.is_set || is_set(pkts.yfilter)) leaf_name_data.push_back(pkts.get_name_leafdata());
    if (collisions.is_set || is_set(collisions.yfilter)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (crcalignerrors.is_set || is_set(crcalignerrors.yfilter)) leaf_name_data.push_back(crcalignerrors.get_name_leafdata());
    if (txnoerrors.is_set || is_set(txnoerrors.yfilter)) leaf_name_data.push_back(txnoerrors.get_name_leafdata());
    if (rxnoerrors.is_set || is_set(rxnoerrors.yfilter)) leaf_name_data.push_back(rxnoerrors.get_name_leafdata());
    if (rxoversizepkts.is_set || is_set(rxoversizepkts.yfilter)) leaf_name_data.push_back(rxoversizepkts.get_name_leafdata());
    if (txoversizepkts.is_set || is_set(txoversizepkts.yfilter)) leaf_name_data.push_back(txoversizepkts.get_name_leafdata());
    if (overrun.is_set || is_set(overrun.yfilter)) leaf_name_data.push_back(overrun.get_name_leafdata());
    if (underrun.is_set || is_set(underrun.yfilter)) leaf_name_data.push_back(underrun.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.yfilter)) leaf_name_data.push_back(watchdog.get_name_leafdata());
    if (ifdowndrop.is_set || is_set(ifdowndrop.yfilter)) leaf_name_data.push_back(ifdowndrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgEtherStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropEvents")
    {
        dropevents = value;
        dropevents.value_namespace = name_space;
        dropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts = value;
        undersizepkts.value_namespace = name_space;
        undersizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets = value;
        pkts64octets.value_namespace = name_space;
        pkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets = value;
        pkts65to127octets.value_namespace = name_space;
        pkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets = value;
        pkts128to255octets.value_namespace = name_space;
        pkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets = value;
        pkts256to511octets.value_namespace = name_space;
        pkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets = value;
        pkts512to1023octets.value_namespace = name_space;
        pkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets = value;
        pkts1024to1518octets.value_namespace = name_space;
        pkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts = value;
        oversizepkts.value_namespace = name_space;
        oversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jabbers")
    {
        jabbers = value;
        jabbers.value_namespace = name_space;
        jabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts")
    {
        pkts = value;
        pkts.value_namespace = name_space;
        pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collisions")
    {
        collisions = value;
        collisions.value_namespace = name_space;
        collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors = value;
        crcalignerrors.value_namespace = name_space;
        crcalignerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors = value;
        txnoerrors.value_namespace = name_space;
        txnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors = value;
        rxnoerrors.value_namespace = name_space;
        rxnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts = value;
        rxoversizepkts.value_namespace = name_space;
        rxoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts = value;
        txoversizepkts.value_namespace = name_space;
        txoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun")
    {
        overrun = value;
        overrun.value_namespace = name_space;
        overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underrun")
    {
        underrun = value;
        underrun.value_namespace = name_space;
        underrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
        watchdog.value_namespace = name_space;
        watchdog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop = value;
        ifdowndrop.value_namespace = name_space;
        ifdowndrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgEtherStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropEvents")
    {
        dropevents.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets.yfilter = yfilter;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts.yfilter = yfilter;
    }
    if(value_path == "jabbers")
    {
        jabbers.yfilter = yfilter;
    }
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "pkts")
    {
        pkts.yfilter = yfilter;
    }
    if(value_path == "collisions")
    {
        collisions.yfilter = yfilter;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors.yfilter = yfilter;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors.yfilter = yfilter;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors.yfilter = yfilter;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts.yfilter = yfilter;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts.yfilter = yfilter;
    }
    if(value_path == "overrun")
    {
        overrun.yfilter = yfilter;
    }
    if(value_path == "underrun")
    {
        underrun.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "watchdog")
    {
        watchdog.yfilter = yfilter;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgEtherStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgDot3StatsItems::DbgDot3StatsItems()
    :
    alignmenterrors{YType::uint64, "alignmentErrors"},
    fcserrors{YType::uint64, "fCSErrors"},
    singlecollisionframes{YType::uint64, "singleCollisionFrames"},
    multiplecollisionframes{YType::uint64, "multipleCollisionFrames"},
    sqettesterrors{YType::uint64, "sQETTestErrors"},
    deferredtransmissions{YType::uint64, "deferredTransmissions"},
    latecollisions{YType::uint64, "lateCollisions"},
    excessivecollisions{YType::uint64, "excessiveCollisions"},
    internalmactransmiterrors{YType::uint64, "internalMacTransmitErrors"},
    carriersenseerrors{YType::uint64, "carrierSenseErrors"},
    frametoolongs{YType::uint64, "frameTooLongs"},
    internalmacreceiveerrors{YType::uint64, "internalMacReceiveErrors"},
    symbolerrors{YType::uint64, "symbolErrors"},
    controlinunknownopcodes{YType::uint64, "controlInUnknownOpcodes"},
    inpauseframes{YType::uint64, "inPauseFrames"},
    outpauseframes{YType::uint64, "outPauseFrames"},
    lostcarriererrors{YType::uint64, "lostCarrierErrors"},
    nocarriererrors{YType::uint64, "noCarrierErrors"},
    inputdribble{YType::uint64, "inputdribble"},
    babble{YType::uint64, "babble"},
    runts{YType::uint64, "runts"}
{

    yang_name = "dbgDot3Stats-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgDot3StatsItems::~DbgDot3StatsItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgDot3StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return alignmenterrors.is_set
	|| fcserrors.is_set
	|| singlecollisionframes.is_set
	|| multiplecollisionframes.is_set
	|| sqettesterrors.is_set
	|| deferredtransmissions.is_set
	|| latecollisions.is_set
	|| excessivecollisions.is_set
	|| internalmactransmiterrors.is_set
	|| carriersenseerrors.is_set
	|| frametoolongs.is_set
	|| internalmacreceiveerrors.is_set
	|| symbolerrors.is_set
	|| controlinunknownopcodes.is_set
	|| inpauseframes.is_set
	|| outpauseframes.is_set
	|| lostcarriererrors.is_set
	|| nocarriererrors.is_set
	|| inputdribble.is_set
	|| babble.is_set
	|| runts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgDot3StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alignmenterrors.yfilter)
	|| ydk::is_set(fcserrors.yfilter)
	|| ydk::is_set(singlecollisionframes.yfilter)
	|| ydk::is_set(multiplecollisionframes.yfilter)
	|| ydk::is_set(sqettesterrors.yfilter)
	|| ydk::is_set(deferredtransmissions.yfilter)
	|| ydk::is_set(latecollisions.yfilter)
	|| ydk::is_set(excessivecollisions.yfilter)
	|| ydk::is_set(internalmactransmiterrors.yfilter)
	|| ydk::is_set(carriersenseerrors.yfilter)
	|| ydk::is_set(frametoolongs.yfilter)
	|| ydk::is_set(internalmacreceiveerrors.yfilter)
	|| ydk::is_set(symbolerrors.yfilter)
	|| ydk::is_set(controlinunknownopcodes.yfilter)
	|| ydk::is_set(inpauseframes.yfilter)
	|| ydk::is_set(outpauseframes.yfilter)
	|| ydk::is_set(lostcarriererrors.yfilter)
	|| ydk::is_set(nocarriererrors.yfilter)
	|| ydk::is_set(inputdribble.yfilter)
	|| ydk::is_set(babble.yfilter)
	|| ydk::is_set(runts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot3Stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alignmenterrors.is_set || is_set(alignmenterrors.yfilter)) leaf_name_data.push_back(alignmenterrors.get_name_leafdata());
    if (fcserrors.is_set || is_set(fcserrors.yfilter)) leaf_name_data.push_back(fcserrors.get_name_leafdata());
    if (singlecollisionframes.is_set || is_set(singlecollisionframes.yfilter)) leaf_name_data.push_back(singlecollisionframes.get_name_leafdata());
    if (multiplecollisionframes.is_set || is_set(multiplecollisionframes.yfilter)) leaf_name_data.push_back(multiplecollisionframes.get_name_leafdata());
    if (sqettesterrors.is_set || is_set(sqettesterrors.yfilter)) leaf_name_data.push_back(sqettesterrors.get_name_leafdata());
    if (deferredtransmissions.is_set || is_set(deferredtransmissions.yfilter)) leaf_name_data.push_back(deferredtransmissions.get_name_leafdata());
    if (latecollisions.is_set || is_set(latecollisions.yfilter)) leaf_name_data.push_back(latecollisions.get_name_leafdata());
    if (excessivecollisions.is_set || is_set(excessivecollisions.yfilter)) leaf_name_data.push_back(excessivecollisions.get_name_leafdata());
    if (internalmactransmiterrors.is_set || is_set(internalmactransmiterrors.yfilter)) leaf_name_data.push_back(internalmactransmiterrors.get_name_leafdata());
    if (carriersenseerrors.is_set || is_set(carriersenseerrors.yfilter)) leaf_name_data.push_back(carriersenseerrors.get_name_leafdata());
    if (frametoolongs.is_set || is_set(frametoolongs.yfilter)) leaf_name_data.push_back(frametoolongs.get_name_leafdata());
    if (internalmacreceiveerrors.is_set || is_set(internalmacreceiveerrors.yfilter)) leaf_name_data.push_back(internalmacreceiveerrors.get_name_leafdata());
    if (symbolerrors.is_set || is_set(symbolerrors.yfilter)) leaf_name_data.push_back(symbolerrors.get_name_leafdata());
    if (controlinunknownopcodes.is_set || is_set(controlinunknownopcodes.yfilter)) leaf_name_data.push_back(controlinunknownopcodes.get_name_leafdata());
    if (inpauseframes.is_set || is_set(inpauseframes.yfilter)) leaf_name_data.push_back(inpauseframes.get_name_leafdata());
    if (outpauseframes.is_set || is_set(outpauseframes.yfilter)) leaf_name_data.push_back(outpauseframes.get_name_leafdata());
    if (lostcarriererrors.is_set || is_set(lostcarriererrors.yfilter)) leaf_name_data.push_back(lostcarriererrors.get_name_leafdata());
    if (nocarriererrors.is_set || is_set(nocarriererrors.yfilter)) leaf_name_data.push_back(nocarriererrors.get_name_leafdata());
    if (inputdribble.is_set || is_set(inputdribble.yfilter)) leaf_name_data.push_back(inputdribble.get_name_leafdata());
    if (babble.is_set || is_set(babble.yfilter)) leaf_name_data.push_back(babble.get_name_leafdata());
    if (runts.is_set || is_set(runts.yfilter)) leaf_name_data.push_back(runts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgDot3StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors = value;
        alignmenterrors.value_namespace = name_space;
        alignmenterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors = value;
        fcserrors.value_namespace = name_space;
        fcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes = value;
        singlecollisionframes.value_namespace = name_space;
        singlecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes = value;
        multiplecollisionframes.value_namespace = name_space;
        multiplecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors = value;
        sqettesterrors.value_namespace = name_space;
        sqettesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions = value;
        deferredtransmissions.value_namespace = name_space;
        deferredtransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions = value;
        latecollisions.value_namespace = name_space;
        latecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions = value;
        excessivecollisions.value_namespace = name_space;
        excessivecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors = value;
        internalmactransmiterrors.value_namespace = name_space;
        internalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors = value;
        carriersenseerrors.value_namespace = name_space;
        carriersenseerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs = value;
        frametoolongs.value_namespace = name_space;
        frametoolongs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors = value;
        internalmacreceiveerrors.value_namespace = name_space;
        internalmacreceiveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors = value;
        symbolerrors.value_namespace = name_space;
        symbolerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes = value;
        controlinunknownopcodes.value_namespace = name_space;
        controlinunknownopcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes = value;
        inpauseframes.value_namespace = name_space;
        inpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes = value;
        outpauseframes.value_namespace = name_space;
        outpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors = value;
        lostcarriererrors.value_namespace = name_space;
        lostcarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors = value;
        nocarriererrors.value_namespace = name_space;
        nocarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputdribble")
    {
        inputdribble = value;
        inputdribble.value_namespace = name_space;
        inputdribble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "babble")
    {
        babble = value;
        babble.value_namespace = name_space;
        babble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runts")
    {
        runts = value;
        runts.value_namespace = name_space;
        runts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgDot3StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors.yfilter = yfilter;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors.yfilter = yfilter;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes.yfilter = yfilter;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes.yfilter = yfilter;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors.yfilter = yfilter;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions.yfilter = yfilter;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions.yfilter = yfilter;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions.yfilter = yfilter;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors.yfilter = yfilter;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs.yfilter = yfilter;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors.yfilter = yfilter;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes.yfilter = yfilter;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes.yfilter = yfilter;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes.yfilter = yfilter;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors.yfilter = yfilter;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors.yfilter = yfilter;
    }
    if(value_path == "inputdribble")
    {
        inputdribble.yfilter = yfilter;
    }
    if(value_path == "babble")
    {
        babble.yfilter = yfilter;
    }
    if(value_path == "runts")
    {
        runts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgDot3StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignmentErrors" || name == "fCSErrors" || name == "singleCollisionFrames" || name == "multipleCollisionFrames" || name == "sQETTestErrors" || name == "deferredTransmissions" || name == "lateCollisions" || name == "excessiveCollisions" || name == "internalMacTransmitErrors" || name == "carrierSenseErrors" || name == "frameTooLongs" || name == "internalMacReceiveErrors" || name == "symbolErrors" || name == "controlInUnknownOpcodes" || name == "inPauseFrames" || name == "outPauseFrames" || name == "lostCarrierErrors" || name == "noCarrierErrors" || name == "inputdribble" || name == "babble" || name == "runts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfHCInItems::DbgIfHCInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCIn-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfHCInItems::~DbgIfHCInItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfHCInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfHCInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIfHCInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfHCInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfHCInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPkts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfHCOutItems::DbgIfHCOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpckts{YType::uint64, "broadcastPckts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCOut-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfHCOutItems::~DbgIfHCOutItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfHCOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpckts.is_set
	|| broadcastpkts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfHCOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpckts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpckts.is_set || is_set(broadcastpckts.yfilter)) leaf_name_data.push_back(broadcastpckts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIfHCOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts = value;
        broadcastpckts.value_namespace = name_space;
        broadcastpckts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfHCOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfHCOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPckts" || name == "broadcastPkts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::DbgIpv6IfStatsItems()
    :
    inreceives{YType::uint64, "inReceives"},
    inhdrerrors{YType::uint64, "inHdrErrors"},
    inaddrerrors{YType::uint64, "inAddrErrors"},
    indiscards{YType::uint64, "inDiscards"},
    outforwdatagrams{YType::uint64, "outForwDatagrams"},
    outdiscards{YType::uint64, "outDiscards"},
    inmcastpkts{YType::uint64, "inMcastPkts"},
    outmcastpkts{YType::uint64, "outMcastPkts"}
{

    yang_name = "dbgIpv6IfStats-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::~DbgIpv6IfStatsItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return inreceives.is_set
	|| inhdrerrors.is_set
	|| inaddrerrors.is_set
	|| indiscards.is_set
	|| outforwdatagrams.is_set
	|| outdiscards.is_set
	|| inmcastpkts.is_set
	|| outmcastpkts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inreceives.yfilter)
	|| ydk::is_set(inhdrerrors.yfilter)
	|| ydk::is_set(inaddrerrors.yfilter)
	|| ydk::is_set(indiscards.yfilter)
	|| ydk::is_set(outforwdatagrams.yfilter)
	|| ydk::is_set(outdiscards.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(outmcastpkts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpv6IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inreceives.is_set || is_set(inreceives.yfilter)) leaf_name_data.push_back(inreceives.get_name_leafdata());
    if (inhdrerrors.is_set || is_set(inhdrerrors.yfilter)) leaf_name_data.push_back(inhdrerrors.get_name_leafdata());
    if (inaddrerrors.is_set || is_set(inaddrerrors.yfilter)) leaf_name_data.push_back(inaddrerrors.get_name_leafdata());
    if (indiscards.is_set || is_set(indiscards.yfilter)) leaf_name_data.push_back(indiscards.get_name_leafdata());
    if (outforwdatagrams.is_set || is_set(outforwdatagrams.yfilter)) leaf_name_data.push_back(outforwdatagrams.get_name_leafdata());
    if (outdiscards.is_set || is_set(outdiscards.yfilter)) leaf_name_data.push_back(outdiscards.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (outmcastpkts.is_set || is_set(outmcastpkts.yfilter)) leaf_name_data.push_back(outmcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inReceives")
    {
        inreceives = value;
        inreceives.value_namespace = name_space;
        inreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors = value;
        inhdrerrors.value_namespace = name_space;
        inhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors = value;
        inaddrerrors.value_namespace = name_space;
        inaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inDiscards")
    {
        indiscards = value;
        indiscards.value_namespace = name_space;
        indiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams = value;
        outforwdatagrams.value_namespace = name_space;
        outforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outDiscards")
    {
        outdiscards = value;
        outdiscards.value_namespace = name_space;
        outdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts = value;
        outmcastpkts.value_namespace = name_space;
        outmcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inReceives")
    {
        inreceives.yfilter = yfilter;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors.yfilter = yfilter;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors.yfilter = yfilter;
    }
    if(value_path == "inDiscards")
    {
        indiscards.yfilter = yfilter;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "outDiscards")
    {
        outdiscards.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inReceives" || name == "inHdrErrors" || name == "inAddrErrors" || name == "inDiscards" || name == "outForwDatagrams" || name == "outDiscards" || name == "inMcastPkts" || name == "outMcastPkts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfStormItems::DbgIfStormItems()
    :
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIfStorm-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfStormItems::~DbgIfStormItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfStormItems::has_data() const
{
    if (is_presence_container) return true;
    return dropbytes.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfStormItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfStormItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfStorm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfStormItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MgmtItems::MgmtIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MgmtItems::MgmtIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MgmtItems::MgmtIfList::DbgIfStormItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfStormItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfStormItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropBytes")
        return true;
    return false;
}

System::MitOperItems::MitOperItems()
    :
    commitmit_items(std::make_shared<System::MitOperItems::CommitMitItems>())
    , copymit_items(std::make_shared<System::MitOperItems::CopyMitItems>())
    , mitlock_items(std::make_shared<System::MitOperItems::MitLockItems>())
    , sessionlock_items(std::make_shared<System::MitOperItems::SessionLockItems>())
{
    commitmit_items->parent = this;
    copymit_items->parent = this;
    mitlock_items->parent = this;
    sessionlock_items->parent = this;

    yang_name = "mitOper-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::~MitOperItems()
{
}

bool System::MitOperItems::has_data() const
{
    if (is_presence_container) return true;
    return (commitmit_items !=  nullptr && commitmit_items->has_data())
	|| (copymit_items !=  nullptr && copymit_items->has_data())
	|| (mitlock_items !=  nullptr && mitlock_items->has_data())
	|| (sessionlock_items !=  nullptr && sessionlock_items->has_data());
}

bool System::MitOperItems::has_operation() const
{
    return is_set(yfilter)
	|| (commitmit_items !=  nullptr && commitmit_items->has_operation())
	|| (copymit_items !=  nullptr && copymit_items->has_operation())
	|| (mitlock_items !=  nullptr && mitlock_items->has_operation())
	|| (sessionlock_items !=  nullptr && sessionlock_items->has_operation());
}

std::string System::MitOperItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mitOper-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commitMit-items")
    {
        if(commitmit_items == nullptr)
        {
            commitmit_items = std::make_shared<System::MitOperItems::CommitMitItems>();
        }
        return commitmit_items;
    }

    if(child_yang_name == "copyMit-items")
    {
        if(copymit_items == nullptr)
        {
            copymit_items = std::make_shared<System::MitOperItems::CopyMitItems>();
        }
        return copymit_items;
    }

    if(child_yang_name == "mitLock-items")
    {
        if(mitlock_items == nullptr)
        {
            mitlock_items = std::make_shared<System::MitOperItems::MitLockItems>();
        }
        return mitlock_items;
    }

    if(child_yang_name == "sessionLock-items")
    {
        if(sessionlock_items == nullptr)
        {
            sessionlock_items = std::make_shared<System::MitOperItems::SessionLockItems>();
        }
        return sessionlock_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(commitmit_items != nullptr)
    {
        children["commitMit-items"] = commitmit_items;
    }

    if(copymit_items != nullptr)
    {
        children["copyMit-items"] = copymit_items;
    }

    if(mitlock_items != nullptr)
    {
        children["mitLock-items"] = mitlock_items;
    }

    if(sessionlock_items != nullptr)
    {
        children["sessionLock-items"] = sessionlock_items;
    }

    return children;
}

void System::MitOperItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MitOperItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MitOperItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commitMit-items" || name == "copyMit-items" || name == "mitLock-items" || name == "sessionLock-items")
        return true;
    return false;
}

System::MitOperItems::CommitMitItems::CommitMitItems()
    :
    srctreeid{YType::uint32, "srcTreeId"},
    commitopertype{YType::enumeration, "commitOperType"},
    timeout{YType::uint32, "timeout"},
    txnid{YType::str, "txnId"}
{

    yang_name = "commitMit-items"; yang_parent_name = "mitOper-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::CommitMitItems::~CommitMitItems()
{
}

bool System::MitOperItems::CommitMitItems::has_data() const
{
    if (is_presence_container) return true;
    return srctreeid.is_set
	|| commitopertype.is_set
	|| timeout.is_set
	|| txnid.is_set;
}

bool System::MitOperItems::CommitMitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srctreeid.yfilter)
	|| ydk::is_set(commitopertype.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(txnid.yfilter);
}

std::string System::MitOperItems::CommitMitItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mitOper-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::CommitMitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commitMit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::CommitMitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srctreeid.is_set || is_set(srctreeid.yfilter)) leaf_name_data.push_back(srctreeid.get_name_leafdata());
    if (commitopertype.is_set || is_set(commitopertype.yfilter)) leaf_name_data.push_back(commitopertype.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (txnid.is_set || is_set(txnid.yfilter)) leaf_name_data.push_back(txnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::CommitMitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::CommitMitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MitOperItems::CommitMitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcTreeId")
    {
        srctreeid = value;
        srctreeid.value_namespace = name_space;
        srctreeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commitOperType")
    {
        commitopertype = value;
        commitopertype.value_namespace = name_space;
        commitopertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txnId")
    {
        txnid = value;
        txnid.value_namespace = name_space;
        txnid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MitOperItems::CommitMitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcTreeId")
    {
        srctreeid.yfilter = yfilter;
    }
    if(value_path == "commitOperType")
    {
        commitopertype.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "txnId")
    {
        txnid.yfilter = yfilter;
    }
}

bool System::MitOperItems::CommitMitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcTreeId" || name == "commitOperType" || name == "timeout" || name == "txnId")
        return true;
    return false;
}

System::MitOperItems::CopyMitItems::CopyMitItems()
    :
    srctreeid{YType::enumeration, "srcTreeId"},
    dsttreeid{YType::enumeration, "dstTreeId"}
{

    yang_name = "copyMit-items"; yang_parent_name = "mitOper-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::CopyMitItems::~CopyMitItems()
{
}

bool System::MitOperItems::CopyMitItems::has_data() const
{
    if (is_presence_container) return true;
    return srctreeid.is_set
	|| dsttreeid.is_set;
}

bool System::MitOperItems::CopyMitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srctreeid.yfilter)
	|| ydk::is_set(dsttreeid.yfilter);
}

std::string System::MitOperItems::CopyMitItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mitOper-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::CopyMitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copyMit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::CopyMitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srctreeid.is_set || is_set(srctreeid.yfilter)) leaf_name_data.push_back(srctreeid.get_name_leafdata());
    if (dsttreeid.is_set || is_set(dsttreeid.yfilter)) leaf_name_data.push_back(dsttreeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::CopyMitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::CopyMitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MitOperItems::CopyMitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcTreeId")
    {
        srctreeid = value;
        srctreeid.value_namespace = name_space;
        srctreeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstTreeId")
    {
        dsttreeid = value;
        dsttreeid.value_namespace = name_space;
        dsttreeid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MitOperItems::CopyMitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcTreeId")
    {
        srctreeid.yfilter = yfilter;
    }
    if(value_path == "dstTreeId")
    {
        dsttreeid.yfilter = yfilter;
    }
}

bool System::MitOperItems::CopyMitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcTreeId" || name == "dstTreeId")
        return true;
    return false;
}

System::MitOperItems::MitLockItems::MitLockItems()
    :
    mitlock_list(this, {"treeid"})
{

    yang_name = "mitLock-items"; yang_parent_name = "mitOper-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::MitLockItems::~MitLockItems()
{
}

bool System::MitOperItems::MitLockItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mitlock_list.len(); index++)
    {
        if(mitlock_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MitOperItems::MitLockItems::has_operation() const
{
    for (std::size_t index=0; index<mitlock_list.len(); index++)
    {
        if(mitlock_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MitOperItems::MitLockItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mitOper-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::MitLockItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mitLock-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::MitLockItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::MitLockItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MitLock-list")
    {
        auto c = std::make_shared<System::MitOperItems::MitLockItems::MitLockList>();
        c->parent = this;
        mitlock_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::MitLockItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mitlock_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MitOperItems::MitLockItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MitOperItems::MitLockItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MitOperItems::MitLockItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MitLock-list")
        return true;
    return false;
}

System::MitOperItems::MitLockItems::MitLockList::MitLockList()
    :
    treeid{YType::uint32, "treeId"},
    lockstatus{YType::enumeration, "lockStatus"},
    pid{YType::uint32, "pid"},
    isforceunlock{YType::boolean, "isForceUnlock"}
{

    yang_name = "MitLock-list"; yang_parent_name = "mitLock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::MitLockItems::MitLockList::~MitLockList()
{
}

bool System::MitOperItems::MitLockItems::MitLockList::has_data() const
{
    if (is_presence_container) return true;
    return treeid.is_set
	|| lockstatus.is_set
	|| pid.is_set
	|| isforceunlock.is_set;
}

bool System::MitOperItems::MitLockItems::MitLockList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treeid.yfilter)
	|| ydk::is_set(lockstatus.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(isforceunlock.yfilter);
}

std::string System::MitOperItems::MitLockItems::MitLockList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mitOper-items/mitLock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::MitLockItems::MitLockList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MitLock-list";
    ADD_KEY_TOKEN(treeid, "treeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::MitLockItems::MitLockList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treeid.is_set || is_set(treeid.yfilter)) leaf_name_data.push_back(treeid.get_name_leafdata());
    if (lockstatus.is_set || is_set(lockstatus.yfilter)) leaf_name_data.push_back(lockstatus.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (isforceunlock.is_set || is_set(isforceunlock.yfilter)) leaf_name_data.push_back(isforceunlock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::MitLockItems::MitLockList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::MitLockItems::MitLockList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MitOperItems::MitLockItems::MitLockList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treeId")
    {
        treeid = value;
        treeid.value_namespace = name_space;
        treeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockStatus")
    {
        lockstatus = value;
        lockstatus.value_namespace = name_space;
        lockstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isForceUnlock")
    {
        isforceunlock = value;
        isforceunlock.value_namespace = name_space;
        isforceunlock.value_namespace_prefix = name_space_prefix;
    }
}

void System::MitOperItems::MitLockItems::MitLockList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treeId")
    {
        treeid.yfilter = yfilter;
    }
    if(value_path == "lockStatus")
    {
        lockstatus.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "isForceUnlock")
    {
        isforceunlock.yfilter = yfilter;
    }
}

bool System::MitOperItems::MitLockItems::MitLockList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treeId" || name == "lockStatus" || name == "pid" || name == "isForceUnlock")
        return true;
    return false;
}

System::MitOperItems::SessionLockItems::SessionLockItems()
    :
    sessionlock_list(this, {"name"})
{

    yang_name = "sessionLock-items"; yang_parent_name = "mitOper-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::SessionLockItems::~SessionLockItems()
{
}

bool System::MitOperItems::SessionLockItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessionlock_list.len(); index++)
    {
        if(sessionlock_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MitOperItems::SessionLockItems::has_operation() const
{
    for (std::size_t index=0; index<sessionlock_list.len(); index++)
    {
        if(sessionlock_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MitOperItems::SessionLockItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mitOper-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::SessionLockItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessionLock-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::SessionLockItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::SessionLockItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessionLock-list")
    {
        auto c = std::make_shared<System::MitOperItems::SessionLockItems::SessionLockList>();
        c->parent = this;
        sessionlock_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::SessionLockItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sessionlock_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MitOperItems::SessionLockItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MitOperItems::SessionLockItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MitOperItems::SessionLockItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessionLock-list")
        return true;
    return false;
}

System::MitOperItems::SessionLockItems::SessionLockList::SessionLockList()
    :
    name{YType::str, "name"},
    treeid{YType::uint32, "treeId"},
    lockstatus{YType::enumeration, "lockStatus"},
    pid{YType::uint32, "pid"}
{

    yang_name = "SessionLock-list"; yang_parent_name = "sessionLock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MitOperItems::SessionLockItems::SessionLockList::~SessionLockList()
{
}

bool System::MitOperItems::SessionLockItems::SessionLockList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| treeid.is_set
	|| lockstatus.is_set
	|| pid.is_set;
}

bool System::MitOperItems::SessionLockItems::SessionLockList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(treeid.yfilter)
	|| ydk::is_set(lockstatus.yfilter)
	|| ydk::is_set(pid.yfilter);
}

std::string System::MitOperItems::SessionLockItems::SessionLockList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mitOper-items/sessionLock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MitOperItems::SessionLockItems::SessionLockList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessionLock-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MitOperItems::SessionLockItems::SessionLockList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (treeid.is_set || is_set(treeid.yfilter)) leaf_name_data.push_back(treeid.get_name_leafdata());
    if (lockstatus.is_set || is_set(lockstatus.yfilter)) leaf_name_data.push_back(lockstatus.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MitOperItems::SessionLockItems::SessionLockList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MitOperItems::SessionLockItems::SessionLockList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MitOperItems::SessionLockItems::SessionLockList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "treeId")
    {
        treeid = value;
        treeid.value_namespace = name_space;
        treeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockStatus")
    {
        lockstatus = value;
        lockstatus.value_namespace = name_space;
        lockstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MitOperItems::SessionLockItems::SessionLockList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "treeId")
    {
        treeid.yfilter = yfilter;
    }
    if(value_path == "lockStatus")
    {
        lockstatus.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
}

bool System::MitOperItems::SessionLockItems::SessionLockList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "treeId" || name == "lockStatus" || name == "pid")
        return true;
    return false;
}

System::SnmpItems::SnmpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::SnmpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "snmp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::~SnmpItems()
{
}

bool System::SnmpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::SnmpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::SnmpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SnmpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::SnmpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SnmpItems::InstItems::InstItems()
    :
    lastinitts{YType::str, "lastInitTs"},
    engid{YType::str, "engId"},
    defaultengid{YType::str, "defaultEngId"},
    hiddenengid{YType::str, "hiddenEngId"},
    eventset{YType::uint32, "eventSet"},
    defaulttrapsenablebit{YType::uint64, "defaultTrapsEnableBit"},
    defaulttrapsdisablebit{YType::uint64, "defaultTrapsDisablebit"},
    runconftrapsenablebit{YType::uint64, "runConfTrapsEnableBit"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    contact{YType::str, "contact"},
    loc{YType::str, "loc"}
        ,
    clgrp_items(std::make_shared<System::SnmpItems::InstItems::ClgrpItems>())
    , globals_items(std::make_shared<System::SnmpItems::InstItems::GlobalsItems>())
    , host_items(std::make_shared<System::SnmpItems::InstItems::HostItems>())
    , rmon_items(std::make_shared<System::SnmpItems::InstItems::RmonItems>())
    , community_items(std::make_shared<System::SnmpItems::InstItems::CommunityItems>())
    , user_items(std::make_shared<System::SnmpItems::InstItems::UserItems>())
    , ctx_items(std::make_shared<System::SnmpItems::InstItems::CtxItems>())
    , sysinfo_items(std::make_shared<System::SnmpItems::InstItems::SysinfoItems>())
    , traps_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems>())
    , rmtuser_items(std::make_shared<System::SnmpItems::InstItems::RmtUserItems>())
    , lcluser_items(std::make_shared<System::SnmpItems::InstItems::LclUserItems>())
{
    clgrp_items->parent = this;
    globals_items->parent = this;
    host_items->parent = this;
    rmon_items->parent = this;
    community_items->parent = this;
    user_items->parent = this;
    ctx_items->parent = this;
    sysinfo_items->parent = this;
    traps_items->parent = this;
    rmtuser_items->parent = this;
    lcluser_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "snmp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::~InstItems()
{
}

bool System::SnmpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return lastinitts.is_set
	|| engid.is_set
	|| defaultengid.is_set
	|| hiddenengid.is_set
	|| eventset.is_set
	|| defaulttrapsenablebit.is_set
	|| defaulttrapsdisablebit.is_set
	|| runconftrapsenablebit.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
	|| contact.is_set
	|| loc.is_set
	|| (clgrp_items !=  nullptr && clgrp_items->has_data())
	|| (globals_items !=  nullptr && globals_items->has_data())
	|| (host_items !=  nullptr && host_items->has_data())
	|| (rmon_items !=  nullptr && rmon_items->has_data())
	|| (community_items !=  nullptr && community_items->has_data())
	|| (user_items !=  nullptr && user_items->has_data())
	|| (ctx_items !=  nullptr && ctx_items->has_data())
	|| (sysinfo_items !=  nullptr && sysinfo_items->has_data())
	|| (traps_items !=  nullptr && traps_items->has_data())
	|| (rmtuser_items !=  nullptr && rmtuser_items->has_data())
	|| (lcluser_items !=  nullptr && lcluser_items->has_data());
}

bool System::SnmpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastinitts.yfilter)
	|| ydk::is_set(engid.yfilter)
	|| ydk::is_set(defaultengid.yfilter)
	|| ydk::is_set(hiddenengid.yfilter)
	|| ydk::is_set(eventset.yfilter)
	|| ydk::is_set(defaulttrapsenablebit.yfilter)
	|| ydk::is_set(defaulttrapsdisablebit.yfilter)
	|| ydk::is_set(runconftrapsenablebit.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(contact.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (clgrp_items !=  nullptr && clgrp_items->has_operation())
	|| (globals_items !=  nullptr && globals_items->has_operation())
	|| (host_items !=  nullptr && host_items->has_operation())
	|| (rmon_items !=  nullptr && rmon_items->has_operation())
	|| (community_items !=  nullptr && community_items->has_operation())
	|| (user_items !=  nullptr && user_items->has_operation())
	|| (ctx_items !=  nullptr && ctx_items->has_operation())
	|| (sysinfo_items !=  nullptr && sysinfo_items->has_operation())
	|| (traps_items !=  nullptr && traps_items->has_operation())
	|| (rmtuser_items !=  nullptr && rmtuser_items->has_operation())
	|| (lcluser_items !=  nullptr && lcluser_items->has_operation());
}

std::string System::SnmpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastinitts.is_set || is_set(lastinitts.yfilter)) leaf_name_data.push_back(lastinitts.get_name_leafdata());
    if (engid.is_set || is_set(engid.yfilter)) leaf_name_data.push_back(engid.get_name_leafdata());
    if (defaultengid.is_set || is_set(defaultengid.yfilter)) leaf_name_data.push_back(defaultengid.get_name_leafdata());
    if (hiddenengid.is_set || is_set(hiddenengid.yfilter)) leaf_name_data.push_back(hiddenengid.get_name_leafdata());
    if (eventset.is_set || is_set(eventset.yfilter)) leaf_name_data.push_back(eventset.get_name_leafdata());
    if (defaulttrapsenablebit.is_set || is_set(defaulttrapsenablebit.yfilter)) leaf_name_data.push_back(defaulttrapsenablebit.get_name_leafdata());
    if (defaulttrapsdisablebit.is_set || is_set(defaulttrapsdisablebit.yfilter)) leaf_name_data.push_back(defaulttrapsdisablebit.get_name_leafdata());
    if (runconftrapsenablebit.is_set || is_set(runconftrapsenablebit.yfilter)) leaf_name_data.push_back(runconftrapsenablebit.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (contact.is_set || is_set(contact.yfilter)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clgrp-items")
    {
        if(clgrp_items == nullptr)
        {
            clgrp_items = std::make_shared<System::SnmpItems::InstItems::ClgrpItems>();
        }
        return clgrp_items;
    }

    if(child_yang_name == "globals-items")
    {
        if(globals_items == nullptr)
        {
            globals_items = std::make_shared<System::SnmpItems::InstItems::GlobalsItems>();
        }
        return globals_items;
    }

    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::SnmpItems::InstItems::HostItems>();
        }
        return host_items;
    }

    if(child_yang_name == "rmon-items")
    {
        if(rmon_items == nullptr)
        {
            rmon_items = std::make_shared<System::SnmpItems::InstItems::RmonItems>();
        }
        return rmon_items;
    }

    if(child_yang_name == "community-items")
    {
        if(community_items == nullptr)
        {
            community_items = std::make_shared<System::SnmpItems::InstItems::CommunityItems>();
        }
        return community_items;
    }

    if(child_yang_name == "user-items")
    {
        if(user_items == nullptr)
        {
            user_items = std::make_shared<System::SnmpItems::InstItems::UserItems>();
        }
        return user_items;
    }

    if(child_yang_name == "ctx-items")
    {
        if(ctx_items == nullptr)
        {
            ctx_items = std::make_shared<System::SnmpItems::InstItems::CtxItems>();
        }
        return ctx_items;
    }

    if(child_yang_name == "sysinfo-items")
    {
        if(sysinfo_items == nullptr)
        {
            sysinfo_items = std::make_shared<System::SnmpItems::InstItems::SysinfoItems>();
        }
        return sysinfo_items;
    }

    if(child_yang_name == "traps-items")
    {
        if(traps_items == nullptr)
        {
            traps_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems>();
        }
        return traps_items;
    }

    if(child_yang_name == "rmtUser-items")
    {
        if(rmtuser_items == nullptr)
        {
            rmtuser_items = std::make_shared<System::SnmpItems::InstItems::RmtUserItems>();
        }
        return rmtuser_items;
    }

    if(child_yang_name == "lclUser-items")
    {
        if(lcluser_items == nullptr)
        {
            lcluser_items = std::make_shared<System::SnmpItems::InstItems::LclUserItems>();
        }
        return lcluser_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clgrp_items != nullptr)
    {
        children["clgrp-items"] = clgrp_items;
    }

    if(globals_items != nullptr)
    {
        children["globals-items"] = globals_items;
    }

    if(host_items != nullptr)
    {
        children["host-items"] = host_items;
    }

    if(rmon_items != nullptr)
    {
        children["rmon-items"] = rmon_items;
    }

    if(community_items != nullptr)
    {
        children["community-items"] = community_items;
    }

    if(user_items != nullptr)
    {
        children["user-items"] = user_items;
    }

    if(ctx_items != nullptr)
    {
        children["ctx-items"] = ctx_items;
    }

    if(sysinfo_items != nullptr)
    {
        children["sysinfo-items"] = sysinfo_items;
    }

    if(traps_items != nullptr)
    {
        children["traps-items"] = traps_items;
    }

    if(rmtuser_items != nullptr)
    {
        children["rmtUser-items"] = rmtuser_items;
    }

    if(lcluser_items != nullptr)
    {
        children["lclUser-items"] = lcluser_items;
    }

    return children;
}

void System::SnmpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastInitTs")
    {
        lastinitts = value;
        lastinitts.value_namespace = name_space;
        lastinitts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engId")
    {
        engid = value;
        engid.value_namespace = name_space;
        engid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultEngId")
    {
        defaultengid = value;
        defaultengid.value_namespace = name_space;
        defaultengid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hiddenEngId")
    {
        hiddenengid = value;
        hiddenengid.value_namespace = name_space;
        hiddenengid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventSet")
    {
        eventset = value;
        eventset.value_namespace = name_space;
        eventset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultTrapsEnableBit")
    {
        defaulttrapsenablebit = value;
        defaulttrapsenablebit.value_namespace = name_space;
        defaulttrapsenablebit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultTrapsDisablebit")
    {
        defaulttrapsdisablebit = value;
        defaulttrapsdisablebit.value_namespace = name_space;
        defaulttrapsdisablebit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runConfTrapsEnableBit")
    {
        runconftrapsenablebit = value;
        runconftrapsenablebit.value_namespace = name_space;
        runconftrapsenablebit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact")
    {
        contact = value;
        contact.value_namespace = name_space;
        contact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastInitTs")
    {
        lastinitts.yfilter = yfilter;
    }
    if(value_path == "engId")
    {
        engid.yfilter = yfilter;
    }
    if(value_path == "defaultEngId")
    {
        defaultengid.yfilter = yfilter;
    }
    if(value_path == "hiddenEngId")
    {
        hiddenengid.yfilter = yfilter;
    }
    if(value_path == "eventSet")
    {
        eventset.yfilter = yfilter;
    }
    if(value_path == "defaultTrapsEnableBit")
    {
        defaulttrapsenablebit.yfilter = yfilter;
    }
    if(value_path == "defaultTrapsDisablebit")
    {
        defaulttrapsdisablebit.yfilter = yfilter;
    }
    if(value_path == "runConfTrapsEnableBit")
    {
        runconftrapsenablebit.yfilter = yfilter;
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "contact")
    {
        contact.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clgrp-items" || name == "globals-items" || name == "host-items" || name == "rmon-items" || name == "community-items" || name == "user-items" || name == "ctx-items" || name == "sysinfo-items" || name == "traps-items" || name == "rmtUser-items" || name == "lclUser-items" || name == "lastInitTs" || name == "engId" || name == "defaultEngId" || name == "hiddenEngId" || name == "eventSet" || name == "defaultTrapsEnableBit" || name == "defaultTrapsDisablebit" || name == "runConfTrapsEnableBit" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt" || name == "contact" || name == "loc")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClgrpItems()
    :
    clientgrp_list(this, {"name"})
{

    yang_name = "clgrp-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::ClgrpItems::~ClgrpItems()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientgrp_list.len(); index++)
    {
        if(clientgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::ClgrpItems::has_operation() const
{
    for (std::size_t index=0; index<clientgrp_list.len(); index++)
    {
        if(clientgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::ClgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::ClgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientGrp-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList>();
        c->parent = this;
        clientgrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::ClgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clientgrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::ClgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::ClgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::ClgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientGrp-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientGrpList()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    descr{YType::str, "descr"},
    epgdn{YType::str, "epgDn"}
        ,
    client_items(std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems>())
    , rscommsecpclientgrpatt_items(std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems>())
{
    client_items->parent = this;
    rscommsecpclientgrpatt_items->parent = this;

    yang_name = "ClientGrp-list"; yang_parent_name = "clgrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::~ClientGrpList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| descr.is_set
	|| epgdn.is_set
	|| (client_items !=  nullptr && client_items->has_data())
	|| (rscommsecpclientgrpatt_items !=  nullptr && rscommsecpclientgrpatt_items->has_data());
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (rscommsecpclientgrpatt_items !=  nullptr && rscommsecpclientgrpatt_items->has_operation());
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/clgrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientGrp-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "rscommSecPClientGrpAtt-items")
    {
        if(rscommsecpclientgrpatt_items == nullptr)
        {
            rscommsecpclientgrpatt_items = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems>();
        }
        return rscommsecpclientgrpatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client_items != nullptr)
    {
        children["client-items"] = client_items;
    }

    if(rscommsecpclientgrpatt_items != nullptr)
    {
        children["rscommSecPClientGrpAtt-items"] = rscommsecpclientgrpatt_items;
    }

    return children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-items" || name == "rscommSecPClientGrpAtt-items" || name == "name" || name == "vrf" || name == "operSt" || name == "operStQual" || name == "descr" || name == "epgDn")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientItems()
    :
    client_list(this, {"addr"})
{

    yang_name = "client-items"; yang_parent_name = "ClientGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::~ClientItems()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_list.len(); index++)
    {
        if(client_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<client_list.len(); index++)
    {
        if(client_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Client-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList>();
        c->parent = this;
        client_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Client-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::ClientList()
    :
    addr{YType::str, "addr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    name{YType::str, "name"}
{

    yang_name = "Client-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::~ClientList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Client-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
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
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
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
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "operSt" || name == "operStQual" || name == "name")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RscommSecPClientGrpAttItems()
    :
    rscommsecpclientgrpatt_list(this, {"tdn"})
{

    yang_name = "rscommSecPClientGrpAtt-items"; yang_parent_name = "ClientGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::~RscommSecPClientGrpAttItems()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscommsecpclientgrpatt_list.len(); index++)
    {
        if(rscommsecpclientgrpatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscommsecpclientgrpatt_list.len(); index++)
    {
        if(rscommsecpclientgrpatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscommSecPClientGrpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCommSecPClientGrpAtt-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList>();
        c->parent = this;
        rscommsecpclientgrpatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rscommsecpclientgrpatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCommSecPClientGrpAtt-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::RsCommSecPClientGrpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsCommSecPClientGrpAtt-list"; yang_parent_name = "rscommSecPClientGrpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::~RsCommSecPClientGrpAttList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCommSecPClientGrpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::GlobalsItems()
    :
    aaausercachetimeout{YType::uint32, "aaaUserCacheTimeout"},
    protocolenable{YType::enumeration, "protocolEnable"},
    countercacheenable{YType::enumeration, "counterCacheEnable"},
    countercachetimeout{YType::uint16, "counterCacheTimeout"},
    pktsize{YType::uint16, "pktSize"},
    tcpsessionauth{YType::enumeration, "tcpSessionAuth"}
        ,
    srcinterfacetraps_items(std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems>())
    , srcinterfaceinforms_items(std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems>())
{
    srcinterfacetraps_items->parent = this;
    srcinterfaceinforms_items->parent = this;

    yang_name = "globals-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::GlobalsItems::~GlobalsItems()
{
}

bool System::SnmpItems::InstItems::GlobalsItems::has_data() const
{
    if (is_presence_container) return true;
    return aaausercachetimeout.is_set
	|| protocolenable.is_set
	|| countercacheenable.is_set
	|| countercachetimeout.is_set
	|| pktsize.is_set
	|| tcpsessionauth.is_set
	|| (srcinterfacetraps_items !=  nullptr && srcinterfacetraps_items->has_data())
	|| (srcinterfaceinforms_items !=  nullptr && srcinterfaceinforms_items->has_data());
}

bool System::SnmpItems::InstItems::GlobalsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaausercachetimeout.yfilter)
	|| ydk::is_set(protocolenable.yfilter)
	|| ydk::is_set(countercacheenable.yfilter)
	|| ydk::is_set(countercachetimeout.yfilter)
	|| ydk::is_set(pktsize.yfilter)
	|| ydk::is_set(tcpsessionauth.yfilter)
	|| (srcinterfacetraps_items !=  nullptr && srcinterfacetraps_items->has_operation())
	|| (srcinterfaceinforms_items !=  nullptr && srcinterfaceinforms_items->has_operation());
}

std::string System::SnmpItems::InstItems::GlobalsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::GlobalsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globals-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::GlobalsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaausercachetimeout.is_set || is_set(aaausercachetimeout.yfilter)) leaf_name_data.push_back(aaausercachetimeout.get_name_leafdata());
    if (protocolenable.is_set || is_set(protocolenable.yfilter)) leaf_name_data.push_back(protocolenable.get_name_leafdata());
    if (countercacheenable.is_set || is_set(countercacheenable.yfilter)) leaf_name_data.push_back(countercacheenable.get_name_leafdata());
    if (countercachetimeout.is_set || is_set(countercachetimeout.yfilter)) leaf_name_data.push_back(countercachetimeout.get_name_leafdata());
    if (pktsize.is_set || is_set(pktsize.yfilter)) leaf_name_data.push_back(pktsize.get_name_leafdata());
    if (tcpsessionauth.is_set || is_set(tcpsessionauth.yfilter)) leaf_name_data.push_back(tcpsessionauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::GlobalsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srcInterfaceTraps-items")
    {
        if(srcinterfacetraps_items == nullptr)
        {
            srcinterfacetraps_items = std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems>();
        }
        return srcinterfacetraps_items;
    }

    if(child_yang_name == "srcInterfaceInforms-items")
    {
        if(srcinterfaceinforms_items == nullptr)
        {
            srcinterfaceinforms_items = std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems>();
        }
        return srcinterfaceinforms_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::GlobalsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srcinterfacetraps_items != nullptr)
    {
        children["srcInterfaceTraps-items"] = srcinterfacetraps_items;
    }

    if(srcinterfaceinforms_items != nullptr)
    {
        children["srcInterfaceInforms-items"] = srcinterfaceinforms_items;
    }

    return children;
}

void System::SnmpItems::InstItems::GlobalsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaaUserCacheTimeout")
    {
        aaausercachetimeout = value;
        aaausercachetimeout.value_namespace = name_space;
        aaausercachetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolEnable")
    {
        protocolenable = value;
        protocolenable.value_namespace = name_space;
        protocolenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counterCacheEnable")
    {
        countercacheenable = value;
        countercacheenable.value_namespace = name_space;
        countercacheenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counterCacheTimeout")
    {
        countercachetimeout = value;
        countercachetimeout.value_namespace = name_space;
        countercachetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSize")
    {
        pktsize = value;
        pktsize.value_namespace = name_space;
        pktsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpSessionAuth")
    {
        tcpsessionauth = value;
        tcpsessionauth.value_namespace = name_space;
        tcpsessionauth.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::GlobalsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaaUserCacheTimeout")
    {
        aaausercachetimeout.yfilter = yfilter;
    }
    if(value_path == "protocolEnable")
    {
        protocolenable.yfilter = yfilter;
    }
    if(value_path == "counterCacheEnable")
    {
        countercacheenable.yfilter = yfilter;
    }
    if(value_path == "counterCacheTimeout")
    {
        countercachetimeout.yfilter = yfilter;
    }
    if(value_path == "pktSize")
    {
        pktsize.yfilter = yfilter;
    }
    if(value_path == "tcpSessionAuth")
    {
        tcpsessionauth.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::GlobalsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcInterfaceTraps-items" || name == "srcInterfaceInforms-items" || name == "aaaUserCacheTimeout" || name == "protocolEnable" || name == "counterCacheEnable" || name == "counterCacheTimeout" || name == "pktSize" || name == "tcpSessionAuth")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::SrcInterfaceTrapsItems()
    :
    ifname{YType::str, "ifname"}
{

    yang_name = "srcInterfaceTraps-items"; yang_parent_name = "globals-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::~SrcInterfaceTrapsItems()
{
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set;
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter);
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/globals-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcInterfaceTraps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::SrcInterfaceInformsItems()
    :
    ifname{YType::str, "ifname"}
{

    yang_name = "srcInterfaceInforms-items"; yang_parent_name = "globals-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::~SrcInterfaceInformsItems()
{
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set;
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter);
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/globals-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcInterfaceInforms-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostItems()
    :
    host_list(this, {"hostname", "udpportid"})
{

    yang_name = "host-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::HostItems::~HostItems()
{
}

bool System::SnmpItems::InstItems::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::HostItems::has_operation() const
{
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Host-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList>();
        c->parent = this;
        host_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : host_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Host-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::HostList()
    :
    hostname{YType::str, "hostName"},
    udpportid{YType::uint32, "udpPortID"},
    ipaddr{YType::str, "ipAddr"},
    commname{YType::str, "commName"},
    notiftype{YType::enumeration, "notifType"},
    version{YType::enumeration, "version"},
    seclevel{YType::enumeration, "secLevel"},
    isduplicate{YType::boolean, "isDuplicate"},
    duplicatehostname{YType::str, "duplicateHostName"},
    configstate{YType::enumeration, "configState"}
        ,
    usevrf_items(std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems>())
{
    usevrf_items->parent = this;

    yang_name = "Host-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::HostItems::HostList::~HostList()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| udpportid.is_set
	|| ipaddr.is_set
	|| commname.is_set
	|| notiftype.is_set
	|| version.is_set
	|| seclevel.is_set
	|| isduplicate.is_set
	|| duplicatehostname.is_set
	|| configstate.is_set
	|| (usevrf_items !=  nullptr && usevrf_items->has_data());
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(udpportid.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(commname.yfilter)
	|| ydk::is_set(notiftype.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(seclevel.yfilter)
	|| ydk::is_set(isduplicate.yfilter)
	|| ydk::is_set(duplicatehostname.yfilter)
	|| ydk::is_set(configstate.yfilter)
	|| (usevrf_items !=  nullptr && usevrf_items->has_operation());
}

std::string System::SnmpItems::InstItems::HostItems::HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/host-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::HostItems::HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Host-list";
    ADD_KEY_TOKEN(hostname, "hostName");
    ADD_KEY_TOKEN(udpportid, "udpPortID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (udpportid.is_set || is_set(udpportid.yfilter)) leaf_name_data.push_back(udpportid.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (commname.is_set || is_set(commname.yfilter)) leaf_name_data.push_back(commname.get_name_leafdata());
    if (notiftype.is_set || is_set(notiftype.yfilter)) leaf_name_data.push_back(notiftype.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (seclevel.is_set || is_set(seclevel.yfilter)) leaf_name_data.push_back(seclevel.get_name_leafdata());
    if (isduplicate.is_set || is_set(isduplicate.yfilter)) leaf_name_data.push_back(isduplicate.get_name_leafdata());
    if (duplicatehostname.is_set || is_set(duplicatehostname.yfilter)) leaf_name_data.push_back(duplicatehostname.get_name_leafdata());
    if (configstate.is_set || is_set(configstate.yfilter)) leaf_name_data.push_back(configstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::HostItems::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usevrf-items")
    {
        if(usevrf_items == nullptr)
        {
            usevrf_items = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems>();
        }
        return usevrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::HostItems::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(usevrf_items != nullptr)
    {
        children["usevrf-items"] = usevrf_items;
    }

    return children;
}

void System::SnmpItems::InstItems::HostItems::HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostName")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpPortID")
    {
        udpportid = value;
        udpportid.value_namespace = name_space;
        udpportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commName")
    {
        commname = value;
        commname.value_namespace = name_space;
        commname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifType")
    {
        notiftype = value;
        notiftype.value_namespace = name_space;
        notiftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLevel")
    {
        seclevel = value;
        seclevel.value_namespace = name_space;
        seclevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isDuplicate")
    {
        isduplicate = value;
        isduplicate.value_namespace = name_space;
        isduplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicateHostName")
    {
        duplicatehostname = value;
        duplicatehostname.value_namespace = name_space;
        duplicatehostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configState")
    {
        configstate = value;
        configstate.value_namespace = name_space;
        configstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::HostItems::HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostName")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "udpPortID")
    {
        udpportid.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "commName")
    {
        commname.yfilter = yfilter;
    }
    if(value_path == "notifType")
    {
        notiftype.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "secLevel")
    {
        seclevel.yfilter = yfilter;
    }
    if(value_path == "isDuplicate")
    {
        isduplicate.yfilter = yfilter;
    }
    if(value_path == "duplicateHostName")
    {
        duplicatehostname.yfilter = yfilter;
    }
    if(value_path == "configState")
    {
        configstate.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usevrf-items" || name == "hostName" || name == "udpPortID" || name == "ipAddr" || name == "commName" || name == "notifType" || name == "version" || name == "secLevel" || name == "isDuplicate" || name == "duplicateHostName" || name == "configState")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UsevrfItems()
    :
    usevrf_list(this, {"vrfname"})
{

    yang_name = "usevrf-items"; yang_parent_name = "Host-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::~UsevrfItems()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usevrf_list.len(); index++)
    {
        if(usevrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::has_operation() const
{
    for (std::size_t index=0; index<usevrf_list.len(); index++)
    {
        if(usevrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usevrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UseVrf-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList>();
        c->parent = this;
        usevrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usevrf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UseVrf-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::UseVrfList()
    :
    vrfname{YType::str, "vrfname"}
{

    yang_name = "UseVrf-list"; yang_parent_name = "usevrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::~UseVrfList()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set;
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UseVrf-list";
    ADD_KEY_TOKEN(vrfname, "vrfname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfname")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfname")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfname")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::RmonItems()
    :
    deleteevents{YType::boolean, "deleteEvents"},
    deletealarms{YType::boolean, "deleteAlarms"}
        ,
    event_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems>())
    , alarm_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems>())
{
    event_items->parent = this;
    alarm_items->parent = this;

    yang_name = "rmon-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::~RmonItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::has_data() const
{
    if (is_presence_container) return true;
    return deleteevents.is_set
	|| deletealarms.is_set
	|| (event_items !=  nullptr && event_items->has_data())
	|| (alarm_items !=  nullptr && alarm_items->has_data());
}

bool System::SnmpItems::InstItems::RmonItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deleteevents.yfilter)
	|| ydk::is_set(deletealarms.yfilter)
	|| (event_items !=  nullptr && event_items->has_operation())
	|| (alarm_items !=  nullptr && alarm_items->has_operation());
}

std::string System::SnmpItems::InstItems::RmonItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deleteevents.is_set || is_set(deleteevents.yfilter)) leaf_name_data.push_back(deleteevents.get_name_leafdata());
    if (deletealarms.is_set || is_set(deletealarms.yfilter)) leaf_name_data.push_back(deletealarms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmonItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-items")
    {
        if(event_items == nullptr)
        {
            event_items = std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems>();
        }
        return event_items;
    }

    if(child_yang_name == "alarm-items")
    {
        if(alarm_items == nullptr)
        {
            alarm_items = std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems>();
        }
        return alarm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmonItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event_items != nullptr)
    {
        children["event-items"] = event_items;
    }

    if(alarm_items != nullptr)
    {
        children["alarm-items"] = alarm_items;
    }

    return children;
}

void System::SnmpItems::InstItems::RmonItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deleteEvents")
    {
        deleteevents = value;
        deleteevents.value_namespace = name_space;
        deleteevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleteAlarms")
    {
        deletealarms = value;
        deletealarms.value_namespace = name_space;
        deletealarms.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmonItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deleteEvents")
    {
        deleteevents.yfilter = yfilter;
    }
    if(value_path == "deleteAlarms")
    {
        deletealarms.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmonItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-items" || name == "alarm-items" || name == "deleteEvents" || name == "deleteAlarms")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::EventItems::EventItems()
    :
    event_list(this, {"num"})
{

    yang_name = "event-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::EventItems::~EventItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_list.len(); index++)
    {
        if(event_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::has_operation() const
{
    for (std::size_t index=0; index<event_list.len(); index++)
    {
        if(event_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::EventItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmonItems::EventItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Event-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems::EventList>();
        c->parent = this;
        event_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmonItems::EventItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : event_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::RmonItems::EventItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::EventItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Event-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::EventItems::EventList::EventList()
    :
    num{YType::uint16, "num"},
    log{YType::enumeration, "log"},
    owner{YType::str, "owner"},
    description{YType::str, "description"},
    trap{YType::str, "trap"}
{

    yang_name = "Event-list"; yang_parent_name = "event-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::EventItems::EventList::~EventList()
{
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::EventList::has_data() const
{
    if (is_presence_container) return true;
    return num.is_set
	|| log.is_set
	|| owner.is_set
	|| description.is_set
	|| trap.is_set;
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::EventList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/event-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Event-list";
    ADD_KEY_TOKEN(num, "num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::RmonItems::EventItems::EventList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmonItems::EventItems::EventList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::EventList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "log" || name == "owner" || name == "description" || name == "trap")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmItems()
    :
    alarm_list(this, {"num"})
{

    yang_name = "alarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::~AlarmItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_list.len(); index++)
    {
        if(alarm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::has_operation() const
{
    for (std::size_t index=0; index<alarm_list.len(); index++)
    {
        if(alarm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::AlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmonItems::AlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Alarm-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList>();
        c->parent = this;
        alarm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmonItems::AlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Alarm-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::AlarmList()
    :
    num{YType::uint16, "num"},
    oid{YType::str, "oid"},
    sampleinterval{YType::uint32, "sampleInterval"},
    sampletype{YType::enumeration, "sampleType"},
    risingthr{YType::int32, "risingThr"},
    risingevntindx{YType::uint16, "risingEvntIndx"},
    fallingthr{YType::int32, "fallingThr"},
    fallingevntindx{YType::uint16, "fallingEvntIndx"},
    owner{YType::str, "owner"},
    alarmconfigerror{YType::enumeration, "alarmConfigError"}
{

    yang_name = "Alarm-list"; yang_parent_name = "alarm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::~AlarmList()
{
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_data() const
{
    if (is_presence_container) return true;
    return num.is_set
	|| oid.is_set
	|| sampleinterval.is_set
	|| sampletype.is_set
	|| risingthr.is_set
	|| risingevntindx.is_set
	|| fallingthr.is_set
	|| fallingevntindx.is_set
	|| owner.is_set
	|| alarmconfigerror.is_set;
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num.yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(sampleinterval.yfilter)
	|| ydk::is_set(sampletype.yfilter)
	|| ydk::is_set(risingthr.yfilter)
	|| ydk::is_set(risingevntindx.yfilter)
	|| ydk::is_set(fallingthr.yfilter)
	|| ydk::is_set(fallingevntindx.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(alarmconfigerror.yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/alarm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Alarm-list";
    ADD_KEY_TOKEN(num, "num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());
    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (sampleinterval.is_set || is_set(sampleinterval.yfilter)) leaf_name_data.push_back(sampleinterval.get_name_leafdata());
    if (sampletype.is_set || is_set(sampletype.yfilter)) leaf_name_data.push_back(sampletype.get_name_leafdata());
    if (risingthr.is_set || is_set(risingthr.yfilter)) leaf_name_data.push_back(risingthr.get_name_leafdata());
    if (risingevntindx.is_set || is_set(risingevntindx.yfilter)) leaf_name_data.push_back(risingevntindx.get_name_leafdata());
    if (fallingthr.is_set || is_set(fallingthr.yfilter)) leaf_name_data.push_back(fallingthr.get_name_leafdata());
    if (fallingevntindx.is_set || is_set(fallingevntindx.yfilter)) leaf_name_data.push_back(fallingevntindx.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (alarmconfigerror.is_set || is_set(alarmconfigerror.yfilter)) leaf_name_data.push_back(alarmconfigerror.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampleInterval")
    {
        sampleinterval = value;
        sampleinterval.value_namespace = name_space;
        sampleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampleType")
    {
        sampletype = value;
        sampletype.value_namespace = name_space;
        sampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "risingThr")
    {
        risingthr = value;
        risingthr.value_namespace = name_space;
        risingthr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "risingEvntIndx")
    {
        risingevntindx = value;
        risingevntindx.value_namespace = name_space;
        risingevntindx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallingThr")
    {
        fallingthr = value;
        fallingthr.value_namespace = name_space;
        fallingthr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallingEvntIndx")
    {
        fallingevntindx = value;
        fallingevntindx.value_namespace = name_space;
        fallingevntindx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarmConfigError")
    {
        alarmconfigerror = value;
        alarmconfigerror.value_namespace = name_space;
        alarmconfigerror.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "sampleInterval")
    {
        sampleinterval.yfilter = yfilter;
    }
    if(value_path == "sampleType")
    {
        sampletype.yfilter = yfilter;
    }
    if(value_path == "risingThr")
    {
        risingthr.yfilter = yfilter;
    }
    if(value_path == "risingEvntIndx")
    {
        risingevntindx.yfilter = yfilter;
    }
    if(value_path == "fallingThr")
    {
        fallingthr.yfilter = yfilter;
    }
    if(value_path == "fallingEvntIndx")
    {
        fallingevntindx.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "alarmConfigError")
    {
        alarmconfigerror.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "oid" || name == "sampleInterval" || name == "sampleType" || name == "risingThr" || name == "risingEvntIndx" || name == "fallingThr" || name == "fallingEvntIndx" || name == "owner" || name == "alarmConfigError")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommunityItems()
    :
    commsecp_list(this, {"name"})
{

    yang_name = "community-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CommunityItems::~CommunityItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<commsecp_list.len(); index++)
    {
        if(commsecp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::CommunityItems::has_operation() const
{
    for (std::size_t index=0; index<commsecp_list.len(); index++)
    {
        if(commsecp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CommunityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::CommunityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CommSecP-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList>();
        c->parent = this;
        commsecp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::CommunityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : commsecp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::CommunityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::CommunityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::CommunityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CommSecP-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::CommSecPList()
    :
    name{YType::str, "name"},
    grpname{YType::str, "grpName"},
    commacess{YType::enumeration, "commAcess"},
    memalert{YType::enumeration, "memAlert"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    descr{YType::str, "descr"}
        ,
    acl_items(std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems>())
    , rscommtoctxatt_items(std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems>())
{
    acl_items->parent = this;
    rscommtoctxatt_items->parent = this;

    yang_name = "CommSecP-list"; yang_parent_name = "community-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::~CommSecPList()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| grpname.is_set
	|| commacess.is_set
	|| memalert.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| descr.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (rscommtoctxatt_items !=  nullptr && rscommtoctxatt_items->has_data());
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(grpname.yfilter)
	|| ydk::is_set(commacess.yfilter)
	|| ydk::is_set(memalert.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (rscommtoctxatt_items !=  nullptr && rscommtoctxatt_items->has_operation());
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/community-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CommSecP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (grpname.is_set || is_set(grpname.yfilter)) leaf_name_data.push_back(grpname.get_name_leafdata());
    if (commacess.is_set || is_set(commacess.yfilter)) leaf_name_data.push_back(commacess.get_name_leafdata());
    if (memalert.is_set || is_set(memalert.yfilter)) leaf_name_data.push_back(memalert.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "rscommToCtxAtt-items")
    {
        if(rscommtoctxatt_items == nullptr)
        {
            rscommtoctxatt_items = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems>();
        }
        return rscommtoctxatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(rscommtoctxatt_items != nullptr)
    {
        children["rscommToCtxAtt-items"] = rscommtoctxatt_items;
    }

    return children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpName")
    {
        grpname = value;
        grpname.value_namespace = name_space;
        grpname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commAcess")
    {
        commacess = value;
        commacess.value_namespace = name_space;
        commacess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memAlert")
    {
        memalert = value;
        memalert.value_namespace = name_space;
        memalert.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "grpName")
    {
        grpname.yfilter = yfilter;
    }
    if(value_path == "commAcess")
    {
        commacess.yfilter = yfilter;
    }
    if(value_path == "memAlert")
    {
        memalert.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "rscommToCtxAtt-items" || name == "name" || name == "grpName" || name == "commAcess" || name == "memAlert" || name == "operSt" || name == "operStQual" || name == "descr")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::AclItems()
    :
    useaclname{YType::str, "useAclName"},
    useipv4aclname{YType::str, "useIpv4AclName"},
    useipv6aclname{YType::str, "useIpv6AclName"},
    configstatus{YType::enumeration, "configStatus"}
{

    yang_name = "acl-items"; yang_parent_name = "CommSecP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::~AclItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    return useaclname.is_set
	|| useipv4aclname.is_set
	|| useipv6aclname.is_set
	|| configstatus.is_set;
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(useaclname.yfilter)
	|| ydk::is_set(useipv4aclname.yfilter)
	|| ydk::is_set(useipv6aclname.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (useaclname.is_set || is_set(useaclname.yfilter)) leaf_name_data.push_back(useaclname.get_name_leafdata());
    if (useipv4aclname.is_set || is_set(useipv4aclname.yfilter)) leaf_name_data.push_back(useipv4aclname.get_name_leafdata());
    if (useipv6aclname.is_set || is_set(useipv6aclname.yfilter)) leaf_name_data.push_back(useipv6aclname.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "useAclName")
    {
        useaclname = value;
        useaclname.value_namespace = name_space;
        useaclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useIpv4AclName")
    {
        useipv4aclname = value;
        useipv4aclname.value_namespace = name_space;
        useipv4aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useIpv6AclName")
    {
        useipv6aclname = value;
        useipv6aclname.value_namespace = name_space;
        useipv6aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "useAclName")
    {
        useaclname.yfilter = yfilter;
    }
    if(value_path == "useIpv4AclName")
    {
        useipv4aclname.yfilter = yfilter;
    }
    if(value_path == "useIpv6AclName")
    {
        useipv6aclname.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "useAclName" || name == "useIpv4AclName" || name == "useIpv6AclName" || name == "configStatus")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::RscommToCtxAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"}
{

    yang_name = "rscommToCtxAtt-items"; yang_parent_name = "CommSecP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::~RscommToCtxAttItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscommToCtxAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
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

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::SnmpItems::InstItems::UserItems::UserItems()
    :
    usersecp_list(this, {"name"})
{

    yang_name = "user-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::UserItems::~UserItems()
{
}

bool System::SnmpItems::InstItems::UserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usersecp_list.len(); index++)
    {
        if(usersecp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::UserItems::has_operation() const
{
    for (std::size_t index=0; index<usersecp_list.len(); index++)
    {
        if(usersecp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::UserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::UserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::UserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::UserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserSecP-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::UserItems::UserSecPList>();
        c->parent = this;
        usersecp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::UserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usersecp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::UserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::UserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::UserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserSecP-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::UserItems::UserSecPList::UserSecPList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    descr{YType::str, "descr"},
    authtype{YType::enumeration, "authType"},
    authkey{YType::str, "authKey"},
    privtype{YType::enumeration, "privType"},
    privkey{YType::str, "privKey"}
{

    yang_name = "UserSecP-list"; yang_parent_name = "user-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::UserItems::UserSecPList::~UserSecPList()
{
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| descr.is_set
	|| authtype.is_set
	|| authkey.is_set
	|| privtype.is_set
	|| privkey.is_set;
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(privkey.yfilter);
}

std::string System::SnmpItems::InstItems::UserItems::UserSecPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/user-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::UserItems::UserSecPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserSecP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::UserItems::UserSecPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (privkey.is_set || is_set(privkey.yfilter)) leaf_name_data.push_back(privkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::UserItems::UserSecPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::UserItems::UserSecPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::UserItems::UserSecPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privKey")
    {
        privkey = value;
        privkey.value_namespace = name_space;
        privkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::UserItems::UserSecPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "privKey")
    {
        privkey.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "operSt" || name == "operStQual" || name == "descr" || name == "authType" || name == "authKey" || name == "privType" || name == "privKey")
        return true;
    return false;
}

System::SnmpItems::InstItems::CtxItems::CtxItems()
    :
    ctx_list(this, {"name"})
{

    yang_name = "ctx-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CtxItems::~CtxItems()
{
}

bool System::SnmpItems::InstItems::CtxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::CtxItems::has_operation() const
{
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::CtxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CtxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CtxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::CtxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ctx-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::CtxItems::CtxList>();
        c->parent = this;
        ctx_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::CtxItems::get_children() const
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

void System::SnmpItems::InstItems::CtxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::CtxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::CtxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ctx-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::CtxItems::CtxList::CtxList()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    descr{YType::str, "descr"}
{

    yang_name = "Ctx-list"; yang_parent_name = "ctx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CtxItems::CtxList::~CtxList()
{
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| descr.is_set;
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SnmpItems::InstItems::CtxItems::CtxList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/ctx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CtxItems::CtxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ctx-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CtxItems::CtxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::CtxItems::CtxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::CtxItems::CtxList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::CtxItems::CtxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CtxItems::CtxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf" || name == "operSt" || name == "operStQual" || name == "descr")
        return true;
    return false;
}

System::SnmpItems::InstItems::SysinfoItems::SysinfoItems()
    :
    syslocation{YType::str, "sysLocation"},
    syscontact{YType::str, "sysContact"},
    sysdescription{YType::str, "sysDescription"}
{

    yang_name = "sysinfo-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::SysinfoItems::~SysinfoItems()
{
}

bool System::SnmpItems::InstItems::SysinfoItems::has_data() const
{
    if (is_presence_container) return true;
    return syslocation.is_set
	|| syscontact.is_set
	|| sysdescription.is_set;
}

bool System::SnmpItems::InstItems::SysinfoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(syslocation.yfilter)
	|| ydk::is_set(syscontact.yfilter)
	|| ydk::is_set(sysdescription.yfilter);
}

std::string System::SnmpItems::InstItems::SysinfoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::SysinfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysinfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::SysinfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslocation.is_set || is_set(syslocation.yfilter)) leaf_name_data.push_back(syslocation.get_name_leafdata());
    if (syscontact.is_set || is_set(syscontact.yfilter)) leaf_name_data.push_back(syscontact.get_name_leafdata());
    if (sysdescription.is_set || is_set(sysdescription.yfilter)) leaf_name_data.push_back(sysdescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::SysinfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::SysinfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::SysinfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysLocation")
    {
        syslocation = value;
        syslocation.value_namespace = name_space;
        syslocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysContact")
    {
        syscontact = value;
        syscontact.value_namespace = name_space;
        syscontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDescription")
    {
        sysdescription = value;
        sysdescription.value_namespace = name_space;
        sysdescription.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::SysinfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysLocation")
    {
        syslocation.yfilter = yfilter;
    }
    if(value_path == "sysContact")
    {
        syscontact.yfilter = yfilter;
    }
    if(value_path == "sysDescription")
    {
        sysdescription.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::SysinfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysLocation" || name == "sysContact" || name == "sysDescription")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::TrapsItems()
    :
    enablealltriggercount{YType::uint16, "enableAllTriggerCount"},
    enableallviacli{YType::boolean, "enableAllViaCLI"}
        ,
    stormcontrol_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems>())
    , aaa_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems>())
    , bfd_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems>())
    , bridge_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems>())
    , callhome_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems>())
    , cfs_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems>())
    , config_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems>())
    , entity_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems>())
    , featurecontrol_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems>())
    , hsrp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems>())
    , generic_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems>())
    , ip_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems>())
    , license_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems>())
    , poe_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems>())
    , link_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems>())
    , lldp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems>())
    , msdp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems>())
    , mmode_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems>())
    , pim_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems>())
    , rf_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems>())
    , rmon_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems>())
    , snmp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_>())
    , stpx_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems>())
    , sysmgr_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems>())
    , system_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems>())
    , upgrade_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems>())
    , vsan_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems>())
    , vtp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems>())
    , portsecurity_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems>())
{
    stormcontrol_items->parent = this;
    aaa_items->parent = this;
    bfd_items->parent = this;
    bridge_items->parent = this;
    callhome_items->parent = this;
    cfs_items->parent = this;
    config_items->parent = this;
    entity_items->parent = this;
    featurecontrol_items->parent = this;
    hsrp_items->parent = this;
    generic_items->parent = this;
    ip_items->parent = this;
    license_items->parent = this;
    poe_items->parent = this;
    link_items->parent = this;
    lldp_items->parent = this;
    msdp_items->parent = this;
    mmode_items->parent = this;
    pim_items->parent = this;
    rf_items->parent = this;
    rmon_items->parent = this;
    snmp_items->parent = this;
    stpx_items->parent = this;
    sysmgr_items->parent = this;
    system_items->parent = this;
    upgrade_items->parent = this;
    vsan_items->parent = this;
    vtp_items->parent = this;
    portsecurity_items->parent = this;

    yang_name = "traps-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::~TrapsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::has_data() const
{
    if (is_presence_container) return true;
    return enablealltriggercount.is_set
	|| enableallviacli.is_set
	|| (stormcontrol_items !=  nullptr && stormcontrol_items->has_data())
	|| (aaa_items !=  nullptr && aaa_items->has_data())
	|| (bfd_items !=  nullptr && bfd_items->has_data())
	|| (bridge_items !=  nullptr && bridge_items->has_data())
	|| (callhome_items !=  nullptr && callhome_items->has_data())
	|| (cfs_items !=  nullptr && cfs_items->has_data())
	|| (config_items !=  nullptr && config_items->has_data())
	|| (entity_items !=  nullptr && entity_items->has_data())
	|| (featurecontrol_items !=  nullptr && featurecontrol_items->has_data())
	|| (hsrp_items !=  nullptr && hsrp_items->has_data())
	|| (generic_items !=  nullptr && generic_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (license_items !=  nullptr && license_items->has_data())
	|| (poe_items !=  nullptr && poe_items->has_data())
	|| (link_items !=  nullptr && link_items->has_data())
	|| (lldp_items !=  nullptr && lldp_items->has_data())
	|| (msdp_items !=  nullptr && msdp_items->has_data())
	|| (mmode_items !=  nullptr && mmode_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data())
	|| (rf_items !=  nullptr && rf_items->has_data())
	|| (rmon_items !=  nullptr && rmon_items->has_data())
	|| (snmp_items !=  nullptr && snmp_items->has_data())
	|| (stpx_items !=  nullptr && stpx_items->has_data())
	|| (sysmgr_items !=  nullptr && sysmgr_items->has_data())
	|| (system_items !=  nullptr && system_items->has_data())
	|| (upgrade_items !=  nullptr && upgrade_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (vtp_items !=  nullptr && vtp_items->has_data())
	|| (portsecurity_items !=  nullptr && portsecurity_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enablealltriggercount.yfilter)
	|| ydk::is_set(enableallviacli.yfilter)
	|| (stormcontrol_items !=  nullptr && stormcontrol_items->has_operation())
	|| (aaa_items !=  nullptr && aaa_items->has_operation())
	|| (bfd_items !=  nullptr && bfd_items->has_operation())
	|| (bridge_items !=  nullptr && bridge_items->has_operation())
	|| (callhome_items !=  nullptr && callhome_items->has_operation())
	|| (cfs_items !=  nullptr && cfs_items->has_operation())
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (entity_items !=  nullptr && entity_items->has_operation())
	|| (featurecontrol_items !=  nullptr && featurecontrol_items->has_operation())
	|| (hsrp_items !=  nullptr && hsrp_items->has_operation())
	|| (generic_items !=  nullptr && generic_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (license_items !=  nullptr && license_items->has_operation())
	|| (poe_items !=  nullptr && poe_items->has_operation())
	|| (link_items !=  nullptr && link_items->has_operation())
	|| (lldp_items !=  nullptr && lldp_items->has_operation())
	|| (msdp_items !=  nullptr && msdp_items->has_operation())
	|| (mmode_items !=  nullptr && mmode_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation())
	|| (rf_items !=  nullptr && rf_items->has_operation())
	|| (rmon_items !=  nullptr && rmon_items->has_operation())
	|| (snmp_items !=  nullptr && snmp_items->has_operation())
	|| (stpx_items !=  nullptr && stpx_items->has_operation())
	|| (sysmgr_items !=  nullptr && sysmgr_items->has_operation())
	|| (system_items !=  nullptr && system_items->has_operation())
	|| (upgrade_items !=  nullptr && upgrade_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (vtp_items !=  nullptr && vtp_items->has_operation())
	|| (portsecurity_items !=  nullptr && portsecurity_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enablealltriggercount.is_set || is_set(enablealltriggercount.yfilter)) leaf_name_data.push_back(enablealltriggercount.get_name_leafdata());
    if (enableallviacli.is_set || is_set(enableallviacli.yfilter)) leaf_name_data.push_back(enableallviacli.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stormcontrol-items")
    {
        if(stormcontrol_items == nullptr)
        {
            stormcontrol_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems>();
        }
        return stormcontrol_items;
    }

    if(child_yang_name == "aaa-items")
    {
        if(aaa_items == nullptr)
        {
            aaa_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems>();
        }
        return aaa_items;
    }

    if(child_yang_name == "bfd-items")
    {
        if(bfd_items == nullptr)
        {
            bfd_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems>();
        }
        return bfd_items;
    }

    if(child_yang_name == "bridge-items")
    {
        if(bridge_items == nullptr)
        {
            bridge_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems>();
        }
        return bridge_items;
    }

    if(child_yang_name == "callhome-items")
    {
        if(callhome_items == nullptr)
        {
            callhome_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems>();
        }
        return callhome_items;
    }

    if(child_yang_name == "cfs-items")
    {
        if(cfs_items == nullptr)
        {
            cfs_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems>();
        }
        return cfs_items;
    }

    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "entity-items")
    {
        if(entity_items == nullptr)
        {
            entity_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems>();
        }
        return entity_items;
    }

    if(child_yang_name == "featurecontrol-items")
    {
        if(featurecontrol_items == nullptr)
        {
            featurecontrol_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems>();
        }
        return featurecontrol_items;
    }

    if(child_yang_name == "hsrp-items")
    {
        if(hsrp_items == nullptr)
        {
            hsrp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems>();
        }
        return hsrp_items;
    }

    if(child_yang_name == "generic-items")
    {
        if(generic_items == nullptr)
        {
            generic_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems>();
        }
        return generic_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "license-items")
    {
        if(license_items == nullptr)
        {
            license_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems>();
        }
        return license_items;
    }

    if(child_yang_name == "poe-items")
    {
        if(poe_items == nullptr)
        {
            poe_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems>();
        }
        return poe_items;
    }

    if(child_yang_name == "link-items")
    {
        if(link_items == nullptr)
        {
            link_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems>();
        }
        return link_items;
    }

    if(child_yang_name == "lldp-items")
    {
        if(lldp_items == nullptr)
        {
            lldp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems>();
        }
        return lldp_items;
    }

    if(child_yang_name == "msdp-items")
    {
        if(msdp_items == nullptr)
        {
            msdp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems>();
        }
        return msdp_items;
    }

    if(child_yang_name == "mmode-items")
    {
        if(mmode_items == nullptr)
        {
            mmode_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems>();
        }
        return mmode_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems>();
        }
        return pim_items;
    }

    if(child_yang_name == "rf-items")
    {
        if(rf_items == nullptr)
        {
            rf_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems>();
        }
        return rf_items;
    }

    if(child_yang_name == "rmon-items")
    {
        if(rmon_items == nullptr)
        {
            rmon_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems>();
        }
        return rmon_items;
    }

    if(child_yang_name == "snmp-items")
    {
        if(snmp_items == nullptr)
        {
            snmp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_>();
        }
        return snmp_items;
    }

    if(child_yang_name == "stpx-items")
    {
        if(stpx_items == nullptr)
        {
            stpx_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems>();
        }
        return stpx_items;
    }

    if(child_yang_name == "sysmgr-items")
    {
        if(sysmgr_items == nullptr)
        {
            sysmgr_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems>();
        }
        return sysmgr_items;
    }

    if(child_yang_name == "system-items")
    {
        if(system_items == nullptr)
        {
            system_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems>();
        }
        return system_items;
    }

    if(child_yang_name == "upgrade-items")
    {
        if(upgrade_items == nullptr)
        {
            upgrade_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems>();
        }
        return upgrade_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "vtp-items")
    {
        if(vtp_items == nullptr)
        {
            vtp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems>();
        }
        return vtp_items;
    }

    if(child_yang_name == "portsecurity-items")
    {
        if(portsecurity_items == nullptr)
        {
            portsecurity_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems>();
        }
        return portsecurity_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stormcontrol_items != nullptr)
    {
        children["stormcontrol-items"] = stormcontrol_items;
    }

    if(aaa_items != nullptr)
    {
        children["aaa-items"] = aaa_items;
    }

    if(bfd_items != nullptr)
    {
        children["bfd-items"] = bfd_items;
    }

    if(bridge_items != nullptr)
    {
        children["bridge-items"] = bridge_items;
    }

    if(callhome_items != nullptr)
    {
        children["callhome-items"] = callhome_items;
    }

    if(cfs_items != nullptr)
    {
        children["cfs-items"] = cfs_items;
    }

    if(config_items != nullptr)
    {
        children["config-items"] = config_items;
    }

    if(entity_items != nullptr)
    {
        children["entity-items"] = entity_items;
    }

    if(featurecontrol_items != nullptr)
    {
        children["featurecontrol-items"] = featurecontrol_items;
    }

    if(hsrp_items != nullptr)
    {
        children["hsrp-items"] = hsrp_items;
    }

    if(generic_items != nullptr)
    {
        children["generic-items"] = generic_items;
    }

    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    if(license_items != nullptr)
    {
        children["license-items"] = license_items;
    }

    if(poe_items != nullptr)
    {
        children["poe-items"] = poe_items;
    }

    if(link_items != nullptr)
    {
        children["link-items"] = link_items;
    }

    if(lldp_items != nullptr)
    {
        children["lldp-items"] = lldp_items;
    }

    if(msdp_items != nullptr)
    {
        children["msdp-items"] = msdp_items;
    }

    if(mmode_items != nullptr)
    {
        children["mmode-items"] = mmode_items;
    }

    if(pim_items != nullptr)
    {
        children["pim-items"] = pim_items;
    }

    if(rf_items != nullptr)
    {
        children["rf-items"] = rf_items;
    }

    if(rmon_items != nullptr)
    {
        children["rmon-items"] = rmon_items;
    }

    if(snmp_items != nullptr)
    {
        children["snmp-items"] = snmp_items;
    }

    if(stpx_items != nullptr)
    {
        children["stpx-items"] = stpx_items;
    }

    if(sysmgr_items != nullptr)
    {
        children["sysmgr-items"] = sysmgr_items;
    }

    if(system_items != nullptr)
    {
        children["system-items"] = system_items;
    }

    if(upgrade_items != nullptr)
    {
        children["upgrade-items"] = upgrade_items;
    }

    if(vsan_items != nullptr)
    {
        children["vsan-items"] = vsan_items;
    }

    if(vtp_items != nullptr)
    {
        children["vtp-items"] = vtp_items;
    }

    if(portsecurity_items != nullptr)
    {
        children["portsecurity-items"] = portsecurity_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enableAllTriggerCount")
    {
        enablealltriggercount = value;
        enablealltriggercount.value_namespace = name_space;
        enablealltriggercount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableAllViaCLI")
    {
        enableallviacli = value;
        enableallviacli.value_namespace = name_space;
        enableallviacli.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enableAllTriggerCount")
    {
        enablealltriggercount.yfilter = yfilter;
    }
    if(value_path == "enableAllViaCLI")
    {
        enableallviacli.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stormcontrol-items" || name == "aaa-items" || name == "bfd-items" || name == "bridge-items" || name == "callhome-items" || name == "cfs-items" || name == "config-items" || name == "entity-items" || name == "featurecontrol-items" || name == "hsrp-items" || name == "generic-items" || name == "ip-items" || name == "license-items" || name == "poe-items" || name == "link-items" || name == "lldp-items" || name == "msdp-items" || name == "mmode-items" || name == "pim-items" || name == "rf-items" || name == "rmon-items" || name == "snmp-items" || name == "stpx-items" || name == "sysmgr-items" || name == "system-items" || name == "upgrade-items" || name == "vsan-items" || name == "vtp-items" || name == "portsecurity-items" || name == "enableAllTriggerCount" || name == "enableAllViaCLI")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::StormcontrolItems()
    :
    traprate{YType::uint16, "traprate"}
        ,
    cpsceventrev1_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items>())
{
    cpsceventrev1_items->parent = this;

    yang_name = "stormcontrol-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::~StormcontrolItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_data() const
{
    if (is_presence_container) return true;
    return traprate.is_set
	|| (cpsceventrev1_items !=  nullptr && cpsceventrev1_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traprate.yfilter)
	|| (cpsceventrev1_items !=  nullptr && cpsceventrev1_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormcontrol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traprate.is_set || is_set(traprate.yfilter)) leaf_name_data.push_back(traprate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpscEventRev1-items")
    {
        if(cpsceventrev1_items == nullptr)
        {
            cpsceventrev1_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items>();
        }
        return cpsceventrev1_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpsceventrev1_items != nullptr)
    {
        children["cpscEventRev1-items"] = cpsceventrev1_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traprate")
    {
        traprate = value;
        traprate.value_namespace = name_space;
        traprate.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traprate")
    {
        traprate.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpscEventRev1-items" || name == "traprate")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::CpscEventRev1Items()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cpscEventRev1-items"; yang_parent_name = "stormcontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::~CpscEventRev1Items()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stormcontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpscEventRev1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::AaaItems()
    :
    enableviacli{YType::boolean, "enableViaCLI"}
        ,
    serverstatechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems>())
{
    serverstatechange_items->parent = this;

    yang_name = "aaa-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::~AaaItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_data() const
{
    if (is_presence_container) return true;
    return enableviacli.is_set
	|| (serverstatechange_items !=  nullptr && serverstatechange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enableviacli.yfilter)
	|| (serverstatechange_items !=  nullptr && serverstatechange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::AaaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enableviacli.is_set || is_set(enableviacli.yfilter)) leaf_name_data.push_back(enableviacli.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::AaaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serverstatechange-items")
    {
        if(serverstatechange_items == nullptr)
        {
            serverstatechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems>();
        }
        return serverstatechange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::AaaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(serverstatechange_items != nullptr)
    {
        children["serverstatechange-items"] = serverstatechange_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enableViaCLI")
    {
        enableviacli = value;
        enableviacli.value_namespace = name_space;
        enableviacli.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enableViaCLI")
    {
        enableviacli.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serverstatechange-items" || name == "enableViaCLI")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::ServerstatechangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "serverstatechange-items"; yang_parent_name = "aaa-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::~ServerstatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/aaa-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serverstatechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::BfdItems()
    :
    sessiondown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems>())
    , sessionup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems>())
{
    sessiondown_items->parent = this;
    sessionup_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::~BfdItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return (sessiondown_items !=  nullptr && sessiondown_items->has_data())
	|| (sessionup_items !=  nullptr && sessionup_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| (sessiondown_items !=  nullptr && sessiondown_items->has_operation())
	|| (sessionup_items !=  nullptr && sessionup_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessiondown-items")
    {
        if(sessiondown_items == nullptr)
        {
            sessiondown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems>();
        }
        return sessiondown_items;
    }

    if(child_yang_name == "sessionup-items")
    {
        if(sessionup_items == nullptr)
        {
            sessionup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems>();
        }
        return sessionup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sessiondown_items != nullptr)
    {
        children["sessiondown-items"] = sessiondown_items;
    }

    if(sessionup_items != nullptr)
    {
        children["sessionup-items"] = sessionup_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessiondown-items" || name == "sessionup-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::SessiondownItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sessiondown-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::~SessiondownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessiondown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::SessionupItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sessionup-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::~SessionupItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessionup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::BridgeItems()
    :
    newroot_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems>())
    , topologychange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems>())
{
    newroot_items->parent = this;
    topologychange_items->parent = this;

    yang_name = "bridge-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::~BridgeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_data() const
{
    if (is_presence_container) return true;
    return (newroot_items !=  nullptr && newroot_items->has_data())
	|| (topologychange_items !=  nullptr && topologychange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_operation() const
{
    return is_set(yfilter)
	|| (newroot_items !=  nullptr && newroot_items->has_operation())
	|| (topologychange_items !=  nullptr && topologychange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "newroot-items")
    {
        if(newroot_items == nullptr)
        {
            newroot_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems>();
        }
        return newroot_items;
    }

    if(child_yang_name == "topologychange-items")
    {
        if(topologychange_items == nullptr)
        {
            topologychange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems>();
        }
        return topologychange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(newroot_items != nullptr)
    {
        children["newroot-items"] = newroot_items;
    }

    if(topologychange_items != nullptr)
    {
        children["topologychange-items"] = topologychange_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newroot-items" || name == "topologychange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::NewrootItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "newroot-items"; yang_parent_name = "bridge-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::~NewrootItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bridge-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "newroot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::TopologychangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "topologychange-items"; yang_parent_name = "bridge-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::~TopologychangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bridge-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologychange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::CallhomeItems()
    :
    eventnotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems>())
    , smtpsendfail_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems>())
{
    eventnotify_items->parent = this;
    smtpsendfail_items->parent = this;

    yang_name = "callhome-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::~CallhomeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_data() const
{
    if (is_presence_container) return true;
    return (eventnotify_items !=  nullptr && eventnotify_items->has_data())
	|| (smtpsendfail_items !=  nullptr && smtpsendfail_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_operation() const
{
    return is_set(yfilter)
	|| (eventnotify_items !=  nullptr && eventnotify_items->has_operation())
	|| (smtpsendfail_items !=  nullptr && smtpsendfail_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callhome-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventnotify-items")
    {
        if(eventnotify_items == nullptr)
        {
            eventnotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems>();
        }
        return eventnotify_items;
    }

    if(child_yang_name == "smtpsendfail-items")
    {
        if(smtpsendfail_items == nullptr)
        {
            smtpsendfail_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems>();
        }
        return smtpsendfail_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eventnotify_items != nullptr)
    {
        children["eventnotify-items"] = eventnotify_items;
    }

    if(smtpsendfail_items != nullptr)
    {
        children["smtpsendfail-items"] = smtpsendfail_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventnotify-items" || name == "smtpsendfail-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::EventnotifyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "eventnotify-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::~EventnotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventnotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::SmtpsendfailItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "smtpsendfail-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::~SmtpsendfailItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtpsendfail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::CfsItems()
    :
    statechangenotif_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems>())
    , mergefailure_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems>())
{
    statechangenotif_items->parent = this;
    mergefailure_items->parent = this;

    yang_name = "cfs-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::~CfsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_data() const
{
    if (is_presence_container) return true;
    return (statechangenotif_items !=  nullptr && statechangenotif_items->has_data())
	|| (mergefailure_items !=  nullptr && mergefailure_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_operation() const
{
    return is_set(yfilter)
	|| (statechangenotif_items !=  nullptr && statechangenotif_items->has_operation())
	|| (mergefailure_items !=  nullptr && mergefailure_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statechangenotif-items")
    {
        if(statechangenotif_items == nullptr)
        {
            statechangenotif_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems>();
        }
        return statechangenotif_items;
    }

    if(child_yang_name == "mergefailure-items")
    {
        if(mergefailure_items == nullptr)
        {
            mergefailure_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems>();
        }
        return mergefailure_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statechangenotif_items != nullptr)
    {
        children["statechangenotif-items"] = statechangenotif_items;
    }

    if(mergefailure_items != nullptr)
    {
        children["mergefailure-items"] = mergefailure_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statechangenotif-items" || name == "mergefailure-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::StatechangenotifItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "statechangenotif-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::~StatechangenotifItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statechangenotif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::MergefailureItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "mergefailure-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::~MergefailureItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mergefailure-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::ConfigItems()
    :
    ccmclirunningconfigchanged_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems>())
{
    ccmclirunningconfigchanged_items->parent = this;

    yang_name = "config-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::~ConfigItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return (ccmclirunningconfigchanged_items !=  nullptr && ccmclirunningconfigchanged_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| (ccmclirunningconfigchanged_items !=  nullptr && ccmclirunningconfigchanged_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmCLIRunningConfigChanged-items")
    {
        if(ccmclirunningconfigchanged_items == nullptr)
        {
            ccmclirunningconfigchanged_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems>();
        }
        return ccmclirunningconfigchanged_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ccmclirunningconfigchanged_items != nullptr)
    {
        children["ccmCLIRunningConfigChanged-items"] = ccmclirunningconfigchanged_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIRunningConfigChanged-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::CcmCLIRunningConfigChangedItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ccmCLIRunningConfigChanged-items"; yang_parent_name = "config-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::~CcmCLIRunningConfigChangedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/config-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIRunningConfigChanged-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityItems()
    :
    entitymibchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems>())
    , entitymodulestatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems>())
    , entitypowerstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems>())
    , entitymoduleinserted_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems>())
    , entitymoduleremoved_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems>())
    , entityunrecognisedmodule_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems>())
    , entityfanstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems>())
    , entitypoweroutchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems>())
    , entitysensor_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems>())
    , cefcmibenablestatusnotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems>())
{
    entitymibchange_items->parent = this;
    entitymodulestatuschange_items->parent = this;
    entitypowerstatuschange_items->parent = this;
    entitymoduleinserted_items->parent = this;
    entitymoduleremoved_items->parent = this;
    entityunrecognisedmodule_items->parent = this;
    entityfanstatuschange_items->parent = this;
    entitypoweroutchange_items->parent = this;
    entitysensor_items->parent = this;
    cefcmibenablestatusnotification_items->parent = this;

    yang_name = "entity-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::~EntityItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_data() const
{
    if (is_presence_container) return true;
    return (entitymibchange_items !=  nullptr && entitymibchange_items->has_data())
	|| (entitymodulestatuschange_items !=  nullptr && entitymodulestatuschange_items->has_data())
	|| (entitypowerstatuschange_items !=  nullptr && entitypowerstatuschange_items->has_data())
	|| (entitymoduleinserted_items !=  nullptr && entitymoduleinserted_items->has_data())
	|| (entitymoduleremoved_items !=  nullptr && entitymoduleremoved_items->has_data())
	|| (entityunrecognisedmodule_items !=  nullptr && entityunrecognisedmodule_items->has_data())
	|| (entityfanstatuschange_items !=  nullptr && entityfanstatuschange_items->has_data())
	|| (entitypoweroutchange_items !=  nullptr && entitypoweroutchange_items->has_data())
	|| (entitysensor_items !=  nullptr && entitysensor_items->has_data())
	|| (cefcmibenablestatusnotification_items !=  nullptr && cefcmibenablestatusnotification_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_operation() const
{
    return is_set(yfilter)
	|| (entitymibchange_items !=  nullptr && entitymibchange_items->has_operation())
	|| (entitymodulestatuschange_items !=  nullptr && entitymodulestatuschange_items->has_operation())
	|| (entitypowerstatuschange_items !=  nullptr && entitypowerstatuschange_items->has_operation())
	|| (entitymoduleinserted_items !=  nullptr && entitymoduleinserted_items->has_operation())
	|| (entitymoduleremoved_items !=  nullptr && entitymoduleremoved_items->has_operation())
	|| (entityunrecognisedmodule_items !=  nullptr && entityunrecognisedmodule_items->has_operation())
	|| (entityfanstatuschange_items !=  nullptr && entityfanstatuschange_items->has_operation())
	|| (entitypoweroutchange_items !=  nullptr && entitypoweroutchange_items->has_operation())
	|| (entitysensor_items !=  nullptr && entitysensor_items->has_operation())
	|| (cefcmibenablestatusnotification_items !=  nullptr && cefcmibenablestatusnotification_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entitymibchange-items")
    {
        if(entitymibchange_items == nullptr)
        {
            entitymibchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems>();
        }
        return entitymibchange_items;
    }

    if(child_yang_name == "entitymodulestatuschange-items")
    {
        if(entitymodulestatuschange_items == nullptr)
        {
            entitymodulestatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems>();
        }
        return entitymodulestatuschange_items;
    }

    if(child_yang_name == "entitypowerstatuschange-items")
    {
        if(entitypowerstatuschange_items == nullptr)
        {
            entitypowerstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems>();
        }
        return entitypowerstatuschange_items;
    }

    if(child_yang_name == "entitymoduleinserted-items")
    {
        if(entitymoduleinserted_items == nullptr)
        {
            entitymoduleinserted_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems>();
        }
        return entitymoduleinserted_items;
    }

    if(child_yang_name == "entitymoduleremoved-items")
    {
        if(entitymoduleremoved_items == nullptr)
        {
            entitymoduleremoved_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems>();
        }
        return entitymoduleremoved_items;
    }

    if(child_yang_name == "entityunrecognisedmodule-items")
    {
        if(entityunrecognisedmodule_items == nullptr)
        {
            entityunrecognisedmodule_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems>();
        }
        return entityunrecognisedmodule_items;
    }

    if(child_yang_name == "entityfanstatuschange-items")
    {
        if(entityfanstatuschange_items == nullptr)
        {
            entityfanstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems>();
        }
        return entityfanstatuschange_items;
    }

    if(child_yang_name == "entitypoweroutchange-items")
    {
        if(entitypoweroutchange_items == nullptr)
        {
            entitypoweroutchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems>();
        }
        return entitypoweroutchange_items;
    }

    if(child_yang_name == "entitysensor-items")
    {
        if(entitysensor_items == nullptr)
        {
            entitysensor_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems>();
        }
        return entitysensor_items;
    }

    if(child_yang_name == "cefcMIBEnableStatusNotification-items")
    {
        if(cefcmibenablestatusnotification_items == nullptr)
        {
            cefcmibenablestatusnotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems>();
        }
        return cefcmibenablestatusnotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(entitymibchange_items != nullptr)
    {
        children["entitymibchange-items"] = entitymibchange_items;
    }

    if(entitymodulestatuschange_items != nullptr)
    {
        children["entitymodulestatuschange-items"] = entitymodulestatuschange_items;
    }

    if(entitypowerstatuschange_items != nullptr)
    {
        children["entitypowerstatuschange-items"] = entitypowerstatuschange_items;
    }

    if(entitymoduleinserted_items != nullptr)
    {
        children["entitymoduleinserted-items"] = entitymoduleinserted_items;
    }

    if(entitymoduleremoved_items != nullptr)
    {
        children["entitymoduleremoved-items"] = entitymoduleremoved_items;
    }

    if(entityunrecognisedmodule_items != nullptr)
    {
        children["entityunrecognisedmodule-items"] = entityunrecognisedmodule_items;
    }

    if(entityfanstatuschange_items != nullptr)
    {
        children["entityfanstatuschange-items"] = entityfanstatuschange_items;
    }

    if(entitypoweroutchange_items != nullptr)
    {
        children["entitypoweroutchange-items"] = entitypoweroutchange_items;
    }

    if(entitysensor_items != nullptr)
    {
        children["entitysensor-items"] = entitysensor_items;
    }

    if(cefcmibenablestatusnotification_items != nullptr)
    {
        children["cefcMIBEnableStatusNotification-items"] = cefcmibenablestatusnotification_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entitymibchange-items" || name == "entitymodulestatuschange-items" || name == "entitypowerstatuschange-items" || name == "entitymoduleinserted-items" || name == "entitymoduleremoved-items" || name == "entityunrecognisedmodule-items" || name == "entityfanstatuschange-items" || name == "entitypoweroutchange-items" || name == "entitysensor-items" || name == "cefcMIBEnableStatusNotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::EntitymibchangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymibchange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::~EntitymibchangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymibchange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::EntitymodulestatuschangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymodulestatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::~EntitymodulestatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymodulestatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::EntitypowerstatuschangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitypowerstatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::~EntitypowerstatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitypowerstatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::EntitymoduleinsertedItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymoduleinserted-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::~EntitymoduleinsertedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymoduleinserted-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::EntitymoduleremovedItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymoduleremoved-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::~EntitymoduleremovedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymoduleremoved-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::EntityunrecognisedmoduleItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entityunrecognisedmodule-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::~EntityunrecognisedmoduleItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityunrecognisedmodule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::EntityfanstatuschangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entityfanstatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::~EntityfanstatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityfanstatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::EntitypoweroutchangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitypoweroutchange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::~EntitypoweroutchangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitypoweroutchange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::EntitysensorItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitysensor-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::~EntitysensorItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitysensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::CefcMIBEnableStatusNotificationItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cefcMIBEnableStatusNotification-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::~CefcMIBEnableStatusNotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcMIBEnableStatusNotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeaturecontrolItems()
    :
    featureopstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems>())
    , ciscofeatopstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems>())
{
    featureopstatuschange_items->parent = this;
    ciscofeatopstatuschange_items->parent = this;

    yang_name = "featurecontrol-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::~FeaturecontrolItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_data() const
{
    if (is_presence_container) return true;
    return (featureopstatuschange_items !=  nullptr && featureopstatuschange_items->has_data())
	|| (ciscofeatopstatuschange_items !=  nullptr && ciscofeatopstatuschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_operation() const
{
    return is_set(yfilter)
	|| (featureopstatuschange_items !=  nullptr && featureopstatuschange_items->has_operation())
	|| (ciscofeatopstatuschange_items !=  nullptr && ciscofeatopstatuschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "featurecontrol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FeatureOpStatusChange-items")
    {
        if(featureopstatuschange_items == nullptr)
        {
            featureopstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems>();
        }
        return featureopstatuschange_items;
    }

    if(child_yang_name == "ciscoFeatOpStatusChange-items")
    {
        if(ciscofeatopstatuschange_items == nullptr)
        {
            ciscofeatopstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems>();
        }
        return ciscofeatopstatuschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(featureopstatuschange_items != nullptr)
    {
        children["FeatureOpStatusChange-items"] = featureopstatuschange_items;
    }

    if(ciscofeatopstatuschange_items != nullptr)
    {
        children["ciscoFeatOpStatusChange-items"] = ciscofeatopstatuschange_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FeatureOpStatusChange-items" || name == "ciscoFeatOpStatusChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::FeatureOpStatusChangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "FeatureOpStatusChange-items"; yang_parent_name = "featurecontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::~FeatureOpStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/featurecontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FeatureOpStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::CiscoFeatOpStatusChangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ciscoFeatOpStatusChange-items"; yang_parent_name = "featurecontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::~CiscoFeatOpStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/featurecontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFeatOpStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::HsrpItems()
    :
    statechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems>())
{
    statechange_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::~HsrpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return (statechange_items !=  nullptr && statechange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| (statechange_items !=  nullptr && statechange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statechange-items")
    {
        if(statechange_items == nullptr)
        {
            statechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems>();
        }
        return statechange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statechange_items != nullptr)
    {
        children["statechange-items"] = statechange_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statechange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::StatechangeItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "statechange-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::~StatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::GenericItems()
    :
    coldstart_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems>())
    , warmstart_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems>())
{
    coldstart_items->parent = this;
    warmstart_items->parent = this;

    yang_name = "generic-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::~GenericItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_data() const
{
    if (is_presence_container) return true;
    return (coldstart_items !=  nullptr && coldstart_items->has_data())
	|| (warmstart_items !=  nullptr && warmstart_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_operation() const
{
    return is_set(yfilter)
	|| (coldstart_items !=  nullptr && coldstart_items->has_operation())
	|| (warmstart_items !=  nullptr && warmstart_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "coldStart-items")
    {
        if(coldstart_items == nullptr)
        {
            coldstart_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems>();
        }
        return coldstart_items;
    }

    if(child_yang_name == "warmStart-items")
    {
        if(warmstart_items == nullptr)
        {
            warmstart_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems>();
        }
        return warmstart_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(coldstart_items != nullptr)
    {
        children["coldStart-items"] = coldstart_items;
    }

    if(warmstart_items != nullptr)
    {
        children["warmStart-items"] = warmstart_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coldStart-items" || name == "warmStart-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::ColdStartItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "coldStart-items"; yang_parent_name = "generic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::~ColdStartItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/generic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coldStart-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::WarmStartItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "warmStart-items"; yang_parent_name = "generic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::~WarmStartItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/generic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warmStart-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::IpItems::IpItems()
    :
    sla_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems>())
{
    sla_items->parent = this;

    yang_name = "ip-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::IpItems::~IpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_data() const
{
    if (is_presence_container) return true;
    return (sla_items !=  nullptr && sla_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_operation() const
{
    return is_set(yfilter)
	|| (sla_items !=  nullptr && sla_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-items")
    {
        if(sla_items == nullptr)
        {
            sla_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems>();
        }
        return sla_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sla_items != nullptr)
    {
        children["sla-items"] = sla_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::SlaItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sla-items"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::~SlaItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/ip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}


}
}

